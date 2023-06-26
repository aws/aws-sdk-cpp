/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/BasicLayout.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectCases
{
namespace Model
{

BasicLayout::BasicLayout() : 
    m_moreInfoHasBeenSet(false),
    m_topPanelHasBeenSet(false)
{
}

BasicLayout::BasicLayout(JsonView jsonValue) : 
    m_moreInfoHasBeenSet(false),
    m_topPanelHasBeenSet(false)
{
  *this = jsonValue;
}

BasicLayout& BasicLayout::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("moreInfo"))
  {
    m_moreInfo = jsonValue.GetObject("moreInfo");

    m_moreInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("topPanel"))
  {
    m_topPanel = jsonValue.GetObject("topPanel");

    m_topPanelHasBeenSet = true;
  }

  return *this;
}

JsonValue BasicLayout::Jsonize() const
{
  JsonValue payload;

  if(m_moreInfoHasBeenSet)
  {
   payload.WithObject("moreInfo", m_moreInfo.Jsonize());

  }

  if(m_topPanelHasBeenSet)
  {
   payload.WithObject("topPanel", m_topPanel.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
