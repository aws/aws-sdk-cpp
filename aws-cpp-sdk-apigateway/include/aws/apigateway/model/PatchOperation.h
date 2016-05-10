/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace APIGateway
{
namespace Model
{

  /**
   * A single patch operation to apply to the specified resource. Please refer to
   * http://tools.ietf.org/html/rfc6902#section-4 for an explanation of how each
   * operation is used.
   */
  class AWS_APIGATEWAY_API PatchOperation
  {
  public:
    PatchOperation();
    PatchOperation(const Aws::Utils::Json::JsonValue& jsonValue);
    PatchOperation& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>A patch operation whose value indicates the operation to perform. Its value
     * MUST be one of "add", "remove", "replace", "move", "copy", or "test"; other
     * values are errors. </p>
     */
    inline const Op& GetOp() const{ return m_op; }

    /**
     * <p>A patch operation whose value indicates the operation to perform. Its value
     * MUST be one of "add", "remove", "replace", "move", "copy", or "test"; other
     * values are errors. </p>
     */
    inline void SetOp(const Op& value) { m_opHasBeenSet = true; m_op = value; }

    /**
     * <p>A patch operation whose value indicates the operation to perform. Its value
     * MUST be one of "add", "remove", "replace", "move", "copy", or "test"; other
     * values are errors. </p>
     */
    inline void SetOp(Op&& value) { m_opHasBeenSet = true; m_op = value; }

    /**
     * <p>A patch operation whose value indicates the operation to perform. Its value
     * MUST be one of "add", "remove", "replace", "move", "copy", or "test"; other
     * values are errors. </p>
     */
    inline PatchOperation& WithOp(const Op& value) { SetOp(value); return *this;}

    /**
     * <p>A patch operation whose value indicates the operation to perform. Its value
     * MUST be one of "add", "remove", "replace", "move", "copy", or "test"; other
     * values are errors. </p>
     */
    inline PatchOperation& WithOp(Op&& value) { SetOp(value); return *this;}

    /**
     * <p>Operation objects MUST have exactly one "path" member. That member's value is
     * a string containing a `JSON-Pointer` value that references a location within the
     * target document (the "target location") where the operation is performed.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>Operation objects MUST have exactly one "path" member. That member's value is
     * a string containing a `JSON-Pointer` value that references a location within the
     * target document (the "target location") where the operation is performed.</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>Operation objects MUST have exactly one "path" member. That member's value is
     * a string containing a `JSON-Pointer` value that references a location within the
     * target document (the "target location") where the operation is performed.</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>Operation objects MUST have exactly one "path" member. That member's value is
     * a string containing a `JSON-Pointer` value that references a location within the
     * target document (the "target location") where the operation is performed.</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>Operation objects MUST have exactly one "path" member. That member's value is
     * a string containing a `JSON-Pointer` value that references a location within the
     * target document (the "target location") where the operation is performed.</p>
     */
    inline PatchOperation& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>Operation objects MUST have exactly one "path" member. That member's value is
     * a string containing a `JSON-Pointer` value that references a location within the
     * target document (the "target location") where the operation is performed.</p>
     */
    inline PatchOperation& WithPath(Aws::String&& value) { SetPath(value); return *this;}

    /**
     * <p>Operation objects MUST have exactly one "path" member. That member's value is
     * a string containing a `JSON-Pointer` value that references a location within the
     * target document (the "target location") where the operation is performed.</p>
     */
    inline PatchOperation& WithPath(const char* value) { SetPath(value); return *this;}

    /**
     * <p>The actual value content. </p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The actual value content. </p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The actual value content. </p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The actual value content. </p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The actual value content. </p>
     */
    inline PatchOperation& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The actual value content. </p>
     */
    inline PatchOperation& WithValue(Aws::String&& value) { SetValue(value); return *this;}

    /**
     * <p>The actual value content. </p>
     */
    inline PatchOperation& WithValue(const char* value) { SetValue(value); return *this;}

    /**
     * <p>The "move" and "copy" operation object MUST contain a "from" member, which is
     * a string containing a <code>JSON Pointer</code> value that references the
     * location in the target document to move the value from.</p>
     */
    inline const Aws::String& GetFrom() const{ return m_from; }

    /**
     * <p>The "move" and "copy" operation object MUST contain a "from" member, which is
     * a string containing a <code>JSON Pointer</code> value that references the
     * location in the target document to move the value from.</p>
     */
    inline void SetFrom(const Aws::String& value) { m_fromHasBeenSet = true; m_from = value; }

    /**
     * <p>The "move" and "copy" operation object MUST contain a "from" member, which is
     * a string containing a <code>JSON Pointer</code> value that references the
     * location in the target document to move the value from.</p>
     */
    inline void SetFrom(Aws::String&& value) { m_fromHasBeenSet = true; m_from = value; }

    /**
     * <p>The "move" and "copy" operation object MUST contain a "from" member, which is
     * a string containing a <code>JSON Pointer</code> value that references the
     * location in the target document to move the value from.</p>
     */
    inline void SetFrom(const char* value) { m_fromHasBeenSet = true; m_from.assign(value); }

    /**
     * <p>The "move" and "copy" operation object MUST contain a "from" member, which is
     * a string containing a <code>JSON Pointer</code> value that references the
     * location in the target document to move the value from.</p>
     */
    inline PatchOperation& WithFrom(const Aws::String& value) { SetFrom(value); return *this;}

    /**
     * <p>The "move" and "copy" operation object MUST contain a "from" member, which is
     * a string containing a <code>JSON Pointer</code> value that references the
     * location in the target document to move the value from.</p>
     */
    inline PatchOperation& WithFrom(Aws::String&& value) { SetFrom(value); return *this;}

    /**
     * <p>The "move" and "copy" operation object MUST contain a "from" member, which is
     * a string containing a <code>JSON Pointer</code> value that references the
     * location in the target document to move the value from.</p>
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
