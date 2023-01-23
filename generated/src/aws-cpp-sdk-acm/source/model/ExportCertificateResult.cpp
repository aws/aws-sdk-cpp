/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/ExportCertificateResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ACM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ExportCertificateResult::ExportCertificateResult()
{
}

ExportCertificateResult::ExportCertificateResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ExportCertificateResult& ExportCertificateResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Certificate"))
  {
    m_certificate = jsonValue.GetString("Certificate");

  }

  if(jsonValue.ValueExists("CertificateChain"))
  {
    m_certificateChain = jsonValue.GetString("CertificateChain");

  }

  if(jsonValue.ValueExists("PrivateKey"))
  {
    m_privateKey = jsonValue.GetString("PrivateKey");

  }



  return *this;
}
