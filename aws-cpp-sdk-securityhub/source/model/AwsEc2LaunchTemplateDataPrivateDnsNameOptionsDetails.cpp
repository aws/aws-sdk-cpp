/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEc2LaunchTemplateDataPrivateDnsNameOptionsDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsEc2LaunchTemplateDataPrivateDnsNameOptionsDetails::AwsEc2LaunchTemplateDataPrivateDnsNameOptionsDetails() : 
    m_enableResourceNameDnsAAAARecord(false),
    m_enableResourceNameDnsAAAARecordHasBeenSet(false),
    m_enableResourceNameDnsARecord(false),
    m_enableResourceNameDnsARecordHasBeenSet(false),
    m_hostnameTypeHasBeenSet(false)
{
}

AwsEc2LaunchTemplateDataPrivateDnsNameOptionsDetails::AwsEc2LaunchTemplateDataPrivateDnsNameOptionsDetails(JsonView jsonValue) : 
    m_enableResourceNameDnsAAAARecord(false),
    m_enableResourceNameDnsAAAARecordHasBeenSet(false),
    m_enableResourceNameDnsARecord(false),
    m_enableResourceNameDnsARecordHasBeenSet(false),
    m_hostnameTypeHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2LaunchTemplateDataPrivateDnsNameOptionsDetails& AwsEc2LaunchTemplateDataPrivateDnsNameOptionsDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EnableResourceNameDnsAAAARecord"))
  {
    m_enableResourceNameDnsAAAARecord = jsonValue.GetBool("EnableResourceNameDnsAAAARecord");

    m_enableResourceNameDnsAAAARecordHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnableResourceNameDnsARecord"))
  {
    m_enableResourceNameDnsARecord = jsonValue.GetBool("EnableResourceNameDnsARecord");

    m_enableResourceNameDnsARecordHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HostnameType"))
  {
    m_hostnameType = jsonValue.GetString("HostnameType");

    m_hostnameTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2LaunchTemplateDataPrivateDnsNameOptionsDetails::Jsonize() const
{
  JsonValue payload;

  if(m_enableResourceNameDnsAAAARecordHasBeenSet)
  {
   payload.WithBool("EnableResourceNameDnsAAAARecord", m_enableResourceNameDnsAAAARecord);

  }

  if(m_enableResourceNameDnsARecordHasBeenSet)
  {
   payload.WithBool("EnableResourceNameDnsARecord", m_enableResourceNameDnsARecord);

  }

  if(m_hostnameTypeHasBeenSet)
  {
   payload.WithString("HostnameType", m_hostnameType);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
