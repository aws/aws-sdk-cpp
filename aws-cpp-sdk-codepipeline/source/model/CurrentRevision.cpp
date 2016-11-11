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

CurrentRevision::CurrentRevision(const JsonValue& jsonValue) : 
    m_revisionHasBeenSet(false),
    m_changeIdentifierHasBeenSet(false),
    m_createdHasBeenSet(false),
    m_revisionSummaryHasBeenSet(false)
{
  *this = jsonValue;
}

CurrentRevision& CurrentRevision::operator =(const JsonValue& jsonValue)
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