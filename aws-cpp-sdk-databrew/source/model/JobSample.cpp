/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/JobSample.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GlueDataBrew
{
namespace Model
{

JobSample::JobSample() : 
    m_mode(SampleMode::NOT_SET),
    m_modeHasBeenSet(false),
    m_size(0),
    m_sizeHasBeenSet(false)
{
}

JobSample::JobSample(JsonView jsonValue) : 
    m_mode(SampleMode::NOT_SET),
    m_modeHasBeenSet(false),
    m_size(0),
    m_sizeHasBeenSet(false)
{
  *this = jsonValue;
}

JobSample& JobSample::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Mode"))
  {
    m_mode = SampleModeMapper::GetSampleModeForName(jsonValue.GetString("Mode"));

    m_modeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Size"))
  {
    m_size = jsonValue.GetInt64("Size");

    m_sizeHasBeenSet = true;
  }

  return *this;
}

JsonValue JobSample::Jsonize() const
{
  JsonValue payload;

  if(m_modeHasBeenSet)
  {
   payload.WithString("Mode", SampleModeMapper::GetNameForSampleMode(m_mode));
  }

  if(m_sizeHasBeenSet)
  {
   payload.WithInt64("Size", m_size);

  }

  return payload;
}

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
