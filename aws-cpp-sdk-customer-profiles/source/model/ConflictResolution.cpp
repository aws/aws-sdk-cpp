/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/ConflictResolution.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

ConflictResolution::ConflictResolution() : 
    m_conflictResolvingModel(ConflictResolvingModel::NOT_SET),
    m_conflictResolvingModelHasBeenSet(false),
    m_sourceNameHasBeenSet(false)
{
}

ConflictResolution::ConflictResolution(JsonView jsonValue) : 
    m_conflictResolvingModel(ConflictResolvingModel::NOT_SET),
    m_conflictResolvingModelHasBeenSet(false),
    m_sourceNameHasBeenSet(false)
{
  *this = jsonValue;
}

ConflictResolution& ConflictResolution::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConflictResolvingModel"))
  {
    m_conflictResolvingModel = ConflictResolvingModelMapper::GetConflictResolvingModelForName(jsonValue.GetString("ConflictResolvingModel"));

    m_conflictResolvingModelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceName"))
  {
    m_sourceName = jsonValue.GetString("SourceName");

    m_sourceNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ConflictResolution::Jsonize() const
{
  JsonValue payload;

  if(m_conflictResolvingModelHasBeenSet)
  {
   payload.WithString("ConflictResolvingModel", ConflictResolvingModelMapper::GetNameForConflictResolvingModel(m_conflictResolvingModel));
  }

  if(m_sourceNameHasBeenSet)
  {
   payload.WithString("SourceName", m_sourceName);

  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
