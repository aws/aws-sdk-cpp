/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/UpdateRetrievalConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

UpdateRetrievalConfiguration::UpdateRetrievalConfiguration() : 
    m_retrievalMode(RetrievalMode::NOT_SET),
    m_retrievalModeHasBeenSet(false),
    m_roleNameHasBeenSet(false)
{
}

UpdateRetrievalConfiguration::UpdateRetrievalConfiguration(JsonView jsonValue) : 
    m_retrievalMode(RetrievalMode::NOT_SET),
    m_retrievalModeHasBeenSet(false),
    m_roleNameHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateRetrievalConfiguration& UpdateRetrievalConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("retrievalMode"))
  {
    m_retrievalMode = RetrievalModeMapper::GetRetrievalModeForName(jsonValue.GetString("retrievalMode"));

    m_retrievalModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleName"))
  {
    m_roleName = jsonValue.GetString("roleName");

    m_roleNameHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateRetrievalConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_retrievalModeHasBeenSet)
  {
   payload.WithString("retrievalMode", RetrievalModeMapper::GetNameForRetrievalMode(m_retrievalMode));
  }

  if(m_roleNameHasBeenSet)
  {
   payload.WithString("roleName", m_roleName);

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
