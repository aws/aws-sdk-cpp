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

#include <aws/ssm/model/Patch.h>
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

Patch::Patch() : 
    m_idHasBeenSet(false),
    m_releaseDateHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_contentUrlHasBeenSet(false),
    m_vendorHasBeenSet(false),
    m_productFamilyHasBeenSet(false),
    m_productHasBeenSet(false),
    m_classificationHasBeenSet(false),
    m_msrcSeverityHasBeenSet(false),
    m_kbNumberHasBeenSet(false),
    m_msrcNumberHasBeenSet(false),
    m_languageHasBeenSet(false)
{
}

Patch::Patch(const JsonValue& jsonValue) : 
    m_idHasBeenSet(false),
    m_releaseDateHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_contentUrlHasBeenSet(false),
    m_vendorHasBeenSet(false),
    m_productFamilyHasBeenSet(false),
    m_productHasBeenSet(false),
    m_classificationHasBeenSet(false),
    m_msrcSeverityHasBeenSet(false),
    m_kbNumberHasBeenSet(false),
    m_msrcNumberHasBeenSet(false),
    m_languageHasBeenSet(false)
{
  *this = jsonValue;
}

Patch& Patch::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReleaseDate"))
  {
    m_releaseDate = jsonValue.GetDouble("ReleaseDate");

    m_releaseDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Title"))
  {
    m_title = jsonValue.GetString("Title");

    m_titleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContentUrl"))
  {
    m_contentUrl = jsonValue.GetString("ContentUrl");

    m_contentUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Vendor"))
  {
    m_vendor = jsonValue.GetString("Vendor");

    m_vendorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProductFamily"))
  {
    m_productFamily = jsonValue.GetString("ProductFamily");

    m_productFamilyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Product"))
  {
    m_product = jsonValue.GetString("Product");

    m_productHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Classification"))
  {
    m_classification = jsonValue.GetString("Classification");

    m_classificationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MsrcSeverity"))
  {
    m_msrcSeverity = jsonValue.GetString("MsrcSeverity");

    m_msrcSeverityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KbNumber"))
  {
    m_kbNumber = jsonValue.GetString("KbNumber");

    m_kbNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MsrcNumber"))
  {
    m_msrcNumber = jsonValue.GetString("MsrcNumber");

    m_msrcNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Language"))
  {
    m_language = jsonValue.GetString("Language");

    m_languageHasBeenSet = true;
  }

  return *this;
}

JsonValue Patch::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_releaseDateHasBeenSet)
  {
   payload.WithDouble("ReleaseDate", m_releaseDate.SecondsWithMSPrecision());
  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("Title", m_title);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_contentUrlHasBeenSet)
  {
   payload.WithString("ContentUrl", m_contentUrl);

  }

  if(m_vendorHasBeenSet)
  {
   payload.WithString("Vendor", m_vendor);

  }

  if(m_productFamilyHasBeenSet)
  {
   payload.WithString("ProductFamily", m_productFamily);

  }

  if(m_productHasBeenSet)
  {
   payload.WithString("Product", m_product);

  }

  if(m_classificationHasBeenSet)
  {
   payload.WithString("Classification", m_classification);

  }

  if(m_msrcSeverityHasBeenSet)
  {
   payload.WithString("MsrcSeverity", m_msrcSeverity);

  }

  if(m_kbNumberHasBeenSet)
  {
   payload.WithString("KbNumber", m_kbNumber);

  }

  if(m_msrcNumberHasBeenSet)
  {
   payload.WithString("MsrcNumber", m_msrcNumber);

  }

  if(m_languageHasBeenSet)
  {
   payload.WithString("Language", m_language);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws