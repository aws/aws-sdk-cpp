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
    AWS_IOTEVENTS_API ListInputRoutingsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListInputRoutings"; }

    AWS_IOTEVENTS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The identifer of the routed input. </p>
     */
    inline const InputIdentifier& GetInputIdentifier() const { return m_inputIdentifier; }
    inline bool InputIdentifierHasBeenSet() const { return m_inputIdentifierHasBeenSet; }
    template<typename InputIdentifierT = InputIdentifier>
    void SetInputIdentifier(InputIdentifierT&& value) { m_inputIdentifierHasBeenSet = true; m_inputIdentifier = std::forward<InputIdentifierT>(value); }
    template<typename InputIdentifierT = InputIdentifier>
    ListInputRoutingsRequest& WithInputIdentifier(InputIdentifierT&& value) { SetInputIdentifier(std::forward<InputIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The maximum number of results to be returned per request. </p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListInputRoutingsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The token that you can use to return the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListInputRoutingsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    InputIdentifier m_inputIdentifier;
    bool m_inputIdentifierHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
