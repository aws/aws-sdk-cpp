/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CreateIntegrationDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

CreateIntegrationDetail::CreateIntegrationDetail(JsonView jsonValue)
{
  *this = jsonValue;
}

CreateIntegrationDetail& CreateIntegrationDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("gitlabSelfManaged"))
  {
    m_gitlabSelfManaged = jsonValue.GetObject("gitlabSelfManaged");
    m_gitlabSelfManagedHasBeenSet = true;
  }
  return *this;
}

JsonValue CreateIntegrationDetail::Jsonize() const
{
  JsonValue payload;

  if(m_gitlabSelfManagedHasBeenSet)
  {
   payload.WithObject("gitlabSelfManaged", m_gitlabSelfManaged.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
