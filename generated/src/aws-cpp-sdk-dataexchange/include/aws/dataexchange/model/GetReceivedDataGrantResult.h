﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dataexchange/model/DataGrantAcceptanceState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/dataexchange/model/GrantDistributionScope.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DataExchange
{
namespace Model
{
  class GetReceivedDataGrantResult
  {
  public:
    AWS_DATAEXCHANGE_API GetReceivedDataGrantResult() = default;
    AWS_DATAEXCHANGE_API GetReceivedDataGrantResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAEXCHANGE_API GetReceivedDataGrantResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the data grant.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetReceivedDataGrantResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the data grant sender.</p>
     */
    inline const Aws::String& GetSenderPrincipal() const { return m_senderPrincipal; }
    template<typename SenderPrincipalT = Aws::String>
    void SetSenderPrincipal(SenderPrincipalT&& value) { m_senderPrincipalHasBeenSet = true; m_senderPrincipal = std::forward<SenderPrincipalT>(value); }
    template<typename SenderPrincipalT = Aws::String>
    GetReceivedDataGrantResult& WithSenderPrincipal(SenderPrincipalT&& value) { SetSenderPrincipal(std::forward<SenderPrincipalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the data grant receiver.</p>
     */
    inline const Aws::String& GetReceiverPrincipal() const { return m_receiverPrincipal; }
    template<typename ReceiverPrincipalT = Aws::String>
    void SetReceiverPrincipal(ReceiverPrincipalT&& value) { m_receiverPrincipalHasBeenSet = true; m_receiverPrincipal = std::forward<ReceiverPrincipalT>(value); }
    template<typename ReceiverPrincipalT = Aws::String>
    GetReceivedDataGrantResult& WithReceiverPrincipal(ReceiverPrincipalT&& value) { SetReceiverPrincipal(std::forward<ReceiverPrincipalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the data grant.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetReceivedDataGrantResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The acceptance state of the data grant.</p>
     */
    inline DataGrantAcceptanceState GetAcceptanceState() const { return m_acceptanceState; }
    inline void SetAcceptanceState(DataGrantAcceptanceState value) { m_acceptanceStateHasBeenSet = true; m_acceptanceState = value; }
    inline GetReceivedDataGrantResult& WithAcceptanceState(DataGrantAcceptanceState value) { SetAcceptanceState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the data grant was accepted.</p>
     */
    inline const Aws::Utils::DateTime& GetAcceptedAt() const { return m_acceptedAt; }
    template<typename AcceptedAtT = Aws::Utils::DateTime>
    void SetAcceptedAt(AcceptedAtT&& value) { m_acceptedAtHasBeenSet = true; m_acceptedAt = std::forward<AcceptedAtT>(value); }
    template<typename AcceptedAtT = Aws::Utils::DateTime>
    GetReceivedDataGrantResult& WithAcceptedAt(AcceptedAtT&& value) { SetAcceptedAt(std::forward<AcceptedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when access to the associated data set ends.</p>
     */
    inline const Aws::Utils::DateTime& GetEndsAt() const { return m_endsAt; }
    template<typename EndsAtT = Aws::Utils::DateTime>
    void SetEndsAt(EndsAtT&& value) { m_endsAtHasBeenSet = true; m_endsAt = std::forward<EndsAtT>(value); }
    template<typename EndsAtT = Aws::Utils::DateTime>
    GetReceivedDataGrantResult& WithEndsAt(EndsAtT&& value) { SetEndsAt(std::forward<EndsAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The distribution scope for the data grant.</p>
     */
    inline GrantDistributionScope GetGrantDistributionScope() const { return m_grantDistributionScope; }
    inline void SetGrantDistributionScope(GrantDistributionScope value) { m_grantDistributionScopeHasBeenSet = true; m_grantDistributionScope = value; }
    inline GetReceivedDataGrantResult& WithGrantDistributionScope(GrantDistributionScope value) { SetGrantDistributionScope(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the data set associated to the data grant.</p>
     */
    inline const Aws::String& GetDataSetId() const { return m_dataSetId; }
    template<typename DataSetIdT = Aws::String>
    void SetDataSetId(DataSetIdT&& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = std::forward<DataSetIdT>(value); }
    template<typename DataSetIdT = Aws::String>
    GetReceivedDataGrantResult& WithDataSetId(DataSetIdT&& value) { SetDataSetId(std::forward<DataSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the data grant.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    GetReceivedDataGrantResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the data grant.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    GetReceivedDataGrantResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the data grant was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetReceivedDataGrantResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the data grant was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    GetReceivedDataGrantResult& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetReceivedDataGrantResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_senderPrincipal;
    bool m_senderPrincipalHasBeenSet = false;

    Aws::String m_receiverPrincipal;
    bool m_receiverPrincipalHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    DataGrantAcceptanceState m_acceptanceState{DataGrantAcceptanceState::NOT_SET};
    bool m_acceptanceStateHasBeenSet = false;

    Aws::Utils::DateTime m_acceptedAt{};
    bool m_acceptedAtHasBeenSet = false;

    Aws::Utils::DateTime m_endsAt{};
    bool m_endsAtHasBeenSet = false;

    GrantDistributionScope m_grantDistributionScope{GrantDistributionScope::NOT_SET};
    bool m_grantDistributionScopeHasBeenSet = false;

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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
