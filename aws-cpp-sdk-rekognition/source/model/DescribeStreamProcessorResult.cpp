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

#include <aws/rekognition/model/DescribeStreamProcessorResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Rekognition::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeStreamProcessorResult::DescribeStreamProcessorResult() : 
    m_status(StreamProcessorStatus::NOT_SET)
{
}

DescribeStreamProcessorResult::DescribeStreamProcessorResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(StreamProcessorStatus::NOT_SET)
{
  *this = result;
}

DescribeStreamProcessorResult& DescribeStreamProcessorResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("StreamProcessorArn"))
  {
    m_streamProcessorArn = jsonValue.GetString("StreamProcessorArn");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = StreamProcessorStatusMapper::GetStreamProcessorStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");

  }

  if(jsonValue.ValueExists("CreationTimestamp"))
  {
    m_creationTimestamp = jsonValue.GetDouble("CreationTimestamp");

  }

  if(jsonValue.ValueExists("LastUpdateTimestamp"))
  {
    m_lastUpdateTimestamp = jsonValue.GetDouble("LastUpdateTimestamp");

  }

  if(jsonValue.ValueExists("Input"))
  {
    m_input = jsonValue.GetObject("Input");

  }

  if(jsonValue.ValueExists("Output"))
  {
    m_output = jsonValue.GetObject("Output");

  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

  }

  if(jsonValue.ValueExists("Settings"))
  {
    m_settings = jsonValue.GetObject("Settings");

  }



  return *this;
}
