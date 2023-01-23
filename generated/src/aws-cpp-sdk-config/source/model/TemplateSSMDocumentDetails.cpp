/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/TemplateSSMDocumentDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConfigService
{
namespace Model
{

TemplateSSMDocumentDetails::TemplateSSMDocumentDetails() : 
    m_documentNameHasBeenSet(false),
    m_documentVersionHasBeenSet(false)
{
}

TemplateSSMDocumentDetails::TemplateSSMDocumentDetails(JsonView jsonValue) : 
    m_documentNameHasBeenSet(false),
    m_documentVersionHasBeenSet(false)
{
  *this = jsonValue;
}

TemplateSSMDocumentDetails& TemplateSSMDocumentDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DocumentName"))
  {
    m_documentName = jsonValue.GetString("DocumentName");

    m_documentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DocumentVersion"))
  {
    m_documentVersion = jsonValue.GetString("DocumentVersion");

    m_documentVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue TemplateSSMDocumentDetails::Jsonize() const
{
  JsonValue payload;

  if(m_documentNameHasBeenSet)
  {
   payload.WithString("DocumentName", m_documentName);

  }

  if(m_documentVersionHasBeenSet)
  {
   payload.WithString("DocumentVersion", m_documentVersion);

  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
