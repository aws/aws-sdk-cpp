/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/route53/model/UpdateHealthCheckRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

UpdateHealthCheckRequest::UpdateHealthCheckRequest() : 
    m_healthCheckIdHasBeenSet(false),
    m_healthCheckVersion(0),
    m_healthCheckVersionHasBeenSet(false),
    m_iPAddressHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_resourcePathHasBeenSet(false),
    m_fullyQualifiedDomainNameHasBeenSet(false),
    m_searchStringHasBeenSet(false),
    m_failureThreshold(0),
    m_failureThresholdHasBeenSet(false),
    m_inverted(false),
    m_invertedHasBeenSet(false),
    m_healthThreshold(0),
    m_healthThresholdHasBeenSet(false),
    m_childHealthChecksHasBeenSet(false),
    m_enableSNI(false),
    m_enableSNIHasBeenSet(false),
    m_regionsHasBeenSet(false),
    m_alarmIdentifierHasBeenSet(false),
    m_insufficientDataHealthStatusHasBeenSet(false)
{
}

Aws::String UpdateHealthCheckRequest::SerializePayload() const
{
  return "";
}


