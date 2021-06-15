/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/ImagePackage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

ImagePackage::ImagePackage() : 
    m_packageNameHasBeenSet(false),
    m_packageVersionHasBeenSet(false)
{
}

ImagePackage::ImagePackage(JsonView jsonValue) : 
    m_packageNameHasBeenSet(false),
    m_packageVersionHasBeenSet(false)
{
  *this = jsonValue;
}

ImagePackage& ImagePackage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("packageName"))
  {
    m_packageName = jsonValue.GetString("packageName");

    m_packageNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("packageVersion"))
  {
    m_packageVersion = jsonValue.GetString("packageVersion");

    m_packageVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue ImagePackage::Jsonize() const
{
  JsonValue payload;

  if(m_packageNameHasBeenSet)
  {
   payload.WithString("packageName", m_packageName);

  }

  if(m_packageVersionHasBeenSet)
  {
   payload.WithString("packageVersion", m_packageVersion);

  }

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
