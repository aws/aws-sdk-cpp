/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/EksContainerSecurityContext.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Batch
{
namespace Model
{

EksContainerSecurityContext::EksContainerSecurityContext(JsonView jsonValue)
{
  *this = jsonValue;
}

EksContainerSecurityContext& EksContainerSecurityContext::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("runAsUser"))
  {
    m_runAsUser = jsonValue.GetInt64("runAsUser");
    m_runAsUserHasBeenSet = true;
  }
  if(jsonValue.ValueExists("runAsGroup"))
  {
    m_runAsGroup = jsonValue.GetInt64("runAsGroup");
    m_runAsGroupHasBeenSet = true;
  }
  if(jsonValue.ValueExists("privileged"))
  {
    m_privileged = jsonValue.GetBool("privileged");
    m_privilegedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("allowPrivilegeEscalation"))
  {
    m_allowPrivilegeEscalation = jsonValue.GetBool("allowPrivilegeEscalation");
    m_allowPrivilegeEscalationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("readOnlyRootFilesystem"))
  {
    m_readOnlyRootFilesystem = jsonValue.GetBool("readOnlyRootFilesystem");
    m_readOnlyRootFilesystemHasBeenSet = true;
  }
  if(jsonValue.ValueExists("runAsNonRoot"))
  {
    m_runAsNonRoot = jsonValue.GetBool("runAsNonRoot");
    m_runAsNonRootHasBeenSet = true;
  }
  return *this;
}

JsonValue EksContainerSecurityContext::Jsonize() const
{
  JsonValue payload;

  if(m_runAsUserHasBeenSet)
  {
   payload.WithInt64("runAsUser", m_runAsUser);

  }

  if(m_runAsGroupHasBeenSet)
  {
   payload.WithInt64("runAsGroup", m_runAsGroup);

  }

  if(m_privilegedHasBeenSet)
  {
   payload.WithBool("privileged", m_privileged);

  }

  if(m_allowPrivilegeEscalationHasBeenSet)
  {
   payload.WithBool("allowPrivilegeEscalation", m_allowPrivilegeEscalation);

  }

  if(m_readOnlyRootFilesystemHasBeenSet)
  {
   payload.WithBool("readOnlyRootFilesystem", m_readOnlyRootFilesystem);

  }

  if(m_runAsNonRootHasBeenSet)
  {
   payload.WithBool("runAsNonRoot", m_runAsNonRoot);

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
