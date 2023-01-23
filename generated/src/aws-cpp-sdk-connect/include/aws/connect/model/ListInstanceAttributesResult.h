/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/Attribute.h>
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
namespace Connect
{
namespace Model
{
  class ListInstanceAttributesResult
  {
  public:
    AWS_CONNECT_API ListInstanceAttributesResult();
    AWS_CONNECT_API ListInstanceAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListInstanceAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The attribute types.</p>
     */
    inline const Aws::Vector<Attribute>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>The attribute types.</p>
     */
    inline void SetAttributes(const Aws::Vector<Attribute>& value) { m_attributes = value; }

    /**
     * <p>The attribute types.</p>
     */
    inline void SetAttributes(Aws::Vector<Attribute>&& value) { m_attributes = std::move(value); }

    /**
     * <p>The attribute types.</p>
     */
    inline ListInstanceAttributesResult& WithAttributes(const Aws::Vector<Attribute>& value) { SetAttributes(value); return *this;}

    /**
     * <p>The attribute types.</p>
     */
    inline ListInstanceAttributesResult& WithAttributes(Aws::Vector<Attribute>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>The attribute types.</p>
     */
    inline ListInstanceAttributesResult& AddAttributes(const Attribute& value) { m_attributes.push_back(value); return *this; }

    /**
     * <p>The attribute types.</p>
     */
    inline ListInstanceAttributesResult& AddAttributes(Attribute&& value) { m_attributes.push_back(std::move(value)); return *this; }


    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListInstanceAttributesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListInstanceAttributesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListInstanceAttributesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Attribute> m_attributes;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
