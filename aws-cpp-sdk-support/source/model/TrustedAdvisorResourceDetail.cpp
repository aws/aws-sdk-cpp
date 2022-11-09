/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/support/model/TrustedAdvisorResourceDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Support
{
namespace Model
{

TrustedAdvisorResourceDetail::TrustedAdvisorResourceDetail() : 
    m_statusHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_isSuppressed(false),
    m_isSuppressedHasBeenSet(false),
    m_metadataHasBeenSet(false)
{
}

TrustedAdvisorResourceDetail::TrustedAdvisorResourceDetail(JsonView jsonValue) : 
    m_statusHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_isSuppressed(false),
    m_isSuppressedHasBeenSet(false),
    m_metadataHasBeenSet(false)
{
  *this = jsonValue;
}

TrustedAdvisorResourceDetail& TrustedAdvisorResourceDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("region"))
  {
    m_region = jsonValue.GetString("region");

    m_regionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceId"))
  {
    m_resourceId = jsonValue.GetString("resourceId");

    m_resourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isSuppressed"))
  {
    m_isSuppressed = jsonValue.GetBool("isSuppressed");

    m_isSuppressedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("metadata"))
  {
    Aws::Utils::Array<JsonView> metadataJsonList = jsonValue.GetArray("metadata");
    for(unsigned metadataIndex = 0; metadataIndex < metadataJsonList.GetLength(); ++metadataIndex)
    {
      m_metadata.push_back(metadataJsonList[metadataIndex].AsString());
    }
    m_metadataHasBeenSet = true;
  }

  return *this;
}

JsonValue TrustedAdvisorResourceDetail::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("region", m_region);

  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("resourceId", m_resourceId);

  }

  if(m_isSuppressedHasBeenSet)
  {
   payload.WithBool("isSuppressed", m_isSuppressed);

  }

  if(m_metadataHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> metadataJsonList(m_metadata.size());
   for(unsigned metadataIndex = 0; metadataIndex < metadataJsonList.GetLength(); ++metadataIndex)
   {
     metadataJsonList[metadataIndex].AsString(m_metadata[metadataIndex]);
   }
   payload.WithArray("metadata", std::move(metadataJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Support
} // namespace Aws
