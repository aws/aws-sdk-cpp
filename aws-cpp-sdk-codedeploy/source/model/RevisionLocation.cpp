/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_gitHubLocationHasBeenSet(false),
    m_stringHasBeenSet(false),
    m_appSpecContentHasBeenSet(false)
{
}

RevisionLocation::RevisionLocation(JsonView jsonValue) : 
    m_revisionType(RevisionLocationType::NOT_SET),
    m_revisionTypeHasBeenSet(false),
    m_s3LocationHasBeenSet(false),
    m_gitHubLocationHasBeenSet(false),
    m_stringHasBeenSet(false),
    m_appSpecContentHasBeenSet(false)
{
  *this = jsonValue;
}

RevisionLocation& RevisionLocation::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("string"))
  {
    m_string = jsonValue.GetObject("string");

    m_stringHasBeenSet = true;
  }

  if(jsonValue.ValueExists("appSpecContent"))
  {
    m_appSpecContent = jsonValue.GetObject("appSpecContent");

    m_appSpecContentHasBeenSet = true;
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

  if(m_stringHasBeenSet)
  {
   payload.WithObject("string", m_string.Jsonize());

  }

  if(m_appSpecContentHasBeenSet)
  {
   payload.WithObject("appSpecContent", m_appSpecContent.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
