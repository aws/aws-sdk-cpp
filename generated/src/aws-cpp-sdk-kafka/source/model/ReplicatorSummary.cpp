/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/ReplicatorSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Kafka
{
namespace Model
{

ReplicatorSummary::ReplicatorSummary() : 
    m_creationTimeHasBeenSet(false),
    m_currentVersionHasBeenSet(false),
    m_isReplicatorReference(false),
    m_isReplicatorReferenceHasBeenSet(false),
    m_kafkaClustersSummaryHasBeenSet(false),
    m_replicationInfoSummaryListHasBeenSet(false),
    m_replicatorArnHasBeenSet(false),
    m_replicatorNameHasBeenSet(false),
    m_replicatorResourceArnHasBeenSet(false),
    m_replicatorState(ReplicatorState::NOT_SET),
    m_replicatorStateHasBeenSet(false)
{
}

ReplicatorSummary::ReplicatorSummary(JsonView jsonValue) : 
    m_creationTimeHasBeenSet(false),
    m_currentVersionHasBeenSet(false),
    m_isReplicatorReference(false),
    m_isReplicatorReferenceHasBeenSet(false),
    m_kafkaClustersSummaryHasBeenSet(false),
    m_replicationInfoSummaryListHasBeenSet(false),
    m_replicatorArnHasBeenSet(false),
    m_replicatorNameHasBeenSet(false),
    m_replicatorResourceArnHasBeenSet(false),
    m_replicatorState(ReplicatorState::NOT_SET),
    m_replicatorStateHasBeenSet(false)
{
  *this = jsonValue;
}

ReplicatorSummary& ReplicatorSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("currentVersion"))
  {
    m_currentVersion = jsonValue.GetString("currentVersion");

    m_currentVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isReplicatorReference"))
  {
    m_isReplicatorReference = jsonValue.GetBool("isReplicatorReference");

    m_isReplicatorReferenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("kafkaClustersSummary"))
  {
    Aws::Utils::Array<JsonView> kafkaClustersSummaryJsonList = jsonValue.GetArray("kafkaClustersSummary");
    for(unsigned kafkaClustersSummaryIndex = 0; kafkaClustersSummaryIndex < kafkaClustersSummaryJsonList.GetLength(); ++kafkaClustersSummaryIndex)
    {
      m_kafkaClustersSummary.push_back(kafkaClustersSummaryJsonList[kafkaClustersSummaryIndex].AsObject());
    }
    m_kafkaClustersSummaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("replicationInfoSummaryList"))
  {
    Aws::Utils::Array<JsonView> replicationInfoSummaryListJsonList = jsonValue.GetArray("replicationInfoSummaryList");
    for(unsigned replicationInfoSummaryListIndex = 0; replicationInfoSummaryListIndex < replicationInfoSummaryListJsonList.GetLength(); ++replicationInfoSummaryListIndex)
    {
      m_replicationInfoSummaryList.push_back(replicationInfoSummaryListJsonList[replicationInfoSummaryListIndex].AsObject());
    }
    m_replicationInfoSummaryListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("replicatorArn"))
  {
    m_replicatorArn = jsonValue.GetString("replicatorArn");

    m_replicatorArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("replicatorName"))
  {
    m_replicatorName = jsonValue.GetString("replicatorName");

    m_replicatorNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("replicatorResourceArn"))
  {
    m_replicatorResourceArn = jsonValue.GetString("replicatorResourceArn");

    m_replicatorResourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("replicatorState"))
  {
    m_replicatorState = ReplicatorStateMapper::GetReplicatorStateForName(jsonValue.GetString("replicatorState"));

    m_replicatorStateHasBeenSet = true;
  }

  return *this;
}

JsonValue ReplicatorSummary::Jsonize() const
{
  JsonValue payload;

  if(m_creationTimeHasBeenSet)
  {
   payload.WithString("creationTime", m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_currentVersionHasBeenSet)
  {
   payload.WithString("currentVersion", m_currentVersion);

  }

  if(m_isReplicatorReferenceHasBeenSet)
  {
   payload.WithBool("isReplicatorReference", m_isReplicatorReference);

  }

  if(m_kafkaClustersSummaryHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> kafkaClustersSummaryJsonList(m_kafkaClustersSummary.size());
   for(unsigned kafkaClustersSummaryIndex = 0; kafkaClustersSummaryIndex < kafkaClustersSummaryJsonList.GetLength(); ++kafkaClustersSummaryIndex)
   {
     kafkaClustersSummaryJsonList[kafkaClustersSummaryIndex].AsObject(m_kafkaClustersSummary[kafkaClustersSummaryIndex].Jsonize());
   }
   payload.WithArray("kafkaClustersSummary", std::move(kafkaClustersSummaryJsonList));

  }

  if(m_replicationInfoSummaryListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> replicationInfoSummaryListJsonList(m_replicationInfoSummaryList.size());
   for(unsigned replicationInfoSummaryListIndex = 0; replicationInfoSummaryListIndex < replicationInfoSummaryListJsonList.GetLength(); ++replicationInfoSummaryListIndex)
   {
     replicationInfoSummaryListJsonList[replicationInfoSummaryListIndex].AsObject(m_replicationInfoSummaryList[replicationInfoSummaryListIndex].Jsonize());
   }
   payload.WithArray("replicationInfoSummaryList", std::move(replicationInfoSummaryListJsonList));

  }

  if(m_replicatorArnHasBeenSet)
  {
   payload.WithString("replicatorArn", m_replicatorArn);

  }

  if(m_replicatorNameHasBeenSet)
  {
   payload.WithString("replicatorName", m_replicatorName);

  }

  if(m_replicatorResourceArnHasBeenSet)
  {
   payload.WithString("replicatorResourceArn", m_replicatorResourceArn);

  }

  if(m_replicatorStateHasBeenSet)
  {
   payload.WithString("replicatorState", ReplicatorStateMapper::GetNameForReplicatorState(m_replicatorState));
  }

  return payload;
}

} // namespace Model
} // namespace Kafka
} // namespace Aws
