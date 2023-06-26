/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

ActionRevision::ActionRevision(JsonView jsonValue) : 
    m_revisionIdHasBeenSet(false),
    m_revisionChangeIdHasBeenSet(false),
    m_createdHasBeenSet(false)
{
  *this = jsonValue;
}

ActionRevision& ActionRevision::operator =(JsonView jsonValue)
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
