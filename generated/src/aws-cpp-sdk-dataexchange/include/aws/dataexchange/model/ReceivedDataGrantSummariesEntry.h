/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dataexchange/model/DataGrantAcceptanceState.h>
#include <aws/core/utils/DateTime.h>
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
namespace DataExchange
{
namespace Model
{

  /**
   * <p>Information about a received data grant.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/ReceivedDataGrantSummariesEntry">AWS
   * API Reference</a></p>
   */
  class ReceivedDataGrantSummariesEntry
  {
  public:
    AWS_DATAEXCHANGE_API ReceivedDataGrantSummariesEntry();
    AWS_DATAEXCHANGE_API ReceivedDataGrantSummariesEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API ReceivedDataGrantSummariesEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the data grant.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ReceivedDataGrantSummariesEntry& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ReceivedDataGrantSummariesEntry& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ReceivedDataGrantSummariesEntry& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the data grant sender.</p>
     */
    inline const Aws::String& GetSenderPrincipal() const{ return m_senderPrincipal; }
    inline bool SenderPrincipalHasBeenSet() const { return m_senderPrincipalHasBeenSet; }
    inline void SetSenderPrincipal(const Aws::String& value) { m_senderPrincipalHasBeenSet = true; m_senderPrincipal = value; }
    inline void SetSenderPrincipal(Aws::String&& value) { m_senderPrincipalHasBeenSet = true; m_senderPrincipal = std::move(value); }
    inline void SetSenderPrincipal(const char* value) { m_senderPrincipalHasBeenSet = true; m_senderPrincipal.assign(value); }
    inline ReceivedDataGrantSummariesEntry& WithSenderPrincipal(const Aws::String& value) { SetSenderPrincipal(value); return *this;}
    inline ReceivedDataGrantSummariesEntry& WithSenderPrincipal(Aws::String&& value) { SetSenderPrincipal(std::move(value)); return *this;}
    inline ReceivedDataGrantSummariesEntry& WithSenderPrincipal(const char* value) { SetSenderPrincipal(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the data grant receiver.</p>
     */
    inline const Aws::String& GetReceiverPrincipal() const{ return m_receiverPrincipal; }
    inline bool ReceiverPrincipalHasBeenSet() const { return m_receiverPrincipalHasBeenSet; }
    inline void SetReceiverPrincipal(const Aws::String& value) { m_receiverPrincipalHasBeenSet = true; m_receiverPrincipal = value; }
    inline void SetReceiverPrincipal(Aws::String&& value) { m_receiverPrincipalHasBeenSet = true; m_receiverPrincipal = std::move(value); }
    inline void SetReceiverPrincipal(const char* value) { m_receiverPrincipalHasBeenSet = true; m_receiverPrincipal.assign(value); }
    inline ReceivedDataGrantSummariesEntry& WithReceiverPrincipal(const Aws::String& value) { SetReceiverPrincipal(value); return *this;}
    inline ReceivedDataGrantSummariesEntry& WithReceiverPrincipal(Aws::String&& value) { SetReceiverPrincipal(std::move(value)); return *this;}
    inline ReceivedDataGrantSummariesEntry& WithReceiverPrincipal(const char* value) { SetReceiverPrincipal(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The acceptance state of the data grant.</p>
     */
    inline const DataGrantAcceptanceState& GetAcceptanceState() const{ return m_acceptanceState; }
    inline bool AcceptanceStateHasBeenSet() const { return m_acceptanceStateHasBeenSet; }
    inline void SetAcceptanceState(const DataGrantAcceptanceState& value) { m_acceptanceStateHasBeenSet = true; m_acceptanceState = value; }
    inline void SetAcceptanceState(DataGrantAcceptanceState&& value) { m_acceptanceStateHasBeenSet = true; m_acceptanceState = std::move(value); }
    inline ReceivedDataGrantSummariesEntry& WithAcceptanceState(const DataGrantAcceptanceState& value) { SetAcceptanceState(value); return *this;}
    inline ReceivedDataGrantSummariesEntry& WithAcceptanceState(DataGrantAcceptanceState&& value) { SetAcceptanceState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the data grant was accepted.</p>
     */
    inline const Aws::Utils::DateTime& GetAcceptedAt() const{ return m_acceptedAt; }
    inline bool AcceptedAtHasBeenSet() const { return m_acceptedAtHasBeenSet; }
    inline void SetAcceptedAt(const Aws::Utils::DateTime& value) { m_acceptedAtHasBeenSet = true; m_acceptedAt = value; }
    inline void SetAcceptedAt(Aws::Utils::DateTime&& value) { m_acceptedAtHasBeenSet = true; m_acceptedAt = std::move(value); }
    inline ReceivedDataGrantSummariesEntry& WithAcceptedAt(const Aws::Utils::DateTime& value) { SetAcceptedAt(value); return *this;}
    inline ReceivedDataGrantSummariesEntry& WithAcceptedAt(Aws::Utils::DateTime&& value) { SetAcceptedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when access to the associated data set ends.</p>
     */
    inline const Aws::Utils::DateTime& GetEndsAt() const{ return m_endsAt; }
    inline bool EndsAtHasBeenSet() const { return m_endsAtHasBeenSet; }
    inline void SetEndsAt(const Aws::Utils::DateTime& value) { m_endsAtHasBeenSet = true; m_endsAt = value; }
    inline void SetEndsAt(Aws::Utils::DateTime&& value) { m_endsAtHasBeenSet = true; m_endsAt = std::move(value); }
    inline ReceivedDataGrantSummariesEntry& WithEndsAt(const Aws::Utils::DateTime& value) { SetEndsAt(value); return *this;}
    inline ReceivedDataGrantSummariesEntry& WithEndsAt(Aws::Utils::DateTime&& value) { SetEndsAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the data set associated to the data grant.</p>
     */
    inline const Aws::String& GetDataSetId() const{ return m_dataSetId; }
    inline bool DataSetIdHasBeenSet() const { return m_dataSetIdHasBeenSet; }
    inline void SetDataSetId(const Aws::String& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = value; }
    inline void SetDataSetId(Aws::String&& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = std::move(value); }
    inline void SetDataSetId(const char* value) { m_dataSetIdHasBeenSet = true; m_dataSetId.assign(value); }
    inline ReceivedDataGrantSummariesEntry& WithDataSetId(const Aws::String& value) { SetDataSetId(value); return *this;}
    inline ReceivedDataGrantSummariesEntry& WithDataSetId(Aws::String&& value) { SetDataSetId(std::move(value)); return *this;}
    inline ReceivedDataGrantSummariesEntry& WithDataSetId(const char* value) { SetDataSetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the data grant.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ReceivedDataGrantSummariesEntry& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ReceivedDataGrantSummariesEntry& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ReceivedDataGrantSummariesEntry& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the data grant.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ReceivedDataGrantSummariesEntry& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ReceivedDataGrantSummariesEntry& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ReceivedDataGrantSummariesEntry& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the data grant was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline ReceivedDataGrantSummariesEntry& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline ReceivedDataGrantSummariesEntry& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the data grant was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline ReceivedDataGrantSummariesEntry& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline ReceivedDataGrantSummariesEntry& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_senderPrincipal;
    bool m_senderPrincipalHasBeenSet = false;

    Aws::String m_receiverPrincipal;
    bool m_receiverPrincipalHasBeenSet = false;

    DataGrantAcceptanceState m_acceptanceState;
    bool m_acceptanceStateHasBeenSet = false;

    Aws::Utils::DateTime m_acceptedAt;
    bool m_acceptedAtHasBeenSet = false;

    Aws::Utils::DateTime m_endsAt;
    bool m_endsAtHasBeenSet = false;

    Aws::String m_dataSetId;
    bool m_dataSetIdHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
