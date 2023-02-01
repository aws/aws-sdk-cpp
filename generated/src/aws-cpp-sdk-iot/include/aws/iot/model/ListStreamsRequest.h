/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoT
{
namespace Model
{

  /**
   */
  class ListStreamsRequest : public IoTRequest
  {
  public:
    AWS_IOT_API ListStreamsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListStreams"; }

    AWS_IOT_API Aws::String SerializePayload() const override;

    AWS_IOT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The maximum number of results to return at a time.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return at a time.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return at a time.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return at a time.</p>
     */
    inline ListStreamsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>A token used to get the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token used to get the next set of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token used to get the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token used to get the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token used to get the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token used to get the next set of results.</p>
     */
    inline ListStreamsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token used to get the next set of results.</p>
     */
    inline ListStreamsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token used to get the next set of results.</p>
     */
    inline ListStreamsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Set to true to return the list of streams in ascending order.</p>
     */
    inline bool GetAscendingOrder() const{ return m_ascendingOrder; }

    /**
     * <p>Set to true to return the list of streams in ascending order.</p>
     */
    inline bool AscendingOrderHasBeenSet() const { return m_ascendingOrderHasBeenSet; }

    /**
     * <p>Set to true to return the list of streams in ascending order.</p>
     */
    inline void SetAscendingOrder(bool value) { m_ascendingOrderHasBeenSet = true; m_ascendingOrder = value; }

    /**
     * <p>Set to true to return the list of streams in ascending order.</p>
     */
    inline ListStreamsRequest& WithAscendingOrder(bool value) { SetAscendingOrder(value); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    bool m_ascendingOrder;
    bool m_ascendingOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
