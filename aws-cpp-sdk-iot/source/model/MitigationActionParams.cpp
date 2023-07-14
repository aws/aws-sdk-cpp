/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/MitigationActionParams.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

MitigationActionParams::MitigationActionParams() : 
    m_updateDeviceCertificateParamsHasBeenSet(false),
    m_updateCACertificateParamsHasBeenSet(false),
    m_addThingsToThingGroupParamsHasBeenSet(false),
    m_replaceDefaultPolicyVersionParamsHasBeenSet(false),
    m_enableIoTLoggingParamsHasBeenSet(false),
    m_publishFindingToSnsParamsHasBeenSet(false)
{
}

MitigationActionParams::MitigationActionParams(JsonView jsonValue) : 
    m_updateDeviceCertificateParamsHasBeenSet(false),
    m_updateCACertificateParamsHasBeenSet(false),
    m_addThingsToThingGroupParamsHasBeenSet(false),
    m_replaceDefaultPolicyVersionParamsHasBeenSet(false),
    m_enableIoTLoggingParamsHasBeenSet(false),
    m_publishFindingToSnsParamsHasBeenSet(false)
{
  *this = jsonValue;
}

MitigationActionParams& MitigationActionParams::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("updateDeviceCertificateParams"))
  {
    m_updateDeviceCertificateParams = jsonValue.GetObject("updateDeviceCertificateParams");

    m_updateDeviceCertificateParamsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updateCACertificateParams"))
  {
    m_updateCACertificateParams = jsonValue.GetObject("updateCACertificateParams");

    m_updateCACertificateParamsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("addThingsToThingGroupParams"))
  {
    m_addThingsToThingGroupParams = jsonValue.GetObject("addThingsToThingGroupParams");

    m_addThingsToThingGroupParamsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("replaceDefaultPolicyVersionParams"))
  {
    m_replaceDefaultPolicyVersionParams = jsonValue.GetObject("replaceDefaultPolicyVersionParams");

    m_replaceDefaultPolicyVersionParamsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("enableIoTLoggingParams"))
  {
    m_enableIoTLoggingParams = jsonValue.GetObject("enableIoTLoggingParams");

    m_enableIoTLoggingParamsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("publishFindingToSnsParams"))
  {
    m_publishFindingToSnsParams = jsonValue.GetObject("publishFindingToSnsParams");

    m_publishFindingToSnsParamsHasBeenSet = true;
  }

  return *this;
}

JsonValue MitigationActionParams::Jsonize() const
{
  JsonValue payload;

  if(m_updateDeviceCertificateParamsHasBeenSet)
  {
   payload.WithObject("updateDeviceCertificateParams", m_updateDeviceCertificateParams.Jsonize());

  }

  if(m_updateCACertificateParamsHasBeenSet)
  {
   payload.WithObject("updateCACertificateParams", m_updateCACertificateParams.Jsonize());

  }

  if(m_addThingsToThingGroupParamsHasBeenSet)
  {
   payload.WithObject("addThingsToThingGroupParams", m_addThingsToThingGroupParams.Jsonize());

  }

  if(m_replaceDefaultPolicyVersionParamsHasBeenSet)
  {
   payload.WithObject("replaceDefaultPolicyVersionParams", m_replaceDefaultPolicyVersionParams.Jsonize());

  }

  if(m_enableIoTLoggingParamsHasBeenSet)
  {
   payload.WithObject("enableIoTLoggingParams", m_enableIoTLoggingParams.Jsonize());

  }

  if(m_publishFindingToSnsParamsHasBeenSet)
  {
   payload.WithObject("publishFindingToSnsParams", m_publishFindingToSnsParams.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
