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

ArtifactRevision::ArtifactRevision(const JsonValue& jsonValue) : 
    m_nameHasBeenSet(false),
    m_revisionIdHasBeenSet(false),
    m_revisionChangeIdentifierHasBeenSet(false),
    m_revisionSummaryHasBeenSet(false),
    m_createdHasBeenSet(false),
    m_revisionUrlHasBeenSet(false)
{
  *this = jsonValue;
}

ArtifactRevision& ArtifactRevision::operator =(const JsonValue& jsonValue)
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