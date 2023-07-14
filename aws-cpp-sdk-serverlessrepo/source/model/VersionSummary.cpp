/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/serverlessrepo/model/VersionSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServerlessApplicationRepository
{
namespace Model
{

VersionSummary::VersionSummary() : 
    m_applicationIdHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_semanticVersionHasBeenSet(false),
    m_sourceCodeUrlHasBeenSet(false)
{
}

VersionSummary::VersionSummary(JsonView jsonValue) : 
    m_applicationIdHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_semanticVersionHasBeenSet(false),
    m_sourceCodeUrlHasBeenSet(false)
{
  *this = jsonValue;
}

VersionSummary& VersionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("applicationId"))
  {
    m_applicationId = jsonValue.GetString("applicationId");

    m_applicationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("semanticVersion"))
  {
    m_semanticVersion = jsonValue.GetString("semanticVersion");

    m_semanticVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceCodeUrl"))
  {
    m_sourceCodeUrl = jsonValue.GetString("sourceCodeUrl");

    m_sourceCodeUrlHasBeenSet = true;
  }

  return *this;
}

JsonValue VersionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_applicationIdHasBeenSet)
  {
   payload.WithString("applicationId", m_applicationId);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithString("creationTime", m_creationTime);

  }

  if(m_semanticVersionHasBeenSet)
  {
   payload.WithString("semanticVersion", m_semanticVersion);

  }

  if(m_sourceCodeUrlHasBeenSet)
  {
   payload.WithString("sourceCodeUrl", m_sourceCodeUrl);

  }

  return payload;
}

} // namespace Model
} // namespace ServerlessApplicationRepository
} // namespace Aws
