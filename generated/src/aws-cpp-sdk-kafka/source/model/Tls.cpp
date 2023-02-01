/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/Tls.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Kafka
{
namespace Model
{

Tls::Tls() : 
    m_certificateAuthorityArnListHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false)
{
}

Tls::Tls(JsonView jsonValue) : 
    m_certificateAuthorityArnListHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false)
{
  *this = jsonValue;
}

Tls& Tls::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("certificateAuthorityArnList"))
  {
    Aws::Utils::Array<JsonView> certificateAuthorityArnListJsonList = jsonValue.GetArray("certificateAuthorityArnList");
    for(unsigned certificateAuthorityArnListIndex = 0; certificateAuthorityArnListIndex < certificateAuthorityArnListJsonList.GetLength(); ++certificateAuthorityArnListIndex)
    {
      m_certificateAuthorityArnList.push_back(certificateAuthorityArnListJsonList[certificateAuthorityArnListIndex].AsString());
    }
    m_certificateAuthorityArnListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("enabled"))
  {
    m_enabled = jsonValue.GetBool("enabled");

    m_enabledHasBeenSet = true;
  }

  return *this;
}

JsonValue Tls::Jsonize() const
{
  JsonValue payload;

  if(m_certificateAuthorityArnListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> certificateAuthorityArnListJsonList(m_certificateAuthorityArnList.size());
   for(unsigned certificateAuthorityArnListIndex = 0; certificateAuthorityArnListIndex < certificateAuthorityArnListJsonList.GetLength(); ++certificateAuthorityArnListIndex)
   {
     certificateAuthorityArnListJsonList[certificateAuthorityArnListIndex].AsString(m_certificateAuthorityArnList[certificateAuthorityArnListIndex]);
   }
   payload.WithArray("certificateAuthorityArnList", std::move(certificateAuthorityArnListJsonList));

  }

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("enabled", m_enabled);

  }

  return payload;
}

} // namespace Model
} // namespace Kafka
} // namespace Aws
