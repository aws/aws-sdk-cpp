/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/Model.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

Model::Model() : 
    m_smithyHasBeenSet(false)
{
}

Model::Model(JsonView jsonValue) : 
    m_smithyHasBeenSet(false)
{
  *this = jsonValue;
}

Model& Model::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("smithy"))
  {
    m_smithy = jsonValue.GetString("smithy");

    m_smithyHasBeenSet = true;
  }

  return *this;
}

JsonValue Model::Jsonize() const
{
  JsonValue payload;

  if(m_smithyHasBeenSet)
  {
   payload.WithString("smithy", m_smithy);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
