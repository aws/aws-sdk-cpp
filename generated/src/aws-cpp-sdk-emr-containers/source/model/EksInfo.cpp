/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-containers/model/EksInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMRContainers
{
namespace Model
{

EksInfo::EksInfo(JsonView jsonValue)
{
  *this = jsonValue;
}

EksInfo& EksInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("namespace"))
  {
    m_namespace = jsonValue.GetString("namespace");
    m_namespaceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nodeLabel"))
  {
    m_nodeLabel = jsonValue.GetString("nodeLabel");
    m_nodeLabelHasBeenSet = true;
  }
  return *this;
}

JsonValue EksInfo::Jsonize() const
{
  JsonValue payload;

  if(m_namespaceHasBeenSet)
  {
   payload.WithString("namespace", m_namespace);

  }

  if(m_nodeLabelHasBeenSet)
  {
   payload.WithString("nodeLabel", m_nodeLabel);

  }

  return payload;
}

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
