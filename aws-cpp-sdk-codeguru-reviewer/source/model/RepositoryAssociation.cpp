/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/codeguru-reviewer/model/RepositoryAssociation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeGuruReviewer
{
namespace Model
{

RepositoryAssociation::RepositoryAssociation() : 
    m_associationIdHasBeenSet(false),
    m_associationArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_providerType(ProviderType::NOT_SET),
    m_providerTypeHasBeenSet(false),
    m_state(RepositoryAssociationState::NOT_SET),
    m_stateHasBeenSet(false),
    m_stateReasonHasBeenSet(false),
    m_lastUpdatedTimeStampHasBeenSet(false),
    m_createdTimeStampHasBeenSet(false)
{
}

RepositoryAssociation::RepositoryAssociation(JsonView jsonValue) : 
    m_associationIdHasBeenSet(false),
    m_associationArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_providerType(ProviderType::NOT_SET),
    m_providerTypeHasBeenSet(false),
    m_state(RepositoryAssociationState::NOT_SET),
    m_stateHasBeenSet(false),
    m_stateReasonHasBeenSet(false),
    m_lastUpdatedTimeStampHasBeenSet(false),
    m_createdTimeStampHasBeenSet(false)
{
  *this = jsonValue;
}

RepositoryAssociation& RepositoryAssociation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AssociationId"))
  {
    m_associationId = jsonValue.GetString("AssociationId");

    m_associationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AssociationArn"))
  {
    m_associationArn = jsonValue.GetString("AssociationArn");

    m_associationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Owner"))
  {
    m_owner = jsonValue.GetString("Owner");

    m_ownerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProviderType"))
  {
    m_providerType = ProviderTypeMapper::GetProviderTypeForName(jsonValue.GetString("ProviderType"));

    m_providerTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = RepositoryAssociationStateMapper::GetRepositoryAssociationStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StateReason"))
  {
    m_stateReason = jsonValue.GetString("StateReason");

    m_stateReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedTimeStamp"))
  {
    m_lastUpdatedTimeStamp = jsonValue.GetDouble("LastUpdatedTimeStamp");

    m_lastUpdatedTimeStampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTimeStamp"))
  {
    m_createdTimeStamp = jsonValue.GetDouble("CreatedTimeStamp");

    m_createdTimeStampHasBeenSet = true;
  }

  return *this;
}

JsonValue RepositoryAssociation::Jsonize() const
{
  JsonValue payload;

  if(m_associationIdHasBeenSet)
  {
   payload.WithString("AssociationId", m_associationId);

  }

  if(m_associationArnHasBeenSet)
  {
   payload.WithString("AssociationArn", m_associationArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_ownerHasBeenSet)
  {
   payload.WithString("Owner", m_owner);

  }

  if(m_providerTypeHasBeenSet)
  {
   payload.WithString("ProviderType", ProviderTypeMapper::GetNameForProviderType(m_providerType));
  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", RepositoryAssociationStateMapper::GetNameForRepositoryAssociationState(m_state));
  }

  if(m_stateReasonHasBeenSet)
  {
   payload.WithString("StateReason", m_stateReason);

  }

  if(m_lastUpdatedTimeStampHasBeenSet)
  {
   payload.WithDouble("LastUpdatedTimeStamp", m_lastUpdatedTimeStamp.SecondsWithMSPrecision());
  }

  if(m_createdTimeStampHasBeenSet)
  {
   payload.WithDouble("CreatedTimeStamp", m_createdTimeStamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
