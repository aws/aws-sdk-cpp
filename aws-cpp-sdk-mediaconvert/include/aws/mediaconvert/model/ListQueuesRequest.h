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
#include <aws/mediaconvert/model/QueueListBy.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/Order.h>
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
  class AWS_MEDIACONVERT_API ListQueuesRequest : public MediaConvertRequest
  {
  public:
    ListQueuesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListQueues"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * Optional. When you request a list of queues, you can choose to list them
     * alphabetically by NAME or chronologically by CREATION_DATE. If you don't
     * specify, the service will list them by creation date.
     */
    inline const QueueListBy& GetListBy() const{ return m_listBy; }

    /**
     * Optional. When you request a list of queues, you can choose to list them
     * alphabetically by NAME or chronologically by CREATION_DATE. If you don't
     * specify, the service will list them by creation date.
     */
    inline bool ListByHasBeenSet() const { return m_listByHasBeenSet; }

    /**
     * Optional. When you request a list of queues, you can choose to list them
     * alphabetically by NAME or chronologically by CREATION_DATE. If you don't
     * specify, the service will list them by creation date.
     */
    inline void SetListBy(const QueueListBy& value) { m_listByHasBeenSet = true; m_listBy = value; }

    /**
     * Optional. When you request a list of queues, you can choose to list them
     * alphabetically by NAME or chronologically by CREATION_DATE. If you don't
     * specify, the service will list them by creation date.
     */
    inline void SetListBy(QueueListBy&& value) { m_listByHasBeenSet = true; m_listBy = std::move(value); }

    /**
     * Optional. When you request a list of queues, you can choose to list them
     * alphabetically by NAME or chronologically by CREATION_DATE. If you don't
     * specify, the service will list them by creation date.
     */
    inline ListQueuesRequest& WithListBy(const QueueListBy& value) { SetListBy(value); return *this;}

    /**
     * Optional. When you request a list of queues, you can choose to list them
     * alphabetically by NAME or chronologically by CREATION_DATE. If you don't
     * specify, the service will list them by creation date.
     */
    inline ListQueuesRequest& WithListBy(QueueListBy&& value) { SetListBy(std::move(value)); return *this;}


    /**
     * Optional. Number of queues, up to twenty, that will be returned at one time.
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * Optional. Number of queues, up to twenty, that will be returned at one time.
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * Optional. Number of queues, up to twenty, that will be returned at one time.
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * Optional. Number of queues, up to twenty, that will be returned at one time.
     */
    inline ListQueuesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * Use this string, provided with the response to a previous request, to request
     * the next batch of queues.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * Use this string, provided with the response to a previous request, to request
     * the next batch of queues.
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * Use this string, provided with the response to a previous request, to request
     * the next batch of queues.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * Use this string, provided with the response to a previous request, to request
     * the next batch of queues.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * Use this string, provided with the response to a previous request, to request
     * the next batch of queues.
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * Use this string, provided with the response to a previous request, to request
     * the next batch of queues.
     */
    inline ListQueuesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * Use this string, provided with the response to a previous request, to request
     * the next batch of queues.
     */
    inline ListQueuesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * Use this string, provided with the response to a previous request, to request
     * the next batch of queues.
     */
    inline ListQueuesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


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
    inline ListQueuesRequest& WithOrder(const Order& value) { SetOrder(value); return *this;}

    /**
     * When you request lists of resources, you can optionally specify whether they are
     * sorted in ASCENDING or DESCENDING order. Default varies by resource.
     */
    inline ListQueuesRequest& WithOrder(Order&& value) { SetOrder(std::move(value)); return *this;}

  private:

    QueueListBy m_listBy;
    bool m_listByHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    Order m_order;
    bool m_orderHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
