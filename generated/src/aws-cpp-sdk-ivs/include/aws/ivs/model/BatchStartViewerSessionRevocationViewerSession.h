/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
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
namespace IVS
{
namespace Model
{

  /**
   * <p>A viewer session to revoke in the call to
   * <a>BatchStartViewerSessionRevocation</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/BatchStartViewerSessionRevocationViewerSession">AWS
   * API Reference</a></p>
   */
  class BatchStartViewerSessionRevocationViewerSession
  {
  public:
    AWS_IVS_API BatchStartViewerSessionRevocationViewerSession() = default;
    AWS_IVS_API BatchStartViewerSessionRevocationViewerSession(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVS_API BatchStartViewerSessionRevocationViewerSession& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the channel associated with the viewer session to revoke.</p>
     */
    inline const Aws::String& GetChannelArn() const { return m_channelArn; }
    inline bool ChannelArnHasBeenSet() const { return m_channelArnHasBeenSet; }
    template<typename ChannelArnT = Aws::String>
    void SetChannelArn(ChannelArnT&& value) { m_channelArnHasBeenSet = true; m_channelArn = std::forward<ChannelArnT>(value); }
    template<typename ChannelArnT = Aws::String>
    BatchStartViewerSessionRevocationViewerSession& WithChannelArn(ChannelArnT&& value) { SetChannelArn(std::forward<ChannelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the viewer associated with the viewer session to revoke. Do not use
     * this field for personally identifying, confidential, or sensitive
     * information.</p>
     */
    inline const Aws::String& GetViewerId() const { return m_viewerId; }
    inline bool ViewerIdHasBeenSet() const { return m_viewerIdHasBeenSet; }
    template<typename ViewerIdT = Aws::String>
    void SetViewerId(ViewerIdT&& value) { m_viewerIdHasBeenSet = true; m_viewerId = std::forward<ViewerIdT>(value); }
    template<typename ViewerIdT = Aws::String>
    BatchStartViewerSessionRevocationViewerSession& WithViewerId(ViewerIdT&& value) { SetViewerId(std::forward<ViewerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional filter on which versions of the viewer session to revoke. All
     * versions less than or equal to the specified version will be revoked. Default:
     * 0.</p>
     */
    inline int GetViewerSessionVersionsLessThanOrEqualTo() const { return m_viewerSessionVersionsLessThanOrEqualTo; }
    inline bool ViewerSessionVersionsLessThanOrEqualToHasBeenSet() const { return m_viewerSessionVersionsLessThanOrEqualToHasBeenSet; }
    inline void SetViewerSessionVersionsLessThanOrEqualTo(int value) { m_viewerSessionVersionsLessThanOrEqualToHasBeenSet = true; m_viewerSessionVersionsLessThanOrEqualTo = value; }
    inline BatchStartViewerSessionRevocationViewerSession& WithViewerSessionVersionsLessThanOrEqualTo(int value) { SetViewerSessionVersionsLessThanOrEqualTo(value); return *this;}
    ///@}
  private:

    Aws::String m_channelArn;
    bool m_channelArnHasBeenSet = false;

    Aws::String m_viewerId;
    bool m_viewerIdHasBeenSet = false;

    int m_viewerSessionVersionsLessThanOrEqualTo{0};
    bool m_viewerSessionVersionsLessThanOrEqualToHasBeenSet = false;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
