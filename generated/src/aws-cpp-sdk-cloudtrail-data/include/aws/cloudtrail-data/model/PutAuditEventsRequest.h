/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail-data/CloudTrailData_EXPORTS.h>
#include <aws/cloudtrail-data/CloudTrailDataRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudtrail-data/model/AuditEvent.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace CloudTrailData
{
namespace Model
{

  /**
   */
  class PutAuditEventsRequest : public CloudTrailDataRequest
  {
  public:
    AWS_CLOUDTRAILDATA_API PutAuditEventsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutAuditEvents"; }

    AWS_CLOUDTRAILDATA_API Aws::String SerializePayload() const override;

    AWS_CLOUDTRAILDATA_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The JSON payload of events that you want to ingest. You can also point to the
     * JSON event payload in a file.</p>
     */
    inline const Aws::Vector<AuditEvent>& GetAuditEvents() const { return m_auditEvents; }
    inline bool AuditEventsHasBeenSet() const { return m_auditEventsHasBeenSet; }
    template<typename AuditEventsT = Aws::Vector<AuditEvent>>
    void SetAuditEvents(AuditEventsT&& value) { m_auditEventsHasBeenSet = true; m_auditEvents = std::forward<AuditEventsT>(value); }
    template<typename AuditEventsT = Aws::Vector<AuditEvent>>
    PutAuditEventsRequest& WithAuditEvents(AuditEventsT&& value) { SetAuditEvents(std::forward<AuditEventsT>(value)); return *this;}
    template<typename AuditEventsT = AuditEvent>
    PutAuditEventsRequest& AddAuditEvents(AuditEventsT&& value) { m_auditEventsHasBeenSet = true; m_auditEvents.emplace_back(std::forward<AuditEventsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN or ID (the ARN suffix) of a channel.</p>
     */
    inline const Aws::String& GetChannelArn() const { return m_channelArn; }
    inline bool ChannelArnHasBeenSet() const { return m_channelArnHasBeenSet; }
    template<typename ChannelArnT = Aws::String>
    void SetChannelArn(ChannelArnT&& value) { m_channelArnHasBeenSet = true; m_channelArn = std::forward<ChannelArnT>(value); }
    template<typename ChannelArnT = Aws::String>
    PutAuditEventsRequest& WithChannelArn(ChannelArnT&& value) { SetChannelArn(std::forward<ChannelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier that is conditionally required when the channel's
     * resource policy includes an external ID. This value can be any string, such as a
     * passphrase or account number.</p>
     */
    inline const Aws::String& GetExternalId() const { return m_externalId; }
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }
    template<typename ExternalIdT = Aws::String>
    void SetExternalId(ExternalIdT&& value) { m_externalIdHasBeenSet = true; m_externalId = std::forward<ExternalIdT>(value); }
    template<typename ExternalIdT = Aws::String>
    PutAuditEventsRequest& WithExternalId(ExternalIdT&& value) { SetExternalId(std::forward<ExternalIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AuditEvent> m_auditEvents;
    bool m_auditEventsHasBeenSet = false;

    Aws::String m_channelArn;
    bool m_channelArnHasBeenSet = false;

    Aws::String m_externalId;
    bool m_externalIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrailData
} // namespace Aws
