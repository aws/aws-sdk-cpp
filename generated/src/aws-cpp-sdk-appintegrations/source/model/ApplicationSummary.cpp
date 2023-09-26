/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appintegrations/model/ApplicationSummary.h>
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

ApplicationSummary::ApplicationSummary() : 
    m_arnHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false)
{
}

ApplicationSummary::ApplicationSummary(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ApplicationSummary& ApplicationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Namespace"))
  {
    m_namespace = jsonValue.GetString("Namespace");

    m_namespaceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

    m_createdTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue ApplicationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_namespaceHasBeenSet)
  {
   payload.WithString("Namespace", m_namespace);

  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
