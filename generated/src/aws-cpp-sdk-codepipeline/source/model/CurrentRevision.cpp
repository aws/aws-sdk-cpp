/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/CurrentRevision.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

CurrentRevision::CurrentRevision() : 
    m_revisionHasBeenSet(false),
    m_changeIdentifierHasBeenSet(false),
    m_createdHasBeenSet(false),
    m_revisionSummaryHasBeenSet(false)
{
}

CurrentRevision::CurrentRevision(JsonView jsonValue) : 
    m_revisionHasBeenSet(false),
    m_changeIdentifierHasBeenSet(false),
    m_createdHasBeenSet(false),
    m_revisionSummaryHasBeenSet(false)
{
  *this = jsonValue;
}

CurrentRevision& CurrentRevision::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("revision"))
  {
    m_revision = jsonValue.GetString("revision");

    m_revisionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("changeIdentifier"))
  {
    m_changeIdentifier = jsonValue.GetString("changeIdentifier");

    m_changeIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("created"))
  {
    m_created = jsonValue.GetDouble("created");

    m_createdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("revisionSummary"))
  {
    m_revisionSummary = jsonValue.GetString("revisionSummary");

    m_revisionSummaryHasBeenSet = true;
  }

  return *this;
}

JsonValue CurrentRevision::Jsonize() const
{
  JsonValue payload;

  if(m_revisionHasBeenSet)
  {
   payload.WithString("revision", m_revision);

  }

  if(m_changeIdentifierHasBeenSet)
  {
   payload.WithString("changeIdentifier", m_changeIdentifier);

  }

  if(m_createdHasBeenSet)
  {
   payload.WithDouble("created", m_created.SecondsWithMSPrecision());
  }

  if(m_revisionSummaryHasBeenSet)
  {
   payload.WithString("revisionSummary", m_revisionSummary);

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
