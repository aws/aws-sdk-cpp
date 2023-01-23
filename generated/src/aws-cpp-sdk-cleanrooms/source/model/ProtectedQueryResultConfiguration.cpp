/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ProtectedQueryResultConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

ProtectedQueryResultConfiguration::ProtectedQueryResultConfiguration() : 
    m_outputConfigurationHasBeenSet(false)
{
}

ProtectedQueryResultConfiguration::ProtectedQueryResultConfiguration(JsonView jsonValue) : 
    m_outputConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

ProtectedQueryResultConfiguration& ProtectedQueryResultConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("outputConfiguration"))
  {
    m_outputConfiguration = jsonValue.GetObject("outputConfiguration");

    m_outputConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue ProtectedQueryResultConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_outputConfigurationHasBeenSet)
  {
   payload.WithObject("outputConfiguration", m_outputConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
