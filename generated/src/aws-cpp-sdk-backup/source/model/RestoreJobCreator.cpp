/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/RestoreJobCreator.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Backup
{
namespace Model
{

RestoreJobCreator::RestoreJobCreator() : 
    m_restoreTestingPlanArnHasBeenSet(false)
{
}

RestoreJobCreator::RestoreJobCreator(JsonView jsonValue) : 
    m_restoreTestingPlanArnHasBeenSet(false)
{
  *this = jsonValue;
}

RestoreJobCreator& RestoreJobCreator::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RestoreTestingPlanArn"))
  {
    m_restoreTestingPlanArn = jsonValue.GetString("RestoreTestingPlanArn");

    m_restoreTestingPlanArnHasBeenSet = true;
  }

  return *this;
}

JsonValue RestoreJobCreator::Jsonize() const
{
  JsonValue payload;

  if(m_restoreTestingPlanArnHasBeenSet)
  {
   payload.WithString("RestoreTestingPlanArn", m_restoreTestingPlanArn);

  }

  return payload;
}

} // namespace Model
} // namespace Backup
} // namespace Aws
