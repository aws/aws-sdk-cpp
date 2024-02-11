/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/AppBlockBuilderAppBlockAssociation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppStream
{
namespace Model
{

AppBlockBuilderAppBlockAssociation::AppBlockBuilderAppBlockAssociation() : 
    m_appBlockArnHasBeenSet(false),
    m_appBlockBuilderNameHasBeenSet(false)
{
}

AppBlockBuilderAppBlockAssociation::AppBlockBuilderAppBlockAssociation(JsonView jsonValue) : 
    m_appBlockArnHasBeenSet(false),
    m_appBlockBuilderNameHasBeenSet(false)
{
  *this = jsonValue;
}

AppBlockBuilderAppBlockAssociation& AppBlockBuilderAppBlockAssociation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AppBlockArn"))
  {
    m_appBlockArn = jsonValue.GetString("AppBlockArn");

    m_appBlockArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AppBlockBuilderName"))
  {
    m_appBlockBuilderName = jsonValue.GetString("AppBlockBuilderName");

    m_appBlockBuilderNameHasBeenSet = true;
  }

  return *this;
}

JsonValue AppBlockBuilderAppBlockAssociation::Jsonize() const
{
  JsonValue payload;

  if(m_appBlockArnHasBeenSet)
  {
   payload.WithString("AppBlockArn", m_appBlockArn);

  }

  if(m_appBlockBuilderNameHasBeenSet)
  {
   payload.WithString("AppBlockBuilderName", m_appBlockBuilderName);

  }

  return payload;
}

} // namespace Model
} // namespace AppStream
} // namespace Aws
