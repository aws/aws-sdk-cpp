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

#include <aws/kinesisanalyticsv2/model/ApplicationCodeConfigurationUpdate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Model
{

ApplicationCodeConfigurationUpdate::ApplicationCodeConfigurationUpdate() : 
    m_codeContentTypeUpdate(CodeContentType::NOT_SET),
    m_codeContentTypeUpdateHasBeenSet(false),
    m_codeContentUpdateHasBeenSet(false)
{
}

ApplicationCodeConfigurationUpdate::ApplicationCodeConfigurationUpdate(JsonView jsonValue) : 
    m_codeContentTypeUpdate(CodeContentType::NOT_SET),
    m_codeContentTypeUpdateHasBeenSet(false),
    m_codeContentUpdateHasBeenSet(false)
{
  *this = jsonValue;
}

ApplicationCodeConfigurationUpdate& ApplicationCodeConfigurationUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CodeContentTypeUpdate"))
  {
    m_codeContentTypeUpdate = CodeContentTypeMapper::GetCodeContentTypeForName(jsonValue.GetString("CodeContentTypeUpdate"));

    m_codeContentTypeUpdateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CodeContentUpdate"))
  {
    m_codeContentUpdate = jsonValue.GetObject("CodeContentUpdate");

    m_codeContentUpdateHasBeenSet = true;
  }

  return *this;
}

JsonValue ApplicationCodeConfigurationUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_codeContentTypeUpdateHasBeenSet)
  {
   payload.WithString("CodeContentTypeUpdate", CodeContentTypeMapper::GetNameForCodeContentType(m_codeContentTypeUpdate));
  }

  if(m_codeContentUpdateHasBeenSet)
  {
   payload.WithObject("CodeContentUpdate", m_codeContentUpdate.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
