/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie/model/ClassificationType.h>
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

ClassificationType::ClassificationType() : 
    m_oneTime(S3OneTimeClassificationType::NOT_SET),
    m_oneTimeHasBeenSet(false),
    m_continuous(S3ContinuousClassificationType::NOT_SET),
    m_continuousHasBeenSet(false)
{
}

ClassificationType::ClassificationType(JsonView jsonValue) : 
    m_oneTime(S3OneTimeClassificationType::NOT_SET),
    m_oneTimeHasBeenSet(false),
    m_continuous(S3ContinuousClassificationType::NOT_SET),
    m_continuousHasBeenSet(false)
{
  *this = jsonValue;
}

ClassificationType& ClassificationType::operator =(JsonView jsonValue)
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

JsonValue ClassificationType::Jsonize() const
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
