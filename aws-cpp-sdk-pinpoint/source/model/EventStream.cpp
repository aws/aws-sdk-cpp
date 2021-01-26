/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/EventStream.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

EventStream::EventStream() : 
    m_applicationIdHasBeenSet(false),
    m_destinationStreamArnHasBeenSet(false),
    m_externalIdHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_lastUpdatedByHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
}

EventStream::EventStream(JsonView jsonValue) : 
    m_applicationIdHasBeenSet(false),
    m_destinationStreamArnHasBeenSet(false),
    m_externalIdHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_lastUpdatedByHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
  *this = jsonValue;
}

EventStream& EventStream::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApplicationId"))
  {
    m_applicationId = jsonValue.GetString("ApplicationId");

    m_applicationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DestinationStreamArn"))
  {
    m_destinationStreamArn = jsonValue.GetString("DestinationStreamArn");

    m_destinationStreamArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExternalId"))
  {
    m_externalId = jsonValue.GetString("ExternalId");

    m_externalIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetString("LastModifiedDate");

    m_lastModifiedDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedBy"))
  {
    m_lastUpdatedBy = jsonValue.GetString("LastUpdatedBy");

    m_lastUpdatedByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

    m_roleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue EventStream::Jsonize() const
{
  JsonValue payload;

  if(m_applicationIdHasBeenSet)
  {
   payload.WithString("ApplicationId", m_applicationId);

  }

  if(m_destinationStreamArnHasBeenSet)
  {
   payload.WithString("DestinationStreamArn", m_destinationStreamArn);

  }

  if(m_externalIdHasBeenSet)
  {
   payload.WithString("ExternalId", m_externalId);

  }

  if(m_lastModifiedDateHasBeenSet)
  {
   payload.WithString("LastModifiedDate", m_lastModifiedDate);

  }

  if(m_lastUpdatedByHasBeenSet)
  {
   payload.WithString("LastUpdatedBy", m_lastUpdatedBy);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
