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

#include <aws/macie/model/ClassificationTypeUpdate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie
{
namespace Model
{

ClassificationTypeUpdate::ClassificationTypeUpdate() : 
    m_oneTime(S3OneTimeClassificationType::NOT_SET),
    m_oneTimeHasBeenSet(false),
    m_continuous(S3ContinuousClassificationType::NOT_SET),
    m_continuousHasBeenSet(false)
{
}

ClassificationTypeUpdate::ClassificationTypeUpdate(JsonView jsonValue) : 
    m_oneTime(S3OneTimeClassificationType::NOT_SET),
    m_oneTimeHasBeenSet(false),
    m_continuous(S3ContinuousClassificationType::NOT_SET),
    m_continuousHasBeenSet(false)
{
  *this = jsonValue;
}

ClassificationTypeUpdate& ClassificationTypeUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("oneTime"))
  {
    m_oneTime = S3OneTimeClassificationTypeMapper::GetS3OneTimeClassificationTypeForName(jsonValue.GetString("oneTime"));

    m_oneTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("continuous"))
  {
    m_continuous = S3ContinuousClassificationTypeMapper::GetS3ContinuousClassificationTypeForName(jsonValue.GetString("continuous"));

    m_continuousHasBeenSet = true;
  }

  return *this;
}

JsonValue ClassificationTypeUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_oneTimeHasBeenSet)
  {
   payload.WithString("oneTime", S3OneTimeClassificationTypeMapper::GetNameForS3OneTimeClassificationType(m_oneTime));
  }

  if(m_continuousHasBeenSet)
  {
   payload.WithString("continuous", S3ContinuousClassificationTypeMapper::GetNameForS3ContinuousClassificationType(m_continuous));
  }

  return payload;
}

} // namespace Model
} // namespace Macie
} // namespace Aws
