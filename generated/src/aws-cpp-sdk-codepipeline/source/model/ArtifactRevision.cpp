/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/ArtifactRevision.h>
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

ArtifactRevision::ArtifactRevision() : 
    m_nameHasBeenSet(false),
    m_revisionIdHasBeenSet(false),
    m_revisionChangeIdentifierHasBeenSet(false),
    m_revisionSummaryHasBeenSet(false),
    m_createdHasBeenSet(false),
    m_revisionUrlHasBeenSet(false)
{
}

ArtifactRevision::ArtifactRevision(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_revisionIdHasBeenSet(false),
    m_revisionChangeIdentifierHasBeenSet(false),
    m_revisionSummaryHasBeenSet(false),
    m_createdHasBeenSet(false),
    m_revisionUrlHasBeenSet(false)
{
  *this = jsonValue;
}

ArtifactRevision& ArtifactRevision::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("revisionId"))
  {
    m_revisionId = jsonValue.GetString("revisionId");

    m_revisionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("revisionChangeIdentifier"))
  {
    m_revisionChangeIdentifier = jsonValue.GetString("revisionChangeIdentifier");

    m_revisionChangeIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("revisionSummary"))
  {
    m_revisionSummary = jsonValue.GetString("revisionSummary");

    m_revisionSummaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("created"))
  {
    m_created = jsonValue.GetDouble("created");

    m_createdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("revisionUrl"))
  {
    m_revisionUrl = jsonValue.GetString("revisionUrl");

    m_revisionUrlHasBeenSet = true;
  }

  return *this;
}

JsonValue ArtifactRevision::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_revisionIdHasBeenSet)
  {
   payload.WithString("revisionId", m_revisionId);

  }

  if(m_revisionChangeIdentifierHasBeenSet)
  {
   payload.WithString("revisionChangeIdentifier", m_revisionChangeIdentifier);

  }

  if(m_revisionSummaryHasBeenSet)
  {
   payload.WithString("revisionSummary", m_revisionSummary);

  }

  if(m_createdHasBeenSet)
  {
   payload.WithDouble("created", m_created.SecondsWithMSPrecision());
  }

  if(m_revisionUrlHasBeenSet)
  {
   payload.WithString("revisionUrl", m_revisionUrl);

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
