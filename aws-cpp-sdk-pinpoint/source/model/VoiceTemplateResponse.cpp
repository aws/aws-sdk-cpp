/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/VoiceTemplateResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

VoiceTemplateResponse::VoiceTemplateResponse() : 
    m_arnHasBeenSet(false),
    m_bodyHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_defaultSubstitutionsHasBeenSet(false),
    m_languageCodeHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_templateDescriptionHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_templateType(TemplateType::NOT_SET),
    m_templateTypeHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_voiceIdHasBeenSet(false)
{
}

VoiceTemplateResponse::VoiceTemplateResponse(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_bodyHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_defaultSubstitutionsHasBeenSet(false),
    m_languageCodeHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_templateDescriptionHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_templateType(TemplateType::NOT_SET),
    m_templateTypeHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_voiceIdHasBeenSet(false)
{
  *this = jsonValue;
}

VoiceTemplateResponse& VoiceTemplateResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Body"))
  {
    m_body = jsonValue.GetString("Body");

    m_bodyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetString("CreationDate");

    m_creationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultSubstitutions"))
  {
    m_defaultSubstitutions = jsonValue.GetString("DefaultSubstitutions");

    m_defaultSubstitutionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LanguageCode"))
  {
    m_languageCode = jsonValue.GetString("LanguageCode");

    m_languageCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetString("LastModifiedDate");

    m_lastModifiedDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TemplateDescription"))
  {
    m_templateDescription = jsonValue.GetString("TemplateDescription");

    m_templateDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TemplateName"))
  {
    m_templateName = jsonValue.GetString("TemplateName");

    m_templateNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TemplateType"))
  {
    m_templateType = TemplateTypeMapper::GetTemplateTypeForName(jsonValue.GetString("TemplateType"));

    m_templateTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetString("Version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VoiceId"))
  {
    m_voiceId = jsonValue.GetString("VoiceId");

    m_voiceIdHasBeenSet = true;
  }

  return *this;
}

JsonValue VoiceTemplateResponse::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_bodyHasBeenSet)
  {
   payload.WithString("Body", m_body);

  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithString("CreationDate", m_creationDate);

  }

  if(m_defaultSubstitutionsHasBeenSet)
  {
   payload.WithString("DefaultSubstitutions", m_defaultSubstitutions);

  }

  if(m_languageCodeHasBeenSet)
  {
   payload.WithString("LanguageCode", m_languageCode);

  }

  if(m_lastModifiedDateHasBeenSet)
  {
   payload.WithString("LastModifiedDate", m_lastModifiedDate);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_templateDescriptionHasBeenSet)
  {
   payload.WithString("TemplateDescription", m_templateDescription);

  }

  if(m_templateNameHasBeenSet)
  {
   payload.WithString("TemplateName", m_templateName);

  }

  if(m_templateTypeHasBeenSet)
  {
   payload.WithString("TemplateType", TemplateTypeMapper::GetNameForTemplateType(m_templateType));
  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("Version", m_version);

  }

  if(m_voiceIdHasBeenSet)
  {
   payload.WithString("VoiceId", m_voiceId);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
