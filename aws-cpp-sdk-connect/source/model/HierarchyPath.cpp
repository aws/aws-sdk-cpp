﻿/*
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

#include <aws/connect/model/HierarchyPath.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

HierarchyPath::HierarchyPath() : 
    m_levelOneHasBeenSet(false),
    m_levelTwoHasBeenSet(false),
    m_levelThreeHasBeenSet(false),
    m_levelFourHasBeenSet(false),
    m_levelFiveHasBeenSet(false)
{
}

HierarchyPath::HierarchyPath(JsonView jsonValue) : 
    m_levelOneHasBeenSet(false),
    m_levelTwoHasBeenSet(false),
    m_levelThreeHasBeenSet(false),
    m_levelFourHasBeenSet(false),
    m_levelFiveHasBeenSet(false)
{
  *this = jsonValue;
}

HierarchyPath& HierarchyPath::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LevelOne"))
  {
    m_levelOne = jsonValue.GetObject("LevelOne");

    m_levelOneHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LevelTwo"))
  {
    m_levelTwo = jsonValue.GetObject("LevelTwo");

    m_levelTwoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LevelThree"))
  {
    m_levelThree = jsonValue.GetObject("LevelThree");

    m_levelThreeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LevelFour"))
  {
    m_levelFour = jsonValue.GetObject("LevelFour");

    m_levelFourHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LevelFive"))
  {
    m_levelFive = jsonValue.GetObject("LevelFive");

    m_levelFiveHasBeenSet = true;
  }

  return *this;
}

JsonValue HierarchyPath::Jsonize() const
{
  JsonValue payload;

  if(m_levelOneHasBeenSet)
  {
   payload.WithObject("LevelOne", m_levelOne.Jsonize());

  }

  if(m_levelTwoHasBeenSet)
  {
   payload.WithObject("LevelTwo", m_levelTwo.Jsonize());

  }

  if(m_levelThreeHasBeenSet)
  {
   payload.WithObject("LevelThree", m_levelThree.Jsonize());

  }

  if(m_levelFourHasBeenSet)
  {
   payload.WithObject("LevelFour", m_levelFour.Jsonize());

  }

  if(m_levelFiveHasBeenSet)
  {
   payload.WithObject("LevelFive", m_levelFive.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
