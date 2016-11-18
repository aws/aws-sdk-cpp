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
#include <aws/codedeploy/model/RevisionLocation.h>
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

RevisionLocation::RevisionLocation() : 
    m_revisionType(RevisionLocationType::NOT_SET),
    m_revisionTypeHasBeenSet(false),
    m_s3LocationHasBeenSet(false),
    m_gitHubLocationHasBeenSet(false)
{
}

RevisionLocation::RevisionLocation(const JsonValue& jsonValue) : 
    m_revisionType(RevisionLocationType::NOT_SET),
    m_revisionTypeHasBeenSet(false),
    m_s3LocationHasBeenSet(false),
    m_gitHubLocationHasBeenSet(false)
{
  *this = jsonValue;
}

RevisionLocation& RevisionLocation::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("revisionType"))
  {
    m_revisionType = RevisionLocationTypeMapper::GetRevisionLocationTypeForName(jsonValue.GetString("revisionType"));

    m_revisionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3Location"))
  {
    m_s3Location = jsonValue.GetObject("s3Location");

    m_s3LocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("gitHubLocation"))
  {
    m_gitHubLocation = jsonValue.GetObject("gitHubLocation");

    m_gitHubLocationHasBeenSet = true;
  }

  return *this;
}

JsonValue RevisionLocation::Jsonize() const
{
  JsonValue payload;

  if(m_revisionTypeHasBeenSet)
  {
   payload.WithString("revisionType", RevisionLocationTypeMapper::GetNameForRevisionLocationType(m_revisionType));
  }

  if(m_s3LocationHasBeenSet)
  {
   payload.WithObject("s3Location", m_s3Location.Jsonize());

  }

  if(m_gitHubLocationHasBeenSet)
  {
   payload.WithObject("gitHubLocation", m_gitHubLocation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws