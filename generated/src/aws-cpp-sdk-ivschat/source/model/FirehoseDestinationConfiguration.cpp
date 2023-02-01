/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivschat/model/FirehoseDestinationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ivschat
{
namespace Model
{

FirehoseDestinationConfiguration::FirehoseDestinationConfiguration() : 
    m_deliveryStreamNameHasBeenSet(false)
{
}

FirehoseDestinationConfiguration::FirehoseDestinationConfiguration(JsonView jsonValue) : 
    m_deliveryStreamNameHasBeenSet(false)
{
  *this = jsonValue;
}

FirehoseDestinationConfiguration& FirehoseDestinationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("deliveryStreamName"))
  {
    m_deliveryStreamName = jsonValue.GetString("deliveryStreamName");

    m_deliveryStreamNameHasBeenSet = true;
  }

  return *this;
}

JsonValue FirehoseDestinationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_deliveryStreamNameHasBeenSet)
  {
   payload.WithString("deliveryStreamName", m_deliveryStreamName);

  }

  return payload;
}

} // namespace Model
} // namespace ivschat
} // namespace Aws
