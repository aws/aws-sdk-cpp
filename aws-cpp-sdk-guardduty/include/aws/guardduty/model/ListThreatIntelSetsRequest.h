/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/GuardDutyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace GuardDuty
{
namespace Model
{

  /**
   */
  class AWS_GUARDDUTY_API ListThreatIntelSetsRequest : public GuardDutyRequest
  {
  public:
    ListThreatIntelSetsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListThreatIntelSets"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * The detectorID that specifies the GuardDuty service whose ThreatIntelSets you
     * want to list.
     */
    inline const Aws::String& GetDetectorId() const{ return m_detectorId; }

    /**
     * The detectorID that specifies the GuardDuty service whose ThreatIntelSets you
     * want to list.
     */
    inline bool DetectorIdHasBeenSet() const { return m_detectorIdHasBeenSet; }

    /**
     * The detectorID that specifies the GuardDuty service whose ThreatIntelSets you
     * want to list.
     */
    inline void SetDetectorId(const Aws::String& value) { m_detectorIdHasBeenSet = true; m_detectorId = value; }

    /**
     * The detectorID that specifies the GuardDuty service whose ThreatIntelSets you
     * want to list.
     */
    inline void SetDetectorId(Aws::String&& value) { m_detectorIdHasBeenSet = true; m_detectorId = std::move(value); }

    /**
     * The detectorID that specifies the GuardDuty service whose ThreatIntelSets you
     * want to list.
     */
    inline void SetDetectorId(const char* value) { m_detectorIdHasBeenSet = true; m_detectorId.assign(value); }

    /**
     * The detectorID that specifies the GuardDuty service whose ThreatIntelSets you
     * want to list.
     */
    inline ListThreatIntelSetsRequest& WithDetectorId(const Aws::String& value) { SetDetectorId(value); return *this;}

    /**
     * The detectorID that specifies the GuardDuty service whose ThreatIntelSets you
     * want to list.
     */
    inline ListThreatIntelSetsRequest& WithDetectorId(Aws::String&& value) { SetDetectorId(std::move(value)); return *this;}

    /**
     * The detectorID that specifies the GuardDuty service whose ThreatIntelSets you
     * want to list.
     */
    inline ListThreatIntelSetsRequest& WithDetectorId(const char* value) { SetDetectorId(value); return *this;}


    /**
     * You can use this parameter to indicate the maximum number of items that you want
     * in the response. The default value is 7. The maximum value is 7.
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * You can use this parameter to indicate the maximum number of items that you want
     * in the response. The default value is 7. The maximum value is 7.
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * You can use this parameter to indicate the maximum number of items that you want
     * in the response. The default value is 7. The maximum value is 7.
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * You can use this parameter to indicate the maximum number of items that you want
     * in the response. The default value is 7. The maximum value is 7.
     */
    inline ListThreatIntelSetsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * Pagination token to start retrieving threat intel sets from.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * Pagination token to start retrieving threat intel sets from.
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * Pagination token to start retrieving threat intel sets from.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * Pagination token to start retrieving threat intel sets from.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * Pagination token to start retrieving threat intel sets from.
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * Pagination token to start retrieving threat intel sets from.
     */
    inline ListThreatIntelSetsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * Pagination token to start retrieving threat intel sets from.
     */
    inline ListThreatIntelSetsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * Pagination token to start retrieving threat intel sets from.
     */
    inline ListThreatIntelSetsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_detectorId;
    bool m_detectorIdHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
