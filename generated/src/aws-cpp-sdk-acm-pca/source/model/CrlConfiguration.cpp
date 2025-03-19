/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm-pca/model/CrlConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ACMPCA
{
namespace Model
{

CrlConfiguration::CrlConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

CrlConfiguration& CrlConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");
    m_enabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExpirationInDays"))
  {
    m_expirationInDays = jsonValue.GetInteger("ExpirationInDays");
    m_expirationInDaysHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CustomCname"))
  {
    m_customCname = jsonValue.GetString("CustomCname");
    m_customCnameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("S3BucketName"))
  {
    m_s3BucketName = jsonValue.GetString("S3BucketName");
    m_s3BucketNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("S3ObjectAcl"))
  {
    m_s3ObjectAcl = S3ObjectAclMapper::GetS3ObjectAclForName(jsonValue.GetString("S3ObjectAcl"));
    m_s3ObjectAclHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CrlDistributionPointExtensionConfiguration"))
  {
    m_crlDistributionPointExtensionConfiguration = jsonValue.GetObject("CrlDistributionPointExtensionConfiguration");
    m_crlDistributionPointExtensionConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CrlType"))
  {
    m_crlType = CrlTypeMapper::GetCrlTypeForName(jsonValue.GetString("CrlType"));
    m_crlTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CustomPath"))
  {
    m_customPath = jsonValue.GetString("CustomPath");
    m_customPathHasBeenSet = true;
  }
  return *this;
}

JsonValue CrlConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  if(m_expirationInDaysHasBeenSet)
  {
   payload.WithInteger("ExpirationInDays", m_expirationInDays);

  }

  if(m_customCnameHasBeenSet)
  {
   payload.WithString("CustomCname", m_customCname);

  }

  if(m_s3BucketNameHasBeenSet)
  {
   payload.WithString("S3BucketName", m_s3BucketName);

  }

  if(m_s3ObjectAclHasBeenSet)
  {
   payload.WithString("S3ObjectAcl", S3ObjectAclMapper::GetNameForS3ObjectAcl(m_s3ObjectAcl));
  }

  if(m_crlDistributionPointExtensionConfigurationHasBeenSet)
  {
   payload.WithObject("CrlDistributionPointExtensionConfiguration", m_crlDistributionPointExtensionConfiguration.Jsonize());

  }

  if(m_crlTypeHasBeenSet)
  {
   payload.WithString("CrlType", CrlTypeMapper::GetNameForCrlType(m_crlType));
  }

  if(m_customPathHasBeenSet)
  {
   payload.WithString("CustomPath", m_customPath);

  }

  return payload;
}

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
