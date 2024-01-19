/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/UpdateKinesisStreamingConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

UpdateKinesisStreamingConfiguration::UpdateKinesisStreamingConfiguration() : 
    m_approximateCreationDateTimePrecision(ApproximateCreationDateTimePrecision::NOT_SET),
    m_approximateCreationDateTimePrecisionHasBeenSet(false)
{
}

UpdateKinesisStreamingConfiguration::UpdateKinesisStreamingConfiguration(JsonView jsonValue) : 
    m_approximateCreationDateTimePrecision(ApproximateCreationDateTimePrecision::NOT_SET),
    m_approximateCreationDateTimePrecisionHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateKinesisStreamingConfiguration& UpdateKinesisStreamingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApproximateCreationDateTimePrecision"))
  {
    m_approximateCreationDateTimePrecision = ApproximateCreationDateTimePrecisionMapper::GetApproximateCreationDateTimePrecisionForName(jsonValue.GetString("ApproximateCreationDateTimePrecision"));

    m_approximateCreationDateTimePrecisionHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateKinesisStreamingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_approximateCreationDateTimePrecisionHasBeenSet)
  {
   payload.WithString("ApproximateCreationDateTimePrecision", ApproximateCreationDateTimePrecisionMapper::GetNameForApproximateCreationDateTimePrecision(m_approximateCreationDateTimePrecision));
  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
