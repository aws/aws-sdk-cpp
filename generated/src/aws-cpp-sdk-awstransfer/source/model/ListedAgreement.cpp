/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/ListedAgreement.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Transfer
{
namespace Model
{

ListedAgreement::ListedAgreement() : 
    m_arnHasBeenSet(false),
    m_agreementIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_status(AgreementStatusType::NOT_SET),
    m_statusHasBeenSet(false),
    m_serverIdHasBeenSet(false),
    m_localProfileIdHasBeenSet(false),
    m_partnerProfileIdHasBeenSet(false)
{
}

ListedAgreement::ListedAgreement(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_agreementIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_status(AgreementStatusType::NOT_SET),
    m_statusHasBeenSet(false),
    m_serverIdHasBeenSet(false),
    m_localProfileIdHasBeenSet(false),
    m_partnerProfileIdHasBeenSet(false)
{
  *this = jsonValue;
}

ListedAgreement& ListedAgreement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AgreementId"))
  {
    m_agreementId = jsonValue.GetString("AgreementId");

    m_agreementIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = AgreementStatusTypeMapper::GetAgreementStatusTypeForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServerId"))
  {
    m_serverId = jsonValue.GetString("ServerId");

    m_serverIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LocalProfileId"))
  {
    m_localProfileId = jsonValue.GetString("LocalProfileId");

    m_localProfileIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PartnerProfileId"))
  {
    m_partnerProfileId = jsonValue.GetString("PartnerProfileId");

    m_partnerProfileIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ListedAgreement::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_agreementIdHasBeenSet)
  {
   payload.WithString("AgreementId", m_agreementId);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", AgreementStatusTypeMapper::GetNameForAgreementStatusType(m_status));
  }

  if(m_serverIdHasBeenSet)
  {
   payload.WithString("ServerId", m_serverId);

  }

  if(m_localProfileIdHasBeenSet)
  {
   payload.WithString("LocalProfileId", m_localProfileId);

  }

  if(m_partnerProfileIdHasBeenSet)
  {
   payload.WithString("PartnerProfileId", m_partnerProfileId);

  }

  return payload;
}

} // namespace Model
} // namespace Transfer
} // namespace Aws
