﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ListDatasetContentsRequest : public IoTAnalyticsRequest
  {
  public:
    AWS_IOTANALYTICS_API ListDatasetContentsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDatasetContents"; }

    AWS_IOTANALYTICS_API Aws::String SerializePayload() const override;

    AWS_IOTANALYTICS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The name of the dataset whose contents information you want to list.</p>
     */
    inline const Aws::String& GetDatasetName() const{ return m_datasetName; }
    inline bool DatasetNameHasBeenSet() const { return m_datasetNameHasBeenSet; }
    inline void SetDatasetName(const Aws::String& value) { m_datasetNameHasBeenSet = true; m_datasetName = value; }
    inline void SetDatasetName(Aws::String&& value) { m_datasetNameHasBeenSet = true; m_datasetName = std::move(value); }
    inline void SetDatasetName(const char* value) { m_datasetNameHasBeenSet = true; m_datasetName.assign(value); }
    inline ListDatasetContentsRequest& WithDatasetName(const Aws::String& value) { SetDatasetName(value); return *this;}
    inline ListDatasetContentsRequest& WithDatasetName(Aws::String&& value) { SetDatasetName(std::move(value)); return *this;}
    inline ListDatasetContentsRequest& WithDatasetName(const char* value) { SetDatasetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListDatasetContentsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListDatasetContentsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListDatasetContentsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return in this request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListDatasetContentsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter to limit results to those dataset contents whose creation is
     * scheduled on or after the given time. See the field
     * <code>triggers.schedule</code> in the <code>CreateDataset</code> request.
     * (timestamp)</p>
     */
    inline const Aws::Utils::DateTime& GetScheduledOnOrAfter() const{ return m_scheduledOnOrAfter; }
    inline bool ScheduledOnOrAfterHasBeenSet() const { return m_scheduledOnOrAfterHasBeenSet; }
    inline void SetScheduledOnOrAfter(const Aws::Utils::DateTime& value) { m_scheduledOnOrAfterHasBeenSet = true; m_scheduledOnOrAfter = value; }
    inline void SetScheduledOnOrAfter(Aws::Utils::DateTime&& value) { m_scheduledOnOrAfterHasBeenSet = true; m_scheduledOnOrAfter = std::move(value); }
    inline ListDatasetContentsRequest& WithScheduledOnOrAfter(const Aws::Utils::DateTime& value) { SetScheduledOnOrAfter(value); return *this;}
    inline ListDatasetContentsRequest& WithScheduledOnOrAfter(Aws::Utils::DateTime&& value) { SetScheduledOnOrAfter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter to limit results to those dataset contents whose creation is
     * scheduled before the given time. See the field <code>triggers.schedule</code> in
     * the <code>CreateDataset</code> request. (timestamp)</p>
     */
    inline const Aws::Utils::DateTime& GetScheduledBefore() const{ return m_scheduledBefore; }
    inline bool ScheduledBeforeHasBeenSet() const { return m_scheduledBeforeHasBeenSet; }
    inline void SetScheduledBefore(const Aws::Utils::DateTime& value) { m_scheduledBeforeHasBeenSet = true; m_scheduledBefore = value; }
    inline void SetScheduledBefore(Aws::Utils::DateTime&& value) { m_scheduledBeforeHasBeenSet = true; m_scheduledBefore = std::move(value); }
    inline ListDatasetContentsRequest& WithScheduledBefore(const Aws::Utils::DateTime& value) { SetScheduledBefore(value); return *this;}
    inline ListDatasetContentsRequest& WithScheduledBefore(Aws::Utils::DateTime&& value) { SetScheduledBefore(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_datasetName;
    bool m_datasetNameHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::Utils::DateTime m_scheduledOnOrAfter;
    bool m_scheduledOnOrAfterHasBeenSet = false;

    Aws::Utils::DateTime m_scheduledBefore;
    bool m_scheduledBeforeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
