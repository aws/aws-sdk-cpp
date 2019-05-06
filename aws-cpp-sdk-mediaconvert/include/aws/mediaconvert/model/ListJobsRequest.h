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
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/MediaConvertRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/Order.h>
#include <aws/mediaconvert/model/JobStatus.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace MediaConvert
{
namespace Model
{

  /**
   */
  class AWS_MEDIACONVERT_API ListJobsRequest : public MediaConvertRequest
  {
  public:
    ListJobsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListJobs"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * Optional. Number of jobs, up to twenty, that will be returned at one time.
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * Optional. Number of jobs, up to twenty, that will be returned at one time.
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * Optional. Number of jobs, up to twenty, that will be returned at one time.
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * Optional. Number of jobs, up to twenty, that will be returned at one time.
     */
    inline ListJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * Use this string, provided with the response to a previous request, to request
     * the next batch of jobs.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * Use this string, provided with the response to a previous request, to request
     * the next batch of jobs.
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * Use this string, provided with the response to a previous request, to request
     * the next batch of jobs.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * Use this string, provided with the response to a previous request, to request
     * the next batch of jobs.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * Use this string, provided with the response to a previous request, to request
     * the next batch of jobs.
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * Use this string, provided with the response to a previous request, to request
     * the next batch of jobs.
     */
    inline ListJobsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * Use this string, provided with the response to a previous request, to request
     * the next batch of jobs.
     */
    inline ListJobsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * Use this string, provided with the response to a previous request, to request
     * the next batch of jobs.
     */
    inline ListJobsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * When you request lists of resources, you can optionally specify whether they are
     * sorted in ASCENDING or DESCENDING order. Default varies by resource.
     */
    inline const Order& GetOrder() const{ return m_order; }

    /**
     * When you request lists of resources, you can optionally specify whether they are
     * sorted in ASCENDING or DESCENDING order. Default varies by resource.
     */
    inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }

    /**
     * When you request lists of resources, you can optionally specify whether they are
     * sorted in ASCENDING or DESCENDING order. Default varies by resource.
     */
    inline void SetOrder(const Order& value) { m_orderHasBeenSet = true; m_order = value; }

    /**
     * When you request lists of resources, you can optionally specify whether they are
     * sorted in ASCENDING or DESCENDING order. Default varies by resource.
     */
    inline void SetOrder(Order&& value) { m_orderHasBeenSet = true; m_order = std::move(value); }

    /**
     * When you request lists of resources, you can optionally specify whether they are
     * sorted in ASCENDING or DESCENDING order. Default varies by resource.
     */
    inline ListJobsRequest& WithOrder(const Order& value) { SetOrder(value); return *this;}

    /**
     * When you request lists of resources, you can optionally specify whether they are
     * sorted in ASCENDING or DESCENDING order. Default varies by resource.
     */
    inline ListJobsRequest& WithOrder(Order&& value) { SetOrder(std::move(value)); return *this;}


    /**
     * Provide a queue name to get back only jobs from that queue.
     */
    inline const Aws::String& GetQueue() const{ return m_queue; }

    /**
     * Provide a queue name to get back only jobs from that queue.
     */
    inline bool QueueHasBeenSet() const { return m_queueHasBeenSet; }

    /**
     * Provide a queue name to get back only jobs from that queue.
     */
    inline void SetQueue(const Aws::String& value) { m_queueHasBeenSet = true; m_queue = value; }

    /**
     * Provide a queue name to get back only jobs from that queue.
     */
    inline void SetQueue(Aws::String&& value) { m_queueHasBeenSet = true; m_queue = std::move(value); }

    /**
     * Provide a queue name to get back only jobs from that queue.
     */
    inline void SetQueue(const char* value) { m_queueHasBeenSet = true; m_queue.assign(value); }

    /**
     * Provide a queue name to get back only jobs from that queue.
     */
    inline ListJobsRequest& WithQueue(const Aws::String& value) { SetQueue(value); return *this;}

    /**
     * Provide a queue name to get back only jobs from that queue.
     */
    inline ListJobsRequest& WithQueue(Aws::String&& value) { SetQueue(std::move(value)); return *this;}

    /**
     * Provide a queue name to get back only jobs from that queue.
     */
    inline ListJobsRequest& WithQueue(const char* value) { SetQueue(value); return *this;}


    /**
     * A job's status can be SUBMITTED, PROGRESSING, COMPLETE, CANCELED, or ERROR.
     */
    inline const JobStatus& GetStatus() const{ return m_status; }

    /**
     * A job's status can be SUBMITTED, PROGRESSING, COMPLETE, CANCELED, or ERROR.
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * A job's status can be SUBMITTED, PROGRESSING, COMPLETE, CANCELED, or ERROR.
     */
    inline void SetStatus(const JobStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * A job's status can be SUBMITTED, PROGRESSING, COMPLETE, CANCELED, or ERROR.
     */
    inline void SetStatus(JobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * A job's status can be SUBMITTED, PROGRESSING, COMPLETE, CANCELED, or ERROR.
     */
    inline ListJobsRequest& WithStatus(const JobStatus& value) { SetStatus(value); return *this;}

    /**
     * A job's status can be SUBMITTED, PROGRESSING, COMPLETE, CANCELED, or ERROR.
     */
    inline ListJobsRequest& WithStatus(JobStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    Order m_order;
    bool m_orderHasBeenSet;

    Aws::String m_queue;
    bool m_queueHasBeenSet;

    JobStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
