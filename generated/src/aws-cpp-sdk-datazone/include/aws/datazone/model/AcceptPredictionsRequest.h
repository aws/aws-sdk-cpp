/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/AcceptRule.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/AcceptChoice.h>
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
  class AcceptPredictionsRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API AcceptPredictionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AcceptPredictions"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;

    AWS_DATAZONE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>Specifies the prediction (aka, the automatically generated piece of metadata)
     * and the target (for example, a column name) that can be accepted.</p>
     */
    inline const Aws::Vector<AcceptChoice>& GetAcceptChoices() const { return m_acceptChoices; }
    inline bool AcceptChoicesHasBeenSet() const { return m_acceptChoicesHasBeenSet; }
    template<typename AcceptChoicesT = Aws::Vector<AcceptChoice>>
    void SetAcceptChoices(AcceptChoicesT&& value) { m_acceptChoicesHasBeenSet = true; m_acceptChoices = std::forward<AcceptChoicesT>(value); }
    template<typename AcceptChoicesT = Aws::Vector<AcceptChoice>>
    AcceptPredictionsRequest& WithAcceptChoices(AcceptChoicesT&& value) { SetAcceptChoices(std::forward<AcceptChoicesT>(value)); return *this;}
    template<typename AcceptChoicesT = AcceptChoice>
    AcceptPredictionsRequest& AddAcceptChoices(AcceptChoicesT&& value) { m_acceptChoicesHasBeenSet = true; m_acceptChoices.emplace_back(std::forward<AcceptChoicesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the rule (or the conditions) under which a prediction can be
     * accepted.</p>
     */
    inline const AcceptRule& GetAcceptRule() const { return m_acceptRule; }
    inline bool AcceptRuleHasBeenSet() const { return m_acceptRuleHasBeenSet; }
    template<typename AcceptRuleT = AcceptRule>
    void SetAcceptRule(AcceptRuleT&& value) { m_acceptRuleHasBeenSet = true; m_acceptRule = std::forward<AcceptRuleT>(value); }
    template<typename AcceptRuleT = AcceptRule>
    AcceptPredictionsRequest& WithAcceptRule(AcceptRuleT&& value) { SetAcceptRule(std::forward<AcceptRuleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier to ensure idempotency of the request.
     * This field is automatically populated if not provided.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    AcceptPredictionsRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
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
    AcceptPredictionsRequest& WithDomainIdentifier(DomainIdentifierT&& value) { SetDomainIdentifier(std::forward<DomainIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the asset.</p>
     */
    inline const Aws::String& GetIdentifier() const { return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    template<typename IdentifierT = Aws::String>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::String>
    AcceptPredictionsRequest& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
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
    AcceptPredictionsRequest& WithRevision(RevisionT&& value) { SetRevision(std::forward<RevisionT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AcceptChoice> m_acceptChoices;
    bool m_acceptChoicesHasBeenSet = false;

    AcceptRule m_acceptRule;
    bool m_acceptRuleHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_revision;
    bool m_revisionHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
