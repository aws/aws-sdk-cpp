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

#include <aws/datasync/model/DescribeLocationS3Result.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DataSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeLocationS3Result::DescribeLocationS3Result() : 
    m_s3StorageClass(S3StorageClass::NOT_SET)
{
}

DescribeLocationS3Result::DescribeLocationS3Result(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_s3StorageClass(S3StorageClass::NOT_SET)
{
  *this = result;
}

DescribeLocationS3Result& DescribeLocationS3Result::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("LocationArn"))
  {
    m_locationArn = jsonValue.GetString("LocationArn");

  }

  if(jsonValue.ValueExists("LocationUri"))
  {
    m_locationUri = jsonValue.GetString("LocationUri");

  }

  if(jsonValue.ValueExists("S3StorageClass"))
  {
    m_s3StorageClass = S3StorageClassMapper::GetS3StorageClassForName(jsonValue.GetString("S3StorageClass"));

  }

  if(jsonValue.ValueExists("S3Config"))
  {
    m_s3Config = jsonValue.GetObject("S3Config");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }



  return *this;
}
