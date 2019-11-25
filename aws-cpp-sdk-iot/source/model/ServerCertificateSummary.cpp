/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
