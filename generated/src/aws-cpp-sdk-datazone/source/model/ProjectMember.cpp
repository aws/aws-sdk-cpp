/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/ProjectMember.h>
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

ProjectMember::ProjectMember() : 
    m_designation(UserDesignation::NOT_SET),
    m_designationHasBeenSet(false),
    m_memberDetailsHasBeenSet(false)
{
}

ProjectMember::ProjectMember(JsonView jsonValue) : 
    m_designation(UserDesignation::NOT_SET),
    m_designationHasBeenSet(false),
    m_memberDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

ProjectMember& ProjectMember::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("designation"))
  {
    m_designation = UserDesignationMapper::GetUserDesignationForName(jsonValue.GetString("designation"));

    m_designationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("memberDetails"))
  {
    m_memberDetails = jsonValue.GetObject("memberDetails");

    m_memberDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue ProjectMember::Jsonize() const
{
  JsonValue payload;

  if(m_designationHasBeenSet)
  {
   payload.WithString("designation", UserDesignationMapper::GetNameForUserDesignation(m_designation));
  }

  if(m_memberDetailsHasBeenSet)
  {
   payload.WithObject("memberDetails", m_memberDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
