/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/MSKSourceDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Firehose
{
namespace Model
{

MSKSourceDescription::MSKSourceDescription() : 
    m_mSKClusterARNHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_authenticationConfigurationHasBeenSet(false),
    m_deliveryStartTimestampHasBeenSet(false)
{
}

MSKSourceDescription::MSKSourceDescription(JsonView jsonValue) : 
    m_mSKClusterARNHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_authenticationConfigurationHasBeenSet(false),
    m_deliveryStartTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

MSKSourceDescription& MSKSourceDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MSKClusterARN"))
  {
    m_mSKClusterARN = jsonValue.GetString("MSKClusterARN");

    m_mSKClusterARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TopicName"))
  {
    m_topicName = jsonValue.GetString("TopicName");

    m_topicNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AuthenticationConfiguration"))
  {
    m_authenticationConfiguration = jsonValue.GetObject("AuthenticationConfiguration");

    m_authenticationConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeliveryStartTimestamp"))
  {
    m_deliveryStartTimestamp = jsonValue.GetDouble("DeliveryStartTimestamp");

    m_deliveryStartTimestampHasBeenSet = true;
  }

  return *this;
}

JsonValue MSKSourceDescription::Jsonize() const
{
  JsonValue payload;

  if(m_mSKClusterARNHasBeenSet)
  {
   payload.WithString("MSKClusterARN", m_mSKClusterARN);

  }

  if(m_topicNameHasBeenSet)
  {
   payload.WithString("TopicName", m_topicName);

  }

  if(m_authenticationConfigurationHasBeenSet)
  {
   payload.WithObject("AuthenticationConfiguration", m_authenticationConfiguration.Jsonize());

  }

  if(m_deliveryStartTimestampHasBeenSet)
  {
   payload.WithDouble("DeliveryStartTimestamp", m_deliveryStartTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Firehose
} // namespace Aws
