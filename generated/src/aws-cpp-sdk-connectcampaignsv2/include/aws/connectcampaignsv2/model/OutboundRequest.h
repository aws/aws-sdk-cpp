/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/connectcampaignsv2/model/ChannelSubtypeParameters.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ConnectCampaignsV2
{
namespace Model
{

  /**
   * <p>An outbound request for a campaign.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/OutboundRequest">AWS
   * API Reference</a></p>
   */
  class OutboundRequest
  {
  public:
    AWS_CONNECTCAMPAIGNSV2_API OutboundRequest() = default;
    AWS_CONNECTCAMPAIGNSV2_API OutboundRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API OutboundRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    OutboundRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetExpirationTime() const { return m_expirationTime; }
    inline bool ExpirationTimeHasBeenSet() const { return m_expirationTimeHasBeenSet; }
    template<typename ExpirationTimeT = Aws::Utils::DateTime>
    void SetExpirationTime(ExpirationTimeT&& value) { m_expirationTimeHasBeenSet = true; m_expirationTime = std::forward<ExpirationTimeT>(value); }
    template<typename ExpirationTimeT = Aws::Utils::DateTime>
    OutboundRequest& WithExpirationTime(ExpirationTimeT&& value) { SetExpirationTime(std::forward<ExpirationTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ChannelSubtypeParameters& GetChannelSubtypeParameters() const { return m_channelSubtypeParameters; }
    inline bool ChannelSubtypeParametersHasBeenSet() const { return m_channelSubtypeParametersHasBeenSet; }
    template<typename ChannelSubtypeParametersT = ChannelSubtypeParameters>
    void SetChannelSubtypeParameters(ChannelSubtypeParametersT&& value) { m_channelSubtypeParametersHasBeenSet = true; m_channelSubtypeParameters = std::forward<ChannelSubtypeParametersT>(value); }
    template<typename ChannelSubtypeParametersT = ChannelSubtypeParameters>
    OutboundRequest& WithChannelSubtypeParameters(ChannelSubtypeParametersT&& value) { SetChannelSubtypeParameters(std::forward<ChannelSubtypeParametersT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Utils::DateTime m_expirationTime{};
    bool m_expirationTimeHasBeenSet = false;

    ChannelSubtypeParameters m_channelSubtypeParameters;
    bool m_channelSubtypeParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
