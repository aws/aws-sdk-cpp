/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/organizations/model/Organization.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Organizations
{
namespace Model
{

Organization::Organization() : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_featureSet(OrganizationFeatureSet::NOT_SET),
    m_featureSetHasBeenSet(false),
    m_masterAccountArnHasBeenSet(false),
    m_masterAccountIdHasBeenSet(false),
    m_masterAccountEmailHasBeenSet(false),
    m_availablePolicyTypesHasBeenSet(false)
{
}

Organization::Organization(const JsonValue& jsonValue) : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_featureSet(OrganizationFeatureSet::NOT_SET),
    m_featureSetHasBeenSet(false),
    m_masterAccountArnHasBeenSet(false),
    m_masterAccountIdHasBeenSet(false),
    m_masterAccountEmailHasBeenSet(false),
    m_availablePolicyTypesHasBeenSet(false)
{
  *this = jsonValue;
}

Organization& Organization::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FeatureSet"))
  {
    m_featureSet = OrganizationFeatureSetMapper::GetOrganizationFeatureSetForName(jsonValue.GetString("FeatureSet"));

    m_featureSetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MasterAccountArn"))
  {
    m_masterAccountArn = jsonValue.GetString("MasterAccountArn");

    m_masterAccountArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MasterAccountId"))
  {
    m_masterAccountId = jsonValue.GetString("MasterAccountId");

    m_masterAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MasterAccountEmail"))
  {
    m_masterAccountEmail = jsonValue.GetString("MasterAccountEmail");

    m_masterAccountEmailHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AvailablePolicyTypes"))
  {
    Array<JsonValue> availablePolicyTypesJsonList = jsonValue.GetArray("AvailablePolicyTypes");
    for(unsigned availablePolicyTypesIndex = 0; availablePolicyTypesIndex < availablePolicyTypesJsonList.GetLength(); ++availablePolicyTypesIndex)
    {
      m_availablePolicyTypes.push_back(availablePolicyTypesJsonList[availablePolicyTypesIndex].AsObject());
    }
    m_availablePolicyTypesHasBeenSet = true;
  }

  return *this;
}

JsonValue Organization::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_featureSetHasBeenSet)
  {
   payload.WithString("FeatureSet", OrganizationFeatureSetMapper::GetNameForOrganizationFeatureSet(m_featureSet));
  }

  if(m_masterAccountArnHasBeenSet)
  {
   payload.WithString("MasterAccountArn", m_masterAccountArn);

  }

  if(m_masterAccountIdHasBeenSet)
  {
   payload.WithString("MasterAccountId", m_masterAccountId);

  }

  if(m_masterAccountEmailHasBeenSet)
  {
   payload.WithString("MasterAccountEmail", m_masterAccountEmail);

  }

  if(m_availablePolicyTypesHasBeenSet)
  {
   Array<JsonValue> availablePolicyTypesJsonList(m_availablePolicyTypes.size());
   for(unsigned availablePolicyTypesIndex = 0; availablePolicyTypesIndex < availablePolicyTypesJsonList.GetLength(); ++availablePolicyTypesIndex)
   {
     availablePolicyTypesJsonList[availablePolicyTypesIndex].AsObject(m_availablePolicyTypes[availablePolicyTypesIndex].Jsonize());
   }
   payload.WithArray("AvailablePolicyTypes", std::move(availablePolicyTypesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Organizations
} // namespace Aws