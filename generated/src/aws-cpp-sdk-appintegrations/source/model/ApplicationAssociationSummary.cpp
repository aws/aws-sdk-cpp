/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appintegrations/model/ApplicationAssociationSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppIntegrationsService
{
namespace Model
{

ApplicationAssociationSummary::ApplicationAssociationSummary() : 
    m_applicationAssociationArnHasBeenSet(false),
    m_applicationArnHasBeenSet(false),
    m_clientIdHasBeenSet(false)
{
}

ApplicationAssociationSummary::ApplicationAssociationSummary(JsonView jsonValue) : 
    m_applicationAssociationArnHasBeenSet(false),
    m_applicationArnHasBeenSet(false),
    m_clientIdHasBeenSet(false)
{
  *this = jsonValue;
}

ApplicationAssociationSummary& ApplicationAssociationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApplicationAssociationArn"))
  {
    m_applicationAssociationArn = jsonValue.GetString("ApplicationAssociationArn");

    m_applicationAssociationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApplicationArn"))
  {
    m_applicationArn = jsonValue.GetString("ApplicationArn");

    m_applicationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClientId"))
  {
    m_clientId = jsonValue.GetString("ClientId");

    m_clientIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ApplicationAssociationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_applicationAssociationArnHasBeenSet)
  {
   payload.WithString("ApplicationAssociationArn", m_applicationAssociationArn);

  }

  if(m_applicationArnHasBeenSet)
  {
   payload.WithString("ApplicationArn", m_applicationArn);

  }

  if(m_clientIdHasBeenSet)
  {
   payload.WithString("ClientId", m_clientId);

  }

  return payload;
}

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
