/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/DocumentVersionInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

DocumentVersionInfo::DocumentVersionInfo() : 
    m_nameHasBeenSet(false),
    m_documentVersionHasBeenSet(false),
    m_versionNameHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_isDefaultVersion(false),
    m_isDefaultVersionHasBeenSet(false),
    m_documentFormat(DocumentFormat::NOT_SET),
    m_documentFormatHasBeenSet(false),
    m_status(DocumentStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusInformationHasBeenSet(false)
{
}

DocumentVersionInfo::DocumentVersionInfo(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_documentVersionHasBeenSet(false),
    m_versionNameHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_isDefaultVersion(false),
    m_isDefaultVersionHasBeenSet(false),
    m_documentFormat(DocumentFormat::NOT_SET),
    m_documentFormatHasBeenSet(false),
    m_status(DocumentStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusInformationHasBeenSet(false)
{
  *this = jsonValue;
}

DocumentVersionInfo& DocumentVersionInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DocumentVersion"))
  {
    m_documentVersion = jsonValue.GetString("DocumentVersion");

    m_documentVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VersionName"))
  {
    m_versionName = jsonValue.GetString("VersionName");

    m_versionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedDate"))
  {
    m_createdDate = jsonValue.GetDouble("CreatedDate");

    m_createdDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IsDefaultVersion"))
  {
    m_isDefaultVersion = jsonValue.GetBool("IsDefaultVersion");

    m_isDefaultVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DocumentFormat"))
  {
    m_documentFormat = DocumentFormatMapper::GetDocumentFormatForName(jsonValue.GetString("DocumentFormat"));

    m_documentFormatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = DocumentStatusMapper::GetDocumentStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusInformation"))
  {
    m_statusInformation = jsonValue.GetString("StatusInformation");

    m_statusInformationHasBeenSet = true;
  }

  return *this;
}

JsonValue DocumentVersionInfo::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_documentVersionHasBeenSet)
  {
   payload.WithString("DocumentVersion", m_documentVersion);

  }

  if(m_versionNameHasBeenSet)
  {
   payload.WithString("VersionName", m_versionName);

  }

  if(m_createdDateHasBeenSet)
  {
   payload.WithDouble("CreatedDate", m_createdDate.SecondsWithMSPrecision());
  }

  if(m_isDefaultVersionHasBeenSet)
  {
   payload.WithBool("IsDefaultVersion", m_isDefaultVersion);

  }

  if(m_documentFormatHasBeenSet)
  {
   payload.WithString("DocumentFormat", DocumentFormatMapper::GetNameForDocumentFormat(m_documentFormat));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", DocumentStatusMapper::GetNameForDocumentStatus(m_status));
  }

  if(m_statusInformationHasBeenSet)
  {
   payload.WithString("StatusInformation", m_statusInformation);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
