/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/CloudFormationProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

CloudFormationProperties::CloudFormationProperties() : 
    m_templateUrlHasBeenSet(false)
{
}

CloudFormationProperties::CloudFormationProperties(JsonView jsonValue) : 
    m_templateUrlHasBeenSet(false)
{
  *this = jsonValue;
}

CloudFormationProperties& CloudFormationProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("templateUrl"))
  {
    m_templateUrl = jsonValue.GetString("templateUrl");

    m_templateUrlHasBeenSet = true;
  }

  return *this;
}

JsonValue CloudFormationProperties::Jsonize() const
{
  JsonValue payload;

  if(m_templateUrlHasBeenSet)
  {
   payload.WithString("templateUrl", m_templateUrl);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
