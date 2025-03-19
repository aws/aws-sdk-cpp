/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dynamodb/model/ReplicaSettingsDescription.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DynamoDB
{
namespace Model
{
  class DescribeGlobalTableSettingsResult
  {
  public:
    AWS_DYNAMODB_API DescribeGlobalTableSettingsResult() = default;
    AWS_DYNAMODB_API DescribeGlobalTableSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API DescribeGlobalTableSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the global table.</p>
     */
    inline const Aws::String& GetGlobalTableName() const { return m_globalTableName; }
    template<typename GlobalTableNameT = Aws::String>
    void SetGlobalTableName(GlobalTableNameT&& value) { m_globalTableNameHasBeenSet = true; m_globalTableName = std::forward<GlobalTableNameT>(value); }
    template<typename GlobalTableNameT = Aws::String>
    DescribeGlobalTableSettingsResult& WithGlobalTableName(GlobalTableNameT&& value) { SetGlobalTableName(std::forward<GlobalTableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Region-specific settings for the global table.</p>
     */
    inline const Aws::Vector<ReplicaSettingsDescription>& GetReplicaSettings() const { return m_replicaSettings; }
    template<typename ReplicaSettingsT = Aws::Vector<ReplicaSettingsDescription>>
    void SetReplicaSettings(ReplicaSettingsT&& value) { m_replicaSettingsHasBeenSet = true; m_replicaSettings = std::forward<ReplicaSettingsT>(value); }
    template<typename ReplicaSettingsT = Aws::Vector<ReplicaSettingsDescription>>
    DescribeGlobalTableSettingsResult& WithReplicaSettings(ReplicaSettingsT&& value) { SetReplicaSettings(std::forward<ReplicaSettingsT>(value)); return *this;}
    template<typename ReplicaSettingsT = ReplicaSettingsDescription>
    DescribeGlobalTableSettingsResult& AddReplicaSettings(ReplicaSettingsT&& value) { m_replicaSettingsHasBeenSet = true; m_replicaSettings.emplace_back(std::forward<ReplicaSettingsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeGlobalTableSettingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_globalTableName;
    bool m_globalTableNameHasBeenSet = false;

    Aws::Vector<ReplicaSettingsDescription> m_replicaSettings;
    bool m_replicaSettingsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
