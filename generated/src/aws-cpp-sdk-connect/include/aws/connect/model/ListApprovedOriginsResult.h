/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class ListApprovedOriginsResult
  {
  public:
    AWS_CONNECT_API ListApprovedOriginsResult();
    AWS_CONNECT_API ListApprovedOriginsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListApprovedOriginsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The approved origins.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOrigins() const{ return m_origins; }

    /**
     * <p>The approved origins.</p>
     */
    inline void SetOrigins(const Aws::Vector<Aws::String>& value) { m_origins = value; }

    /**
     * <p>The approved origins.</p>
     */
    inline void SetOrigins(Aws::Vector<Aws::String>&& value) { m_origins = std::move(value); }

    /**
     * <p>The approved origins.</p>
     */
    inline ListApprovedOriginsResult& WithOrigins(const Aws::Vector<Aws::String>& value) { SetOrigins(value); return *this;}

    /**
     * <p>The approved origins.</p>
     */
    inline ListApprovedOriginsResult& WithOrigins(Aws::Vector<Aws::String>&& value) { SetOrigins(std::move(value)); return *this;}

    /**
     * <p>The approved origins.</p>
     */
    inline ListApprovedOriginsResult& AddOrigins(const Aws::String& value) { m_origins.push_back(value); return *this; }

    /**
     * <p>The approved origins.</p>
     */
    inline ListApprovedOriginsResult& AddOrigins(Aws::String&& value) { m_origins.push_back(std::move(value)); return *this; }

    /**
     * <p>The approved origins.</p>
     */
    inline ListApprovedOriginsResult& AddOrigins(const char* value) { m_origins.push_back(value); return *this; }


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
    inline ListApprovedOriginsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListApprovedOriginsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline ListApprovedOriginsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_origins;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
