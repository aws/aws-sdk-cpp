/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/DescribeFaqResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::kendra::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeFaqResult::DescribeFaqResult() : 
    m_status(FaqStatus::NOT_SET),
    m_fileFormat(FaqFileFormat::NOT_SET)
{
}

DescribeFaqResult::DescribeFaqResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(FaqStatus::NOT_SET),
    m_fileFormat(FaqFileFormat::NOT_SET)
{
  *this = result;
}

DescribeFaqResult& DescribeFaqResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

  }

  if(jsonValue.ValueExists("IndexId"))
  {
    m_indexId = jsonValue.GetString("IndexId");

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

  }

  if(jsonValue.ValueExists("UpdatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("UpdatedAt");

  }

  if(jsonValue.ValueExists("S3Path"))
  {
    m_s3Path = jsonValue.GetObject("S3Path");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = FaqStatusMapper::GetFaqStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

  }

  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");

  }

  if(jsonValue.ValueExists("FileFormat"))
  {
    m_fileFormat = FaqFileFormatMapper::GetFaqFileFormatForName(jsonValue.GetString("FileFormat"));

  }



  return *this;
}
