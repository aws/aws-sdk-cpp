/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeModelCardResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeModelCardResult::DescribeModelCardResult() : 
    m_modelCardVersion(0),
    m_modelCardStatus(ModelCardStatus::NOT_SET),
    m_modelCardProcessingStatus(ModelCardProcessingStatus::NOT_SET)
{
}

DescribeModelCardResult::DescribeModelCardResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_modelCardVersion(0),
    m_modelCardStatus(ModelCardStatus::NOT_SET),
    m_modelCardProcessingStatus(ModelCardProcessingStatus::NOT_SET)
{
  *this = result;
}

DescribeModelCardResult& DescribeModelCardResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ModelCardArn"))
  {
    m_modelCardArn = jsonValue.GetString("ModelCardArn");

  }

  if(jsonValue.ValueExists("ModelCardName"))
  {
    m_modelCardName = jsonValue.GetString("ModelCardName");

  }

  if(jsonValue.ValueExists("ModelCardVersion"))
  {
    m_modelCardVersion = jsonValue.GetInteger("ModelCardVersion");

  }

  if(jsonValue.ValueExists("Content"))
  {
    m_content = jsonValue.GetString("Content");

  }

  if(jsonValue.ValueExists("ModelCardStatus"))
  {
    m_modelCardStatus = ModelCardStatusMapper::GetModelCardStatusForName(jsonValue.GetString("ModelCardStatus"));

  }

  if(jsonValue.ValueExists("SecurityConfig"))
  {
    m_securityConfig = jsonValue.GetObject("SecurityConfig");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("CreatedBy"))
  {
    m_createdBy = jsonValue.GetObject("CreatedBy");

  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

  }

  if(jsonValue.ValueExists("LastModifiedBy"))
  {
    m_lastModifiedBy = jsonValue.GetObject("LastModifiedBy");

  }

  if(jsonValue.ValueExists("ModelCardProcessingStatus"))
  {
    m_modelCardProcessingStatus = ModelCardProcessingStatusMapper::GetModelCardProcessingStatusForName(jsonValue.GetString("ModelCardProcessingStatus"));

  }



  return *this;
}
