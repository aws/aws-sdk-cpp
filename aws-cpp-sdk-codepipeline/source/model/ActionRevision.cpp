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
#include <aws/codepipeline/model/ActionRevision.h>
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

ActionRevision::ActionRevision() : 
    m_revisionIdHasBeenSet(false),
    m_revisionChangeIdHasBeenSet(false),
    m_createdHasBeenSet(false)
{
}

ActionRevision::ActionRevision(const JsonValue& jsonValue) : 
    m_revisionIdHasBeenSet(false),
    m_revisionChangeIdHasBeenSet(false),
    m_createdHasBeenSet(false)
{
  *this = jsonValue;
}

ActionRevision& ActionRevision::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("revisionId"))
  {
    m_revisionId = jsonValue.GetString("revisionId");

    m_revisionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("revisionChangeId"))
  {
    m_revisionChangeId = jsonValue.GetString("revisionChangeId");

    m_revisionChangeIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("created"))
  {
    m_created = jsonValue.GetDouble("created");

    m_createdHasBeenSet = true;
  }

  return *this;
}

JsonValue ActionRevision::Jsonize() const
{
  JsonValue payload;

  if(m_revisionIdHasBeenSet)
  {
   payload.WithString("revisionId", m_revisionId);

  }

  if(m_revisionChangeIdHasBeenSet)
  {
   payload.WithString("revisionChangeId", m_revisionChangeId);

  }

  if(m_createdHasBeenSet)
  {
   payload.WithDouble("created", m_created.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws