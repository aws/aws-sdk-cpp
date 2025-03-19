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
    AWS_DATAEXCHANGE_API ReceivedDataGrantSummariesEntry() = default;
    AWS_DATAEXCHANGE_API ReceivedDataGrantSummariesEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API ReceivedDataGrantSummariesEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the data grant.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ReceivedDataGrantSummariesEntry& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the data grant sender.</p>
     */
    inline const Aws::String& GetSenderPrincipal() const { return m_senderPrincipal; }
    inline bool SenderPrincipalHasBeenSet() const { return m_senderPrincipalHasBeenSet; }
    template<typename SenderPrincipalT = Aws::String>
    void SetSenderPrincipal(SenderPrincipalT&& value) { m_senderPrincipalHasBeenSet = true; m_senderPrincipal = std::forward<SenderPrincipalT>(value); }
    template<typename SenderPrincipalT = Aws::String>
    ReceivedDataGrantSummariesEntry& WithSenderPrincipal(SenderPrincipalT&& value) { SetSenderPrincipal(std::forward<SenderPrincipalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the data grant receiver.</p>
     */
    inline const Aws::String& GetReceiverPrincipal() const { return m_receiverPrincipal; }
    inline bool ReceiverPrincipalHasBeenSet() const { return m_receiverPrincipalHasBeenSet; }
    template<typename ReceiverPrincipalT = Aws::String>
    void SetReceiverPrincipal(ReceiverPrincipalT&& value) { m_receiverPrincipalHasBeenSet = true; m_receiverPrincipal = std::forward<ReceiverPrincipalT>(value); }
    template<typename ReceiverPrincipalT = Aws::String>
    ReceivedDataGrantSummariesEntry& WithReceiverPrincipal(ReceiverPrincipalT&& value) { SetReceiverPrincipal(std::forward<ReceiverPrincipalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The acceptance state of the data grant.</p>
     */
    inline DataGrantAcceptanceState GetAcceptanceState() const { return m_acceptanceState; }
    inline bool AcceptanceStateHasBeenSet() const { return m_acceptanceStateHasBeenSet; }
    inline void SetAcceptanceState(DataGrantAcceptanceState value) { m_acceptanceStateHasBeenSet = true; m_acceptanceState = value; }
    inline ReceivedDataGrantSummariesEntry& WithAcceptanceState(DataGrantAcceptanceState value) { SetAcceptanceState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the data grant was accepted.</p>
     */
    inline const Aws::Utils::DateTime& GetAcceptedAt() const { return m_acceptedAt; }
    inline bool AcceptedAtHasBeenSet() const { return m_acceptedAtHasBeenSet; }
    template<typename AcceptedAtT = Aws::Utils::DateTime>
    void SetAcceptedAt(AcceptedAtT&& value) { m_acceptedAtHasBeenSet = true; m_acceptedAt = std::forward<AcceptedAtT>(value); }
    template<typename AcceptedAtT = Aws::Utils::DateTime>
    ReceivedDataGrantSummariesEntry& WithAcceptedAt(AcceptedAtT&& value) { SetAcceptedAt(std::forward<AcceptedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when access to the associated data set ends.</p>
     */
    inline const Aws::Utils::DateTime& GetEndsAt() const { return m_endsAt; }
    inline bool EndsAtHasBeenSet() const { return m_endsAtHasBeenSet; }
    template<typename EndsAtT = Aws::Utils::DateTime>
    void SetEndsAt(EndsAtT&& value) { m_endsAtHasBeenSet = true; m_endsAt = std::forward<EndsAtT>(value); }
    template<typename EndsAtT = Aws::Utils::DateTime>
    ReceivedDataGrantSummariesEntry& WithEndsAt(EndsAtT&& value) { SetEndsAt(std::forward<EndsAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the data set associated to the data grant.</p>
     */
    inline const Aws::String& GetDataSetId() const { return m_dataSetId; }
    inline bool DataSetIdHasBeenSet() const { return m_dataSetIdHasBeenSet; }
    template<typename DataSetIdT = Aws::String>
    void SetDataSetId(DataSetIdT&& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = std::forward<DataSetIdT>(value); }
    template<typename DataSetIdT = Aws::String>
    ReceivedDataGrantSummariesEntry& WithDataSetId(DataSetIdT&& value) { SetDataSetId(std::forward<DataSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the data grant.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ReceivedDataGrantSummariesEntry& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the data grant.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ReceivedDataGrantSummariesEntry& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the data grant was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    ReceivedDataGrantSummariesEntry& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the data grant was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    ReceivedDataGrantSummariesEntry& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_senderPrincipal;
    bool m_senderPrincipalHasBeenSet = false;

    Aws::String m_receiverPrincipal;
    bool m_receiverPrincipalHasBeenSet = false;

    DataGrantAcceptanceState m_acceptanceState{DataGrantAcceptanceState::NOT_SET};
    bool m_acceptanceStateHasBeenSet = false;

    Aws::Utils::DateTime m_acceptedAt{};
    bool m_acceptedAtHasBeenSet = false;

    Aws::Utils::DateTime m_endsAt{};
    bool m_endsAtHasBeenSet = false;

    Aws::String m_dataSetId;
    bool m_dataSetIdHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
