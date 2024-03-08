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
    AWS_DATAZONE_API RejectPredictionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RejectPredictions"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;

    AWS_DATAZONE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline RejectPredictionsRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline RejectPredictionsRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline RejectPredictionsRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


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
    inline RejectPredictionsRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline RejectPredictionsRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone domain.</p>
     */
    inline RejectPredictionsRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}


    /**
     * <p>The identifier of the prediction.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p>The identifier of the prediction.</p>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p>The identifier of the prediction.</p>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p>The identifier of the prediction.</p>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p>The identifier of the prediction.</p>
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * <p>The identifier of the prediction.</p>
     */
    inline RejectPredictionsRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p>The identifier of the prediction.</p>
     */
    inline RejectPredictionsRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the prediction.</p>
     */
    inline RejectPredictionsRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::Vector<RejectChoice>& GetRejectChoices() const{ return m_rejectChoices; }

    /**
     * <p/>
     */
    inline bool RejectChoicesHasBeenSet() const { return m_rejectChoicesHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetRejectChoices(const Aws::Vector<RejectChoice>& value) { m_rejectChoicesHasBeenSet = true; m_rejectChoices = value; }

    /**
     * <p/>
     */
    inline void SetRejectChoices(Aws::Vector<RejectChoice>&& value) { m_rejectChoicesHasBeenSet = true; m_rejectChoices = std::move(value); }

    /**
     * <p/>
     */
    inline RejectPredictionsRequest& WithRejectChoices(const Aws::Vector<RejectChoice>& value) { SetRejectChoices(value); return *this;}

    /**
     * <p/>
     */
    inline RejectPredictionsRequest& WithRejectChoices(Aws::Vector<RejectChoice>&& value) { SetRejectChoices(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline RejectPredictionsRequest& AddRejectChoices(const RejectChoice& value) { m_rejectChoicesHasBeenSet = true; m_rejectChoices.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline RejectPredictionsRequest& AddRejectChoices(RejectChoice&& value) { m_rejectChoicesHasBeenSet = true; m_rejectChoices.push_back(std::move(value)); return *this; }


    /**
     * <p/>
     */
    inline const RejectRule& GetRejectRule() const{ return m_rejectRule; }

    /**
     * <p/>
     */
    inline bool RejectRuleHasBeenSet() const { return m_rejectRuleHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetRejectRule(const RejectRule& value) { m_rejectRuleHasBeenSet = true; m_rejectRule = value; }

    /**
     * <p/>
     */
    inline void SetRejectRule(RejectRule&& value) { m_rejectRuleHasBeenSet = true; m_rejectRule = std::move(value); }

    /**
     * <p/>
     */
    inline RejectPredictionsRequest& WithRejectRule(const RejectRule& value) { SetRejectRule(value); return *this;}

    /**
     * <p/>
     */
    inline RejectPredictionsRequest& WithRejectRule(RejectRule&& value) { SetRejectRule(std::move(value)); return *this;}


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
    inline RejectPredictionsRequest& WithRevision(const Aws::String& value) { SetRevision(value); return *this;}

    /**
     * <p/>
     */
    inline RejectPredictionsRequest& WithRevision(Aws::String&& value) { SetRevision(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline RejectPredictionsRequest& WithRevision(const char* value) { SetRevision(value); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

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
