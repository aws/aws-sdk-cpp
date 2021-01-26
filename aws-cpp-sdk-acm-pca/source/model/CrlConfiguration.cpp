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

CrlConfiguration::CrlConfiguration() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_expirationInDays(0),
    m_expirationInDaysHasBeenSet(false),
    m_customCnameHasBeenSet(false),
    m_s3BucketNameHasBeenSet(false)
{
}

CrlConfiguration::CrlConfiguration(JsonView jsonValue) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_expirationInDays(0),
    m_expirationInDaysHasBeenSet(false),
    m_customCnameHasBeenSet(false),
    m_s3BucketNameHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
