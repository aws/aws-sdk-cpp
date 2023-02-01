/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/RevisionInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

RevisionInfo::RevisionInfo() : 
    m_revisionLocationHasBeenSet(false),
    m_genericRevisionInfoHasBeenSet(false)
{
}

RevisionInfo::RevisionInfo(JsonView jsonValue) : 
    m_revisionLocationHasBeenSet(false),
    m_genericRevisionInfoHasBeenSet(false)
{
  *this = jsonValue;
}

RevisionInfo& RevisionInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("revisionLocation"))
  {
    m_revisionLocation = jsonValue.GetObject("revisionLocation");

    m_revisionLocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("genericRevisionInfo"))
  {
    m_genericRevisionInfo = jsonValue.GetObject("genericRevisionInfo");

    m_genericRevisionInfoHasBeenSet = true;
  }

  return *this;
}

JsonValue RevisionInfo::Jsonize() const
{
  JsonValue payload;

  if(m_revisionLocationHasBeenSet)
  {
   payload.WithObject("revisionLocation", m_revisionLocation.Jsonize());

  }

  if(m_genericRevisionInfoHasBeenSet)
  {
   payload.WithObject("genericRevisionInfo", m_genericRevisionInfo.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
