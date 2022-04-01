/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeImageVersionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeImageVersionResult::DescribeImageVersionResult() : 
    m_imageVersionStatus(ImageVersionStatus::NOT_SET),
    m_version(0)
{
}

DescribeImageVersionResult::DescribeImageVersionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_imageVersionStatus(ImageVersionStatus::NOT_SET),
    m_version(0)
{
  *this = result;
}

DescribeImageVersionResult& DescribeImageVersionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("BaseImage"))
  {
    m_baseImage = jsonValue.GetString("BaseImage");

  }

  if(jsonValue.ValueExists("ContainerImage"))
  {
    m_containerImage = jsonValue.GetString("ContainerImage");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

  }

  if(jsonValue.ValueExists("ImageArn"))
  {
    m_imageArn = jsonValue.GetString("ImageArn");

  }

  if(jsonValue.ValueExists("ImageVersionArn"))
  {
    m_imageVersionArn = jsonValue.GetString("ImageVersionArn");

  }

  if(jsonValue.ValueExists("ImageVersionStatus"))
  {
    m_imageVersionStatus = ImageVersionStatusMapper::GetImageVersionStatusForName(jsonValue.GetString("ImageVersionStatus"));

  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

  }

  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetInteger("Version");

  }



  return *this;
}
