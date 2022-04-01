/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-containers/model/Certificate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMRContainers
{
namespace Model
{

Certificate::Certificate() : 
    m_certificateArnHasBeenSet(false),
    m_certificateDataHasBeenSet(false)
{
}

Certificate::Certificate(JsonView jsonValue) : 
    m_certificateArnHasBeenSet(false),
    m_certificateDataHasBeenSet(false)
{
  *this = jsonValue;
}

Certificate& Certificate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("certificateArn"))
  {
    m_certificateArn = jsonValue.GetString("certificateArn");

    m_certificateArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("certificateData"))
  {
    m_certificateData = jsonValue.GetString("certificateData");

    m_certificateDataHasBeenSet = true;
  }

  return *this;
}

JsonValue Certificate::Jsonize() const
{
  JsonValue payload;

  if(m_certificateArnHasBeenSet)
  {
   payload.WithString("certificateArn", m_certificateArn);

  }

  if(m_certificateDataHasBeenSet)
  {
   payload.WithString("certificateData", m_certificateData);

  }

  return payload;
}

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
