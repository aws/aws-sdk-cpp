/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/AppInstanceStreamingConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Chime
{
namespace Model
{

AppInstanceStreamingConfiguration::AppInstanceStreamingConfiguration() : 
    m_appInstanceDataType(AppInstanceDataType::NOT_SET),
    m_appInstanceDataTypeHasBeenSet(false),
    m_resourceArnHasBeenSet(false)
{
}

AppInstanceStreamingConfiguration::AppInstanceStreamingConfiguration(JsonView jsonValue) : 
    m_appInstanceDataType(AppInstanceDataType::NOT_SET),
    m_appInstanceDataTypeHasBeenSet(false),
    m_resourceArnHasBeenSet(false)
{
  *this = jsonValue;
}

AppInstanceStreamingConfiguration& AppInstanceStreamingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AppInstanceDataType"))
  {
    m_appInstanceDataType = AppInstanceDataTypeMapper::GetAppInstanceDataTypeForName(jsonValue.GetString("AppInstanceDataType"));

    m_appInstanceDataTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceArn"))
  {
    m_resourceArn = jsonValue.GetString("ResourceArn");

    m_resourceArnHasBeenSet = true;
  }

  return *this;
}

JsonValue AppInstanceStreamingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_appInstanceDataTypeHasBeenSet)
  {
   payload.WithString("AppInstanceDataType", AppInstanceDataTypeMapper::GetNameForAppInstanceDataType(m_appInstanceDataType));
  }

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("ResourceArn", m_resourceArn);

  }

  return payload;
}

} // namespace Model
} // namespace Chime
} // namespace Aws
