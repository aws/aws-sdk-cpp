/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  JsonView jsonValue = result.GetPayload().View();
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

  if(jsonValue.ValueExists("NotificationChannel"))
  {
    m_notificationChannel = jsonValue.GetObject("NotificationChannel");

  }

  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");

  }

  if(jsonValue.ValueExists("RegionsOfInterest"))
  {
    Aws::Utils::Array<JsonView> regionsOfInterestJsonList = jsonValue.GetArray("RegionsOfInterest");
    for(unsigned regionsOfInterestIndex = 0; regionsOfInterestIndex < regionsOfInterestJsonList.GetLength(); ++regionsOfInterestIndex)
    {
      m_regionsOfInterest.push_back(regionsOfInterestJsonList[regionsOfInterestIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("DataSharingPreference"))
  {
    m_dataSharingPreference = jsonValue.GetObject("DataSharingPreference");

  }



  return *this;
}
