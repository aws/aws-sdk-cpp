/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/LogSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelBuildingService
{
namespace Model
{

LogSettingsRequest::LogSettingsRequest() : 
    m_logType(LogType::NOT_SET),
    m_logTypeHasBeenSet(false),
    m_destination(Destination::NOT_SET),
    m_destinationHasBeenSet(false),
    m_kmsKeyArnHasBeenSet(false),
    m_resourceArnHasBeenSet(false)
{
}

LogSettingsRequest::LogSettingsRequest(JsonView jsonValue) : 
    m_logType(LogType::NOT_SET),
    m_logTypeHasBeenSet(false),
    m_destination(Destination::NOT_SET),
    m_destinationHasBeenSet(false),
    m_kmsKeyArnHasBeenSet(false),
    m_resourceArnHasBeenSet(false)
{
  *this = jsonValue;
}

LogSettingsRequest& LogSettingsRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("logType"))
  {
    m_logType = LogTypeMapper::GetLogTypeForName(jsonValue.GetString("logType"));

    m_logTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destination"))
  {
    m_destination = DestinationMapper::GetDestinationForName(jsonValue.GetString("destination"));

    m_destinationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("kmsKeyArn"))
  {
    m_kmsKeyArn = jsonValue.GetString("kmsKeyArn");

    m_kmsKeyArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceArn"))
  {
    m_resourceArn = jsonValue.GetString("resourceArn");

    m_resourceArnHasBeenSet = true;
  }

  return *this;
}

JsonValue LogSettingsRequest::Jsonize() const
{
  JsonValue payload;

  if(m_logTypeHasBeenSet)
  {
   payload.WithString("logType", LogTypeMapper::GetNameForLogType(m_logType));
  }

  if(m_destinationHasBeenSet)
  {
   payload.WithString("destination", DestinationMapper::GetNameForDestination(m_destination));
  }

  if(m_kmsKeyArnHasBeenSet)
  {
   payload.WithString("kmsKeyArn", m_kmsKeyArn);

  }

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("resourceArn", m_resourceArn);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
