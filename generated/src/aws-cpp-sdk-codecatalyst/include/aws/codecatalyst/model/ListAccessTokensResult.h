/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codecatalyst/model/AccessTokenSummary.h>
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
namespace CodeCatalyst
{
namespace Model
{
  class ListAccessTokensResult
  {
  public:
    AWS_CODECATALYST_API ListAccessTokensResult();
    AWS_CODECATALYST_API ListAccessTokensResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECATALYST_API ListAccessTokensResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of personal access tokens (PATs) associated with the calling user.</p>
     */
    inline const Aws::Vector<AccessTokenSummary>& GetItems() const{ return m_items; }

    /**
     * <p>A list of personal access tokens (PATs) associated with the calling user.</p>
     */
    inline void SetItems(const Aws::Vector<AccessTokenSummary>& value) { m_items = value; }

    /**
     * <p>A list of personal access tokens (PATs) associated with the calling user.</p>
     */
    inline void SetItems(Aws::Vector<AccessTokenSummary>&& value) { m_items = std::move(value); }

    /**
     * <p>A list of personal access tokens (PATs) associated with the calling user.</p>
     */
    inline ListAccessTokensResult& WithItems(const Aws::Vector<AccessTokenSummary>& value) { SetItems(value); return *this;}

    /**
     * <p>A list of personal access tokens (PATs) associated with the calling user.</p>
     */
    inline ListAccessTokensResult& WithItems(Aws::Vector<AccessTokenSummary>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>A list of personal access tokens (PATs) associated with the calling user.</p>
     */
    inline ListAccessTokensResult& AddItems(const AccessTokenSummary& value) { m_items.push_back(value); return *this; }

    /**
     * <p>A list of personal access tokens (PATs) associated with the calling user.</p>
     */
    inline ListAccessTokensResult& AddItems(AccessTokenSummary&& value) { m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>A token returned from a call to this API to indicate the next batch of
     * results to return, if any.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token returned from a call to this API to indicate the next batch of
     * results to return, if any.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token returned from a call to this API to indicate the next batch of
     * results to return, if any.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token returned from a call to this API to indicate the next batch of
     * results to return, if any.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token returned from a call to this API to indicate the next batch of
     * results to return, if any.</p>
     */
    inline ListAccessTokensResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token returned from a call to this API to indicate the next batch of
     * results to return, if any.</p>
     */
    inline ListAccessTokensResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token returned from a call to this API to indicate the next batch of
     * results to return, if any.</p>
     */
    inline ListAccessTokensResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AccessTokenSummary> m_items;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
