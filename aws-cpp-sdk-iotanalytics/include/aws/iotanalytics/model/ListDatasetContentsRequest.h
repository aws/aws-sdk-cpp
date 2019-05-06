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
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/iotanalytics/IoTAnalyticsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoTAnalytics
{
namespace Model
{

  /**
   */
  class AWS_IOTANALYTICS_API ListDatasetContentsRequest : public IoTAnalyticsRequest
  {
  public:
    ListDatasetContentsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDatasetContents"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The name of the data set whose contents information you want to list.</p>
     */
    inline const Aws::String& GetDatasetName() const{ return m_datasetName; }

    /**
     * <p>The name of the data set whose contents information you want to list.</p>
     */
    inline bool DatasetNameHasBeenSet() const { return m_datasetNameHasBeenSet; }

    /**
     * <p>The name of the data set whose contents information you want to list.</p>
     */
    inline void SetDatasetName(const Aws::String& value) { m_datasetNameHasBeenSet = true; m_datasetName = value; }

    /**
     * <p>The name of the data set whose contents information you want to list.</p>
     */
    inline void SetDatasetName(Aws::String&& value) { m_datasetNameHasBeenSet = true; m_datasetName = std::move(value); }

    /**
     * <p>The name of the data set whose contents information you want to list.</p>
     */
    inline void SetDatasetName(const char* value) { m_datasetNameHasBeenSet = true; m_datasetName.assign(value); }

    /**
     * <p>The name of the data set whose contents information you want to list.</p>
     */
    inline ListDatasetContentsRequest& WithDatasetName(const Aws::String& value) { SetDatasetName(value); return *this;}

    /**
     * <p>The name of the data set whose contents information you want to list.</p>
     */
    inline ListDatasetContentsRequest& WithDatasetName(Aws::String&& value) { SetDatasetName(std::move(value)); return *this;}

    /**
     * <p>The name of the data set whose contents information you want to list.</p>
     */
    inline ListDatasetContentsRequest& WithDatasetName(const char* value) { SetDatasetName(value); return *this;}


    /**
     * <p>The token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline ListDatasetContentsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results.</p>
     */
    inline ListDatasetContentsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results.</p>
     */
    inline ListDatasetContentsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return in this request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in this request.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in this request.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in this request.</p>
     */
    inline ListDatasetContentsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>A filter to limit results to those data set contents whose creation is
     * scheduled on or after the given time. See the field
     * <code>triggers.schedule</code> in the CreateDataset request. (timestamp)</p>
     */
    inline const Aws::Utils::DateTime& GetScheduledOnOrAfter() const{ return m_scheduledOnOrAfter; }

    /**
     * <p>A filter to limit results to those data set contents whose creation is
     * scheduled on or after the given time. See the field
     * <code>triggers.schedule</code> in the CreateDataset request. (timestamp)</p>
     */
    inline bool ScheduledOnOrAfterHasBeenSet() const { return m_scheduledOnOrAfterHasBeenSet; }

    /**
     * <p>A filter to limit results to those data set contents whose creation is
     * scheduled on or after the given time. See the field
     * <code>triggers.schedule</code> in the CreateDataset request. (timestamp)</p>
     */
    inline void SetScheduledOnOrAfter(const Aws::Utils::DateTime& value) { m_scheduledOnOrAfterHasBeenSet = true; m_scheduledOnOrAfter = value; }

    /**
     * <p>A filter to limit results to those data set contents whose creation is
     * scheduled on or after the given time. See the field
     * <code>triggers.schedule</code> in the CreateDataset request. (timestamp)</p>
     */
    inline void SetScheduledOnOrAfter(Aws::Utils::DateTime&& value) { m_scheduledOnOrAfterHasBeenSet = true; m_scheduledOnOrAfter = std::move(value); }

    /**
     * <p>A filter to limit results to those data set contents whose creation is
     * scheduled on or after the given time. See the field
     * <code>triggers.schedule</code> in the CreateDataset request. (timestamp)</p>
     */
    inline ListDatasetContentsRequest& WithScheduledOnOrAfter(const Aws::Utils::DateTime& value) { SetScheduledOnOrAfter(value); return *this;}

    /**
     * <p>A filter to limit results to those data set contents whose creation is
     * scheduled on or after the given time. See the field
     * <code>triggers.schedule</code> in the CreateDataset request. (timestamp)</p>
     */
    inline ListDatasetContentsRequest& WithScheduledOnOrAfter(Aws::Utils::DateTime&& value) { SetScheduledOnOrAfter(std::move(value)); return *this;}


    /**
     * <p>A filter to limit results to those data set contents whose creation is
     * scheduled before the given time. See the field <code>triggers.schedule</code> in
     * the CreateDataset request. (timestamp)</p>
     */
    inline const Aws::Utils::DateTime& GetScheduledBefore() const{ return m_scheduledBefore; }

    /**
     * <p>A filter to limit results to those data set contents whose creation is
     * scheduled before the given time. See the field <code>triggers.schedule</code> in
     * the CreateDataset request. (timestamp)</p>
     */
    inline bool ScheduledBeforeHasBeenSet() const { return m_scheduledBeforeHasBeenSet; }

    /**
     * <p>A filter to limit results to those data set contents whose creation is
     * scheduled before the given time. See the field <code>triggers.schedule</code> in
     * the CreateDataset request. (timestamp)</p>
     */
    inline void SetScheduledBefore(const Aws::Utils::DateTime& value) { m_scheduledBeforeHasBeenSet = true; m_scheduledBefore = value; }

    /**
     * <p>A filter to limit results to those data set contents whose creation is
     * scheduled before the given time. See the field <code>triggers.schedule</code> in
     * the CreateDataset request. (timestamp)</p>
     */
    inline void SetScheduledBefore(Aws::Utils::DateTime&& value) { m_scheduledBeforeHasBeenSet = true; m_scheduledBefore = std::move(value); }

    /**
     * <p>A filter to limit results to those data set contents whose creation is
     * scheduled before the given time. See the field <code>triggers.schedule</code> in
     * the CreateDataset request. (timestamp)</p>
     */
    inline ListDatasetContentsRequest& WithScheduledBefore(const Aws::Utils::DateTime& value) { SetScheduledBefore(value); return *this;}

    /**
     * <p>A filter to limit results to those data set contents whose creation is
     * scheduled before the given time. See the field <code>triggers.schedule</code> in
     * the CreateDataset request. (timestamp)</p>
     */
    inline ListDatasetContentsRequest& WithScheduledBefore(Aws::Utils::DateTime&& value) { SetScheduledBefore(std::move(value)); return *this;}

  private:

    Aws::String m_datasetName;
    bool m_datasetNameHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::Utils::DateTime m_scheduledOnOrAfter;
    bool m_scheduledOnOrAfterHasBeenSet;

    Aws::Utils::DateTime m_scheduledBefore;
    bool m_scheduledBeforeHasBeenSet;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
