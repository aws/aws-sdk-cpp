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
#include <aws/support/Support_EXPORTS.h>
#include <aws/support/SupportRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Support
{
namespace Model
{

  /**
   * <p/>
   */
  class AWS_SUPPORT_API DescribeCommunicationsRequest : public SupportRequest
  {
  public:
    DescribeCommunicationsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The AWS Support case ID requested or returned in the call. The case ID is an
     * alphanumeric string formatted as shown in this example:
     * case-<i>12345678910-2013-c4c1d2bf33c5cf47</i> </p>
     */
    inline const Aws::String& GetCaseId() const{ return m_caseId; }

    /**
     * <p>The AWS Support case ID requested or returned in the call. The case ID is an
     * alphanumeric string formatted as shown in this example:
     * case-<i>12345678910-2013-c4c1d2bf33c5cf47</i> </p>
     */
    inline void SetCaseId(const Aws::String& value) { m_caseIdHasBeenSet = true; m_caseId = value; }

    /**
     * <p>The AWS Support case ID requested or returned in the call. The case ID is an
     * alphanumeric string formatted as shown in this example:
     * case-<i>12345678910-2013-c4c1d2bf33c5cf47</i> </p>
     */
    inline void SetCaseId(Aws::String&& value) { m_caseIdHasBeenSet = true; m_caseId = value; }

    /**
     * <p>The AWS Support case ID requested or returned in the call. The case ID is an
     * alphanumeric string formatted as shown in this example:
     * case-<i>12345678910-2013-c4c1d2bf33c5cf47</i> </p>
     */
    inline void SetCaseId(const char* value) { m_caseIdHasBeenSet = true; m_caseId.assign(value); }

    /**
     * <p>The AWS Support case ID requested or returned in the call. The case ID is an
     * alphanumeric string formatted as shown in this example:
     * case-<i>12345678910-2013-c4c1d2bf33c5cf47</i> </p>
     */
    inline DescribeCommunicationsRequest& WithCaseId(const Aws::String& value) { SetCaseId(value); return *this;}

    /**
     * <p>The AWS Support case ID requested or returned in the call. The case ID is an
     * alphanumeric string formatted as shown in this example:
     * case-<i>12345678910-2013-c4c1d2bf33c5cf47</i> </p>
     */
    inline DescribeCommunicationsRequest& WithCaseId(Aws::String&& value) { SetCaseId(value); return *this;}

    /**
     * <p>The AWS Support case ID requested or returned in the call. The case ID is an
     * alphanumeric string formatted as shown in this example:
     * case-<i>12345678910-2013-c4c1d2bf33c5cf47</i> </p>
     */
    inline DescribeCommunicationsRequest& WithCaseId(const char* value) { SetCaseId(value); return *this;}

    /**
     * <p>The end date for a filtered date search on support case communications. Case
     * communications are available for 12 months after creation.</p>
     */
    inline const Aws::String& GetBeforeTime() const{ return m_beforeTime; }

    /**
     * <p>The end date for a filtered date search on support case communications. Case
     * communications are available for 12 months after creation.</p>
     */
    inline void SetBeforeTime(const Aws::String& value) { m_beforeTimeHasBeenSet = true; m_beforeTime = value; }

    /**
     * <p>The end date for a filtered date search on support case communications. Case
     * communications are available for 12 months after creation.</p>
     */
    inline void SetBeforeTime(Aws::String&& value) { m_beforeTimeHasBeenSet = true; m_beforeTime = value; }

    /**
     * <p>The end date for a filtered date search on support case communications. Case
     * communications are available for 12 months after creation.</p>
     */
    inline void SetBeforeTime(const char* value) { m_beforeTimeHasBeenSet = true; m_beforeTime.assign(value); }

    /**
     * <p>The end date for a filtered date search on support case communications. Case
     * communications are available for 12 months after creation.</p>
     */
    inline DescribeCommunicationsRequest& WithBeforeTime(const Aws::String& value) { SetBeforeTime(value); return *this;}

    /**
     * <p>The end date for a filtered date search on support case communications. Case
     * communications are available for 12 months after creation.</p>
     */
    inline DescribeCommunicationsRequest& WithBeforeTime(Aws::String&& value) { SetBeforeTime(value); return *this;}

    /**
     * <p>The end date for a filtered date search on support case communications. Case
     * communications are available for 12 months after creation.</p>
     */
    inline DescribeCommunicationsRequest& WithBeforeTime(const char* value) { SetBeforeTime(value); return *this;}

    /**
     * <p>The start date for a filtered date search on support case communications.
     * Case communications are available for 12 months after creation.</p>
     */
    inline const Aws::String& GetAfterTime() const{ return m_afterTime; }

    /**
     * <p>The start date for a filtered date search on support case communications.
     * Case communications are available for 12 months after creation.</p>
     */
    inline void SetAfterTime(const Aws::String& value) { m_afterTimeHasBeenSet = true; m_afterTime = value; }

    /**
     * <p>The start date for a filtered date search on support case communications.
     * Case communications are available for 12 months after creation.</p>
     */
    inline void SetAfterTime(Aws::String&& value) { m_afterTimeHasBeenSet = true; m_afterTime = value; }

    /**
     * <p>The start date for a filtered date search on support case communications.
     * Case communications are available for 12 months after creation.</p>
     */
    inline void SetAfterTime(const char* value) { m_afterTimeHasBeenSet = true; m_afterTime.assign(value); }

    /**
     * <p>The start date for a filtered date search on support case communications.
     * Case communications are available for 12 months after creation.</p>
     */
    inline DescribeCommunicationsRequest& WithAfterTime(const Aws::String& value) { SetAfterTime(value); return *this;}

    /**
     * <p>The start date for a filtered date search on support case communications.
     * Case communications are available for 12 months after creation.</p>
     */
    inline DescribeCommunicationsRequest& WithAfterTime(Aws::String&& value) { SetAfterTime(value); return *this;}

    /**
     * <p>The start date for a filtered date search on support case communications.
     * Case communications are available for 12 months after creation.</p>
     */
    inline DescribeCommunicationsRequest& WithAfterTime(const char* value) { SetAfterTime(value); return *this;}

    /**
     * <p>A resumption point for pagination.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A resumption point for pagination.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A resumption point for pagination.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A resumption point for pagination.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A resumption point for pagination.</p>
     */
    inline DescribeCommunicationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A resumption point for pagination.</p>
     */
    inline DescribeCommunicationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>A resumption point for pagination.</p>
     */
    inline DescribeCommunicationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    /**
     * <p>The maximum number of results to return before paginating.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return before paginating.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return before paginating.</p>
     */
    inline DescribeCommunicationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:
    Aws::String m_caseId;
    bool m_caseIdHasBeenSet;
    Aws::String m_beforeTime;
    bool m_beforeTimeHasBeenSet;
    Aws::String m_afterTime;
    bool m_afterTimeHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
