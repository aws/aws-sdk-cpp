/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/AuthenticationConfiguration.h>
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

AuthenticationConfiguration::AuthenticationConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

AuthenticationConfiguration& AuthenticationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RoleARN"))
  {
    m_roleARN = jsonValue.GetString("RoleARN");
    m_roleARNHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Connectivity"))
  {
    m_connectivity = ConnectivityMapper::GetConnectivityForName(jsonValue.GetString("Connectivity"));
    m_connectivityHasBeenSet = true;
  }
  return *this;
}

JsonValue AuthenticationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_roleARNHasBeenSet)
  {
   payload.WithString("RoleARN", m_roleARN);

  }

  if(m_connectivityHasBeenSet)
  {
   payload.WithString("Connectivity", ConnectivityMapper::GetNameForConnectivity(m_connectivity));
  }

  return payload;
}

} // namespace Model
} // namespace Firehose
} // namespace Aws
