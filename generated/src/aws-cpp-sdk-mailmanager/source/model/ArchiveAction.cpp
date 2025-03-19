/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/ArchiveAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MailManager
{
namespace Model
{

ArchiveAction::ArchiveAction(JsonView jsonValue)
{
  *this = jsonValue;
}

ArchiveAction& ArchiveAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ActionFailurePolicy"))
  {
    m_actionFailurePolicy = ActionFailurePolicyMapper::GetActionFailurePolicyForName(jsonValue.GetString("ActionFailurePolicy"));
    m_actionFailurePolicyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TargetArchive"))
  {
    m_targetArchive = jsonValue.GetString("TargetArchive");
    m_targetArchiveHasBeenSet = true;
  }
  return *this;
}

JsonValue ArchiveAction::Jsonize() const
{
  JsonValue payload;

  if(m_actionFailurePolicyHasBeenSet)
  {
   payload.WithString("ActionFailurePolicy", ActionFailurePolicyMapper::GetNameForActionFailurePolicy(m_actionFailurePolicy));
  }

  if(m_targetArchiveHasBeenSet)
  {
   payload.WithString("TargetArchive", m_targetArchive);

  }

  return payload;
}

} // namespace Model
} // namespace MailManager
} // namespace Aws
