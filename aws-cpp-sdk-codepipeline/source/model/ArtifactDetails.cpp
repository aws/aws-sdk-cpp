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
#include <aws/codepipeline/model/ArtifactDetails.h>
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

ArtifactDetails::ArtifactDetails() : 
    m_minimumCount(0),
    m_minimumCountHasBeenSet(false),
    m_maximumCount(0),
    m_maximumCountHasBeenSet(false)
{
}

ArtifactDetails::ArtifactDetails(const JsonValue& jsonValue) : 
    m_minimumCount(0),
    m_minimumCountHasBeenSet(false),
    m_maximumCount(0),
    m_maximumCountHasBeenSet(false)
{
  *this = jsonValue;
}

ArtifactDetails& ArtifactDetails::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("minimumCount"))
  {
    m_minimumCount = jsonValue.GetInteger("minimumCount");

    m_minimumCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maximumCount"))
  {
    m_maximumCount = jsonValue.GetInteger("maximumCount");

    m_maximumCountHasBeenSet = true;
  }

  return *this;
}

JsonValue ArtifactDetails::Jsonize() const
{
  JsonValue payload;

  if(m_minimumCountHasBeenSet)
  {
   payload.WithInteger("minimumCount", m_minimumCount);

  }

  if(m_maximumCountHasBeenSet)
  {
   payload.WithInteger("maximumCount", m_maximumCount);

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws