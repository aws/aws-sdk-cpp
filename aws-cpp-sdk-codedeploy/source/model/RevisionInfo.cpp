/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

RevisionInfo::RevisionInfo(const JsonValue& jsonValue) : 
    m_revisionLocationHasBeenSet(false),
    m_genericRevisionInfoHasBeenSet(false)
{
  *this = jsonValue;
}

RevisionInfo& RevisionInfo::operator =(const JsonValue& jsonValue)
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