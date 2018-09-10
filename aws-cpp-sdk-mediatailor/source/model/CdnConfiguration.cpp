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

#include <aws/mediatailor/model/CdnConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

CdnConfiguration::CdnConfiguration() : 
    m_adSegmentUrlPrefixHasBeenSet(false),
    m_contentSegmentUrlPrefixHasBeenSet(false)
{
}

CdnConfiguration::CdnConfiguration(JsonView jsonValue) : 
    m_adSegmentUrlPrefixHasBeenSet(false),
    m_contentSegmentUrlPrefixHasBeenSet(false)
{
  *this = jsonValue;
}

CdnConfiguration& CdnConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AdSegmentUrlPrefix"))
  {
    m_adSegmentUrlPrefix = jsonValue.GetString("AdSegmentUrlPrefix");

    m_adSegmentUrlPrefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContentSegmentUrlPrefix"))
  {
    m_contentSegmentUrlPrefix = jsonValue.GetString("ContentSegmentUrlPrefix");

    m_contentSegmentUrlPrefixHasBeenSet = true;
  }

  return *this;
}

JsonValue CdnConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_adSegmentUrlPrefixHasBeenSet)
  {
   payload.WithString("AdSegmentUrlPrefix", m_adSegmentUrlPrefix);

  }

  if(m_contentSegmentUrlPrefixHasBeenSet)
  {
   payload.WithString("ContentSegmentUrlPrefix", m_contentSegmentUrlPrefix);

  }

  return payload;
}

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
