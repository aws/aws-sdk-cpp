/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/DescribeCACertificateResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeCACertificateResult::DescribeCACertificateResult()
{
}

DescribeCACertificateResult::DescribeCACertificateResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeCACertificateResult& DescribeCACertificateResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("certificateDescription"))
  {
    m_certificateDescription = jsonValue.GetObject("certificateDescription");

  }

  if(jsonValue.ValueExists("registrationConfig"))
  {
    m_registrationConfig = jsonValue.GetObject("registrationConfig");

  }



  return *this;
}
