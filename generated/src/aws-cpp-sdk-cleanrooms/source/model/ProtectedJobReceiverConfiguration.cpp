/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ProtectedJobReceiverConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

ProtectedJobReceiverConfiguration::ProtectedJobReceiverConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ProtectedJobReceiverConfiguration& ProtectedJobReceiverConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("analysisType"))
  {
    m_analysisType = ProtectedJobAnalysisTypeMapper::GetProtectedJobAnalysisTypeForName(jsonValue.GetString("analysisType"));
    m_analysisTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("configurationDetails"))
  {
    m_configurationDetails = jsonValue.GetObject("configurationDetails");
    m_configurationDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue ProtectedJobReceiverConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_analysisTypeHasBeenSet)
  {
   payload.WithString("analysisType", ProtectedJobAnalysisTypeMapper::GetNameForProtectedJobAnalysisType(m_analysisType));
  }

  if(m_configurationDetailsHasBeenSet)
  {
   payload.WithObject("configurationDetails", m_configurationDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
