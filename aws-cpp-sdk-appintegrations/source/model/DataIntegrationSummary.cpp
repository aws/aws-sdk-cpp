/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appintegrations/model/DataIntegrationSummary.h>
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

DataIntegrationSummary::DataIntegrationSummary() : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_sourceURIHasBeenSet(false)
{
}

DataIntegrationSummary::DataIntegrationSummary(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_sourceURIHasBeenSet(false)
{
  *this = jsonValue;
}

DataIntegrationSummary& DataIntegrationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceURI"))
  {
    m_sourceURI = jsonValue.GetString("SourceURI");

    m_sourceURIHasBeenSet = true;
  }

  return *this;
}

JsonValue DataIntegrationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_sourceURIHasBeenSet)
  {
   payload.WithString("SourceURI", m_sourceURI);

  }

  return payload;
}

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
