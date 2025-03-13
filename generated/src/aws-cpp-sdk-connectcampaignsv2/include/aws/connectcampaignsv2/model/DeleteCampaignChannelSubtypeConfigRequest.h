/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/connectcampaignsv2/ConnectCampaignsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectcampaignsv2/model/ChannelSubtype.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace ConnectCampaignsV2
{
namespace Model
{

  /**
   * <p>The request for DeleteCampaignChannelSubtypeConfig API.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/DeleteCampaignChannelSubtypeConfigRequest">AWS
   * API Reference</a></p>
   */
  class DeleteCampaignChannelSubtypeConfigRequest : public ConnectCampaignsV2Request
  {
  public:
    AWS_CONNECTCAMPAIGNSV2_API DeleteCampaignChannelSubtypeConfigRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteCampaignChannelSubtypeConfig"; }

    AWS_CONNECTCAMPAIGNSV2_API Aws::String SerializePayload() const override;

    AWS_CONNECTCAMPAIGNSV2_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    DeleteCampaignChannelSubtypeConfigRequest& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline ChannelSubtype GetChannelSubtype() const { return m_channelSubtype; }
    inline bool ChannelSubtypeHasBeenSet() const { return m_channelSubtypeHasBeenSet; }
    inline void SetChannelSubtype(ChannelSubtype value) { m_channelSubtypeHasBeenSet = true; m_channelSubtype = value; }
    inline DeleteCampaignChannelSubtypeConfigRequest& WithChannelSubtype(ChannelSubtype value) { SetChannelSubtype(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    ChannelSubtype m_channelSubtype{ChannelSubtype::NOT_SET};
    bool m_channelSubtypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
