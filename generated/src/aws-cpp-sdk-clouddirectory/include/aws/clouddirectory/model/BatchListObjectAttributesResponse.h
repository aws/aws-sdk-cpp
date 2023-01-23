/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/clouddirectory/model/AttributeKeyAndValue.h>
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
namespace CloudDirectory
{
namespace Model
{

  /**
   * <p>Represents the output of a <a>ListObjectAttributes</a> response
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchListObjectAttributesResponse">AWS
   * API Reference</a></p>
   */
  class BatchListObjectAttributesResponse
  {
  public:
    AWS_CLOUDDIRECTORY_API BatchListObjectAttributesResponse();
    AWS_CLOUDDIRECTORY_API BatchListObjectAttributesResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API BatchListObjectAttributesResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The attributes map that is associated with the object.
     * <code>AttributeArn</code> is the key; attribute value is the value.</p>
     */
    inline const Aws::Vector<AttributeKeyAndValue>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>The attributes map that is associated with the object.
     * <code>AttributeArn</code> is the key; attribute value is the value.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>The attributes map that is associated with the object.
     * <code>AttributeArn</code> is the key; attribute value is the value.</p>
     */
    inline void SetAttributes(const Aws::Vector<AttributeKeyAndValue>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>The attributes map that is associated with the object.
     * <code>AttributeArn</code> is the key; attribute value is the value.</p>
     */
    inline void SetAttributes(Aws::Vector<AttributeKeyAndValue>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>The attributes map that is associated with the object.
     * <code>AttributeArn</code> is the key; attribute value is the value.</p>
     */
    inline BatchListObjectAttributesResponse& WithAttributes(const Aws::Vector<AttributeKeyAndValue>& value) { SetAttributes(value); return *this;}

    /**
     * <p>The attributes map that is associated with the object.
     * <code>AttributeArn</code> is the key; attribute value is the value.</p>
     */
    inline BatchListObjectAttributesResponse& WithAttributes(Aws::Vector<AttributeKeyAndValue>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>The attributes map that is associated with the object.
     * <code>AttributeArn</code> is the key; attribute value is the value.</p>
     */
    inline BatchListObjectAttributesResponse& AddAttributes(const AttributeKeyAndValue& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }

    /**
     * <p>The attributes map that is associated with the object.
     * <code>AttributeArn</code> is the key; attribute value is the value.</p>
     */
    inline BatchListObjectAttributesResponse& AddAttributes(AttributeKeyAndValue&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

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
    inline BatchListObjectAttributesResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline BatchListObjectAttributesResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AttributeKeyAndValue> m_attributes;
    bool m_attributesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
