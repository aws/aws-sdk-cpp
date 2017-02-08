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
#include <aws/batch/model/ComputeResource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Batch
{
namespace Model
{

ComputeResource::ComputeResource() : 
    m_type(CRType::NOT_SET),
    m_typeHasBeenSet(false),
    m_minvCpus(0),
    m_minvCpusHasBeenSet(false),
    m_maxvCpus(0),
    m_maxvCpusHasBeenSet(false),
    m_desiredvCpus(0),
    m_desiredvCpusHasBeenSet(false),
    m_instanceTypesHasBeenSet(false),
    m_subnetsHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_ec2KeyPairHasBeenSet(false),
    m_instanceRoleHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_bidPercentage(0),
    m_bidPercentageHasBeenSet(false),
    m_spotIamFleetRoleHasBeenSet(false)
{
}

ComputeResource::ComputeResource(const JsonValue& jsonValue) : 
    m_type(CRType::NOT_SET),
    m_typeHasBeenSet(false),
    m_minvCpus(0),
    m_minvCpusHasBeenSet(false),
    m_maxvCpus(0),
    m_maxvCpusHasBeenSet(false),
    m_desiredvCpus(0),
    m_desiredvCpusHasBeenSet(false),
    m_instanceTypesHasBeenSet(false),
    m_subnetsHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_ec2KeyPairHasBeenSet(false),
    m_instanceRoleHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_bidPercentage(0),
    m_bidPercentageHasBeenSet(false),
    m_spotIamFleetRoleHasBeenSet(false)
{
  *this = jsonValue;
}

ComputeResource& ComputeResource::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = CRTypeMapper::GetCRTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("minvCpus"))
  {
    m_minvCpus = jsonValue.GetInteger("minvCpus");

    m_minvCpusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxvCpus"))
  {
    m_maxvCpus = jsonValue.GetInteger("maxvCpus");

    m_maxvCpusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("desiredvCpus"))
  {
    m_desiredvCpus = jsonValue.GetInteger("desiredvCpus");

    m_desiredvCpusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("instanceTypes"))
  {
    Array<JsonValue> instanceTypesJsonList = jsonValue.GetArray("instanceTypes");
    for(unsigned instanceTypesIndex = 0; instanceTypesIndex < instanceTypesJsonList.GetLength(); ++instanceTypesIndex)
    {
      m_instanceTypes.push_back(instanceTypesJsonList[instanceTypesIndex].AsString());
    }
    m_instanceTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("subnets"))
  {
    Array<JsonValue> subnetsJsonList = jsonValue.GetArray("subnets");
    for(unsigned subnetsIndex = 0; subnetsIndex < subnetsJsonList.GetLength(); ++subnetsIndex)
    {
      m_subnets.push_back(subnetsJsonList[subnetsIndex].AsString());
    }
    m_subnetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("securityGroupIds"))
  {
    Array<JsonValue> securityGroupIdsJsonList = jsonValue.GetArray("securityGroupIds");
    for(unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex)
    {
      m_securityGroupIds.push_back(securityGroupIdsJsonList[securityGroupIdsIndex].AsString());
    }
    m_securityGroupIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ec2KeyPair"))
  {
    m_ec2KeyPair = jsonValue.GetString("ec2KeyPair");

    m_ec2KeyPairHasBeenSet = true;
  }

  if(jsonValue.ValueExists("instanceRole"))
  {
    m_instanceRole = jsonValue.GetString("instanceRole");

    m_instanceRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonValue> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bidPercentage"))
  {
    m_bidPercentage = jsonValue.GetInteger("bidPercentage");

    m_bidPercentageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("spotIamFleetRole"))
  {
    m_spotIamFleetRole = jsonValue.GetString("spotIamFleetRole");

    m_spotIamFleetRoleHasBeenSet = true;
  }

  return *this;
}

JsonValue ComputeResource::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", CRTypeMapper::GetNameForCRType(m_type));
  }

  if(m_minvCpusHasBeenSet)
  {
   payload.WithInteger("minvCpus", m_minvCpus);

  }

  if(m_maxvCpusHasBeenSet)
  {
   payload.WithInteger("maxvCpus", m_maxvCpus);

  }

  if(m_desiredvCpusHasBeenSet)
  {
   payload.WithInteger("desiredvCpus", m_desiredvCpus);

  }

  if(m_instanceTypesHasBeenSet)
  {
   Array<JsonValue> instanceTypesJsonList(m_instanceTypes.size());
   for(unsigned instanceTypesIndex = 0; instanceTypesIndex < instanceTypesJsonList.GetLength(); ++instanceTypesIndex)
   {
     instanceTypesJsonList[instanceTypesIndex].AsString(m_instanceTypes[instanceTypesIndex]);
   }
   payload.WithArray("instanceTypes", std::move(instanceTypesJsonList));

  }

  if(m_subnetsHasBeenSet)
  {
   Array<JsonValue> subnetsJsonList(m_subnets.size());
   for(unsigned subnetsIndex = 0; subnetsIndex < subnetsJsonList.GetLength(); ++subnetsIndex)
   {
     subnetsJsonList[subnetsIndex].AsString(m_subnets[subnetsIndex]);
   }
   payload.WithArray("subnets", std::move(subnetsJsonList));

  }

  if(m_securityGroupIdsHasBeenSet)
  {
   Array<JsonValue> securityGroupIdsJsonList(m_securityGroupIds.size());
   for(unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex)
   {
     securityGroupIdsJsonList[securityGroupIdsIndex].AsString(m_securityGroupIds[securityGroupIdsIndex]);
   }
   payload.WithArray("securityGroupIds", std::move(securityGroupIdsJsonList));

  }

  if(m_ec2KeyPairHasBeenSet)
  {
   payload.WithString("ec2KeyPair", m_ec2KeyPair);

  }

  if(m_instanceRoleHasBeenSet)
  {
   payload.WithString("instanceRole", m_instanceRole);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_bidPercentageHasBeenSet)
  {
   payload.WithInteger("bidPercentage", m_bidPercentage);

  }

  if(m_spotIamFleetRoleHasBeenSet)
  {
   payload.WithString("spotIamFleetRole", m_spotIamFleetRole);

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws