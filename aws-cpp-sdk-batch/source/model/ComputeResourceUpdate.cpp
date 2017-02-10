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

ComputeResourceUpdate::ComputeResourceUpdate(const JsonValue& jsonValue) : 
    m_minvCpus(0),
    m_minvCpusHasBeenSet(false),
    m_maxvCpus(0),
    m_maxvCpusHasBeenSet(false),
    m_desiredvCpus(0),
    m_desiredvCpusHasBeenSet(false)
{
  *this = jsonValue;
}

ComputeResourceUpdate& ComputeResourceUpdate::operator =(const JsonValue& jsonValue)
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