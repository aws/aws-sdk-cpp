/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/ComputeResourceUpdate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Batch
{
namespace Model
{

ComputeResourceUpdate::ComputeResourceUpdate() : 
    m_minvCpus(0),
    m_minvCpusHasBeenSet(false),
    m_maxvCpus(0),
    m_maxvCpusHasBeenSet(false),
    m_desiredvCpus(0),
    m_desiredvCpusHasBeenSet(false)
{
}

ComputeResourceUpdate::ComputeResourceUpdate(JsonView jsonValue) : 
    m_minvCpus(0),
    m_minvCpusHasBeenSet(false),
    m_maxvCpus(0),
    m_maxvCpusHasBeenSet(false),
    m_desiredvCpus(0),
    m_desiredvCpusHasBeenSet(false)
{
  *this = jsonValue;
}

ComputeResourceUpdate& ComputeResourceUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("minvCpus"))
  {
    m_minvCpus = jsonValue.GetInteger("minvCpus");

    m_minvCpusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxvCpus"))
  {
    m_maxvCpus = jsonValue.GetInteger("maxvCpus");

    m_maxvCpusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("desiredvCpus"))
  {
    m_desiredvCpus = jsonValue.GetInteger("desiredvCpus");

    m_desiredvCpusHasBeenSet = true;
  }

  return *this;
}

JsonValue ComputeResourceUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_minvCpusHasBeenSet)
  {
   payload.WithInteger("minvCpus", m_minvCpus);

  }

  if(m_maxvCpusHasBeenSet)
  {
   payload.WithInteger("maxvCpus", m_maxvCpus);

  }

  if(m_desiredvCpusHasBeenSet)
  {
   payload.WithInteger("desiredvCpus", m_desiredvCpus);

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
