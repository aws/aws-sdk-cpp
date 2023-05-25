/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm-pca/model/Permission.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ACMPCA
{
namespace Model
{

Permission::Permission() : 
    m_certificateAuthorityArnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_principalHasBeenSet(false),
    m_sourceAccountHasBeenSet(false),
    m_actionsHasBeenSet(false),
    m_policyHasBeenSet(false)
{
}

Permission::Permission(JsonView jsonValue) : 
    m_certificateAuthorityArnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_principalHasBeenSet(false),
    m_sourceAccountHasBeenSet(false),
    m_actionsHasBeenSet(false),
    m_policyHasBeenSet(false)
{
  *this = jsonValue;
}

Permission& Permission::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CertificateAuthorityArn"))
  {
    m_certificateAuthorityArn = jsonValue.GetString("CertificateAuthorityArn");

    m_certificateAuthorityArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Principal"))
  {
    m_principal = jsonValue.GetString("Principal");

    m_principalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceAccount"))
  {
    m_sourceAccount = jsonValue.GetString("SourceAccount");

    m_sourceAccountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Actions"))
  {
    Aws::Utils::Array<JsonView> actionsJsonList = jsonValue.GetArray("Actions");
    for(unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex)
    {
      m_actions.push_back(ActionTypeMapper::GetActionTypeForName(actionsJsonList[actionsIndex].AsString()));
    }
    m_actionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Policy"))
  {
    m_policy = jsonValue.GetString("Policy");

    m_policyHasBeenSet = true;
  }

  return *this;
}

JsonValue Permission::Jsonize() const
{
  JsonValue payload;

  if(m_certificateAuthorityArnHasBeenSet)
  {
   payload.WithString("CertificateAuthorityArn", m_certificateAuthorityArn);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_principalHasBeenSet)
  {
   payload.WithString("Principal", m_principal);

  }

  if(m_sourceAccountHasBeenSet)
  {
   payload.WithString("SourceAccount", m_sourceAccount);

  }

  if(m_actionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> actionsJsonList(m_actions.size());
   for(unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex)
   {
     actionsJsonList[actionsIndex].AsString(ActionTypeMapper::GetNameForActionType(m_actions[actionsIndex]));
   }
   payload.WithArray("Actions", std::move(actionsJsonList));

  }

  if(m_policyHasBeenSet)
  {
   payload.WithString("Policy", m_policy);

  }

  return payload;
}

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
