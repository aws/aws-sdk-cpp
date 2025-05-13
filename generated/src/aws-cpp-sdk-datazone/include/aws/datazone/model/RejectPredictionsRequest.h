/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/RejectRule.h>
#include <aws/datazone/model/RejectChoice.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace DataZone
{
namespace Model
{

  /**
   */
  class RejectPredictionsRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API RejectPredictionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RejectPredictions"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;

    AWS_DATAZONE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    RejectPredictionsRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const { return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    template<typename DomainIdentifierT = Aws::String>
    void SetDomainIdentifier(DomainIdentifierT&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::forward<DomainIdentifierT>(value); }
    template<typename DomainIdentifierT = Aws::String>
    RejectPredictionsRequest& WithDomainIdentifier(DomainIdentifierT&& value) { SetDomainIdentifier(std::forward<DomainIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the prediction.</p>
     */
    inline const Aws::String& GetIdentifier() const { return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    template<typename IdentifierT = Aws::String>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::String>
    RejectPredictionsRequest& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the prediction (aka, the automatically generated piece of metadata)
     * and the target (for example, a column name) that can be rejected.</p>
     */
    inline const Aws::Vector<RejectChoice>& GetRejectChoices() const { return m_rejectChoices; }
    inline bool RejectChoicesHasBeenSet() const { return m_rejectChoicesHasBeenSet; }
    template<typename RejectChoicesT = Aws::Vector<RejectChoice>>
    void SetRejectChoices(RejectChoicesT&& value) { m_rejectChoicesHasBeenSet = true; m_rejectChoices = std::forward<RejectChoicesT>(value); }
    template<typename RejectChoicesT = Aws::Vector<RejectChoice>>
    RejectPredictionsRequest& WithRejectChoices(RejectChoicesT&& value) { SetRejectChoices(std::forward<RejectChoicesT>(value)); return *this;}
    template<typename RejectChoicesT = RejectChoice>
    RejectPredictionsRequest& AddRejectChoices(RejectChoicesT&& value) { m_rejectChoicesHasBeenSet = true; m_rejectChoices.emplace_back(std::forward<RejectChoicesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the rule (or the conditions) under which a prediction can be
     * rejected.</p>
     */
    inline const RejectRule& GetRejectRule() const { return m_rejectRule; }
    inline bool RejectRuleHasBeenSet() const { return m_rejectRuleHasBeenSet; }
    template<typename RejectRuleT = RejectRule>
    void SetRejectRule(RejectRuleT&& value) { m_rejectRuleHasBeenSet = true; m_rejectRule = std::forward<RejectRuleT>(value); }
    template<typename RejectRuleT = RejectRule>
    RejectPredictionsRequest& WithRejectRule(RejectRuleT&& value) { SetRejectRule(std::forward<RejectRuleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision that is to be made to the asset.</p>
     */
    inline const Aws::String& GetRevision() const { return m_revision; }
    inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }
    template<typename RevisionT = Aws::String>
    void SetRevision(RevisionT&& value) { m_revisionHasBeenSet = true; m_revision = std::forward<RevisionT>(value); }
    template<typename RevisionT = Aws::String>
    RejectPredictionsRequest& WithRevision(RevisionT&& value) { SetRevision(std::forward<RevisionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::Vector<RejectChoice> m_rejectChoices;
    bool m_rejectChoicesHasBeenSet = false;

    RejectRule m_rejectRule;
    bool m_rejectRuleHasBeenSet = false;

    Aws::String m_revision;
    bool m_revisionHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
