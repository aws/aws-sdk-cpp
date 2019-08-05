/*
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

#include <aws/iot/model/UpdateCACertificateParams.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

UpdateCACertificateParams::UpdateCACertificateParams() : 
    m_action(CACertificateUpdateAction::NOT_SET),
    m_actionHasBeenSet(false)
{
}

UpdateCACertificateParams::UpdateCACertificateParams(JsonView jsonValue) : 
    m_action(CACertificateUpdateAction::NOT_SET),
    m_actionHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateCACertificateParams& UpdateCACertificateParams::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("action"))
  {
    m_action = CACertificateUpdateActionMapper::GetCACertificateUpdateActionForName(jsonValue.GetString("action"));

    m_actionHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateCACertificateParams::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithString("action", CACertificateUpdateActionMapper::GetNameForCACertificateUpdateAction(m_action));
  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
