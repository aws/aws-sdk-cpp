/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/SNSConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LookoutMetrics
{
namespace Model
{

SNSConfiguration::SNSConfiguration() : 
    m_roleArnHasBeenSet(false),
    m_snsTopicArnHasBeenSet(false),
    m_snsFormat(SnsFormat::NOT_SET),
    m_snsFormatHasBeenSet(false)
{
}

SNSConfiguration::SNSConfiguration(JsonView jsonValue) : 
    m_roleArnHasBeenSet(false),
    m_snsTopicArnHasBeenSet(false),
    m_snsFormat(SnsFormat::NOT_SET),
    m_snsFormatHasBeenSet(false)
{
  *this = jsonValue;
}

SNSConfiguration& SNSConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SnsTopicArn"))
  {
    m_snsTopicArn = jsonValue.GetString("SnsTopicArn");

    m_snsTopicArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SnsFormat"))
  {
    m_snsFormat = SnsFormatMapper::GetSnsFormatForName(jsonValue.GetString("SnsFormat"));

    m_snsFormatHasBeenSet = true;
  }

  return *this;
}

JsonValue SNSConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_snsTopicArnHasBeenSet)
  {
   payload.WithString("SnsTopicArn", m_snsTopicArn);

  }

  if(m_snsFormatHasBeenSet)
  {
   payload.WithString("SnsFormat", SnsFormatMapper::GetNameForSnsFormat(m_snsFormat));
  }

  return payload;
}

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
