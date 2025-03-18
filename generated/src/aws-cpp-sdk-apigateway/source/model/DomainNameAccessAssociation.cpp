/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/DomainNameAccessAssociation.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace APIGateway
{
namespace Model
{

DomainNameAccessAssociation::DomainNameAccessAssociation(JsonView jsonValue)
{
  *this = jsonValue;
}

DomainNameAccessAssociation& DomainNameAccessAssociation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("domainNameAccessAssociationArn"))
  {
    m_domainNameAccessAssociationArn = jsonValue.GetString("domainNameAccessAssociationArn");
    m_domainNameAccessAssociationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("domainNameArn"))
  {
    m_domainNameArn = jsonValue.GetString("domainNameArn");
    m_domainNameArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("accessAssociationSourceType"))
  {
    m_accessAssociationSourceType = AccessAssociationSourceTypeMapper::GetAccessAssociationSourceTypeForName(jsonValue.GetString("accessAssociationSourceType"));
    m_accessAssociationSourceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("accessAssociationSource"))
  {
    m_accessAssociationSource = jsonValue.GetString("accessAssociationSource");
    m_accessAssociationSourceHasBeenSet = true;
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
  return *this;
}

JsonValue DomainNameAccessAssociation::Jsonize() const
{
  JsonValue payload;

  if(m_domainNameAccessAssociationArnHasBeenSet)
  {
   payload.WithString("domainNameAccessAssociationArn", m_domainNameAccessAssociationArn);

  }

  if(m_domainNameArnHasBeenSet)
  {
   payload.WithString("domainNameArn", m_domainNameArn);

  }

  if(m_accessAssociationSourceTypeHasBeenSet)
  {
   payload.WithString("accessAssociationSourceType", AccessAssociationSourceTypeMapper::GetNameForAccessAssociationSourceType(m_accessAssociationSourceType));
  }

  if(m_accessAssociationSourceHasBeenSet)
  {
   payload.WithString("accessAssociationSource", m_accessAssociationSource);

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

  return payload;
}

} // namespace Model
} // namespace APIGateway
} // namespace Aws
