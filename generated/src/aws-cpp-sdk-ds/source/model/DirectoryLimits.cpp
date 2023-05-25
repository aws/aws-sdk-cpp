/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/DirectoryLimits.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

DirectoryLimits::DirectoryLimits() : 
    m_cloudOnlyDirectoriesLimit(0),
    m_cloudOnlyDirectoriesLimitHasBeenSet(false),
    m_cloudOnlyDirectoriesCurrentCount(0),
    m_cloudOnlyDirectoriesCurrentCountHasBeenSet(false),
    m_cloudOnlyDirectoriesLimitReached(false),
    m_cloudOnlyDirectoriesLimitReachedHasBeenSet(false),
    m_cloudOnlyMicrosoftADLimit(0),
    m_cloudOnlyMicrosoftADLimitHasBeenSet(false),
    m_cloudOnlyMicrosoftADCurrentCount(0),
    m_cloudOnlyMicrosoftADCurrentCountHasBeenSet(false),
    m_cloudOnlyMicrosoftADLimitReached(false),
    m_cloudOnlyMicrosoftADLimitReachedHasBeenSet(false),
    m_connectedDirectoriesLimit(0),
    m_connectedDirectoriesLimitHasBeenSet(false),
    m_connectedDirectoriesCurrentCount(0),
    m_connectedDirectoriesCurrentCountHasBeenSet(false),
    m_connectedDirectoriesLimitReached(false),
    m_connectedDirectoriesLimitReachedHasBeenSet(false)
{
}

DirectoryLimits::DirectoryLimits(JsonView jsonValue) : 
    m_cloudOnlyDirectoriesLimit(0),
    m_cloudOnlyDirectoriesLimitHasBeenSet(false),
    m_cloudOnlyDirectoriesCurrentCount(0),
    m_cloudOnlyDirectoriesCurrentCountHasBeenSet(false),
    m_cloudOnlyDirectoriesLimitReached(false),
    m_cloudOnlyDirectoriesLimitReachedHasBeenSet(false),
    m_cloudOnlyMicrosoftADLimit(0),
    m_cloudOnlyMicrosoftADLimitHasBeenSet(false),
    m_cloudOnlyMicrosoftADCurrentCount(0),
    m_cloudOnlyMicrosoftADCurrentCountHasBeenSet(false),
    m_cloudOnlyMicrosoftADLimitReached(false),
    m_cloudOnlyMicrosoftADLimitReachedHasBeenSet(false),
    m_connectedDirectoriesLimit(0),
    m_connectedDirectoriesLimitHasBeenSet(false),
    m_connectedDirectoriesCurrentCount(0),
    m_connectedDirectoriesCurrentCountHasBeenSet(false),
    m_connectedDirectoriesLimitReached(false),
    m_connectedDirectoriesLimitReachedHasBeenSet(false)
{
  *this = jsonValue;
}

DirectoryLimits& DirectoryLimits::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CloudOnlyDirectoriesLimit"))
  {
    m_cloudOnlyDirectoriesLimit = jsonValue.GetInteger("CloudOnlyDirectoriesLimit");

    m_cloudOnlyDirectoriesLimitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CloudOnlyDirectoriesCurrentCount"))
  {
    m_cloudOnlyDirectoriesCurrentCount = jsonValue.GetInteger("CloudOnlyDirectoriesCurrentCount");

    m_cloudOnlyDirectoriesCurrentCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CloudOnlyDirectoriesLimitReached"))
  {
    m_cloudOnlyDirectoriesLimitReached = jsonValue.GetBool("CloudOnlyDirectoriesLimitReached");

    m_cloudOnlyDirectoriesLimitReachedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CloudOnlyMicrosoftADLimit"))
  {
    m_cloudOnlyMicrosoftADLimit = jsonValue.GetInteger("CloudOnlyMicrosoftADLimit");

    m_cloudOnlyMicrosoftADLimitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CloudOnlyMicrosoftADCurrentCount"))
  {
    m_cloudOnlyMicrosoftADCurrentCount = jsonValue.GetInteger("CloudOnlyMicrosoftADCurrentCount");

    m_cloudOnlyMicrosoftADCurrentCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CloudOnlyMicrosoftADLimitReached"))
  {
    m_cloudOnlyMicrosoftADLimitReached = jsonValue.GetBool("CloudOnlyMicrosoftADLimitReached");

    m_cloudOnlyMicrosoftADLimitReachedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectedDirectoriesLimit"))
  {
    m_connectedDirectoriesLimit = jsonValue.GetInteger("ConnectedDirectoriesLimit");

    m_connectedDirectoriesLimitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectedDirectoriesCurrentCount"))
  {
    m_connectedDirectoriesCurrentCount = jsonValue.GetInteger("ConnectedDirectoriesCurrentCount");

    m_connectedDirectoriesCurrentCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectedDirectoriesLimitReached"))
  {
    m_connectedDirectoriesLimitReached = jsonValue.GetBool("ConnectedDirectoriesLimitReached");

    m_connectedDirectoriesLimitReachedHasBeenSet = true;
  }

  return *this;
}

JsonValue DirectoryLimits::Jsonize() const
{
  JsonValue payload;

  if(m_cloudOnlyDirectoriesLimitHasBeenSet)
  {
   payload.WithInteger("CloudOnlyDirectoriesLimit", m_cloudOnlyDirectoriesLimit);

  }

  if(m_cloudOnlyDirectoriesCurrentCountHasBeenSet)
  {
   payload.WithInteger("CloudOnlyDirectoriesCurrentCount", m_cloudOnlyDirectoriesCurrentCount);

  }

  if(m_cloudOnlyDirectoriesLimitReachedHasBeenSet)
  {
   payload.WithBool("CloudOnlyDirectoriesLimitReached", m_cloudOnlyDirectoriesLimitReached);

  }

  if(m_cloudOnlyMicrosoftADLimitHasBeenSet)
  {
   payload.WithInteger("CloudOnlyMicrosoftADLimit", m_cloudOnlyMicrosoftADLimit);

  }

  if(m_cloudOnlyMicrosoftADCurrentCountHasBeenSet)
  {
   payload.WithInteger("CloudOnlyMicrosoftADCurrentCount", m_cloudOnlyMicrosoftADCurrentCount);

  }

  if(m_cloudOnlyMicrosoftADLimitReachedHasBeenSet)
  {
   payload.WithBool("CloudOnlyMicrosoftADLimitReached", m_cloudOnlyMicrosoftADLimitReached);

  }

  if(m_connectedDirectoriesLimitHasBeenSet)
  {
   payload.WithInteger("ConnectedDirectoriesLimit", m_connectedDirectoriesLimit);

  }

  if(m_connectedDirectoriesCurrentCountHasBeenSet)
  {
   payload.WithInteger("ConnectedDirectoriesCurrentCount", m_connectedDirectoriesCurrentCount);

  }

  if(m_connectedDirectoriesLimitReachedHasBeenSet)
  {
   payload.WithBool("ConnectedDirectoriesLimitReached", m_connectedDirectoriesLimitReached);

  }

  return payload;
}

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
