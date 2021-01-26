/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/CloudComponentStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GreengrassV2
{
namespace Model
{

CloudComponentStatus::CloudComponentStatus() : 
    m_componentState(CloudComponentState::NOT_SET),
    m_componentStateHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_errorsHasBeenSet(false)
{
}

CloudComponentStatus::CloudComponentStatus(JsonView jsonValue) : 
    m_componentState(CloudComponentState::NOT_SET),
    m_componentStateHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_errorsHasBeenSet(false)
{
  *this = jsonValue;
}

CloudComponentStatus& CloudComponentStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("componentState"))
  {
    m_componentState = CloudComponentStateMapper::GetCloudComponentStateForName(jsonValue.GetString("componentState"));

    m_componentStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errors"))
  {
    Aws::Map<Aws::String, JsonView> errorsJsonMap = jsonValue.GetObject("errors").GetAllObjects();
    for(auto& errorsItem : errorsJsonMap)
    {
      m_errors[errorsItem.first] = errorsItem.second.AsString();
    }
    m_errorsHasBeenSet = true;
  }

  return *this;
}

JsonValue CloudComponentStatus::Jsonize() const
{
  JsonValue payload;

  if(m_componentStateHasBeenSet)
  {
   payload.WithString("componentState", CloudComponentStateMapper::GetNameForCloudComponentState(m_componentState));
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_errorsHasBeenSet)
  {
   JsonValue errorsJsonMap;
   for(auto& errorsItem : m_errors)
   {
     errorsJsonMap.WithString(errorsItem.first, errorsItem.second);
   }
   payload.WithObject("errors", std::move(errorsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
