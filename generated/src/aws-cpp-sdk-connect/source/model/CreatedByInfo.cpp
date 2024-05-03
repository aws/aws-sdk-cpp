/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/CreatedByInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

CreatedByInfo::CreatedByInfo() : 
    m_connectUserArnHasBeenSet(false),
    m_aWSIdentityArnHasBeenSet(false)
{
}

CreatedByInfo::CreatedByInfo(JsonView jsonValue) : 
    m_connectUserArnHasBeenSet(false),
    m_aWSIdentityArnHasBeenSet(false)
{
  *this = jsonValue;
}

CreatedByInfo& CreatedByInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConnectUserArn"))
  {
    m_connectUserArn = jsonValue.GetString("ConnectUserArn");

    m_connectUserArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AWSIdentityArn"))
  {
    m_aWSIdentityArn = jsonValue.GetString("AWSIdentityArn");

    m_aWSIdentityArnHasBeenSet = true;
  }

  return *this;
}

JsonValue CreatedByInfo::Jsonize() const
{
  JsonValue payload;

  if(m_connectUserArnHasBeenSet)
  {
   payload.WithString("ConnectUserArn", m_connectUserArn);

  }

  if(m_aWSIdentityArnHasBeenSet)
  {
   payload.WithString("AWSIdentityArn", m_aWSIdentityArn);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
