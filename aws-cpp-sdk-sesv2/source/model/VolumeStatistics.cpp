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

#include <aws/sesv2/model/VolumeStatistics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

VolumeStatistics::VolumeStatistics() : 
    m_inboxRawCount(0),
    m_inboxRawCountHasBeenSet(false),
    m_spamRawCount(0),
    m_spamRawCountHasBeenSet(false),
    m_projectedInbox(0),
    m_projectedInboxHasBeenSet(false),
    m_projectedSpam(0),
    m_projectedSpamHasBeenSet(false)
{
}

VolumeStatistics::VolumeStatistics(JsonView jsonValue) : 
    m_inboxRawCount(0),
    m_inboxRawCountHasBeenSet(false),
    m_spamRawCount(0),
    m_spamRawCountHasBeenSet(false),
    m_projectedInbox(0),
    m_projectedInboxHasBeenSet(false),
    m_projectedSpam(0),
    m_projectedSpamHasBeenSet(false)
{
  *this = jsonValue;
}

VolumeStatistics& VolumeStatistics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InboxRawCount"))
  {
    m_inboxRawCount = jsonValue.GetInt64("InboxRawCount");

    m_inboxRawCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SpamRawCount"))
  {
    m_spamRawCount = jsonValue.GetInt64("SpamRawCount");

    m_spamRawCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProjectedInbox"))
  {
    m_projectedInbox = jsonValue.GetInt64("ProjectedInbox");

    m_projectedInboxHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProjectedSpam"))
  {
    m_projectedSpam = jsonValue.GetInt64("ProjectedSpam");

    m_projectedSpamHasBeenSet = true;
  }

  return *this;
}

JsonValue VolumeStatistics::Jsonize() const
{
  JsonValue payload;

  if(m_inboxRawCountHasBeenSet)
  {
   payload.WithInt64("InboxRawCount", m_inboxRawCount);

  }

  if(m_spamRawCountHasBeenSet)
  {
   payload.WithInt64("SpamRawCount", m_spamRawCount);

  }

  if(m_projectedInboxHasBeenSet)
  {
   payload.WithInt64("ProjectedInbox", m_projectedInbox);

  }

  if(m_projectedSpamHasBeenSet)
  {
   payload.WithInt64("ProjectedSpam", m_projectedSpam);

  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
