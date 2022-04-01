/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
