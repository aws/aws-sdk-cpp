/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/DescribeDefaultEncryptionConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeDefaultEncryptionConfigurationResult::DescribeDefaultEncryptionConfigurationResult() : 
    m_encryptionType(EncryptionType::NOT_SET)
{
}

DescribeDefaultEncryptionConfigurationResult::DescribeDefaultEncryptionConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_encryptionType(EncryptionType::NOT_SET)
{
  *this = result;
}

DescribeDefaultEncryptionConfigurationResult& DescribeDefaultEncryptionConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("encryptionType"))
  {
    m_encryptionType = EncryptionTypeMapper::GetEncryptionTypeForName(jsonValue.GetString("encryptionType"));

  }

  if(jsonValue.ValueExists("kmsKeyArn"))
  {
    m_kmsKeyArn = jsonValue.GetString("kmsKeyArn");

  }

  if(jsonValue.ValueExists("configurationStatus"))
  {
    m_configurationStatus = jsonValue.GetObject("configurationStatus");

  }



  return *this;
}
