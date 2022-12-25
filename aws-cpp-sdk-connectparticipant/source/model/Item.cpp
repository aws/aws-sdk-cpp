/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectparticipant/model/Item.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectParticipant
{
namespace Model
{

Item::Item() : 
    m_absoluteTimeHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_type(ChatItemType::NOT_SET),
    m_typeHasBeenSet(false),
    m_participantIdHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_participantRole(ParticipantRole::NOT_SET),
    m_participantRoleHasBeenSet(false),
    m_attachmentsHasBeenSet(false),
    m_messageMetadataHasBeenSet(false)
{
}

Item::Item(JsonView jsonValue) : 
    m_absoluteTimeHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_type(ChatItemType::NOT_SET),
    m_typeHasBeenSet(false),
    m_participantIdHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_participantRole(ParticipantRole::NOT_SET),
    m_participantRoleHasBeenSet(false),
    m_attachmentsHasBeenSet(false),
    m_messageMetadataHasBeenSet(false)
{
  *this = jsonValue;
}

Item& Item::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AbsoluteTime"))
  {
    m_absoluteTime = jsonValue.GetString("AbsoluteTime");

    m_absoluteTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Content"))
  {
    m_content = jsonValue.GetString("Content");

    m_contentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContentType"))
  {
    m_contentType = jsonValue.GetString("ContentType");

    m_contentTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = ChatItemTypeMapper::GetChatItemTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParticipantId"))
  {
    m_participantId = jsonValue.GetString("ParticipantId");

    m_participantIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisplayName"))
  {
    m_displayName = jsonValue.GetString("DisplayName");

    m_displayNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParticipantRole"))
  {
    m_participantRole = ParticipantRoleMapper::GetParticipantRoleForName(jsonValue.GetString("ParticipantRole"));

    m_participantRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Attachments"))
  {
    Aws::Utils::Array<JsonView> attachmentsJsonList = jsonValue.GetArray("Attachments");
    for(unsigned attachmentsIndex = 0; attachmentsIndex < attachmentsJsonList.GetLength(); ++attachmentsIndex)
    {
      m_attachments.push_back(attachmentsJsonList[attachmentsIndex].AsObject());
    }
    m_attachmentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MessageMetadata"))
  {
    m_messageMetadata = jsonValue.GetObject("MessageMetadata");

    m_messageMetadataHasBeenSet = true;
  }

  return *this;
}

JsonValue Item::Jsonize() const
{
  JsonValue payload;

  if(m_absoluteTimeHasBeenSet)
  {
   payload.WithString("AbsoluteTime", m_absoluteTime);

  }

  if(m_contentHasBeenSet)
  {
   payload.WithString("Content", m_content);

  }

  if(m_contentTypeHasBeenSet)
  {
   payload.WithString("ContentType", m_contentType);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ChatItemTypeMapper::GetNameForChatItemType(m_type));
  }

  if(m_participantIdHasBeenSet)
  {
   payload.WithString("ParticipantId", m_participantId);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("DisplayName", m_displayName);

  }

  if(m_participantRoleHasBeenSet)
  {
   payload.WithString("ParticipantRole", ParticipantRoleMapper::GetNameForParticipantRole(m_participantRole));
  }

  if(m_attachmentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attachmentsJsonList(m_attachments.size());
   for(unsigned attachmentsIndex = 0; attachmentsIndex < attachmentsJsonList.GetLength(); ++attachmentsIndex)
   {
     attachmentsJsonList[attachmentsIndex].AsObject(m_attachments[attachmentsIndex].Jsonize());
   }
   payload.WithArray("Attachments", std::move(attachmentsJsonList));

  }

  if(m_messageMetadataHasBeenSet)
  {
   payload.WithObject("MessageMetadata", m_messageMetadata.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws
