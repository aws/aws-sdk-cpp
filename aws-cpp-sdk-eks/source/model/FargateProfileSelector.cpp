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

#include <aws/eks/model/FargateProfileSelector.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EKS
{
namespace Model
{

FargateProfileSelector::FargateProfileSelector() : 
    m_namespaceHasBeenSet(false),
    m_labelsHasBeenSet(false)
{
}

FargateProfileSelector::FargateProfileSelector(JsonView jsonValue) : 
    m_namespaceHasBeenSet(false),
    m_labelsHasBeenSet(false)
{
  *this = jsonValue;
}

FargateProfileSelector& FargateProfileSelector::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("namespace"))
  {
    m_namespace = jsonValue.GetString("namespace");

    m_namespaceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("labels"))
  {
    Aws::Map<Aws::String, JsonView> labelsJsonMap = jsonValue.GetObject("labels").GetAllObjects();
    for(auto& labelsItem : labelsJsonMap)
    {
      m_labels[labelsItem.first] = labelsItem.second.AsString();
    }
    m_labelsHasBeenSet = true;
  }

  return *this;
}

JsonValue FargateProfileSelector::Jsonize() const
{
  JsonValue payload;

  if(m_namespaceHasBeenSet)
  {
   payload.WithString("namespace", m_namespace);

  }

  if(m_labelsHasBeenSet)
  {
   JsonValue labelsJsonMap;
   for(auto& labelsItem : m_labels)
   {
     labelsJsonMap.WithString(labelsItem.first, labelsItem.second);
   }
   payload.WithObject("labels", std::move(labelsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws
