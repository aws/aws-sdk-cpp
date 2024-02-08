/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/SetupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

SetupRequest::SetupRequest() : 
    m_instanceNameHasBeenSet(false),
    m_domainNamesHasBeenSet(false),
    m_certificateProvider(CertificateProvider::NOT_SET),
    m_certificateProviderHasBeenSet(false)
{
}

SetupRequest::SetupRequest(JsonView jsonValue) : 
    m_instanceNameHasBeenSet(false),
    m_domainNamesHasBeenSet(false),
    m_certificateProvider(CertificateProvider::NOT_SET),
    m_certificateProviderHasBeenSet(false)
{
  *this = jsonValue;
}

SetupRequest& SetupRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("instanceName"))
  {
    m_instanceName = jsonValue.GetString("instanceName");

    m_instanceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("domainNames"))
  {
    Aws::Utils::Array<JsonView> domainNamesJsonList = jsonValue.GetArray("domainNames");
    for(unsigned domainNamesIndex = 0; domainNamesIndex < domainNamesJsonList.GetLength(); ++domainNamesIndex)
    {
      m_domainNames.push_back(domainNamesJsonList[domainNamesIndex].AsString());
    }
    m_domainNamesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("certificateProvider"))
  {
    m_certificateProvider = CertificateProviderMapper::GetCertificateProviderForName(jsonValue.GetString("certificateProvider"));

    m_certificateProviderHasBeenSet = true;
  }

  return *this;
}

JsonValue SetupRequest::Jsonize() const
{
  JsonValue payload;

  if(m_instanceNameHasBeenSet)
  {
   payload.WithString("instanceName", m_instanceName);

  }

  if(m_domainNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> domainNamesJsonList(m_domainNames.size());
   for(unsigned domainNamesIndex = 0; domainNamesIndex < domainNamesJsonList.GetLength(); ++domainNamesIndex)
   {
     domainNamesJsonList[domainNamesIndex].AsString(m_domainNames[domainNamesIndex]);
   }
   payload.WithArray("domainNames", std::move(domainNamesJsonList));

  }

  if(m_certificateProviderHasBeenSet)
  {
   payload.WithString("certificateProvider", CertificateProviderMapper::GetNameForCertificateProvider(m_certificateProvider));
  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
