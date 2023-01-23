/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/MutualTlsAuthentication.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace APIGateway
{
namespace Model
{

MutualTlsAuthentication::MutualTlsAuthentication() : 
    m_truststoreUriHasBeenSet(false),
    m_truststoreVersionHasBeenSet(false),
    m_truststoreWarningsHasBeenSet(false)
{
}

MutualTlsAuthentication::MutualTlsAuthentication(JsonView jsonValue) : 
    m_truststoreUriHasBeenSet(false),
    m_truststoreVersionHasBeenSet(false),
    m_truststoreWarningsHasBeenSet(false)
{
  *this = jsonValue;
}

MutualTlsAuthentication& MutualTlsAuthentication::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("truststoreUri"))
  {
    m_truststoreUri = jsonValue.GetString("truststoreUri");

    m_truststoreUriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("truststoreVersion"))
  {
    m_truststoreVersion = jsonValue.GetString("truststoreVersion");

    m_truststoreVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("truststoreWarnings"))
  {
    Aws::Utils::Array<JsonView> truststoreWarningsJsonList = jsonValue.GetArray("truststoreWarnings");
    for(unsigned truststoreWarningsIndex = 0; truststoreWarningsIndex < truststoreWarningsJsonList.GetLength(); ++truststoreWarningsIndex)
    {
      m_truststoreWarnings.push_back(truststoreWarningsJsonList[truststoreWarningsIndex].AsString());
    }
    m_truststoreWarningsHasBeenSet = true;
  }

  return *this;
}

JsonValue MutualTlsAuthentication::Jsonize() const
{
  JsonValue payload;

  if(m_truststoreUriHasBeenSet)
  {
   payload.WithString("truststoreUri", m_truststoreUri);

  }

  if(m_truststoreVersionHasBeenSet)
  {
   payload.WithString("truststoreVersion", m_truststoreVersion);

  }

  if(m_truststoreWarningsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> truststoreWarningsJsonList(m_truststoreWarnings.size());
   for(unsigned truststoreWarningsIndex = 0; truststoreWarningsIndex < truststoreWarningsJsonList.GetLength(); ++truststoreWarningsIndex)
   {
     truststoreWarningsJsonList[truststoreWarningsIndex].AsString(m_truststoreWarnings[truststoreWarningsIndex]);
   }
   payload.WithArray("truststoreWarnings", std::move(truststoreWarningsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace APIGateway
} // namespace Aws
