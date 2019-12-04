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

#include <aws/sagemaker/model/UiTemplateInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

UiTemplateInfo::UiTemplateInfo() : 
    m_urlHasBeenSet(false),
    m_contentSha256HasBeenSet(false)
{
}

UiTemplateInfo::UiTemplateInfo(JsonView jsonValue) : 
    m_urlHasBeenSet(false),
    m_contentSha256HasBeenSet(false)
{
  *this = jsonValue;
}

UiTemplateInfo& UiTemplateInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Url"))
  {
    m_url = jsonValue.GetString("Url");

    m_urlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContentSha256"))
  {
    m_contentSha256 = jsonValue.GetString("ContentSha256");

    m_contentSha256HasBeenSet = true;
  }

  return *this;
}

JsonValue UiTemplateInfo::Jsonize() const
{
  JsonValue payload;

  if(m_urlHasBeenSet)
  {
   payload.WithString("Url", m_url);

  }

  if(m_contentSha256HasBeenSet)
  {
   payload.WithString("ContentSha256", m_contentSha256);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
