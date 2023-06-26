/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/ControlMappingSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AuditManager
{
namespace Model
{

ControlMappingSource::ControlMappingSource() : 
    m_sourceIdHasBeenSet(false),
    m_sourceNameHasBeenSet(false),
    m_sourceDescriptionHasBeenSet(false),
    m_sourceSetUpOption(SourceSetUpOption::NOT_SET),
    m_sourceSetUpOptionHasBeenSet(false),
    m_sourceType(SourceType::NOT_SET),
    m_sourceTypeHasBeenSet(false),
    m_sourceKeywordHasBeenSet(false),
    m_sourceFrequency(SourceFrequency::NOT_SET),
    m_sourceFrequencyHasBeenSet(false),
    m_troubleshootingTextHasBeenSet(false)
{
}

ControlMappingSource::ControlMappingSource(JsonView jsonValue) : 
    m_sourceIdHasBeenSet(false),
    m_sourceNameHasBeenSet(false),
    m_sourceDescriptionHasBeenSet(false),
    m_sourceSetUpOption(SourceSetUpOption::NOT_SET),
    m_sourceSetUpOptionHasBeenSet(false),
    m_sourceType(SourceType::NOT_SET),
    m_sourceTypeHasBeenSet(false),
    m_sourceKeywordHasBeenSet(false),
    m_sourceFrequency(SourceFrequency::NOT_SET),
    m_sourceFrequencyHasBeenSet(false),
    m_troubleshootingTextHasBeenSet(false)
{
  *this = jsonValue;
}

ControlMappingSource& ControlMappingSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sourceId"))
  {
    m_sourceId = jsonValue.GetString("sourceId");

    m_sourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceName"))
  {
    m_sourceName = jsonValue.GetString("sourceName");

    m_sourceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceDescription"))
  {
    m_sourceDescription = jsonValue.GetString("sourceDescription");

    m_sourceDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceSetUpOption"))
  {
    m_sourceSetUpOption = SourceSetUpOptionMapper::GetSourceSetUpOptionForName(jsonValue.GetString("sourceSetUpOption"));

    m_sourceSetUpOptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceType"))
  {
    m_sourceType = SourceTypeMapper::GetSourceTypeForName(jsonValue.GetString("sourceType"));

    m_sourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceKeyword"))
  {
    m_sourceKeyword = jsonValue.GetObject("sourceKeyword");

    m_sourceKeywordHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceFrequency"))
  {
    m_sourceFrequency = SourceFrequencyMapper::GetSourceFrequencyForName(jsonValue.GetString("sourceFrequency"));

    m_sourceFrequencyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("troubleshootingText"))
  {
    m_troubleshootingText = jsonValue.GetString("troubleshootingText");

    m_troubleshootingTextHasBeenSet = true;
  }

  return *this;
}

JsonValue ControlMappingSource::Jsonize() const
{
  JsonValue payload;

  if(m_sourceIdHasBeenSet)
  {
   payload.WithString("sourceId", m_sourceId);

  }

  if(m_sourceNameHasBeenSet)
  {
   payload.WithString("sourceName", m_sourceName);

  }

  if(m_sourceDescriptionHasBeenSet)
  {
   payload.WithString("sourceDescription", m_sourceDescription);

  }

  if(m_sourceSetUpOptionHasBeenSet)
  {
   payload.WithString("sourceSetUpOption", SourceSetUpOptionMapper::GetNameForSourceSetUpOption(m_sourceSetUpOption));
  }

  if(m_sourceTypeHasBeenSet)
  {
   payload.WithString("sourceType", SourceTypeMapper::GetNameForSourceType(m_sourceType));
  }

  if(m_sourceKeywordHasBeenSet)
  {
   payload.WithObject("sourceKeyword", m_sourceKeyword.Jsonize());

  }

  if(m_sourceFrequencyHasBeenSet)
  {
   payload.WithString("sourceFrequency", SourceFrequencyMapper::GetNameForSourceFrequency(m_sourceFrequency));
  }

  if(m_troubleshootingTextHasBeenSet)
  {
   payload.WithString("troubleshootingText", m_troubleshootingText);

  }

  return payload;
}

} // namespace Model
} // namespace AuditManager
} // namespace Aws
