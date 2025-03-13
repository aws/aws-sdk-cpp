/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/keyspaces/model/Rs.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Keyspaces
{
namespace Model
{

  /**
   * <p>Represents the properties of a keyspace.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/keyspaces-2022-02-10/KeyspaceSummary">AWS
   * API Reference</a></p>
   */
  class KeyspaceSummary
  {
  public:
    AWS_KEYSPACES_API KeyspaceSummary() = default;
    AWS_KEYSPACES_API KeyspaceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API KeyspaceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the keyspace.</p>
     */
    inline const Aws::String& GetKeyspaceName() const { return m_keyspaceName; }
    inline bool KeyspaceNameHasBeenSet() const { return m_keyspaceNameHasBeenSet; }
    template<typename KeyspaceNameT = Aws::String>
    void SetKeyspaceName(KeyspaceNameT&& value) { m_keyspaceNameHasBeenSet = true; m_keyspaceName = std::forward<KeyspaceNameT>(value); }
    template<typename KeyspaceNameT = Aws::String>
    KeyspaceSummary& WithKeyspaceName(KeyspaceNameT&& value) { SetKeyspaceName(std::forward<KeyspaceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the keyspace in the format of an Amazon Resource
     * Name (ARN).</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    KeyspaceSummary& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> This property specifies if a keyspace is a single Region keyspace or a
     * multi-Region keyspace. The available values are <code>SINGLE_REGION</code> or
     * <code>MULTI_REGION</code>. </p>
     */
    inline Rs GetReplicationStrategy() const { return m_replicationStrategy; }
    inline bool ReplicationStrategyHasBeenSet() const { return m_replicationStrategyHasBeenSet; }
    inline void SetReplicationStrategy(Rs value) { m_replicationStrategyHasBeenSet = true; m_replicationStrategy = value; }
    inline KeyspaceSummary& WithReplicationStrategy(Rs value) { SetReplicationStrategy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> If the <code>replicationStrategy</code> of the keyspace is
     * <code>MULTI_REGION</code>, a list of replication Regions is returned. </p>
     */
    inline const Aws::Vector<Aws::String>& GetReplicationRegions() const { return m_replicationRegions; }
    inline bool ReplicationRegionsHasBeenSet() const { return m_replicationRegionsHasBeenSet; }
    template<typename ReplicationRegionsT = Aws::Vector<Aws::String>>
    void SetReplicationRegions(ReplicationRegionsT&& value) { m_replicationRegionsHasBeenSet = true; m_replicationRegions = std::forward<ReplicationRegionsT>(value); }
    template<typename ReplicationRegionsT = Aws::Vector<Aws::String>>
    KeyspaceSummary& WithReplicationRegions(ReplicationRegionsT&& value) { SetReplicationRegions(std::forward<ReplicationRegionsT>(value)); return *this;}
    template<typename ReplicationRegionsT = Aws::String>
    KeyspaceSummary& AddReplicationRegions(ReplicationRegionsT&& value) { m_replicationRegionsHasBeenSet = true; m_replicationRegions.emplace_back(std::forward<ReplicationRegionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_keyspaceName;
    bool m_keyspaceNameHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Rs m_replicationStrategy{Rs::NOT_SET};
    bool m_replicationStrategyHasBeenSet = false;

    Aws::Vector<Aws::String> m_replicationRegions;
    bool m_replicationRegionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
