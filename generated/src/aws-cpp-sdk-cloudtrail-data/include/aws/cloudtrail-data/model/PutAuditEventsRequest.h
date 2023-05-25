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
    AWS_CLOUDTRAILDATA_API PutAuditEventsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutAuditEvents"; }

    AWS_CLOUDTRAILDATA_API Aws::String SerializePayload() const override;

    AWS_CLOUDTRAILDATA_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The JSON payload of events that you want to ingest. You can also point to the
     * JSON event payload in a file.</p>
     */
    inline const Aws::Vector<AuditEvent>& GetAuditEvents() const{ return m_auditEvents; }

    /**
     * <p>The JSON payload of events that you want to ingest. You can also point to the
     * JSON event payload in a file.</p>
     */
    inline bool AuditEventsHasBeenSet() const { return m_auditEventsHasBeenSet; }

    /**
     * <p>The JSON payload of events that you want to ingest. You can also point to the
     * JSON event payload in a file.</p>
     */
    inline void SetAuditEvents(const Aws::Vector<AuditEvent>& value) { m_auditEventsHasBeenSet = true; m_auditEvents = value; }

    /**
     * <p>The JSON payload of events that you want to ingest. You can also point to the
     * JSON event payload in a file.</p>
     */
    inline void SetAuditEvents(Aws::Vector<AuditEvent>&& value) { m_auditEventsHasBeenSet = true; m_auditEvents = std::move(value); }

    /**
     * <p>The JSON payload of events that you want to ingest. You can also point to the
     * JSON event payload in a file.</p>
     */
    inline PutAuditEventsRequest& WithAuditEvents(const Aws::Vector<AuditEvent>& value) { SetAuditEvents(value); return *this;}

    /**
     * <p>The JSON payload of events that you want to ingest. You can also point to the
     * JSON event payload in a file.</p>
     */
    inline PutAuditEventsRequest& WithAuditEvents(Aws::Vector<AuditEvent>&& value) { SetAuditEvents(std::move(value)); return *this;}

    /**
     * <p>The JSON payload of events that you want to ingest. You can also point to the
     * JSON event payload in a file.</p>
     */
    inline PutAuditEventsRequest& AddAuditEvents(const AuditEvent& value) { m_auditEventsHasBeenSet = true; m_auditEvents.push_back(value); return *this; }

    /**
     * <p>The JSON payload of events that you want to ingest. You can also point to the
     * JSON event payload in a file.</p>
     */
    inline PutAuditEventsRequest& AddAuditEvents(AuditEvent&& value) { m_auditEventsHasBeenSet = true; m_auditEvents.push_back(std::move(value)); return *this; }


    /**
     * <p>The ARN or ID (the ARN suffix) of a channel.</p>
     */
    inline const Aws::String& GetChannelArn() const{ return m_channelArn; }

    /**
     * <p>The ARN or ID (the ARN suffix) of a channel.</p>
     */
    inline bool ChannelArnHasBeenSet() const { return m_channelArnHasBeenSet; }

    /**
     * <p>The ARN or ID (the ARN suffix) of a channel.</p>
     */
    inline void SetChannelArn(const Aws::String& value) { m_channelArnHasBeenSet = true; m_channelArn = value; }

    /**
     * <p>The ARN or ID (the ARN suffix) of a channel.</p>
     */
    inline void SetChannelArn(Aws::String&& value) { m_channelArnHasBeenSet = true; m_channelArn = std::move(value); }

    /**
     * <p>The ARN or ID (the ARN suffix) of a channel.</p>
     */
    inline void SetChannelArn(const char* value) { m_channelArnHasBeenSet = true; m_channelArn.assign(value); }

    /**
     * <p>The ARN or ID (the ARN suffix) of a channel.</p>
     */
    inline PutAuditEventsRequest& WithChannelArn(const Aws::String& value) { SetChannelArn(value); return *this;}

    /**
     * <p>The ARN or ID (the ARN suffix) of a channel.</p>
     */
    inline PutAuditEventsRequest& WithChannelArn(Aws::String&& value) { SetChannelArn(std::move(value)); return *this;}

    /**
     * <p>The ARN or ID (the ARN suffix) of a channel.</p>
     */
    inline PutAuditEventsRequest& WithChannelArn(const char* value) { SetChannelArn(value); return *this;}


    /**
     * <p>A unique identifier that is conditionally required when the channel's
     * resource policy includes an external ID. This value can be any string, such as a
     * passphrase or account number.</p>
     */
    inline const Aws::String& GetExternalId() const{ return m_externalId; }

    /**
     * <p>A unique identifier that is conditionally required when the channel's
     * resource policy includes an external ID. This value can be any string, such as a
     * passphrase or account number.</p>
     */
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }

    /**
     * <p>A unique identifier that is conditionally required when the channel's
     * resource policy includes an external ID. This value can be any string, such as a
     * passphrase or account number.</p>
     */
    inline void SetExternalId(const Aws::String& value) { m_externalIdHasBeenSet = true; m_externalId = value; }

    /**
     * <p>A unique identifier that is conditionally required when the channel's
     * resource policy includes an external ID. This value can be any string, such as a
     * passphrase or account number.</p>
     */
    inline void SetExternalId(Aws::String&& value) { m_externalIdHasBeenSet = true; m_externalId = std::move(value); }

    /**
     * <p>A unique identifier that is conditionally required when the channel's
     * resource policy includes an external ID. This value can be any string, such as a
     * passphrase or account number.</p>
     */
    inline void SetExternalId(const char* value) { m_externalIdHasBeenSet = true; m_externalId.assign(value); }

    /**
     * <p>A unique identifier that is conditionally required when the channel's
     * resource policy includes an external ID. This value can be any string, such as a
     * passphrase or account number.</p>
     */
    inline PutAuditEventsRequest& WithExternalId(const Aws::String& value) { SetExternalId(value); return *this;}

    /**
     * <p>A unique identifier that is conditionally required when the channel's
     * resource policy includes an external ID. This value can be any string, such as a
     * passphrase or account number.</p>
     */
    inline PutAuditEventsRequest& WithExternalId(Aws::String&& value) { SetExternalId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier that is conditionally required when the channel's
     * resource policy includes an external ID. This value can be any string, such as a
     * passphrase or account number.</p>
     */
    inline PutAuditEventsRequest& WithExternalId(const char* value) { SetExternalId(value); return *this;}

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
