/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/SuppressedDestinationSummary.h>
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
namespace SESV2
{
namespace Model
{
  /**
   * <p>A list of suppressed email addresses.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListSuppressedDestinationsResponse">AWS
   * API Reference</a></p>
   */
  class ListSuppressedDestinationsResult
  {
  public:
    AWS_SESV2_API ListSuppressedDestinationsResult();
    AWS_SESV2_API ListSuppressedDestinationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API ListSuppressedDestinationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of summaries, each containing a summary for a suppressed email
     * destination.</p>
     */
    inline const Aws::Vector<SuppressedDestinationSummary>& GetSuppressedDestinationSummaries() const{ return m_suppressedDestinationSummaries; }

    /**
     * <p>A list of summaries, each containing a summary for a suppressed email
     * destination.</p>
     */
    inline void SetSuppressedDestinationSummaries(const Aws::Vector<SuppressedDestinationSummary>& value) { m_suppressedDestinationSummaries = value; }

    /**
     * <p>A list of summaries, each containing a summary for a suppressed email
     * destination.</p>
     */
    inline void SetSuppressedDestinationSummaries(Aws::Vector<SuppressedDestinationSummary>&& value) { m_suppressedDestinationSummaries = std::move(value); }

    /**
     * <p>A list of summaries, each containing a summary for a suppressed email
     * destination.</p>
     */
    inline ListSuppressedDestinationsResult& WithSuppressedDestinationSummaries(const Aws::Vector<SuppressedDestinationSummary>& value) { SetSuppressedDestinationSummaries(value); return *this;}

    /**
     * <p>A list of summaries, each containing a summary for a suppressed email
     * destination.</p>
     */
    inline ListSuppressedDestinationsResult& WithSuppressedDestinationSummaries(Aws::Vector<SuppressedDestinationSummary>&& value) { SetSuppressedDestinationSummaries(std::move(value)); return *this;}

    /**
     * <p>A list of summaries, each containing a summary for a suppressed email
     * destination.</p>
     */
    inline ListSuppressedDestinationsResult& AddSuppressedDestinationSummaries(const SuppressedDestinationSummary& value) { m_suppressedDestinationSummaries.push_back(value); return *this; }

    /**
     * <p>A list of summaries, each containing a summary for a suppressed email
     * destination.</p>
     */
    inline ListSuppressedDestinationsResult& AddSuppressedDestinationSummaries(SuppressedDestinationSummary&& value) { m_suppressedDestinationSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>A token that indicates that there are additional email addresses on the
     * suppression list for your account. To view additional suppressed addresses,
     * issue another request to <code>ListSuppressedDestinations</code>, and pass this
     * token in the <code>NextToken</code> parameter.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates that there are additional email addresses on the
     * suppression list for your account. To view additional suppressed addresses,
     * issue another request to <code>ListSuppressedDestinations</code>, and pass this
     * token in the <code>NextToken</code> parameter.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that indicates that there are additional email addresses on the
     * suppression list for your account. To view additional suppressed addresses,
     * issue another request to <code>ListSuppressedDestinations</code>, and pass this
     * token in the <code>NextToken</code> parameter.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates that there are additional email addresses on the
     * suppression list for your account. To view additional suppressed addresses,
     * issue another request to <code>ListSuppressedDestinations</code>, and pass this
     * token in the <code>NextToken</code> parameter.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that indicates that there are additional email addresses on the
     * suppression list for your account. To view additional suppressed addresses,
     * issue another request to <code>ListSuppressedDestinations</code>, and pass this
     * token in the <code>NextToken</code> parameter.</p>
     */
    inline ListSuppressedDestinationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates that there are additional email addresses on the
     * suppression list for your account. To view additional suppressed addresses,
     * issue another request to <code>ListSuppressedDestinations</code>, and pass this
     * token in the <code>NextToken</code> parameter.</p>
     */
    inline ListSuppressedDestinationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates that there are additional email addresses on the
     * suppression list for your account. To view additional suppressed addresses,
     * issue another request to <code>ListSuppressedDestinations</code>, and pass this
     * token in the <code>NextToken</code> parameter.</p>
     */
    inline ListSuppressedDestinationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<SuppressedDestinationSummary> m_suppressedDestinationSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
