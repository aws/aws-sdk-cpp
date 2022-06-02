/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/OnPremiseConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

OnPremiseConfiguration::OnPremiseConfiguration() : 
    m_hostUrlHasBeenSet(false),
    m_organizationNameHasBeenSet(false),
    m_sslCertificateS3PathHasBeenSet(false)
{
}

OnPremiseConfiguration::OnPremiseConfiguration(JsonView jsonValue) : 
    m_hostUrlHasBeenSet(false),
    m_organizationNameHasBeenSet(false),
    m_sslCertificateS3PathHasBeenSet(false)
{
  *this = jsonValue;
}

OnPremiseConfiguration& OnPremiseConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HostUrl"))
  {
    m_hostUrl = jsonValue.GetString("HostUrl");

    m_hostUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OrganizationName"))
  {
    m_organizationName = jsonValue.GetString("OrganizationName");

    m_organizationNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SslCertificateS3Path"))
  {
    m_sslCertificateS3Path = jsonValue.GetObject("SslCertificateS3Path");

    m_sslCertificateS3PathHasBeenSet = true;
  }

  return *this;
}

JsonValue OnPremiseConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_hostUrlHasBeenSet)
  {
   payload.WithString("HostUrl", m_hostUrl);

  }

  if(m_organizationNameHasBeenSet)
  {
   payload.WithString("OrganizationName", m_organizationName);

  }

  if(m_sslCertificateS3PathHasBeenSet)
  {
   payload.WithObject("SslCertificateS3Path", m_sslCertificateS3Path.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
