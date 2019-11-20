/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/quicksight/model/TemplateSourceEntity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

TemplateSourceEntity::TemplateSourceEntity() : 
    m_sourceAnalysisHasBeenSet(false),
    m_sourceTemplateHasBeenSet(false)
{
}

TemplateSourceEntity::TemplateSourceEntity(JsonView jsonValue) : 
    m_sourceAnalysisHasBeenSet(false),
    m_sourceTemplateHasBeenSet(false)
{
  *this = jsonValue;
}

TemplateSourceEntity& TemplateSourceEntity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SourceAnalysis"))
  {
    m_sourceAnalysis = jsonValue.GetObject("SourceAnalysis");

    m_sourceAnalysisHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceTemplate"))
  {
    m_sourceTemplate = jsonValue.GetObject("SourceTemplate");

    m_sourceTemplateHasBeenSet = true;
  }

  return *this;
}

JsonValue TemplateSourceEntity::Jsonize() const
{
  JsonValue payload;

  if(m_sourceAnalysisHasBeenSet)
  {
   payload.WithObject("SourceAnalysis", m_sourceAnalysis.Jsonize());

  }

  if(m_sourceTemplateHasBeenSet)
  {
   payload.WithObject("SourceTemplate", m_sourceTemplate.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
