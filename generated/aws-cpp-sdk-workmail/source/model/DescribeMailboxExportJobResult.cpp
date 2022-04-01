/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/DescribeMailboxExportJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WorkMail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeMailboxExportJobResult::DescribeMailboxExportJobResult() : 
    m_estimatedProgress(0),
    m_state(MailboxExportJobState::NOT_SET)
{
}

DescribeMailboxExportJobResult::DescribeMailboxExportJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_estimatedProgress(0),
    m_state(MailboxExportJobState::NOT_SET)
{
  *this = result;
}

DescribeMailboxExportJobResult& DescribeMailboxExportJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("EntityId"))
  {
    m_entityId = jsonValue.GetString("EntityId");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

  }

  if(jsonValue.ValueExists("KmsKeyArn"))
  {
    m_kmsKeyArn = jsonValue.GetString("KmsKeyArn");

  }

  if(jsonValue.ValueExists("S3BucketName"))
  {
    m_s3BucketName = jsonValue.GetString("S3BucketName");

  }

  if(jsonValue.ValueExists("S3Prefix"))
  {
    m_s3Prefix = jsonValue.GetString("S3Prefix");

  }

  if(jsonValue.ValueExists("S3Path"))
  {
    m_s3Path = jsonValue.GetString("S3Path");

  }

  if(jsonValue.ValueExists("EstimatedProgress"))
  {
    m_estimatedProgress = jsonValue.GetInteger("EstimatedProgress");

  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = MailboxExportJobStateMapper::GetMailboxExportJobStateForName(jsonValue.GetString("State"));

  }

  if(jsonValue.ValueExists("ErrorInfo"))
  {
    m_errorInfo = jsonValue.GetString("ErrorInfo");

  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

  }

  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");

  }



  return *this;
}
