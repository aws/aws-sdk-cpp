/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/PipelineSummary.h>
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

PipelineSummary::PipelineSummary() : 
    m_nameHasBeenSet(false),
    m_version(0),
    m_versionHasBeenSet(false),
    m_createdHasBeenSet(false),
    m_updatedHasBeenSet(false)
{
}

PipelineSummary::PipelineSummary(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_version(0),
    m_versionHasBeenSet(false),
    m_createdHasBeenSet(false),
    m_updatedHasBeenSet(false)
{
  *this = jsonValue;
}

PipelineSummary& PipelineSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetInteger("version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("created"))
  {
    m_created = jsonValue.GetDouble("created");

    m_createdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updated"))
  {
    m_updated = jsonValue.GetDouble("updated");

    m_updatedHasBeenSet = true;
  }

  return *this;
}

JsonValue PipelineSummary::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithInteger("version", m_version);

  }

  if(m_createdHasBeenSet)
  {
   payload.WithDouble("created", m_created.SecondsWithMSPrecision());
  }

  if(m_updatedHasBeenSet)
  {
   payload.WithDouble("updated", m_updated.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
