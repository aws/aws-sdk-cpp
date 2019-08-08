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

#include <aws/glue/model/ConfusionMatrix.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

ConfusionMatrix::ConfusionMatrix() : 
    m_numTruePositives(0),
    m_numTruePositivesHasBeenSet(false),
    m_numFalsePositives(0),
    m_numFalsePositivesHasBeenSet(false),
    m_numTrueNegatives(0),
    m_numTrueNegativesHasBeenSet(false),
    m_numFalseNegatives(0),
    m_numFalseNegativesHasBeenSet(false)
{
}

ConfusionMatrix::ConfusionMatrix(JsonView jsonValue) : 
    m_numTruePositives(0),
    m_numTruePositivesHasBeenSet(false),
    m_numFalsePositives(0),
    m_numFalsePositivesHasBeenSet(false),
    m_numTrueNegatives(0),
    m_numTrueNegativesHasBeenSet(false),
    m_numFalseNegatives(0),
    m_numFalseNegativesHasBeenSet(false)
{
  *this = jsonValue;
}

ConfusionMatrix& ConfusionMatrix::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NumTruePositives"))
  {
    m_numTruePositives = jsonValue.GetInt64("NumTruePositives");

    m_numTruePositivesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumFalsePositives"))
  {
    m_numFalsePositives = jsonValue.GetInt64("NumFalsePositives");

    m_numFalsePositivesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumTrueNegatives"))
  {
    m_numTrueNegatives = jsonValue.GetInt64("NumTrueNegatives");

    m_numTrueNegativesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumFalseNegatives"))
  {
    m_numFalseNegatives = jsonValue.GetInt64("NumFalseNegatives");

    m_numFalseNegativesHasBeenSet = true;
  }

  return *this;
}

JsonValue ConfusionMatrix::Jsonize() const
{
  JsonValue payload;

  if(m_numTruePositivesHasBeenSet)
  {
   payload.WithInt64("NumTruePositives", m_numTruePositives);

  }

  if(m_numFalsePositivesHasBeenSet)
  {
   payload.WithInt64("NumFalsePositives", m_numFalsePositives);

  }

  if(m_numTrueNegativesHasBeenSet)
  {
   payload.WithInt64("NumTrueNegatives", m_numTrueNegatives);

  }

  if(m_numFalseNegativesHasBeenSet)
  {
   payload.WithInt64("NumFalseNegatives", m_numFalseNegatives);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
