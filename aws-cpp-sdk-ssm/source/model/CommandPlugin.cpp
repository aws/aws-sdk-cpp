/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/ssm/model/CommandPlugin.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

CommandPlugin::CommandPlugin() : 
    m_nameHasBeenSet(false),
    m_status(CommandPluginStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusDetailsHasBeenSet(false),
    m_responseCode(0),
    m_responseCodeHasBeenSet(false),
    m_responseStartDateTimeHasBeenSet(false),
    m_responseFinishDateTimeHasBeenSet(false),
    m_outputHasBeenSet(false),
    m_standardOutputUrlHasBeenSet(false),
    m_standardErrorUrlHasBeenSet(false),
    m_outputS3RegionHasBeenSet(false),
    m_outputS3BucketNameHasBeenSet(false),
    m_outputS3KeyPrefixHasBeenSet(false)
{
}

CommandPlugin::CommandPlugin(const JsonValue& jsonValue) : 
    m_nameHasBeenSet(false),
    m_status(CommandPluginStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusDetailsHasBeenSet(false),
    m_responseCode(0),
    m_responseCodeHasBeenSet(false),
    m_responseStartDateTimeHasBeenSet(false),
    m_responseFinishDateTimeHasBeenSet(false),
    m_outputHasBeenSet(false),
    m_standardOutputUrlHasBeenSet(false),
    m_standardErrorUrlHasBeenSet(false),
    m_outputS3RegionHasBeenSet(false),
    m_outputS3BucketNameHasBeenSet(false),
    m_outputS3KeyPrefixHasBeenSet(false)
{
  *this = jsonValue;
}

CommandPlugin& CommandPlugin::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = CommandPluginStatusMapper::GetCommandPluginStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusDetails"))
  {
    m_statusDetails = jsonValue.GetString("StatusDetails");

    m_statusDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResponseCode"))
  {
    m_responseCode = jsonValue.GetInteger("ResponseCode");

    m_responseCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResponseStartDateTime"))
  {
    m_responseStartDateTime = jsonValue.GetDouble("ResponseStartDateTime");

    m_responseStartDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResponseFinishDateTime"))
  {
    m_responseFinishDateTime = jsonValue.GetDouble("ResponseFinishDateTime");

    m_responseFinishDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Output"))
  {
    m_output = jsonValue.GetString("Output");

    m_outputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StandardOutputUrl"))
  {
    m_standardOutputUrl = jsonValue.GetString("StandardOutputUrl");

    m_standardOutputUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StandardErrorUrl"))
  {
    m_standardErrorUrl = jsonValue.GetString("StandardErrorUrl");

    m_standardErrorUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputS3Region"))
  {
    m_outputS3Region = jsonValue.GetString("OutputS3Region");

    m_outputS3RegionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputS3BucketName"))
  {
    m_outputS3BucketName = jsonValue.GetString("OutputS3BucketName");

    m_outputS3BucketNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputS3KeyPrefix"))
  {
    m_outputS3KeyPrefix = jsonValue.GetString("OutputS3KeyPrefix");

    m_outputS3KeyPrefixHasBeenSet = true;
  }

  return *this;
}

JsonValue CommandPlugin::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", CommandPluginStatusMapper::GetNameForCommandPluginStatus(m_status));
  }

  if(m_statusDetailsHasBeenSet)
  {
   payload.WithString("StatusDetails", m_statusDetails);

  }

  if(m_responseCodeHasBeenSet)
  {
   payload.WithInteger("ResponseCode", m_responseCode);

  }

  if(m_responseStartDateTimeHasBeenSet)
  {
   payload.WithDouble("ResponseStartDateTime", m_responseStartDateTime.SecondsWithMSPrecision());
  }

  if(m_responseFinishDateTimeHasBeenSet)
  {
   payload.WithDouble("ResponseFinishDateTime", m_responseFinishDateTime.SecondsWithMSPrecision());
  }

  if(m_outputHasBeenSet)
  {
   payload.WithString("Output", m_output);

  }

  if(m_standardOutputUrlHasBeenSet)
  {
   payload.WithString("StandardOutputUrl", m_standardOutputUrl);

  }

  if(m_standardErrorUrlHasBeenSet)
  {
   payload.WithString("StandardErrorUrl", m_standardErrorUrl);

  }

  if(m_outputS3RegionHasBeenSet)
  {
   payload.WithString("OutputS3Region", m_outputS3Region);

  }

  if(m_outputS3BucketNameHasBeenSet)
  {
   payload.WithString("OutputS3BucketName", m_outputS3BucketName);

  }

  if(m_outputS3KeyPrefixHasBeenSet)
  {
   payload.WithString("OutputS3KeyPrefix", m_outputS3KeyPrefix);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws