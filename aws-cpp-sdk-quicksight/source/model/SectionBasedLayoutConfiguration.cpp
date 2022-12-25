/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SectionBasedLayoutConfiguration.h>
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

SectionBasedLayoutConfiguration::SectionBasedLayoutConfiguration() : 
    m_headerSectionsHasBeenSet(false),
    m_bodySectionsHasBeenSet(false),
    m_footerSectionsHasBeenSet(false),
    m_canvasSizeOptionsHasBeenSet(false)
{
}

SectionBasedLayoutConfiguration::SectionBasedLayoutConfiguration(JsonView jsonValue) : 
    m_headerSectionsHasBeenSet(false),
    m_bodySectionsHasBeenSet(false),
    m_footerSectionsHasBeenSet(false),
    m_canvasSizeOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

SectionBasedLayoutConfiguration& SectionBasedLayoutConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HeaderSections"))
  {
    Aws::Utils::Array<JsonView> headerSectionsJsonList = jsonValue.GetArray("HeaderSections");
    for(unsigned headerSectionsIndex = 0; headerSectionsIndex < headerSectionsJsonList.GetLength(); ++headerSectionsIndex)
    {
      m_headerSections.push_back(headerSectionsJsonList[headerSectionsIndex].AsObject());
    }
    m_headerSectionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BodySections"))
  {
    Aws::Utils::Array<JsonView> bodySectionsJsonList = jsonValue.GetArray("BodySections");
    for(unsigned bodySectionsIndex = 0; bodySectionsIndex < bodySectionsJsonList.GetLength(); ++bodySectionsIndex)
    {
      m_bodySections.push_back(bodySectionsJsonList[bodySectionsIndex].AsObject());
    }
    m_bodySectionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FooterSections"))
  {
    Aws::Utils::Array<JsonView> footerSectionsJsonList = jsonValue.GetArray("FooterSections");
    for(unsigned footerSectionsIndex = 0; footerSectionsIndex < footerSectionsJsonList.GetLength(); ++footerSectionsIndex)
    {
      m_footerSections.push_back(footerSectionsJsonList[footerSectionsIndex].AsObject());
    }
    m_footerSectionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CanvasSizeOptions"))
  {
    m_canvasSizeOptions = jsonValue.GetObject("CanvasSizeOptions");

    m_canvasSizeOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue SectionBasedLayoutConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_headerSectionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> headerSectionsJsonList(m_headerSections.size());
   for(unsigned headerSectionsIndex = 0; headerSectionsIndex < headerSectionsJsonList.GetLength(); ++headerSectionsIndex)
   {
     headerSectionsJsonList[headerSectionsIndex].AsObject(m_headerSections[headerSectionsIndex].Jsonize());
   }
   payload.WithArray("HeaderSections", std::move(headerSectionsJsonList));

  }

  if(m_bodySectionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> bodySectionsJsonList(m_bodySections.size());
   for(unsigned bodySectionsIndex = 0; bodySectionsIndex < bodySectionsJsonList.GetLength(); ++bodySectionsIndex)
   {
     bodySectionsJsonList[bodySectionsIndex].AsObject(m_bodySections[bodySectionsIndex].Jsonize());
   }
   payload.WithArray("BodySections", std::move(bodySectionsJsonList));

  }

  if(m_footerSectionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> footerSectionsJsonList(m_footerSections.size());
   for(unsigned footerSectionsIndex = 0; footerSectionsIndex < footerSectionsJsonList.GetLength(); ++footerSectionsIndex)
   {
     footerSectionsJsonList[footerSectionsIndex].AsObject(m_footerSections[footerSectionsIndex].Jsonize());
   }
   payload.WithArray("FooterSections", std::move(footerSectionsJsonList));

  }

  if(m_canvasSizeOptionsHasBeenSet)
  {
   payload.WithObject("CanvasSizeOptions", m_canvasSizeOptions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
