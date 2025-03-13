/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/ProjectPolicyGrantPrincipal.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

ProjectPolicyGrantPrincipal::ProjectPolicyGrantPrincipal(JsonView jsonValue)
{
  *this = jsonValue;
}

ProjectPolicyGrantPrincipal& ProjectPolicyGrantPrincipal::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("projectDesignation"))
  {
    m_projectDesignation = ProjectDesignationMapper::GetProjectDesignationForName(jsonValue.GetString("projectDesignation"));
    m_projectDesignationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("projectGrantFilter"))
  {
    m_projectGrantFilter = jsonValue.GetObject("projectGrantFilter");
    m_projectGrantFilterHasBeenSet = true;
  }
  if(jsonValue.ValueExists("projectIdentifier"))
  {
    m_projectIdentifier = jsonValue.GetString("projectIdentifier");
    m_projectIdentifierHasBeenSet = true;
  }
  return *this;
}

JsonValue ProjectPolicyGrantPrincipal::Jsonize() const
{
  JsonValue payload;

  if(m_projectDesignationHasBeenSet)
  {
   payload.WithString("projectDesignation", ProjectDesignationMapper::GetNameForProjectDesignation(m_projectDesignation));
  }

  if(m_projectGrantFilterHasBeenSet)
  {
   payload.WithObject("projectGrantFilter", m_projectGrantFilter.Jsonize());

  }

  if(m_projectIdentifierHasBeenSet)
  {
   payload.WithString("projectIdentifier", m_projectIdentifier);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
