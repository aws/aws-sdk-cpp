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
    AWS_CONNECTCAMPAIGNSV2_API OutboundRequest();
    AWS_CONNECTCAMPAIGNSV2_API OutboundRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API OutboundRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline OutboundRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline OutboundRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline OutboundRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetExpirationTime() const{ return m_expirationTime; }
    inline bool ExpirationTimeHasBeenSet() const { return m_expirationTimeHasBeenSet; }
    inline void SetExpirationTime(const Aws::Utils::DateTime& value) { m_expirationTimeHasBeenSet = true; m_expirationTime = value; }
    inline void SetExpirationTime(Aws::Utils::DateTime&& value) { m_expirationTimeHasBeenSet = true; m_expirationTime = std::move(value); }
    inline OutboundRequest& WithExpirationTime(const Aws::Utils::DateTime& value) { SetExpirationTime(value); return *this;}
    inline OutboundRequest& WithExpirationTime(Aws::Utils::DateTime&& value) { SetExpirationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ChannelSubtypeParameters& GetChannelSubtypeParameters() const{ return m_channelSubtypeParameters; }
    inline bool ChannelSubtypeParametersHasBeenSet() const { return m_channelSubtypeParametersHasBeenSet; }
    inline void SetChannelSubtypeParameters(const ChannelSubtypeParameters& value) { m_channelSubtypeParametersHasBeenSet = true; m_channelSubtypeParameters = value; }
    inline void SetChannelSubtypeParameters(ChannelSubtypeParameters&& value) { m_channelSubtypeParametersHasBeenSet = true; m_channelSubtypeParameters = std::move(value); }
    inline OutboundRequest& WithChannelSubtypeParameters(const ChannelSubtypeParameters& value) { SetChannelSubtypeParameters(value); return *this;}
    inline OutboundRequest& WithChannelSubtypeParameters(ChannelSubtypeParameters&& value) { SetChannelSubtypeParameters(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Utils::DateTime m_expirationTime;
    bool m_expirationTimeHasBeenSet = false;

    ChannelSubtypeParameters m_channelSubtypeParameters;
    bool m_channelSubtypeParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
