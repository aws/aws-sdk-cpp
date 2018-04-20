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

#include <aws/codepipeline/model/SourceRevision.h>
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

SourceRevision::SourceRevision() : 
    m_actionNameHasBeenSet(false),
    m_revisionIdHasBeenSet(false),
    m_revisionSummaryHasBeenSet(false),
    m_revisionUrlHasBeenSet(false)
{
}

SourceRevision::SourceRevision(const JsonValue& jsonValue) : 
    m_actionNameHasBeenSet(false),
    m_revisionIdHasBeenSet(false),
    m_revisionSummaryHasBeenSet(false),
    m_revisionUrlHasBeenSet(false)
{
  *this = jsonValue;
}

SourceRevision& SourceRevision::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("actionName"))
  {
    m_actionName = jsonValue.GetString("actionName");

    m_actionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("revisionId"))
  {
    m_revisionId = jsonValue.GetString("revisionId");

    m_revisionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("revisionSummary"))
  {
    m_revisionSummary = jsonValue.GetString("revisionSummary");

    m_revisionSummaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("revisionUrl"))
  {
    m_revisionUrl = jsonValue.GetString("revisionUrl");

    m_revisionUrlHasBeenSet = true;
  }

  return *this;
}

JsonValue SourceRevision::Jsonize() const
{
  JsonValue payload;

  if(m_actionNameHasBeenSet)
  {
   payload.WithString("actionName", m_actionName);

  }

  if(m_revisionIdHasBeenSet)
  {
   payload.WithString("revisionId", m_revisionId);

  }

  if(m_revisionSummaryHasBeenSet)
  {
   payload.WithString("revisionSummary", m_revisionSummary);

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
