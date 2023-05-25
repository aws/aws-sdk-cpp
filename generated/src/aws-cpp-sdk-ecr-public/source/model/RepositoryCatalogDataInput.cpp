/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr-public/model/RepositoryCatalogDataInput.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECRPublic
{
namespace Model
{

RepositoryCatalogDataInput::RepositoryCatalogDataInput() : 
    m_descriptionHasBeenSet(false),
    m_architecturesHasBeenSet(false),
    m_operatingSystemsHasBeenSet(false),
    m_logoImageBlobHasBeenSet(false),
    m_aboutTextHasBeenSet(false),
    m_usageTextHasBeenSet(false)
{
}

RepositoryCatalogDataInput::RepositoryCatalogDataInput(JsonView jsonValue) : 
    m_descriptionHasBeenSet(false),
    m_architecturesHasBeenSet(false),
    m_operatingSystemsHasBeenSet(false),
    m_logoImageBlobHasBeenSet(false),
    m_aboutTextHasBeenSet(false),
    m_usageTextHasBeenSet(false)
{
  *this = jsonValue;
}

RepositoryCatalogDataInput& RepositoryCatalogDataInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("architectures"))
  {
    Aws::Utils::Array<JsonView> architecturesJsonList = jsonValue.GetArray("architectures");
    for(unsigned architecturesIndex = 0; architecturesIndex < architecturesJsonList.GetLength(); ++architecturesIndex)
    {
      m_architectures.push_back(architecturesJsonList[architecturesIndex].AsString());
    }
    m_architecturesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("operatingSystems"))
  {
    Aws::Utils::Array<JsonView> operatingSystemsJsonList = jsonValue.GetArray("operatingSystems");
    for(unsigned operatingSystemsIndex = 0; operatingSystemsIndex < operatingSystemsJsonList.GetLength(); ++operatingSystemsIndex)
    {
      m_operatingSystems.push_back(operatingSystemsJsonList[operatingSystemsIndex].AsString());
    }
    m_operatingSystemsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("logoImageBlob"))
  {
    m_logoImageBlob = HashingUtils::Base64Decode(jsonValue.GetString("logoImageBlob"));
    m_logoImageBlobHasBeenSet = true;
  }

  if(jsonValue.ValueExists("aboutText"))
  {
    m_aboutText = jsonValue.GetString("aboutText");

    m_aboutTextHasBeenSet = true;
  }

  if(jsonValue.ValueExists("usageText"))
  {
    m_usageText = jsonValue.GetString("usageText");

    m_usageTextHasBeenSet = true;
  }

  return *this;
}

JsonValue RepositoryCatalogDataInput::Jsonize() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_architecturesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> architecturesJsonList(m_architectures.size());
   for(unsigned architecturesIndex = 0; architecturesIndex < architecturesJsonList.GetLength(); ++architecturesIndex)
   {
     architecturesJsonList[architecturesIndex].AsString(m_architectures[architecturesIndex]);
   }
   payload.WithArray("architectures", std::move(architecturesJsonList));

  }

  if(m_operatingSystemsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> operatingSystemsJsonList(m_operatingSystems.size());
   for(unsigned operatingSystemsIndex = 0; operatingSystemsIndex < operatingSystemsJsonList.GetLength(); ++operatingSystemsIndex)
   {
     operatingSystemsJsonList[operatingSystemsIndex].AsString(m_operatingSystems[operatingSystemsIndex]);
   }
   payload.WithArray("operatingSystems", std::move(operatingSystemsJsonList));

  }

  if(m_logoImageBlobHasBeenSet)
  {
   payload.WithString("logoImageBlob", HashingUtils::Base64Encode(m_logoImageBlob));
  }

  if(m_aboutTextHasBeenSet)
  {
   payload.WithString("aboutText", m_aboutText);

  }

  if(m_usageTextHasBeenSet)
  {
   payload.WithString("usageText", m_usageText);

  }

  return payload;
}

} // namespace Model
} // namespace ECRPublic
} // namespace Aws
