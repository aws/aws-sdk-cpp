/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/RetrievalResultLocation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Model
{

RetrievalResultLocation::RetrievalResultLocation() : 
    m_s3LocationHasBeenSet(false),
    m_type(RetrievalResultLocationType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

RetrievalResultLocation::RetrievalResultLocation(JsonView jsonValue) : 
    m_s3LocationHasBeenSet(false),
    m_type(RetrievalResultLocationType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

RetrievalResultLocation& RetrievalResultLocation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("s3Location"))
  {
    m_s3Location = jsonValue.GetObject("s3Location");

    m_s3LocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = RetrievalResultLocationTypeMapper::GetRetrievalResultLocationTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue RetrievalResultLocation::Jsonize() const
{
  JsonValue payload;

  if(m_s3LocationHasBeenSet)
  {
   payload.WithObject("s3Location", m_s3Location.Jsonize());

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", RetrievalResultLocationTypeMapper::GetNameForRetrievalResultLocationType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
