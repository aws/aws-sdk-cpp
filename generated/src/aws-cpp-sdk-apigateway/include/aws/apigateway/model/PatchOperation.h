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
    AWS_APIGATEWAY_API PatchOperation();
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
    inline const Op& GetOp() const{ return m_op; }
    inline bool OpHasBeenSet() const { return m_opHasBeenSet; }
    inline void SetOp(const Op& value) { m_opHasBeenSet = true; m_op = value; }
    inline void SetOp(Op&& value) { m_opHasBeenSet = true; m_op = std::move(value); }
    inline PatchOperation& WithOp(const Op& value) { SetOp(value); return *this;}
    inline PatchOperation& WithOp(Op&& value) { SetOp(std::move(value)); return *this;}
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
    inline const Aws::String& GetPath() const{ return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }
    inline PatchOperation& WithPath(const Aws::String& value) { SetPath(value); return *this;}
    inline PatchOperation& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}
    inline PatchOperation& WithPath(const char* value) { SetPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new target value of the update operation. It is applicable for the add or
     * replace operation. When using AWS CLI to update a property of a JSON value,
     * enclose the JSON object with a pair of single quotes in a Linux shell, e.g.,
     * '{"a": ...}'.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline PatchOperation& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline PatchOperation& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline PatchOperation& WithValue(const char* value) { SetValue(value); return *this;}
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
    inline const Aws::String& GetFrom() const{ return m_from; }
    inline bool FromHasBeenSet() const { return m_fromHasBeenSet; }
    inline void SetFrom(const Aws::String& value) { m_fromHasBeenSet = true; m_from = value; }
    inline void SetFrom(Aws::String&& value) { m_fromHasBeenSet = true; m_from = std::move(value); }
    inline void SetFrom(const char* value) { m_fromHasBeenSet = true; m_from.assign(value); }
    inline PatchOperation& WithFrom(const Aws::String& value) { SetFrom(value); return *this;}
    inline PatchOperation& WithFrom(Aws::String&& value) { SetFrom(std::move(value)); return *this;}
    inline PatchOperation& WithFrom(const char* value) { SetFrom(value); return *this;}
    ///@}
  private:

    Op m_op;
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
