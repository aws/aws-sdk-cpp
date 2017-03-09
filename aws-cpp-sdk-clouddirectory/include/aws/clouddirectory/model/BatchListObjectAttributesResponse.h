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
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/clouddirectory/model/AttributeKeyAndValue.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CloudDirectory
{
namespace Model
{

  /**
   * <p>Represents the output of a <code>ListObjectAttributes</code> response
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2016-05-10/BatchListObjectAttributesResponse">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDDIRECTORY_API BatchListObjectAttributesResponse
  {
  public:
    BatchListObjectAttributesResponse();
    BatchListObjectAttributesResponse(const Aws::Utils::Json::JsonValue& jsonValue);
    BatchListObjectAttributesResponse& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Attributes map associated with the object. <code>AttributeArn</code> is the
     * key; attribute value is the value.</p>
     */
    inline const Aws::Vector<AttributeKeyAndValue>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>Attributes map associated with the object. <code>AttributeArn</code> is the
     * key; attribute value is the value.</p>
     */
    inline void SetAttributes(const Aws::Vector<AttributeKeyAndValue>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>Attributes map associated with the object. <code>AttributeArn</code> is the
     * key; attribute value is the value.</p>
     */
    inline void SetAttributes(Aws::Vector<AttributeKeyAndValue>&& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>Attributes map associated with the object. <code>AttributeArn</code> is the
     * key; attribute value is the value.</p>
     */
    inline BatchListObjectAttributesResponse& WithAttributes(const Aws::Vector<AttributeKeyAndValue>& value) { SetAttributes(value); return *this;}

    /**
     * <p>Attributes map associated with the object. <code>AttributeArn</code> is the
     * key; attribute value is the value.</p>
     */
    inline BatchListObjectAttributesResponse& WithAttributes(Aws::Vector<AttributeKeyAndValue>&& value) { SetAttributes(value); return *this;}

    /**
     * <p>Attributes map associated with the object. <code>AttributeArn</code> is the
     * key; attribute value is the value.</p>
     */
    inline BatchListObjectAttributesResponse& AddAttributes(const AttributeKeyAndValue& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }

    /**
     * <p>Attributes map associated with the object. <code>AttributeArn</code> is the
     * key; attribute value is the value.</p>
     */
    inline BatchListObjectAttributesResponse& AddAttributes(AttributeKeyAndValue&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }

    /**
     * <p>The pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The pagination token.</p>
     */
    inline BatchListObjectAttributesResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline BatchListObjectAttributesResponse& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline BatchListObjectAttributesResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::Vector<AttributeKeyAndValue> m_attributes;
    bool m_attributesHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
