/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/inspector/model/RulesPackage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector
{
namespace Model
{

RulesPackage::RulesPackage() : 
    m_rulesPackageArnHasBeenSet(false),
    m_rulesPackageNameHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_providerHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

RulesPackage::RulesPackage(const JsonValue& jsonValue) : 
    m_rulesPackageArnHasBeenSet(false),
    m_rulesPackageNameHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_providerHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
  *this = jsonValue;
}

RulesPackage& RulesPackage::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("rulesPackageArn"))
  {
    m_rulesPackageArn = jsonValue.GetString("rulesPackageArn");

    m_rulesPackageArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rulesPackageName"))
  {
    m_rulesPackageName = jsonValue.GetString("rulesPackageName");

    m_rulesPackageNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetString("version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("provider"))
  {
    m_provider = jsonValue.GetString("provider");

    m_providerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetObject("description");

    m_descriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue RulesPackage::Jsonize() const
{
  JsonValue payload;

  if(m_rulesPackageArnHasBeenSet)
  {
   payload.WithString("rulesPackageArn", m_rulesPackageArn);

  }

  if(m_rulesPackageNameHasBeenSet)
  {
   payload.WithString("rulesPackageName", m_rulesPackageName);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

  }

  if(m_providerHasBeenSet)
  {
   payload.WithString("provider", m_provider);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithObject("description", m_description.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Inspector
} // namespace Aws