/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/MainframeResourceSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppTest
{
namespace Model
{

MainframeResourceSummary::MainframeResourceSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

MainframeResourceSummary& MainframeResourceSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("m2ManagedApplication"))
  {
    m_m2ManagedApplication = jsonValue.GetObject("m2ManagedApplication");
    m_m2ManagedApplicationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("m2NonManagedApplication"))
  {
    m_m2NonManagedApplication = jsonValue.GetObject("m2NonManagedApplication");
    m_m2NonManagedApplicationHasBeenSet = true;
  }
  return *this;
}

JsonValue MainframeResourceSummary::Jsonize() const
{
  JsonValue payload;

  if(m_m2ManagedApplicationHasBeenSet)
  {
   payload.WithObject("m2ManagedApplication", m_m2ManagedApplication.Jsonize());

  }

  if(m_m2NonManagedApplicationHasBeenSet)
  {
   payload.WithObject("m2NonManagedApplication", m_m2NonManagedApplication.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppTest
} // namespace Aws
