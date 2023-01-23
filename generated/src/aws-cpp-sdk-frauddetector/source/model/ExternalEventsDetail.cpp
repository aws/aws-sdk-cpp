/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/ExternalEventsDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

ExternalEventsDetail::ExternalEventsDetail() : 
    m_dataLocationHasBeenSet(false),
    m_dataAccessRoleArnHasBeenSet(false)
{
}

ExternalEventsDetail::ExternalEventsDetail(JsonView jsonValue) : 
    m_dataLocationHasBeenSet(false),
    m_dataAccessRoleArnHasBeenSet(false)
{
  *this = jsonValue;
}

ExternalEventsDetail& ExternalEventsDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dataLocation"))
  {
    m_dataLocation = jsonValue.GetString("dataLocation");

    m_dataLocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataAccessRoleArn"))
  {
    m_dataAccessRoleArn = jsonValue.GetString("dataAccessRoleArn");

    m_dataAccessRoleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue ExternalEventsDetail::Jsonize() const
{
  JsonValue payload;

  if(m_dataLocationHasBeenSet)
  {
   payload.WithString("dataLocation", m_dataLocation);

  }

  if(m_dataAccessRoleArnHasBeenSet)
  {
   payload.WithString("dataAccessRoleArn", m_dataAccessRoleArn);

  }

  return payload;
}

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
