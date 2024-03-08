/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/DescribeCertificateProviderResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeCertificateProviderResult::DescribeCertificateProviderResult()
{
}

DescribeCertificateProviderResult::DescribeCertificateProviderResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeCertificateProviderResult& DescribeCertificateProviderResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("certificateProviderName"))
  {
    m_certificateProviderName = jsonValue.GetString("certificateProviderName");

  }

  if(jsonValue.ValueExists("certificateProviderArn"))
  {
    m_certificateProviderArn = jsonValue.GetString("certificateProviderArn");

  }

  if(jsonValue.ValueExists("lambdaFunctionArn"))
  {
    m_lambdaFunctionArn = jsonValue.GetString("lambdaFunctionArn");

  }

  if(jsonValue.ValueExists("accountDefaultForOperations"))
  {
    Aws::Utils::Array<JsonView> accountDefaultForOperationsJsonList = jsonValue.GetArray("accountDefaultForOperations");
    for(unsigned accountDefaultForOperationsIndex = 0; accountDefaultForOperationsIndex < accountDefaultForOperationsJsonList.GetLength(); ++accountDefaultForOperationsIndex)
    {
      m_accountDefaultForOperations.push_back(CertificateProviderOperationMapper::GetCertificateProviderOperationForName(accountDefaultForOperationsJsonList[accountDefaultForOperationsIndex].AsString()));
    }
  }

  if(jsonValue.ValueExists("creationDate"))
  {
    m_creationDate = jsonValue.GetDouble("creationDate");

  }

  if(jsonValue.ValueExists("lastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetDouble("lastModifiedDate");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
