/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeartifact/model/PackageOriginRestrictions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeArtifact
{
namespace Model
{

PackageOriginRestrictions::PackageOriginRestrictions() : 
    m_publish(AllowPublish::NOT_SET),
    m_publishHasBeenSet(false),
    m_upstream(AllowUpstream::NOT_SET),
    m_upstreamHasBeenSet(false)
{
}

PackageOriginRestrictions::PackageOriginRestrictions(JsonView jsonValue) : 
    m_publish(AllowPublish::NOT_SET),
    m_publishHasBeenSet(false),
    m_upstream(AllowUpstream::NOT_SET),
    m_upstreamHasBeenSet(false)
{
  *this = jsonValue;
}

PackageOriginRestrictions& PackageOriginRestrictions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("publish"))
  {
    m_publish = AllowPublishMapper::GetAllowPublishForName(jsonValue.GetString("publish"));

    m_publishHasBeenSet = true;
  }

  if(jsonValue.ValueExists("upstream"))
  {
    m_upstream = AllowUpstreamMapper::GetAllowUpstreamForName(jsonValue.GetString("upstream"));

    m_upstreamHasBeenSet = true;
  }

  return *this;
}

JsonValue PackageOriginRestrictions::Jsonize() const
{
  JsonValue payload;

  if(m_publishHasBeenSet)
  {
   payload.WithString("publish", AllowPublishMapper::GetNameForAllowPublish(m_publish));
  }

  if(m_upstreamHasBeenSet)
  {
   payload.WithString("upstream", AllowUpstreamMapper::GetNameForAllowUpstream(m_upstream));
  }

  return payload;
}

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
