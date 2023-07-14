﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/OpsItemEventSummary.h>
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
namespace SSM
{
namespace Model
{
  class AWS_SSM_API ListOpsItemEventsResult
  {
  public:
    ListOpsItemEventsResult();
    ListOpsItemEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListOpsItemEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results. </p>
     */
    inline ListOpsItemEventsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results. </p>
     */
    inline ListOpsItemEventsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results. </p>
     */
    inline ListOpsItemEventsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of event information for the specified OpsItems.</p>
     */
    inline const Aws::Vector<OpsItemEventSummary>& GetSummaries() const{ return m_summaries; }

    /**
     * <p>A list of event information for the specified OpsItems.</p>
     */
    inline void SetSummaries(const Aws::Vector<OpsItemEventSummary>& value) { m_summaries = value; }

    /**
     * <p>A list of event information for the specified OpsItems.</p>
     */
    inline void SetSummaries(Aws::Vector<OpsItemEventSummary>&& value) { m_summaries = std::move(value); }

    /**
     * <p>A list of event information for the specified OpsItems.</p>
     */
    inline ListOpsItemEventsResult& WithSummaries(const Aws::Vector<OpsItemEventSummary>& value) { SetSummaries(value); return *this;}

    /**
     * <p>A list of event information for the specified OpsItems.</p>
     */
    inline ListOpsItemEventsResult& WithSummaries(Aws::Vector<OpsItemEventSummary>&& value) { SetSummaries(std::move(value)); return *this;}

    /**
     * <p>A list of event information for the specified OpsItems.</p>
     */
    inline ListOpsItemEventsResult& AddSummaries(const OpsItemEventSummary& value) { m_summaries.push_back(value); return *this; }

    /**
     * <p>A list of event information for the specified OpsItems.</p>
     */
    inline ListOpsItemEventsResult& AddSummaries(OpsItemEventSummary&& value) { m_summaries.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<OpsItemEventSummary> m_summaries;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
