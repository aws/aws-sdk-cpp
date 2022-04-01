/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/Workforce.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

Workforce::Workforce() : 
    m_workforceNameHasBeenSet(false),
    m_workforceArnHasBeenSet(false),
    m_lastUpdatedDateHasBeenSet(false),
    m_sourceIpConfigHasBeenSet(false),
    m_subDomainHasBeenSet(false),
    m_cognitoConfigHasBeenSet(false),
    m_oidcConfigHasBeenSet(false),
    m_createDateHasBeenSet(false)
{
}

Workforce::Workforce(JsonView jsonValue) : 
    m_workforceNameHasBeenSet(false),
    m_workforceArnHasBeenSet(false),
    m_lastUpdatedDateHasBeenSet(false),
    m_sourceIpConfigHasBeenSet(false),
    m_subDomainHasBeenSet(false),
    m_cognitoConfigHasBeenSet(false),
    m_oidcConfigHasBeenSet(false),
    m_createDateHasBeenSet(false)
{
  *this = jsonValue;
}

Workforce& Workforce::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WorkforceName"))
  {
    m_workforceName = jsonValue.GetString("WorkforceName");

    m_workforceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WorkforceArn"))
  {
    m_workforceArn = jsonValue.GetString("WorkforceArn");

    m_workforceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedDate"))
  {
    m_lastUpdatedDate = jsonValue.GetDouble("LastUpdatedDate");

    m_lastUpdatedDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceIpConfig"))
  {
    m_sourceIpConfig = jsonValue.GetObject("SourceIpConfig");

    m_sourceIpConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubDomain"))
  {
    m_subDomain = jsonValue.GetString("SubDomain");

    m_subDomainHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CognitoConfig"))
  {
    m_cognitoConfig = jsonValue.GetObject("CognitoConfig");

    m_cognitoConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OidcConfig"))
  {
    m_oidcConfig = jsonValue.GetObject("OidcConfig");

    m_oidcConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreateDate"))
  {
    m_createDate = jsonValue.GetDouble("CreateDate");

    m_createDateHasBeenSet = true;
  }

  return *this;
}

JsonValue Workforce::Jsonize() const
{
  JsonValue payload;

  if(m_workforceNameHasBeenSet)
  {
   payload.WithString("WorkforceName", m_workforceName);

  }

  if(m_workforceArnHasBeenSet)
  {
   payload.WithString("WorkforceArn", m_workforceArn);

  }

  if(m_lastUpdatedDateHasBeenSet)
  {
   payload.WithDouble("LastUpdatedDate", m_lastUpdatedDate.SecondsWithMSPrecision());
  }

  if(m_sourceIpConfigHasBeenSet)
  {
   payload.WithObject("SourceIpConfig", m_sourceIpConfig.Jsonize());

  }

  if(m_subDomainHasBeenSet)
  {
   payload.WithString("SubDomain", m_subDomain);

  }

  if(m_cognitoConfigHasBeenSet)
  {
   payload.WithObject("CognitoConfig", m_cognitoConfig.Jsonize());

  }

  if(m_oidcConfigHasBeenSet)
  {
   payload.WithObject("OidcConfig", m_oidcConfig.Jsonize());

  }

  if(m_createDateHasBeenSet)
  {
   payload.WithDouble("CreateDate", m_createDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
