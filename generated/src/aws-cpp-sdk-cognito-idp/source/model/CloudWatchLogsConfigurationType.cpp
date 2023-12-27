/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/CloudWatchLogsConfigurationType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

CloudWatchLogsConfigurationType::CloudWatchLogsConfigurationType() : 
    m_logGroupArnHasBeenSet(false)
{
}

CloudWatchLogsConfigurationType::CloudWatchLogsConfigurationType(JsonView jsonValue) : 
    m_logGroupArnHasBeenSet(false)
{
  *this = jsonValue;
}

CloudWatchLogsConfigurationType& CloudWatchLogsConfigurationType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LogGroupArn"))
  {
    m_logGroupArn = jsonValue.GetString("LogGroupArn");

    m_logGroupArnHasBeenSet = true;
  }

  return *this;
}

JsonValue CloudWatchLogsConfigurationType::Jsonize() const
{
  JsonValue payload;

  if(m_logGroupArnHasBeenSet)
  {
   payload.WithString("LogGroupArn", m_logGroupArn);

  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
