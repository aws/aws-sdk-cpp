/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotdeviceadvisor/model/TestCaseDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTDeviceAdvisor
{
namespace Model
{

TestCaseDefinition::TestCaseDefinition() : 
    m_idHasBeenSet(false),
    m_testCaseVersionHasBeenSet(false)
{
}

TestCaseDefinition::TestCaseDefinition(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_testCaseVersionHasBeenSet(false)
{
  *this = jsonValue;
}

TestCaseDefinition& TestCaseDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("testCaseVersion"))
  {
    m_testCaseVersion = jsonValue.GetString("testCaseVersion");

    m_testCaseVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue TestCaseDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_testCaseVersionHasBeenSet)
  {
   payload.WithString("testCaseVersion", m_testCaseVersion);

  }

  return payload;
}

} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
