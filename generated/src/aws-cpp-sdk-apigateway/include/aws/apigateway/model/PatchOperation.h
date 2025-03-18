/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/model/Op.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace APIGateway
{
namespace Model
{

  /**
   * <p>For more information about supported patch operations, see <a
   * href="https://docs.aws.amazon.com/apigateway/latest/api/patch-operations.html">Patch
   * Operations</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/PatchOperation">AWS
   * API Reference</a></p>
   */
  class PatchOperation
  {
  public:
    AWS_APIGATEWAY_API PatchOperation() = default;
    AWS_APIGATEWAY_API PatchOperation(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API PatchOperation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An update operation to be performed with this PATCH request. The valid value
     * can be add, remove, replace or copy. Not all valid operations are supported for
     * a given resource. Support of the operations depends on specific operational
     * contexts. Attempts to apply an unsupported operation on a resource will return
     * an error message..</p>
     */
    inline Op GetOp() const { return m_op; }
    inline bool OpHasBeenSet() const { return m_opHasBeenSet; }
    inline void SetOp(Op value) { m_opHasBeenSet = true; m_op = value; }
    inline PatchOperation& WithOp(Op value) { SetOp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The op operation's target, as identified by a JSON Pointer value that
     * references a location within the targeted resource. For example, if the target
     * resource has an updateable property of {"name":"value"}, the path for this
     * property is /name. If the name property value is a JSON object (e.g., {"name":
     * {"child/name": "child-value"}}), the path for the child/name property will be
     * /name/child~1name. Any slash ("/") character appearing in path names must be
     * escaped with "~1", as shown in the example above. Each op operation can have
     * only one path associated with it.</p>
     */
    inline const Aws::String& GetPath() const { return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    template<typename PathT = Aws::String>
    void SetPath(PathT&& value) { m_pathHasBeenSet = true; m_path = std::forward<PathT>(value); }
    template<typename PathT = Aws::String>
    PatchOperation& WithPath(PathT&& value) { SetPath(std::forward<PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new target value of the update operation. It is applicable for the add or
     * replace operation. When using AWS CLI to update a property of a JSON value,
     * enclose the JSON object with a pair of single quotes in a Linux shell, e.g.,
     * '{"a": ...}'.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    PatchOperation& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The copy update operation's source as identified by a JSON-Pointer value
     * referencing the location within the targeted resource to copy the value from.
     * For example, to promote a canary deployment, you copy the canary deployment ID
     * to the affiliated deployment ID by calling a PATCH request on a Stage resource
     * with "op":"copy", "from":"/canarySettings/deploymentId" and
     * "path":"/deploymentId".</p>
     */
    inline const Aws::String& GetFrom() const { return m_from; }
    inline bool FromHasBeenSet() const { return m_fromHasBeenSet; }
    template<typename FromT = Aws::String>
    void SetFrom(FromT&& value) { m_fromHasBeenSet = true; m_from = std::forward<FromT>(value); }
    template<typename FromT = Aws::String>
    PatchOperation& WithFrom(FromT&& value) { SetFrom(std::forward<FromT>(value)); return *this;}
    ///@}
  private:

    Op m_op{Op::NOT_SET};
    bool m_opHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    Aws::String m_from;
    bool m_fromHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
