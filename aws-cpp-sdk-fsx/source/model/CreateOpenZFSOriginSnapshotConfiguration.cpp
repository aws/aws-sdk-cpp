/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/CreateOpenZFSOriginSnapshotConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FSx
{
namespace Model
{

CreateOpenZFSOriginSnapshotConfiguration::CreateOpenZFSOriginSnapshotConfiguration() : 
    m_snapshotARNHasBeenSet(false),
    m_copyStrategy(OpenZFSCopyStrategy::NOT_SET),
    m_copyStrategyHasBeenSet(false)
{
}

CreateOpenZFSOriginSnapshotConfiguration::CreateOpenZFSOriginSnapshotConfiguration(JsonView jsonValue) : 
    m_snapshotARNHasBeenSet(false),
    m_copyStrategy(OpenZFSCopyStrategy::NOT_SET),
    m_copyStrategyHasBeenSet(false)
{
  *this = jsonValue;
}

CreateOpenZFSOriginSnapshotConfiguration& CreateOpenZFSOriginSnapshotConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SnapshotARN"))
  {
    m_snapshotARN = jsonValue.GetString("SnapshotARN");

    m_snapshotARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CopyStrategy"))
  {
    m_copyStrategy = OpenZFSCopyStrategyMapper::GetOpenZFSCopyStrategyForName(jsonValue.GetString("CopyStrategy"));

    m_copyStrategyHasBeenSet = true;
  }

  return *this;
}

JsonValue CreateOpenZFSOriginSnapshotConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_snapshotARNHasBeenSet)
  {
   payload.WithString("SnapshotARN", m_snapshotARN);

  }

  if(m_copyStrategyHasBeenSet)
  {
   payload.WithString("CopyStrategy", OpenZFSCopyStrategyMapper::GetNameForOpenZFSCopyStrategy(m_copyStrategy));
  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
