/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/ListenerTlsAcmCertificate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppMesh
{
namespace Model
{

ListenerTlsAcmCertificate::ListenerTlsAcmCertificate() : 
    m_certificateArnHasBeenSet(false)
{
}

ListenerTlsAcmCertificate::ListenerTlsAcmCertificate(JsonView jsonValue) : 
    m_certificateArnHasBeenSet(false)
{
  *this = jsonValue;
}

ListenerTlsAcmCertificate& ListenerTlsAcmCertificate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("certificateArn"))
  {
    m_certificateArn = jsonValue.GetString("certificateArn");

    m_certificateArnHasBeenSet = true;
  }

  return *this;
}

JsonValue ListenerTlsAcmCertificate::Jsonize() const
{
  JsonValue payload;

  if(m_certificateArnHasBeenSet)
  {
   payload.WithString("certificateArn", m_certificateArn);

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
