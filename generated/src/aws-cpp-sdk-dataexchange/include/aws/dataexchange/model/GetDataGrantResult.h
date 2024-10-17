/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dataexchange/model/DataGrantAcceptanceState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/dataexchange/model/GrantDistributionScope.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class GetDataGrantResult
  {
  public:
    AWS_DATAEXCHANGE_API GetDataGrantResult();
    AWS_DATAEXCHANGE_API GetDataGrantResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAEXCHANGE_API GetDataGrantResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the data grant.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetDataGrantResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetDataGrantResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetDataGrantResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the data grant sender.</p>
     */
    inline const Aws::String& GetSenderPrincipal() const{ return m_senderPrincipal; }
    inline void SetSenderPrincipal(const Aws::String& value) { m_senderPrincipal = value; }
    inline void SetSenderPrincipal(Aws::String&& value) { m_senderPrincipal = std::move(value); }
    inline void SetSenderPrincipal(const char* value) { m_senderPrincipal.assign(value); }
    inline GetDataGrantResult& WithSenderPrincipal(const Aws::String& value) { SetSenderPrincipal(value); return *this;}
    inline GetDataGrantResult& WithSenderPrincipal(Aws::String&& value) { SetSenderPrincipal(std::move(value)); return *this;}
    inline GetDataGrantResult& WithSenderPrincipal(const char* value) { SetSenderPrincipal(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the data grant receiver.</p>
     */
    inline const Aws::String& GetReceiverPrincipal() const{ return m_receiverPrincipal; }
    inline void SetReceiverPrincipal(const Aws::String& value) { m_receiverPrincipal = value; }
    inline void SetReceiverPrincipal(Aws::String&& value) { m_receiverPrincipal = std::move(value); }
    inline void SetReceiverPrincipal(const char* value) { m_receiverPrincipal.assign(value); }
    inline GetDataGrantResult& WithReceiverPrincipal(const Aws::String& value) { SetReceiverPrincipal(value); return *this;}
    inline GetDataGrantResult& WithReceiverPrincipal(Aws::String&& value) { SetReceiverPrincipal(std::move(value)); return *this;}
    inline GetDataGrantResult& WithReceiverPrincipal(const char* value) { SetReceiverPrincipal(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the data grant.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetDataGrantResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetDataGrantResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetDataGrantResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The acceptance state of the data grant.</p>
     */
    inline const DataGrantAcceptanceState& GetAcceptanceState() const{ return m_acceptanceState; }
    inline void SetAcceptanceState(const DataGrantAcceptanceState& value) { m_acceptanceState = value; }
    inline void SetAcceptanceState(DataGrantAcceptanceState&& value) { m_acceptanceState = std::move(value); }
    inline GetDataGrantResult& WithAcceptanceState(const DataGrantAcceptanceState& value) { SetAcceptanceState(value); return *this;}
    inline GetDataGrantResult& WithAcceptanceState(DataGrantAcceptanceState&& value) { SetAcceptanceState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the data grant was accepted.</p>
     */
    inline const Aws::Utils::DateTime& GetAcceptedAt() const{ return m_acceptedAt; }
    inline void SetAcceptedAt(const Aws::Utils::DateTime& value) { m_acceptedAt = value; }
    inline void SetAcceptedAt(Aws::Utils::DateTime&& value) { m_acceptedAt = std::move(value); }
    inline GetDataGrantResult& WithAcceptedAt(const Aws::Utils::DateTime& value) { SetAcceptedAt(value); return *this;}
    inline GetDataGrantResult& WithAcceptedAt(Aws::Utils::DateTime&& value) { SetAcceptedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when access to the associated data set ends.</p>
     */
    inline const Aws::Utils::DateTime& GetEndsAt() const{ return m_endsAt; }
    inline void SetEndsAt(const Aws::Utils::DateTime& value) { m_endsAt = value; }
    inline void SetEndsAt(Aws::Utils::DateTime&& value) { m_endsAt = std::move(value); }
    inline GetDataGrantResult& WithEndsAt(const Aws::Utils::DateTime& value) { SetEndsAt(value); return *this;}
    inline GetDataGrantResult& WithEndsAt(Aws::Utils::DateTime&& value) { SetEndsAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The distribution scope for the data grant.</p>
     */
    inline const GrantDistributionScope& GetGrantDistributionScope() const{ return m_grantDistributionScope; }
    inline void SetGrantDistributionScope(const GrantDistributionScope& value) { m_grantDistributionScope = value; }
    inline void SetGrantDistributionScope(GrantDistributionScope&& value) { m_grantDistributionScope = std::move(value); }
    inline GetDataGrantResult& WithGrantDistributionScope(const GrantDistributionScope& value) { SetGrantDistributionScope(value); return *this;}
    inline GetDataGrantResult& WithGrantDistributionScope(GrantDistributionScope&& value) { SetGrantDistributionScope(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the data set associated to the data grant.</p>
     */
    inline const Aws::String& GetDataSetId() const{ return m_dataSetId; }
    inline void SetDataSetId(const Aws::String& value) { m_dataSetId = value; }
    inline void SetDataSetId(Aws::String&& value) { m_dataSetId = std::move(value); }
    inline void SetDataSetId(const char* value) { m_dataSetId.assign(value); }
    inline GetDataGrantResult& WithDataSetId(const Aws::String& value) { SetDataSetId(value); return *this;}
    inline GetDataGrantResult& WithDataSetId(Aws::String&& value) { SetDataSetId(std::move(value)); return *this;}
    inline GetDataGrantResult& WithDataSetId(const char* value) { SetDataSetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the data set used to create the data grant.</p>
     */
    inline const Aws::String& GetSourceDataSetId() const{ return m_sourceDataSetId; }
    inline void SetSourceDataSetId(const Aws::String& value) { m_sourceDataSetId = value; }
    inline void SetSourceDataSetId(Aws::String&& value) { m_sourceDataSetId = std::move(value); }
    inline void SetSourceDataSetId(const char* value) { m_sourceDataSetId.assign(value); }
    inline GetDataGrantResult& WithSourceDataSetId(const Aws::String& value) { SetSourceDataSetId(value); return *this;}
    inline GetDataGrantResult& WithSourceDataSetId(Aws::String&& value) { SetSourceDataSetId(std::move(value)); return *this;}
    inline GetDataGrantResult& WithSourceDataSetId(const char* value) { SetSourceDataSetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the data grant.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetDataGrantResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetDataGrantResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetDataGrantResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the data grant.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline GetDataGrantResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline GetDataGrantResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline GetDataGrantResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the data grant was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetDataGrantResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetDataGrantResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the data grant was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }
    inline GetDataGrantResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline GetDataGrantResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags associated to the data grant. A tag is a key-value pair.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline GetDataGrantResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline GetDataGrantResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline GetDataGrantResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline GetDataGrantResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetDataGrantResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetDataGrantResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline GetDataGrantResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetDataGrantResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetDataGrantResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetDataGrantResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetDataGrantResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetDataGrantResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_name;

    Aws::String m_senderPrincipal;

    Aws::String m_receiverPrincipal;

    Aws::String m_description;

    DataGrantAcceptanceState m_acceptanceState;

    Aws::Utils::DateTime m_acceptedAt;

    Aws::Utils::DateTime m_endsAt;

    GrantDistributionScope m_grantDistributionScope;

    Aws::String m_dataSetId;

    Aws::String m_sourceDataSetId;

    Aws::String m_id;

    Aws::String m_arn;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_updatedAt;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
