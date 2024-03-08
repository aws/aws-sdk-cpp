/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/ScopeDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataExchange
{
namespace Model
{

ScopeDetails::ScopeDetails() : 
    m_lakeFormationTagPoliciesHasBeenSet(false),
    m_redshiftDataSharesHasBeenSet(false),
    m_s3DataAccessesHasBeenSet(false)
{
}

ScopeDetails::ScopeDetails(JsonView jsonValue) : 
    m_lakeFormationTagPoliciesHasBeenSet(false),
    m_redshiftDataSharesHasBeenSet(false),
    m_s3DataAccessesHasBeenSet(false)
{
  *this = jsonValue;
}

ScopeDetails& ScopeDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LakeFormationTagPolicies"))
  {
    Aws::Utils::Array<JsonView> lakeFormationTagPoliciesJsonList = jsonValue.GetArray("LakeFormationTagPolicies");
    for(unsigned lakeFormationTagPoliciesIndex = 0; lakeFormationTagPoliciesIndex < lakeFormationTagPoliciesJsonList.GetLength(); ++lakeFormationTagPoliciesIndex)
    {
      m_lakeFormationTagPolicies.push_back(lakeFormationTagPoliciesJsonList[lakeFormationTagPoliciesIndex].AsObject());
    }
    m_lakeFormationTagPoliciesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RedshiftDataShares"))
  {
    Aws::Utils::Array<JsonView> redshiftDataSharesJsonList = jsonValue.GetArray("RedshiftDataShares");
    for(unsigned redshiftDataSharesIndex = 0; redshiftDataSharesIndex < redshiftDataSharesJsonList.GetLength(); ++redshiftDataSharesIndex)
    {
      m_redshiftDataShares.push_back(redshiftDataSharesJsonList[redshiftDataSharesIndex].AsObject());
    }
    m_redshiftDataSharesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3DataAccesses"))
  {
    Aws::Utils::Array<JsonView> s3DataAccessesJsonList = jsonValue.GetArray("S3DataAccesses");
    for(unsigned s3DataAccessesIndex = 0; s3DataAccessesIndex < s3DataAccessesJsonList.GetLength(); ++s3DataAccessesIndex)
    {
      m_s3DataAccesses.push_back(s3DataAccessesJsonList[s3DataAccessesIndex].AsObject());
    }
    m_s3DataAccessesHasBeenSet = true;
  }

  return *this;
}

JsonValue ScopeDetails::Jsonize() const
{
  JsonValue payload;

  if(m_lakeFormationTagPoliciesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> lakeFormationTagPoliciesJsonList(m_lakeFormationTagPolicies.size());
   for(unsigned lakeFormationTagPoliciesIndex = 0; lakeFormationTagPoliciesIndex < lakeFormationTagPoliciesJsonList.GetLength(); ++lakeFormationTagPoliciesIndex)
   {
     lakeFormationTagPoliciesJsonList[lakeFormationTagPoliciesIndex].AsObject(m_lakeFormationTagPolicies[lakeFormationTagPoliciesIndex].Jsonize());
   }
   payload.WithArray("LakeFormationTagPolicies", std::move(lakeFormationTagPoliciesJsonList));

  }

  if(m_redshiftDataSharesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> redshiftDataSharesJsonList(m_redshiftDataShares.size());
   for(unsigned redshiftDataSharesIndex = 0; redshiftDataSharesIndex < redshiftDataSharesJsonList.GetLength(); ++redshiftDataSharesIndex)
   {
     redshiftDataSharesJsonList[redshiftDataSharesIndex].AsObject(m_redshiftDataShares[redshiftDataSharesIndex].Jsonize());
   }
   payload.WithArray("RedshiftDataShares", std::move(redshiftDataSharesJsonList));

  }

  if(m_s3DataAccessesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> s3DataAccessesJsonList(m_s3DataAccesses.size());
   for(unsigned s3DataAccessesIndex = 0; s3DataAccessesIndex < s3DataAccessesJsonList.GetLength(); ++s3DataAccessesIndex)
   {
     s3DataAccessesJsonList[s3DataAccessesIndex].AsObject(m_s3DataAccesses[s3DataAccessesIndex].Jsonize());
   }
   payload.WithArray("S3DataAccesses", std::move(s3DataAccessesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DataExchange
} // namespace Aws
