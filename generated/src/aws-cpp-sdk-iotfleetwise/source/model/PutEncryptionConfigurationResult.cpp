﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/PutEncryptionConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTFleetWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutEncryptionConfigurationResult::PutEncryptionConfigurationResult() : 
    m_encryptionStatus(EncryptionStatus::NOT_SET),
    m_encryptionType(EncryptionType::NOT_SET)
{
}

PutEncryptionConfigurationResult::PutEncryptionConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_encryptionStatus(EncryptionStatus::NOT_SET),
    m_encryptionType(EncryptionType::NOT_SET)
{
  *this = result;
}

PutEncryptionConfigurationResult& PutEncryptionConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("kmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("kmsKeyId");

  }

  if(jsonValue.ValueExists("encryptionStatus"))
  {
    m_encryptionStatus = EncryptionStatusMapper::GetEncryptionStatusForName(jsonValue.GetString("encryptionStatus"));

  }

  if(jsonValue.ValueExists("encryptionType"))
  {
    m_encryptionType = EncryptionTypeMapper::GetEncryptionTypeForName(jsonValue.GetString("encryptionType"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
