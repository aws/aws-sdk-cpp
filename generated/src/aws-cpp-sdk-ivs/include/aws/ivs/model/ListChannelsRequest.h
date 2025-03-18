/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/ivs/IVSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IVS
{
namespace Model
{

  /**
   */
  class ListChannelsRequest : public IVSRequest
  {
  public:
    AWS_IVS_API ListChannelsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListChannels"; }

    AWS_IVS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Filters the channel list to match the specified name.</p>
     */
    inline const Aws::String& GetFilterByName() const { return m_filterByName; }
    inline bool FilterByNameHasBeenSet() const { return m_filterByNameHasBeenSet; }
    template<typename FilterByNameT = Aws::String>
    void SetFilterByName(FilterByNameT&& value) { m_filterByNameHasBeenSet = true; m_filterByName = std::forward<FilterByNameT>(value); }
    template<typename FilterByNameT = Aws::String>
    ListChannelsRequest& WithFilterByName(FilterByNameT&& value) { SetFilterByName(std::forward<FilterByNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the channel list to match the specified policy.</p>
     */
    inline const Aws::String& GetFilterByPlaybackRestrictionPolicyArn() const { return m_filterByPlaybackRestrictionPolicyArn; }
    inline bool FilterByPlaybackRestrictionPolicyArnHasBeenSet() const { return m_filterByPlaybackRestrictionPolicyArnHasBeenSet; }
    template<typename FilterByPlaybackRestrictionPolicyArnT = Aws::String>
    void SetFilterByPlaybackRestrictionPolicyArn(FilterByPlaybackRestrictionPolicyArnT&& value) { m_filterByPlaybackRestrictionPolicyArnHasBeenSet = true; m_filterByPlaybackRestrictionPolicyArn = std::forward<FilterByPlaybackRestrictionPolicyArnT>(value); }
    template<typename FilterByPlaybackRestrictionPolicyArnT = Aws::String>
    ListChannelsRequest& WithFilterByPlaybackRestrictionPolicyArn(FilterByPlaybackRestrictionPolicyArnT&& value) { SetFilterByPlaybackRestrictionPolicyArn(std::forward<FilterByPlaybackRestrictionPolicyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the channel list to match the specified recording-configuration
     * ARN.</p>
     */
    inline const Aws::String& GetFilterByRecordingConfigurationArn() const { return m_filterByRecordingConfigurationArn; }
    inline bool FilterByRecordingConfigurationArnHasBeenSet() const { return m_filterByRecordingConfigurationArnHasBeenSet; }
    template<typename FilterByRecordingConfigurationArnT = Aws::String>
    void SetFilterByRecordingConfigurationArn(FilterByRecordingConfigurationArnT&& value) { m_filterByRecordingConfigurationArnHasBeenSet = true; m_filterByRecordingConfigurationArn = std::forward<FilterByRecordingConfigurationArnT>(value); }
    template<typename FilterByRecordingConfigurationArnT = Aws::String>
    ListChannelsRequest& WithFilterByRecordingConfigurationArn(FilterByRecordingConfigurationArnT&& value) { SetFilterByRecordingConfigurationArn(std::forward<FilterByRecordingConfigurationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum number of channels to return. Default: 100.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListChannelsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The first channel to retrieve. This is used for pagination; see the
     * <code>nextToken</code> response field.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListChannelsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_filterByName;
    bool m_filterByNameHasBeenSet = false;

    Aws::String m_filterByPlaybackRestrictionPolicyArn;
    bool m_filterByPlaybackRestrictionPolicyArnHasBeenSet = false;

    Aws::String m_filterByRecordingConfigurationArn;
    bool m_filterByRecordingConfigurationArnHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
