/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/iotevents/IoTEventsRequest.h>
#include <aws/iotevents/model/InputIdentifier.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoTEvents
{
namespace Model
{

  /**
   */
  class ListInputRoutingsRequest : public IoTEventsRequest
  {
  public:
    AWS_IOTEVENTS_API ListInputRoutingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListInputRoutings"; }

    AWS_IOTEVENTS_API Aws::String SerializePayload() const override;


    /**
     * <p> The identifer of the routed input. </p>
     */
    inline const InputIdentifier& GetInputIdentifier() const{ return m_inputIdentifier; }

    /**
     * <p> The identifer of the routed input. </p>
     */
    inline bool InputIdentifierHasBeenSet() const { return m_inputIdentifierHasBeenSet; }

    /**
     * <p> The identifer of the routed input. </p>
     */
    inline void SetInputIdentifier(const InputIdentifier& value) { m_inputIdentifierHasBeenSet = true; m_inputIdentifier = value; }

    /**
     * <p> The identifer of the routed input. </p>
     */
    inline void SetInputIdentifier(InputIdentifier&& value) { m_inputIdentifierHasBeenSet = true; m_inputIdentifier = std::move(value); }

    /**
     * <p> The identifer of the routed input. </p>
     */
    inline ListInputRoutingsRequest& WithInputIdentifier(const InputIdentifier& value) { SetInputIdentifier(value); return *this;}

    /**
     * <p> The identifer of the routed input. </p>
     */
    inline ListInputRoutingsRequest& WithInputIdentifier(InputIdentifier&& value) { SetInputIdentifier(std::move(value)); return *this;}


    /**
     * <p> The maximum number of results to be returned per request. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p> The maximum number of results to be returned per request. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p> The maximum number of results to be returned per request. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p> The maximum number of results to be returned per request. </p>
     */
    inline ListInputRoutingsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p> The token that you can use to return the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> The token that you can use to return the next set of results. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p> The token that you can use to return the next set of results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> The token that you can use to return the next set of results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p> The token that you can use to return the next set of results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> The token that you can use to return the next set of results. </p>
     */
    inline ListInputRoutingsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> The token that you can use to return the next set of results. </p>
     */
    inline ListInputRoutingsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> The token that you can use to return the next set of results. </p>
     */
    inline ListInputRoutingsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    InputIdentifier m_inputIdentifier;
    bool m_inputIdentifierHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
