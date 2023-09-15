/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/MembershipProtectedQueryResultConfiguration.h>
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

MembershipProtectedQueryResultConfiguration::MembershipProtectedQueryResultConfiguration() : 
    m_outputConfigurationHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
}

MembershipProtectedQueryResultConfiguration::MembershipProtectedQueryResultConfiguration(JsonView jsonValue) : 
    m_outputConfigurationHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
  *this = jsonValue;
}

MembershipProtectedQueryResultConfiguration& MembershipProtectedQueryResultConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("outputConfiguration"))
  {
    m_outputConfiguration = jsonValue.GetObject("outputConfiguration");

    m_outputConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue MembershipProtectedQueryResultConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_outputConfigurationHasBeenSet)
  {
   payload.WithObject("outputConfiguration", m_outputConfiguration.Jsonize());

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
