/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/GrammarSlotTypeSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

GrammarSlotTypeSource::GrammarSlotTypeSource() : 
    m_s3BucketNameHasBeenSet(false),
    m_s3ObjectKeyHasBeenSet(false),
    m_kmsKeyArnHasBeenSet(false)
{
}

GrammarSlotTypeSource::GrammarSlotTypeSource(JsonView jsonValue) : 
    m_s3BucketNameHasBeenSet(false),
    m_s3ObjectKeyHasBeenSet(false),
    m_kmsKeyArnHasBeenSet(false)
{
  *this = jsonValue;
}

GrammarSlotTypeSource& GrammarSlotTypeSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("s3BucketName"))
  {
    m_s3BucketName = jsonValue.GetString("s3BucketName");

    m_s3BucketNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3ObjectKey"))
  {
    m_s3ObjectKey = jsonValue.GetString("s3ObjectKey");

    m_s3ObjectKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("kmsKeyArn"))
  {
    m_kmsKeyArn = jsonValue.GetString("kmsKeyArn");

    m_kmsKeyArnHasBeenSet = true;
  }

  return *this;
}

JsonValue GrammarSlotTypeSource::Jsonize() const
{
  JsonValue payload;

  if(m_s3BucketNameHasBeenSet)
  {
   payload.WithString("s3BucketName", m_s3BucketName);

  }

  if(m_s3ObjectKeyHasBeenSet)
  {
   payload.WithString("s3ObjectKey", m_s3ObjectKey);

  }

  if(m_kmsKeyArnHasBeenSet)
  {
   payload.WithString("kmsKeyArn", m_kmsKeyArn);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
