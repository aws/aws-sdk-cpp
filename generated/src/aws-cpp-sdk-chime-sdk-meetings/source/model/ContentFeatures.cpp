/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-meetings/model/ContentFeatures.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKMeetings
{
namespace Model
{

ContentFeatures::ContentFeatures() : 
    m_maxResolution(ContentResolution::NOT_SET),
    m_maxResolutionHasBeenSet(false)
{
}

ContentFeatures::ContentFeatures(JsonView jsonValue) : 
    m_maxResolution(ContentResolution::NOT_SET),
    m_maxResolutionHasBeenSet(false)
{
  *this = jsonValue;
}

ContentFeatures& ContentFeatures::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MaxResolution"))
  {
    m_maxResolution = ContentResolutionMapper::GetContentResolutionForName(jsonValue.GetString("MaxResolution"));

    m_maxResolutionHasBeenSet = true;
  }

  return *this;
}

JsonValue ContentFeatures::Jsonize() const
{
  JsonValue payload;

  if(m_maxResolutionHasBeenSet)
  {
   payload.WithString("MaxResolution", ContentResolutionMapper::GetNameForContentResolution(m_maxResolution));
  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMeetings
} // namespace Aws
