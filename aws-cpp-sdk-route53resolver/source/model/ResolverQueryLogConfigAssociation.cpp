/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/ResolverQueryLogConfigAssociation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53Resolver
{
namespace Model
{

ResolverQueryLogConfigAssociation::ResolverQueryLogConfigAssociation() : 
    m_idHasBeenSet(false),
    m_resolverQueryLogConfigIdHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_status(ResolverQueryLogConfigAssociationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_error(ResolverQueryLogConfigAssociationError::NOT_SET),
    m_errorHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_creationTimeHasBeenSet(false)
{
}

ResolverQueryLogConfigAssociation::ResolverQueryLogConfigAssociation(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_resolverQueryLogConfigIdHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_status(ResolverQueryLogConfigAssociationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_error(ResolverQueryLogConfigAssociationError::NOT_SET),
    m_errorHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_creationTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ResolverQueryLogConfigAssociation& ResolverQueryLogConfigAssociation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResolverQueryLogConfigId"))
  {
    m_resolverQueryLogConfigId = jsonValue.GetString("ResolverQueryLogConfigId");

    m_resolverQueryLogConfigIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceId"))
  {
    m_resourceId = jsonValue.GetString("ResourceId");

    m_resourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ResolverQueryLogConfigAssociationStatusMapper::GetResolverQueryLogConfigAssociationStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Error"))
  {
    m_error = ResolverQueryLogConfigAssociationErrorMapper::GetResolverQueryLogConfigAssociationErrorForName(jsonValue.GetString("Error"));

    m_errorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");

    m_errorMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetString("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue ResolverQueryLogConfigAssociation::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_resolverQueryLogConfigIdHasBeenSet)
  {
   payload.WithString("ResolverQueryLogConfigId", m_resolverQueryLogConfigId);

  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ResolverQueryLogConfigAssociationStatusMapper::GetNameForResolverQueryLogConfigAssociationStatus(m_status));
  }

  if(m_errorHasBeenSet)
  {
   payload.WithString("Error", ResolverQueryLogConfigAssociationErrorMapper::GetNameForResolverQueryLogConfigAssociationError(m_error));
  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("ErrorMessage", m_errorMessage);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithString("CreationTime", m_creationTime);

  }

  return payload;
}

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
