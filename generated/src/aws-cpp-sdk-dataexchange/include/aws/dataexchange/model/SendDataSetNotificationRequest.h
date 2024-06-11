/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/dataexchange/DataExchangeRequest.h>
#include <aws/dataexchange/model/ScopeDetails.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dataexchange/model/NotificationDetails.h>
#include <aws/dataexchange/model/NotificationType.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace DataExchange
{
namespace Model
{

  /**
   */
  class SendDataSetNotificationRequest : public DataExchangeRequest
  {
  public:
    AWS_DATAEXCHANGE_API SendDataSetNotificationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendDataSetNotification"; }

    AWS_DATAEXCHANGE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Affected scope of this notification such as the underlying resources affected
     * by the notification event.</p>
     */
    inline const ScopeDetails& GetScope() const{ return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    inline void SetScope(const ScopeDetails& value) { m_scopeHasBeenSet = true; m_scope = value; }
    inline void SetScope(ScopeDetails&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }
    inline SendDataSetNotificationRequest& WithScope(const ScopeDetails& value) { SetScope(value); return *this;}
    inline SendDataSetNotificationRequest& WithScope(ScopeDetails&& value) { SetScope(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Idempotency key for the notification, this key allows us to deduplicate
     * notifications that are sent in quick succession erroneously.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline SendDataSetNotificationRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline SendDataSetNotificationRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline SendDataSetNotificationRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Free-form text field for providers to add information about their
     * notifications.</p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }
    inline SendDataSetNotificationRequest& WithComment(const Aws::String& value) { SetComment(value); return *this;}
    inline SendDataSetNotificationRequest& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}
    inline SendDataSetNotificationRequest& WithComment(const char* value) { SetComment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Affected data set of the notification.</p>
     */
    inline const Aws::String& GetDataSetId() const{ return m_dataSetId; }
    inline bool DataSetIdHasBeenSet() const { return m_dataSetIdHasBeenSet; }
    inline void SetDataSetId(const Aws::String& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = value; }
    inline void SetDataSetId(Aws::String&& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = std::move(value); }
    inline void SetDataSetId(const char* value) { m_dataSetIdHasBeenSet = true; m_dataSetId.assign(value); }
    inline SendDataSetNotificationRequest& WithDataSetId(const Aws::String& value) { SetDataSetId(value); return *this;}
    inline SendDataSetNotificationRequest& WithDataSetId(Aws::String&& value) { SetDataSetId(std::move(value)); return *this;}
    inline SendDataSetNotificationRequest& WithDataSetId(const char* value) { SetDataSetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Extra details specific to this notification type.</p>
     */
    inline const NotificationDetails& GetDetails() const{ return m_details; }
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }
    inline void SetDetails(const NotificationDetails& value) { m_detailsHasBeenSet = true; m_details = value; }
    inline void SetDetails(NotificationDetails&& value) { m_detailsHasBeenSet = true; m_details = std::move(value); }
    inline SendDataSetNotificationRequest& WithDetails(const NotificationDetails& value) { SetDetails(value); return *this;}
    inline SendDataSetNotificationRequest& WithDetails(NotificationDetails&& value) { SetDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the notification. Describing the kind of event the notification
     * is alerting you to.</p>
     */
    inline const NotificationType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const NotificationType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(NotificationType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline SendDataSetNotificationRequest& WithType(const NotificationType& value) { SetType(value); return *this;}
    inline SendDataSetNotificationRequest& WithType(NotificationType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    ScopeDetails m_scope;
    bool m_scopeHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;

    Aws::String m_dataSetId;
    bool m_dataSetIdHasBeenSet = false;

    NotificationDetails m_details;
    bool m_detailsHasBeenSet = false;

    NotificationType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
