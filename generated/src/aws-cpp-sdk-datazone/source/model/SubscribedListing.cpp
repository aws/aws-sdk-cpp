/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/SubscribedListing.h>
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

SubscribedListing::SubscribedListing() : 
    m_descriptionHasBeenSet(false),
    m_idHasBeenSet(false),
    m_itemHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ownerProjectIdHasBeenSet(false),
    m_ownerProjectNameHasBeenSet(false),
    m_revisionHasBeenSet(false)
{
}

SubscribedListing::SubscribedListing(JsonView jsonValue) : 
    m_descriptionHasBeenSet(false),
    m_idHasBeenSet(false),
    m_itemHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ownerProjectIdHasBeenSet(false),
    m_ownerProjectNameHasBeenSet(false),
    m_revisionHasBeenSet(false)
{
  *this = jsonValue;
}

SubscribedListing& SubscribedListing::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("item"))
  {
    m_item = jsonValue.GetObject("item");

    m_itemHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ownerProjectId"))
  {
    m_ownerProjectId = jsonValue.GetString("ownerProjectId");

    m_ownerProjectIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ownerProjectName"))
  {
    m_ownerProjectName = jsonValue.GetString("ownerProjectName");

    m_ownerProjectNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("revision"))
  {
    m_revision = jsonValue.GetString("revision");

    m_revisionHasBeenSet = true;
  }

  return *this;
}

JsonValue SubscribedListing::Jsonize() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_itemHasBeenSet)
  {
   payload.WithObject("item", m_item.Jsonize());

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_ownerProjectIdHasBeenSet)
  {
   payload.WithString("ownerProjectId", m_ownerProjectId);

  }

  if(m_ownerProjectNameHasBeenSet)
  {
   payload.WithString("ownerProjectName", m_ownerProjectName);

  }

  if(m_revisionHasBeenSet)
  {
   payload.WithString("revision", m_revision);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
