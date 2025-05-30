﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/ValidateE911AddressResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ChimeSDKVoice::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ValidateE911AddressResult::ValidateE911AddressResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ValidateE911AddressResult& ValidateE911AddressResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ValidationResult"))
  {
    m_validationResult = jsonValue.GetInteger("ValidationResult");
    m_validationResultHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AddressExternalId"))
  {
    m_addressExternalId = jsonValue.GetString("AddressExternalId");
    m_addressExternalIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Address"))
  {
    m_address = jsonValue.GetObject("Address");
    m_addressHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CandidateAddressList"))
  {
    Aws::Utils::Array<JsonView> candidateAddressListJsonList = jsonValue.GetArray("CandidateAddressList");
    for(unsigned candidateAddressListIndex = 0; candidateAddressListIndex < candidateAddressListJsonList.GetLength(); ++candidateAddressListIndex)
    {
      m_candidateAddressList.push_back(candidateAddressListJsonList[candidateAddressListIndex].AsObject());
    }
    m_candidateAddressListHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
