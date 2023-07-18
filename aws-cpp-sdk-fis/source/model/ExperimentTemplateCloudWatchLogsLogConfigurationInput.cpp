/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fis/model/ExperimentTemplateCloudWatchLogsLogConfigurationInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FIS
{
namespace Model
{

ExperimentTemplateCloudWatchLogsLogConfigurationInput::ExperimentTemplateCloudWatchLogsLogConfigurationInput() : 
    m_logGroupArnHasBeenSet(false)
{
}

ExperimentTemplateCloudWatchLogsLogConfigurationInput::ExperimentTemplateCloudWatchLogsLogConfigurationInput(JsonView jsonValue) : 
    m_logGroupArnHasBeenSet(false)
{
  *this = jsonValue;
}

ExperimentTemplateCloudWatchLogsLogConfigurationInput& ExperimentTemplateCloudWatchLogsLogConfigurationInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("logGroupArn"))
  {
    m_logGroupArn = jsonValue.GetString("logGroupArn");

    m_logGroupArnHasBeenSet = true;
  }

  return *this;
}

JsonValue ExperimentTemplateCloudWatchLogsLogConfigurationInput::Jsonize() const
{
  JsonValue payload;

  if(m_logGroupArnHasBeenSet)
  {
   payload.WithString("logGroupArn", m_logGroupArn);

  }

  return payload;
}

} // namespace Model
} // namespace FIS
} // namespace Aws
