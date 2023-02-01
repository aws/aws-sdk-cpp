/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/ResourceProfileArtifact.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

ResourceProfileArtifact::ResourceProfileArtifact() : 
    m_arnHasBeenSet(false),
    m_classificationResultStatusHasBeenSet(false),
    m_sensitive(false),
    m_sensitiveHasBeenSet(false)
{
}

ResourceProfileArtifact::ResourceProfileArtifact(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_classificationResultStatusHasBeenSet(false),
    m_sensitive(false),
    m_sensitiveHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceProfileArtifact& ResourceProfileArtifact::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("classificationResultStatus"))
  {
    m_classificationResultStatus = jsonValue.GetString("classificationResultStatus");

    m_classificationResultStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sensitive"))
  {
    m_sensitive = jsonValue.GetBool("sensitive");

    m_sensitiveHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceProfileArtifact::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_classificationResultStatusHasBeenSet)
  {
   payload.WithString("classificationResultStatus", m_classificationResultStatus);

  }

  if(m_sensitiveHasBeenSet)
  {
   payload.WithBool("sensitive", m_sensitive);

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
