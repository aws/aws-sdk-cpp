/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * A single patch operation to apply to the specified resource. Please refer to
   * http://tools.ietf.org/html/rfc6902#section-4 for an explanation of how each
   * operation is used.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/PatchOperation">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API PatchOperation
  {
  public:
    PatchOperation();
    PatchOperation(Aws::Utils::Json::JsonView jsonValue);
    PatchOperation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> An update operation to be performed with this PATCH request. The valid value
     * can be <code>add</code>, <code>remove</code>, <code>replace</code> or
     * <code>copy</code>. Not all valid operations are supported for a given resource.
     * Support of the operations depends on specific operational contexts. Attempts to
     * apply an unsupported operation on a resource will return an error message.</p>
     */
    inline const Op& GetOp() const{ return m_op; }

    /**
     * <p> An update operation to be performed with this PATCH request. The valid value
     * can be <code>add</code>, <code>remove</code>, <code>replace</code> or
     * <code>copy</code>. Not all valid operations are supported for a given resource.
     * Support of the operations depends on specific operational contexts. Attempts to
     * apply an unsupported operation on a resource will return an error message.</p>
     */
    inline bool OpHasBeenSet() const { return m_opHasBeenSet; }

    /**
     * <p> An update operation to be performed with this PATCH request. The valid value
     * can be <code>add</code>, <code>remove</code>, <code>replace</code> or
     * <code>copy</code>. Not all valid operations are supported for a given resource.
     * Support of the operations depends on specific operational contexts. Attempts to
     * apply an unsupported operation on a resource will return an error message.</p>
     */
    inline void SetOp(const Op& value) { m_opHasBeenSet = true; m_op = value; }

    /**
     * <p> An update operation to be performed with this PATCH request. The valid value
     * can be <code>add</code>, <code>remove</code>, <code>replace</code> or
     * <code>copy</code>. Not all valid operations are supported for a given resource.
     * Support of the operations depends on specific operational contexts. Attempts to
     * apply an unsupported operation on a resource will return an error message.</p>
     */
    inline void SetOp(Op&& value) { m_opHasBeenSet = true; m_op = std::move(value); }

    /**
     * <p> An update operation to be performed with this PATCH request. The valid value
     * can be <code>add</code>, <code>remove</code>, <code>replace</code> or
     * <code>copy</code>. Not all valid operations are supported for a given resource.
     * Support of the operations depends on specific operational contexts. Attempts to
     * apply an unsupported operation on a resource will return an error message.</p>
     */
    inline PatchOperation& WithOp(const Op& value) { SetOp(value); return *this;}

    /**
     * <p> An update operation to be performed with this PATCH request. The valid value
     * can be <code>add</code>, <code>remove</code>, <code>replace</code> or
     * <code>copy</code>. Not all valid operations are supported for a given resource.
     * Support of the operations depends on specific operational contexts. Attempts to
     * apply an unsupported operation on a resource will return an error message.</p>
     */
    inline PatchOperation& WithOp(Op&& value) { SetOp(std::move(value)); return *this;}


    /**
     * <p>The <code>op</code> operation's target, as identified by a <a
     * href="https://tools.ietf.org/html/draft-ietf-appsawg-json-pointer-08">JSON
     * Pointer</a> value that references a location within the targeted resource. For
     * example, if the target resource has an updateable property of
     * <code>{"name":"value"}</code>, the path for this property is <code>/name</code>.
     * If the <code>name</code> property value is a JSON object (e.g., <code>{"name":
     * {"child/name": "child-value"}}</code>), the path for the <code>child/name</code>
     * property will be <code>/name/child~1name</code>. Any slash ("/") character
     * appearing in path names must be escaped with "~1", as shown in the example
     * above. Each <code>op</code> operation can have only one <code>path</code>
     * associated with it.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>The <code>op</code> operation's target, as identified by a <a
     * href="https://tools.ietf.org/html/draft-ietf-appsawg-json-pointer-08">JSON
     * Pointer</a> value that references a location within the targeted resource. For
     * example, if the target resource has an updateable property of
     * <code>{"name":"value"}</code>, the path for this property is <code>/name</code>.
     * If the <code>name</code> property value is a JSON object (e.g., <code>{"name":
     * {"child/name": "child-value"}}</code>), the path for the <code>child/name</code>
     * property will be <code>/name/child~1name</code>. Any slash ("/") character
     * appearing in path names must be escaped with "~1", as shown in the example
     * above. Each <code>op</code> operation can have only one <code>path</code>
     * associated with it.</p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>The <code>op</code> operation's target, as identified by a <a
     * href="https://tools.ietf.org/html/draft-ietf-appsawg-json-pointer-08">JSON
     * Pointer</a> value that references a location within the targeted resource. For
     * example, if the target resource has an updateable property of
     * <code>{"name":"value"}</code>, the path for this property is <code>/name</code>.
     * If the <code>name</code> property value is a JSON object (e.g., <code>{"name":
     * {"child/name": "child-value"}}</code>), the path for the <code>child/name</code>
     * property will be <code>/name/child~1name</code>. Any slash ("/") character
     * appearing in path names must be escaped with "~1", as shown in the example
     * above. Each <code>op</code> operation can have only one <code>path</code>
     * associated with it.</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The <code>op</code> operation's target, as identified by a <a
     * href="https://tools.ietf.org/html/draft-ietf-appsawg-json-pointer-08">JSON
     * Pointer</a> value that references a location within the targeted resource. For
     * example, if the target resource has an updateable property of
     * <code>{"name":"value"}</code>, the path for this property is <code>/name</code>.
     * If the <code>name</code> property value is a JSON object (e.g., <code>{"name":
     * {"child/name": "child-value"}}</code>), the path for the <code>child/name</code>
     * property will be <code>/name/child~1name</code>. Any slash ("/") character
     * appearing in path names must be escaped with "~1", as shown in the example
     * above. Each <code>op</code> operation can have only one <code>path</code>
     * associated with it.</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>The <code>op</code> operation's target, as identified by a <a
     * href="https://tools.ietf.org/html/draft-ietf-appsawg-json-pointer-08">JSON
     * Pointer</a> value that references a location within the targeted resource. For
     * example, if the target resource has an updateable property of
     * <code>{"name":"value"}</code>, the path for this property is <code>/name</code>.
     * If the <code>name</code> property value is a JSON object (e.g., <code>{"name":
     * {"child/name": "child-value"}}</code>), the path for the <code>child/name</code>
     * property will be <code>/name/child~1name</code>. Any slash ("/") character
     * appearing in path names must be escaped with "~1", as shown in the example
     * above. Each <code>op</code> operation can have only one <code>path</code>
     * associated with it.</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>The <code>op</code> operation's target, as identified by a <a
     * href="https://tools.ietf.org/html/draft-ietf-appsawg-json-pointer-08">JSON
     * Pointer</a> value that references a location within the targeted resource. For
     * example, if the target resource has an updateable property of
     * <code>{"name":"value"}</code>, the path for this property is <code>/name</code>.
     * If the <code>name</code> property value is a JSON object (e.g., <code>{"name":
     * {"child/name": "child-value"}}</code>), the path for the <code>child/name</code>
     * property will be <code>/name/child~1name</code>. Any slash ("/") character
     * appearing in path names must be escaped with "~1", as shown in the example
     * above. Each <code>op</code> operation can have only one <code>path</code>
     * associated with it.</p>
     */
    inline PatchOperation& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>The <code>op</code> operation's target, as identified by a <a
     * href="https://tools.ietf.org/html/draft-ietf-appsawg-json-pointer-08">JSON
     * Pointer</a> value that references a location within the targeted resource. For
     * example, if the target resource has an updateable property of
     * <code>{"name":"value"}</code>, the path for this property is <code>/name</code>.
     * If the <code>name</code> property value is a JSON object (e.g., <code>{"name":
     * {"child/name": "child-value"}}</code>), the path for the <code>child/name</code>
     * property will be <code>/name/child~1name</code>. Any slash ("/") character
     * appearing in path names must be escaped with "~1", as shown in the example
     * above. Each <code>op</code> operation can have only one <code>path</code>
     * associated with it.</p>
     */
    inline PatchOperation& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>The <code>op</code> operation's target, as identified by a <a
     * href="https://tools.ietf.org/html/draft-ietf-appsawg-json-pointer-08">JSON
     * Pointer</a> value that references a location within the targeted resource. For
     * example, if the target resource has an updateable property of
     * <code>{"name":"value"}</code>, the path for this property is <code>/name</code>.
     * If the <code>name</code> property value is a JSON object (e.g., <code>{"name":
     * {"child/name": "child-value"}}</code>), the path for the <code>child/name</code>
     * property will be <code>/name/child~1name</code>. Any slash ("/") character
     * appearing in path names must be escaped with "~1", as shown in the example
     * above. Each <code>op</code> operation can have only one <code>path</code>
     * associated with it.</p>
     */
    inline PatchOperation& WithPath(const char* value) { SetPath(value); return *this;}


    /**
     * <p>The new target value of the update operation. It is applicable for the
     * <code>add</code> or <code>replace</code> operation. When using AWS CLI to update
     * a property of a JSON value, enclose the JSON object with a pair of single quotes
     * in a Linux shell, e.g., '{"a": ...}'. In a Windows shell, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#cli-using-param-json">Using
     * JSON for Parameters</a>.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The new target value of the update operation. It is applicable for the
     * <code>add</code> or <code>replace</code> operation. When using AWS CLI to update
     * a property of a JSON value, enclose the JSON object with a pair of single quotes
     * in a Linux shell, e.g., '{"a": ...}'. In a Windows shell, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#cli-using-param-json">Using
     * JSON for Parameters</a>.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The new target value of the update operation. It is applicable for the
     * <code>add</code> or <code>replace</code> operation. When using AWS CLI to update
     * a property of a JSON value, enclose the JSON object with a pair of single quotes
     * in a Linux shell, e.g., '{"a": ...}'. In a Windows shell, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#cli-using-param-json">Using
     * JSON for Parameters</a>.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The new target value of the update operation. It is applicable for the
     * <code>add</code> or <code>replace</code> operation. When using AWS CLI to update
     * a property of a JSON value, enclose the JSON object with a pair of single quotes
     * in a Linux shell, e.g., '{"a": ...}'. In a Windows shell, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#cli-using-param-json">Using
     * JSON for Parameters</a>.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The new target value of the update operation. It is applicable for the
     * <code>add</code> or <code>replace</code> operation. When using AWS CLI to update
     * a property of a JSON value, enclose the JSON object with a pair of single quotes
     * in a Linux shell, e.g., '{"a": ...}'. In a Windows shell, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#cli-using-param-json">Using
     * JSON for Parameters</a>.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The new target value of the update operation. It is applicable for the
     * <code>add</code> or <code>replace</code> operation. When using AWS CLI to update
     * a property of a JSON value, enclose the JSON object with a pair of single quotes
     * in a Linux shell, e.g., '{"a": ...}'. In a Windows shell, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#cli-using-param-json">Using
     * JSON for Parameters</a>.</p>
     */
    inline PatchOperation& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The new target value of the update operation. It is applicable for the
     * <code>add</code> or <code>replace</code> operation. When using AWS CLI to update
     * a property of a JSON value, enclose the JSON object with a pair of single quotes
     * in a Linux shell, e.g., '{"a": ...}'. In a Windows shell, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#cli-using-param-json">Using
     * JSON for Parameters</a>.</p>
     */
    inline PatchOperation& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The new target value of the update operation. It is applicable for the
     * <code>add</code> or <code>replace</code> operation. When using AWS CLI to update
     * a property of a JSON value, enclose the JSON object with a pair of single quotes
     * in a Linux shell, e.g., '{"a": ...}'. In a Windows shell, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#cli-using-param-json">Using
     * JSON for Parameters</a>.</p>
     */
    inline PatchOperation& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>The <code>copy</code> update operation's source as identified by a
     * <code>JSON-Pointer</code> value referencing the location within the targeted
     * resource to copy the value from. For example, to promote a canary deployment,
     * you copy the canary deployment ID to the affiliated deployment ID by calling a
     * PATCH request on a <a>Stage</a> resource with <code>"op":"copy"</code>,
     * <code>"from":"/canarySettings/deploymentId"</code> and
     * <code>"path":"/deploymentId"</code>.</p>
     */
    inline const Aws::String& GetFrom() const{ return m_from; }

    /**
     * <p>The <code>copy</code> update operation's source as identified by a
     * <code>JSON-Pointer</code> value referencing the location within the targeted
     * resource to copy the value from. For example, to promote a canary deployment,
     * you copy the canary deployment ID to the affiliated deployment ID by calling a
     * PATCH request on a <a>Stage</a> resource with <code>"op":"copy"</code>,
     * <code>"from":"/canarySettings/deploymentId"</code> and
     * <code>"path":"/deploymentId"</code>.</p>
     */
    inline bool FromHasBeenSet() const { return m_fromHasBeenSet; }

    /**
     * <p>The <code>copy</code> update operation's source as identified by a
     * <code>JSON-Pointer</code> value referencing the location within the targeted
     * resource to copy the value from. For example, to promote a canary deployment,
     * you copy the canary deployment ID to the affiliated deployment ID by calling a
     * PATCH request on a <a>Stage</a> resource with <code>"op":"copy"</code>,
     * <code>"from":"/canarySettings/deploymentId"</code> and
     * <code>"path":"/deploymentId"</code>.</p>
     */
    inline void SetFrom(const Aws::String& value) { m_fromHasBeenSet = true; m_from = value; }

    /**
     * <p>The <code>copy</code> update operation's source as identified by a
     * <code>JSON-Pointer</code> value referencing the location within the targeted
     * resource to copy the value from. For example, to promote a canary deployment,
     * you copy the canary deployment ID to the affiliated deployment ID by calling a
     * PATCH request on a <a>Stage</a> resource with <code>"op":"copy"</code>,
     * <code>"from":"/canarySettings/deploymentId"</code> and
     * <code>"path":"/deploymentId"</code>.</p>
     */
    inline void SetFrom(Aws::String&& value) { m_fromHasBeenSet = true; m_from = std::move(value); }

    /**
     * <p>The <code>copy</code> update operation's source as identified by a
     * <code>JSON-Pointer</code> value referencing the location within the targeted
     * resource to copy the value from. For example, to promote a canary deployment,
     * you copy the canary deployment ID to the affiliated deployment ID by calling a
     * PATCH request on a <a>Stage</a> resource with <code>"op":"copy"</code>,
     * <code>"from":"/canarySettings/deploymentId"</code> and
     * <code>"path":"/deploymentId"</code>.</p>
     */
    inline void SetFrom(const char* value) { m_fromHasBeenSet = true; m_from.assign(value); }

    /**
     * <p>The <code>copy</code> update operation's source as identified by a
     * <code>JSON-Pointer</code> value referencing the location within the targeted
     * resource to copy the value from. For example, to promote a canary deployment,
     * you copy the canary deployment ID to the affiliated deployment ID by calling a
     * PATCH request on a <a>Stage</a> resource with <code>"op":"copy"</code>,
     * <code>"from":"/canarySettings/deploymentId"</code> and
     * <code>"path":"/deploymentId"</code>.</p>
     */
    inline PatchOperation& WithFrom(const Aws::String& value) { SetFrom(value); return *this;}

    /**
     * <p>The <code>copy</code> update operation's source as identified by a
     * <code>JSON-Pointer</code> value referencing the location within the targeted
     * resource to copy the value from. For example, to promote a canary deployment,
     * you copy the canary deployment ID to the affiliated deployment ID by calling a
     * PATCH request on a <a>Stage</a> resource with <code>"op":"copy"</code>,
     * <code>"from":"/canarySettings/deploymentId"</code> and
     * <code>"path":"/deploymentId"</code>.</p>
     */
    inline PatchOperation& WithFrom(Aws::String&& value) { SetFrom(std::move(value)); return *this;}

    /**
     * <p>The <code>copy</code> update operation's source as identified by a
     * <code>JSON-Pointer</code> value referencing the location within the targeted
     * resource to copy the value from. For example, to promote a canary deployment,
     * you copy the canary deployment ID to the affiliated deployment ID by calling a
     * PATCH request on a <a>Stage</a> resource with <code>"op":"copy"</code>,
     * <code>"from":"/canarySettings/deploymentId"</code> and
     * <code>"path":"/deploymentId"</code>.</p>
     */
    inline PatchOperation& WithFrom(const char* value) { SetFrom(value); return *this;}

  private:

    Op m_op;
    bool m_opHasBeenSet;

    Aws::String m_path;
    bool m_pathHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;

    Aws::String m_from;
    bool m_fromHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
