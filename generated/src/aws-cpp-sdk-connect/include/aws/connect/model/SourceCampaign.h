/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Information about the campaign.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/SourceCampaign">AWS
   * API Reference</a></p>
   */
  class SourceCampaign
  {
  public:
    AWS_CONNECT_API SourceCampaign() = default;
    AWS_CONNECT_API SourceCampaign(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API SourceCampaign& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for a campaign.</p>
     */
    inline const Aws::String& GetCampaignId() const { return m_campaignId; }
    inline bool CampaignIdHasBeenSet() const { return m_campaignIdHasBeenSet; }
    template<typename CampaignIdT = Aws::String>
    void SetCampaignId(CampaignIdT&& value) { m_campaignIdHasBeenSet = true; m_campaignId = std::forward<CampaignIdT>(value); }
    template<typename CampaignIdT = Aws::String>
    SourceCampaign& WithCampaignId(CampaignIdT&& value) { SetCampaignId(std::forward<CampaignIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for a each request part of same campaign.</p>
     */
    inline const Aws::String& GetOutboundRequestId() const { return m_outboundRequestId; }
    inline bool OutboundRequestIdHasBeenSet() const { return m_outboundRequestIdHasBeenSet; }
    template<typename OutboundRequestIdT = Aws::String>
    void SetOutboundRequestId(OutboundRequestIdT&& value) { m_outboundRequestIdHasBeenSet = true; m_outboundRequestId = std::forward<OutboundRequestIdT>(value); }
    template<typename OutboundRequestIdT = Aws::String>
    SourceCampaign& WithOutboundRequestId(OutboundRequestIdT&& value) { SetOutboundRequestId(std::forward<OutboundRequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_campaignId;
    bool m_campaignIdHasBeenSet = false;

    Aws::String m_outboundRequestId;
    bool m_outboundRequestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
