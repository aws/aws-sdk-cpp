/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securitylake/model/FailuresResponse.h>
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
namespace SecurityLake
{
namespace Model
{
  class ListDatalakeExceptionsResult
  {
  public:
    AWS_SECURITYLAKE_API ListDatalakeExceptionsResult();
    AWS_SECURITYLAKE_API ListDatalakeExceptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYLAKE_API ListDatalakeExceptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>List if there are more results available. if nextToken is returned, You can
     * make the call again using the returned token to retrieve the next page</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>List if there are more results available. if nextToken is returned, You can
     * make the call again using the returned token to retrieve the next page</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>List if there are more results available. if nextToken is returned, You can
     * make the call again using the returned token to retrieve the next page</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>List if there are more results available. if nextToken is returned, You can
     * make the call again using the returned token to retrieve the next page</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>List if there are more results available. if nextToken is returned, You can
     * make the call again using the returned token to retrieve the next page</p>
     */
    inline ListDatalakeExceptionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>List if there are more results available. if nextToken is returned, You can
     * make the call again using the returned token to retrieve the next page</p>
     */
    inline ListDatalakeExceptionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>List if there are more results available. if nextToken is returned, You can
     * make the call again using the returned token to retrieve the next page</p>
     */
    inline ListDatalakeExceptionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Lists the non-retryable failures in the current region.</p>
     */
    inline const Aws::Vector<FailuresResponse>& GetNonRetryableFailures() const{ return m_nonRetryableFailures; }

    /**
     * <p>Lists the non-retryable failures in the current region.</p>
     */
    inline void SetNonRetryableFailures(const Aws::Vector<FailuresResponse>& value) { m_nonRetryableFailures = value; }

    /**
     * <p>Lists the non-retryable failures in the current region.</p>
     */
    inline void SetNonRetryableFailures(Aws::Vector<FailuresResponse>&& value) { m_nonRetryableFailures = std::move(value); }

    /**
     * <p>Lists the non-retryable failures in the current region.</p>
     */
    inline ListDatalakeExceptionsResult& WithNonRetryableFailures(const Aws::Vector<FailuresResponse>& value) { SetNonRetryableFailures(value); return *this;}

    /**
     * <p>Lists the non-retryable failures in the current region.</p>
     */
    inline ListDatalakeExceptionsResult& WithNonRetryableFailures(Aws::Vector<FailuresResponse>&& value) { SetNonRetryableFailures(std::move(value)); return *this;}

    /**
     * <p>Lists the non-retryable failures in the current region.</p>
     */
    inline ListDatalakeExceptionsResult& AddNonRetryableFailures(const FailuresResponse& value) { m_nonRetryableFailures.push_back(value); return *this; }

    /**
     * <p>Lists the non-retryable failures in the current region.</p>
     */
    inline ListDatalakeExceptionsResult& AddNonRetryableFailures(FailuresResponse&& value) { m_nonRetryableFailures.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<FailuresResponse> m_nonRetryableFailures;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
