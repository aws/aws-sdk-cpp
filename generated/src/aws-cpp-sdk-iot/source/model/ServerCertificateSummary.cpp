/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ServerCertificateSummary.h>
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

ServerCertificateSummary::ServerCertificateSummary() : 
    m_serverCertificateArnHasBeenSet(false),
    m_serverCertificateStatus(ServerCertificateStatus::NOT_SET),
    m_serverCertificateStatusHasBeenSet(false),
    m_serverCertificateStatusDetailHasBeenSet(false)
{
}

ServerCertificateSummary::ServerCertificateSummary(JsonView jsonValue) : 
    m_serverCertificateArnHasBeenSet(false),
    m_serverCertificateStatus(ServerCertificateStatus::NOT_SET),
    m_serverCertificateStatusHasBeenSet(false),
    m_serverCertificateStatusDetailHasBeenSet(false)
{
  *this = jsonValue;
}

ServerCertificateSummary& ServerCertificateSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("serverCertificateArn"))
  {
    m_serverCertificateArn = jsonValue.GetString("serverCertificateArn");

    m_serverCertificateArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serverCertificateStatus"))
  {
    m_serverCertificateStatus = ServerCertificateStatusMapper::GetServerCertificateStatusForName(jsonValue.GetString("serverCertificateStatus"));

    m_serverCertificateStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serverCertificateStatusDetail"))
  {
    m_serverCertificateStatusDetail = jsonValue.GetString("serverCertificateStatusDetail");

    m_serverCertificateStatusDetailHasBeenSet = true;
  }

  return *this;
}

JsonValue ServerCertificateSummary::Jsonize() const
{
  JsonValue payload;

  if(m_serverCertificateArnHasBeenSet)
  {
   payload.WithString("serverCertificateArn", m_serverCertificateArn);

  }

  if(m_serverCertificateStatusHasBeenSet)
  {
   payload.WithString("serverCertificateStatus", ServerCertificateStatusMapper::GetNameForServerCertificateStatus(m_serverCertificateStatus));
  }

  if(m_serverCertificateStatusDetailHasBeenSet)
  {
   payload.WithString("serverCertificateStatusDetail", m_serverCertificateStatusDetail);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
