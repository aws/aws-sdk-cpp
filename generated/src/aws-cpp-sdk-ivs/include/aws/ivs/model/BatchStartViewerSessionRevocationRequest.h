/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/ivs/IVSRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ivs/model/BatchStartViewerSessionRevocationViewerSession.h>
#include <utility>

namespace Aws
{
namespace IVS
{
namespace Model
{

  /**
   */
  class BatchStartViewerSessionRevocationRequest : public IVSRequest
  {
  public:
    AWS_IVS_API BatchStartViewerSessionRevocationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchStartViewerSessionRevocation"; }

    AWS_IVS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Array of viewer sessions, one per channel-ARN and viewer-ID pair.</p>
     */
    inline const Aws::Vector<BatchStartViewerSessionRevocationViewerSession>& GetViewerSessions() const { return m_viewerSessions; }
    inline bool ViewerSessionsHasBeenSet() const { return m_viewerSessionsHasBeenSet; }
    template<typename ViewerSessionsT = Aws::Vector<BatchStartViewerSessionRevocationViewerSession>>
    void SetViewerSessions(ViewerSessionsT&& value) { m_viewerSessionsHasBeenSet = true; m_viewerSessions = std::forward<ViewerSessionsT>(value); }
    template<typename ViewerSessionsT = Aws::Vector<BatchStartViewerSessionRevocationViewerSession>>
    BatchStartViewerSessionRevocationRequest& WithViewerSessions(ViewerSessionsT&& value) { SetViewerSessions(std::forward<ViewerSessionsT>(value)); return *this;}
    template<typename ViewerSessionsT = BatchStartViewerSessionRevocationViewerSession>
    BatchStartViewerSessionRevocationRequest& AddViewerSessions(ViewerSessionsT&& value) { m_viewerSessionsHasBeenSet = true; m_viewerSessions.emplace_back(std::forward<ViewerSessionsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<BatchStartViewerSessionRevocationViewerSession> m_viewerSessions;
    bool m_viewerSessionsHasBeenSet = false;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
