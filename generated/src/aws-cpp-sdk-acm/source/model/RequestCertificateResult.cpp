/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/RequestCertificateResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ACM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

RequestCertificateResult::RequestCertificateResult()
{
}

RequestCertificateResult::RequestCertificateResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

RequestCertificateResult& RequestCertificateResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CertificateArn"))
  {
    m_certificateArn = jsonValue.GetString("CertificateArn");

  }



  return *this;
}
