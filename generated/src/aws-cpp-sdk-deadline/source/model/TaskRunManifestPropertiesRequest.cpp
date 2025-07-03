/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/TaskRunManifestPropertiesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace deadline
{
namespace Model
{

TaskRunManifestPropertiesRequest::TaskRunManifestPropertiesRequest(JsonView jsonValue)
{
  *this = jsonValue;
}

TaskRunManifestPropertiesRequest& TaskRunManifestPropertiesRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("outputManifestPath"))
  {
    m_outputManifestPath = jsonValue.GetString("outputManifestPath");
    m_outputManifestPathHasBeenSet = true;
  }
  if(jsonValue.ValueExists("outputManifestHash"))
  {
    m_outputManifestHash = jsonValue.GetString("outputManifestHash");
    m_outputManifestHashHasBeenSet = true;
  }
  return *this;
}

JsonValue TaskRunManifestPropertiesRequest::Jsonize() const
{
  JsonValue payload;

  if(m_outputManifestPathHasBeenSet)
  {
   payload.WithString("outputManifestPath", m_outputManifestPath);

  }

  if(m_outputManifestHashHasBeenSet)
  {
   payload.WithString("outputManifestHash", m_outputManifestHash);

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
