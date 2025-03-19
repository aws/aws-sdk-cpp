/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/artifact/model/CustomerAgreementSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Artifact
{
namespace Model
{

CustomerAgreementSummary::CustomerAgreementSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

CustomerAgreementSummary& CustomerAgreementSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("agreementArn"))
  {
    m_agreementArn = jsonValue.GetString("agreementArn");
    m_agreementArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("awsAccountId"))
  {
    m_awsAccountId = jsonValue.GetString("awsAccountId");
    m_awsAccountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("organizationArn"))
  {
    m_organizationArn = jsonValue.GetString("organizationArn");
    m_organizationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("effectiveStart"))
  {
    m_effectiveStart = jsonValue.GetString("effectiveStart");
    m_effectiveStartHasBeenSet = true;
  }
  if(jsonValue.ValueExists("effectiveEnd"))
  {
    m_effectiveEnd = jsonValue.GetString("effectiveEnd");
    m_effectiveEndHasBeenSet = true;
  }
  if(jsonValue.ValueExists("state"))
  {
    m_state = CustomerAgreementStateMapper::GetCustomerAgreementStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("acceptanceTerms"))
  {
    Aws::Utils::Array<JsonView> acceptanceTermsJsonList = jsonValue.GetArray("acceptanceTerms");
    for(unsigned acceptanceTermsIndex = 0; acceptanceTermsIndex < acceptanceTermsJsonList.GetLength(); ++acceptanceTermsIndex)
    {
      m_acceptanceTerms.push_back(acceptanceTermsJsonList[acceptanceTermsIndex].AsString());
    }
    m_acceptanceTermsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("terminateTerms"))
  {
    Aws::Utils::Array<JsonView> terminateTermsJsonList = jsonValue.GetArray("terminateTerms");
    for(unsigned terminateTermsIndex = 0; terminateTermsIndex < terminateTermsJsonList.GetLength(); ++terminateTermsIndex)
    {
      m_terminateTerms.push_back(terminateTermsJsonList[terminateTermsIndex].AsString());
    }
    m_terminateTermsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = AgreementTypeMapper::GetAgreementTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue CustomerAgreementSummary::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_agreementArnHasBeenSet)
  {
   payload.WithString("agreementArn", m_agreementArn);

  }

  if(m_awsAccountIdHasBeenSet)
  {
   payload.WithString("awsAccountId", m_awsAccountId);

  }

  if(m_organizationArnHasBeenSet)
  {
   payload.WithString("organizationArn", m_organizationArn);

  }

  if(m_effectiveStartHasBeenSet)
  {
   payload.WithString("effectiveStart", m_effectiveStart.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_effectiveEndHasBeenSet)
  {
   payload.WithString("effectiveEnd", m_effectiveEnd.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", CustomerAgreementStateMapper::GetNameForCustomerAgreementState(m_state));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_acceptanceTermsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> acceptanceTermsJsonList(m_acceptanceTerms.size());
   for(unsigned acceptanceTermsIndex = 0; acceptanceTermsIndex < acceptanceTermsJsonList.GetLength(); ++acceptanceTermsIndex)
   {
     acceptanceTermsJsonList[acceptanceTermsIndex].AsString(m_acceptanceTerms[acceptanceTermsIndex]);
   }
   payload.WithArray("acceptanceTerms", std::move(acceptanceTermsJsonList));

  }

  if(m_terminateTermsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> terminateTermsJsonList(m_terminateTerms.size());
   for(unsigned terminateTermsIndex = 0; terminateTermsIndex < terminateTermsJsonList.GetLength(); ++terminateTermsIndex)
   {
     terminateTermsJsonList[terminateTermsIndex].AsString(m_terminateTerms[terminateTermsIndex]);
   }
   payload.WithArray("terminateTerms", std::move(terminateTermsJsonList));

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", AgreementTypeMapper::GetNameForAgreementType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace Artifact
} // namespace Aws
