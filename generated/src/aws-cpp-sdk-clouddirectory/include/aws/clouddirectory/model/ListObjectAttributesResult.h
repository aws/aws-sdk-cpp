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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

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
  class ListObjectAttributesResult
  {
  public:
    AWS_CLOUDDIRECTORY_API ListObjectAttributesResult();
    AWS_CLOUDDIRECTORY_API ListObjectAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDDIRECTORY_API ListObjectAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Attributes map that is associated with the object. <code>AttributeArn</code>
     * is the key, and attribute value is the value.</p>
     */
    inline const Aws::Vector<AttributeKeyAndValue>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>Attributes map that is associated with the object. <code>AttributeArn</code>
     * is the key, and attribute value is the value.</p>
     */
    inline void SetAttributes(const Aws::Vector<AttributeKeyAndValue>& value) { m_attributes = value; }

    /**
     * <p>Attributes map that is associated with the object. <code>AttributeArn</code>
     * is the key, and attribute value is the value.</p>
     */
    inline void SetAttributes(Aws::Vector<AttributeKeyAndValue>&& value) { m_attributes = std::move(value); }

    /**
     * <p>Attributes map that is associated with the object. <code>AttributeArn</code>
     * is the key, and attribute value is the value.</p>
     */
    inline ListObjectAttributesResult& WithAttributes(const Aws::Vector<AttributeKeyAndValue>& value) { SetAttributes(value); return *this;}

    /**
     * <p>Attributes map that is associated with the object. <code>AttributeArn</code>
     * is the key, and attribute value is the value.</p>
     */
    inline ListObjectAttributesResult& WithAttributes(Aws::Vector<AttributeKeyAndValue>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>Attributes map that is associated with the object. <code>AttributeArn</code>
     * is the key, and attribute value is the value.</p>
     */
    inline ListObjectAttributesResult& AddAttributes(const AttributeKeyAndValue& value) { m_attributes.push_back(value); return *this; }

    /**
     * <p>Attributes map that is associated with the object. <code>AttributeArn</code>
     * is the key, and attribute value is the value.</p>
     */
    inline ListObjectAttributesResult& AddAttributes(AttributeKeyAndValue&& value) { m_attributes.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token.</p>
     */
    inline ListObjectAttributesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline ListObjectAttributesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline ListObjectAttributesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AttributeKeyAndValue> m_attributes;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
