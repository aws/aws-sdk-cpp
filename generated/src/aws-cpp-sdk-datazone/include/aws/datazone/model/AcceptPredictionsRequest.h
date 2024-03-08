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
    AWS_DATAZONE_API AcceptPredictionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AcceptPredictions"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;

    AWS_DATAZONE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p/>
     */
    inline const Aws::Vector<AcceptChoice>& GetAcceptChoices() const{ return m_acceptChoices; }

    /**
     * <p/>
     */
    inline bool AcceptChoicesHasBeenSet() const { return m_acceptChoicesHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetAcceptChoices(const Aws::Vector<AcceptChoice>& value) { m_acceptChoicesHasBeenSet = true; m_acceptChoices = value; }

    /**
     * <p/>
     */
    inline void SetAcceptChoices(Aws::Vector<AcceptChoice>&& value) { m_acceptChoicesHasBeenSet = true; m_acceptChoices = std::move(value); }

    /**
     * <p/>
     */
    inline AcceptPredictionsRequest& WithAcceptChoices(const Aws::Vector<AcceptChoice>& value) { SetAcceptChoices(value); return *this;}

    /**
     * <p/>
     */
    inline AcceptPredictionsRequest& WithAcceptChoices(Aws::Vector<AcceptChoice>&& value) { SetAcceptChoices(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline AcceptPredictionsRequest& AddAcceptChoices(const AcceptChoice& value) { m_acceptChoicesHasBeenSet = true; m_acceptChoices.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline AcceptPredictionsRequest& AddAcceptChoices(AcceptChoice&& value) { m_acceptChoicesHasBeenSet = true; m_acceptChoices.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies the rule (or the conditions) under which a prediction can be
     * accepted.</p>
     */
    inline const AcceptRule& GetAcceptRule() const{ return m_acceptRule; }

    /**
     * <p>Specifies the rule (or the conditions) under which a prediction can be
     * accepted.</p>
     */
    inline bool AcceptRuleHasBeenSet() const { return m_acceptRuleHasBeenSet; }

    /**
     * <p>Specifies the rule (or the conditions) under which a prediction can be
     * accepted.</p>
     */
    inline void SetAcceptRule(const AcceptRule& value) { m_acceptRuleHasBeenSet = true; m_acceptRule = value; }

    /**
     * <p>Specifies the rule (or the conditions) under which a prediction can be
     * accepted.</p>
     */
    inline void SetAcceptRule(AcceptRule&& value) { m_acceptRuleHasBeenSet = true; m_acceptRule = std::move(value); }

    /**
     * <p>Specifies the rule (or the conditions) under which a prediction can be
     * accepted.</p>
     */
    inline AcceptPredictionsRequest& WithAcceptRule(const AcceptRule& value) { SetAcceptRule(value); return *this;}

    /**
     * <p>Specifies the rule (or the conditions) under which a prediction can be
     * accepted.</p>
     */
    inline AcceptPredictionsRequest& WithAcceptRule(AcceptRule&& value) { SetAcceptRule(std::move(value)); return *this;}


    /**
     * <p>A unique, case-sensitive identifier to ensure idempotency of the request.
     * This field is automatically populated if not provided.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive identifier to ensure idempotency of the request.
     * This field is automatically populated if not provided.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier to ensure idempotency of the request.
     * This field is automatically populated if not provided.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive identifier to ensure idempotency of the request.
     * This field is automatically populated if not provided.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier to ensure idempotency of the request.
     * This field is automatically populated if not provided.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier to ensure idempotency of the request.
     * This field is automatically populated if not provided.</p>
     */
    inline AcceptPredictionsRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier to ensure idempotency of the request.
     * This field is automatically populated if not provided.</p>
     */
    inline AcceptPredictionsRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier to ensure idempotency of the request.
     * This field is automatically populated if not provided.</p>
     */
    inline AcceptPredictionsRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }

    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }

    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }

    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }

    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline AcceptPredictionsRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline AcceptPredictionsRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline AcceptPredictionsRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p/>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p/>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p/>
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * <p/>
     */
    inline AcceptPredictionsRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p/>
     */
    inline AcceptPredictionsRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline AcceptPredictionsRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetRevision() const{ return m_revision; }

    /**
     * <p/>
     */
    inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetRevision(const Aws::String& value) { m_revisionHasBeenSet = true; m_revision = value; }

    /**
     * <p/>
     */
    inline void SetRevision(Aws::String&& value) { m_revisionHasBeenSet = true; m_revision = std::move(value); }

    /**
     * <p/>
     */
    inline void SetRevision(const char* value) { m_revisionHasBeenSet = true; m_revision.assign(value); }

    /**
     * <p/>
     */
    inline AcceptPredictionsRequest& WithRevision(const Aws::String& value) { SetRevision(value); return *this;}

    /**
     * <p/>
     */
    inline AcceptPredictionsRequest& WithRevision(Aws::String&& value) { SetRevision(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline AcceptPredictionsRequest& WithRevision(const char* value) { SetRevision(value); return *this;}

  private:

    Aws::Vector<AcceptChoice> m_acceptChoices;
    bool m_acceptChoicesHasBeenSet = false;

    AcceptRule m_acceptRule;
    bool m_acceptRuleHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

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
