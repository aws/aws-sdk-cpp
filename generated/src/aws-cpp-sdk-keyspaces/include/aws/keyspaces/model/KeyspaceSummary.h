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
    AWS_KEYSPACES_API KeyspaceSummary();
    AWS_KEYSPACES_API KeyspaceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API KeyspaceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the keyspace.</p>
     */
    inline const Aws::String& GetKeyspaceName() const{ return m_keyspaceName; }

    /**
     * <p>The name of the keyspace.</p>
     */
    inline bool KeyspaceNameHasBeenSet() const { return m_keyspaceNameHasBeenSet; }

    /**
     * <p>The name of the keyspace.</p>
     */
    inline void SetKeyspaceName(const Aws::String& value) { m_keyspaceNameHasBeenSet = true; m_keyspaceName = value; }

    /**
     * <p>The name of the keyspace.</p>
     */
    inline void SetKeyspaceName(Aws::String&& value) { m_keyspaceNameHasBeenSet = true; m_keyspaceName = std::move(value); }

    /**
     * <p>The name of the keyspace.</p>
     */
    inline void SetKeyspaceName(const char* value) { m_keyspaceNameHasBeenSet = true; m_keyspaceName.assign(value); }

    /**
     * <p>The name of the keyspace.</p>
     */
    inline KeyspaceSummary& WithKeyspaceName(const Aws::String& value) { SetKeyspaceName(value); return *this;}

    /**
     * <p>The name of the keyspace.</p>
     */
    inline KeyspaceSummary& WithKeyspaceName(Aws::String&& value) { SetKeyspaceName(std::move(value)); return *this;}

    /**
     * <p>The name of the keyspace.</p>
     */
    inline KeyspaceSummary& WithKeyspaceName(const char* value) { SetKeyspaceName(value); return *this;}


    /**
     * <p>The unique identifier of the keyspace in the format of an Amazon Resource
     * Name (ARN).</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The unique identifier of the keyspace in the format of an Amazon Resource
     * Name (ARN).</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The unique identifier of the keyspace in the format of an Amazon Resource
     * Name (ARN).</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The unique identifier of the keyspace in the format of an Amazon Resource
     * Name (ARN).</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The unique identifier of the keyspace in the format of an Amazon Resource
     * Name (ARN).</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The unique identifier of the keyspace in the format of an Amazon Resource
     * Name (ARN).</p>
     */
    inline KeyspaceSummary& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The unique identifier of the keyspace in the format of an Amazon Resource
     * Name (ARN).</p>
     */
    inline KeyspaceSummary& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the keyspace in the format of an Amazon Resource
     * Name (ARN).</p>
     */
    inline KeyspaceSummary& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p> This property specifies if a keyspace is a single Region keyspace or a
     * multi-Region keyspace. The available values are <code>SINGLE_REGION</code> or
     * <code>MULTI_REGION</code>. </p>
     */
    inline const Rs& GetReplicationStrategy() const{ return m_replicationStrategy; }

    /**
     * <p> This property specifies if a keyspace is a single Region keyspace or a
     * multi-Region keyspace. The available values are <code>SINGLE_REGION</code> or
     * <code>MULTI_REGION</code>. </p>
     */
    inline bool ReplicationStrategyHasBeenSet() const { return m_replicationStrategyHasBeenSet; }

    /**
     * <p> This property specifies if a keyspace is a single Region keyspace or a
     * multi-Region keyspace. The available values are <code>SINGLE_REGION</code> or
     * <code>MULTI_REGION</code>. </p>
     */
    inline void SetReplicationStrategy(const Rs& value) { m_replicationStrategyHasBeenSet = true; m_replicationStrategy = value; }

    /**
     * <p> This property specifies if a keyspace is a single Region keyspace or a
     * multi-Region keyspace. The available values are <code>SINGLE_REGION</code> or
     * <code>MULTI_REGION</code>. </p>
     */
    inline void SetReplicationStrategy(Rs&& value) { m_replicationStrategyHasBeenSet = true; m_replicationStrategy = std::move(value); }

    /**
     * <p> This property specifies if a keyspace is a single Region keyspace or a
     * multi-Region keyspace. The available values are <code>SINGLE_REGION</code> or
     * <code>MULTI_REGION</code>. </p>
     */
    inline KeyspaceSummary& WithReplicationStrategy(const Rs& value) { SetReplicationStrategy(value); return *this;}

    /**
     * <p> This property specifies if a keyspace is a single Region keyspace or a
     * multi-Region keyspace. The available values are <code>SINGLE_REGION</code> or
     * <code>MULTI_REGION</code>. </p>
     */
    inline KeyspaceSummary& WithReplicationStrategy(Rs&& value) { SetReplicationStrategy(std::move(value)); return *this;}


    /**
     * <p> If the <code>replicationStrategy</code> of the keyspace is
     * <code>MULTI_REGION</code>, a list of replication Regions is returned. </p>
     */
    inline const Aws::Vector<Aws::String>& GetReplicationRegions() const{ return m_replicationRegions; }

    /**
     * <p> If the <code>replicationStrategy</code> of the keyspace is
     * <code>MULTI_REGION</code>, a list of replication Regions is returned. </p>
     */
    inline bool ReplicationRegionsHasBeenSet() const { return m_replicationRegionsHasBeenSet; }

    /**
     * <p> If the <code>replicationStrategy</code> of the keyspace is
     * <code>MULTI_REGION</code>, a list of replication Regions is returned. </p>
     */
    inline void SetReplicationRegions(const Aws::Vector<Aws::String>& value) { m_replicationRegionsHasBeenSet = true; m_replicationRegions = value; }

    /**
     * <p> If the <code>replicationStrategy</code> of the keyspace is
     * <code>MULTI_REGION</code>, a list of replication Regions is returned. </p>
     */
    inline void SetReplicationRegions(Aws::Vector<Aws::String>&& value) { m_replicationRegionsHasBeenSet = true; m_replicationRegions = std::move(value); }

    /**
     * <p> If the <code>replicationStrategy</code> of the keyspace is
     * <code>MULTI_REGION</code>, a list of replication Regions is returned. </p>
     */
    inline KeyspaceSummary& WithReplicationRegions(const Aws::Vector<Aws::String>& value) { SetReplicationRegions(value); return *this;}

    /**
     * <p> If the <code>replicationStrategy</code> of the keyspace is
     * <code>MULTI_REGION</code>, a list of replication Regions is returned. </p>
     */
    inline KeyspaceSummary& WithReplicationRegions(Aws::Vector<Aws::String>&& value) { SetReplicationRegions(std::move(value)); return *this;}

    /**
     * <p> If the <code>replicationStrategy</code> of the keyspace is
     * <code>MULTI_REGION</code>, a list of replication Regions is returned. </p>
     */
    inline KeyspaceSummary& AddReplicationRegions(const Aws::String& value) { m_replicationRegionsHasBeenSet = true; m_replicationRegions.push_back(value); return *this; }

    /**
     * <p> If the <code>replicationStrategy</code> of the keyspace is
     * <code>MULTI_REGION</code>, a list of replication Regions is returned. </p>
     */
    inline KeyspaceSummary& AddReplicationRegions(Aws::String&& value) { m_replicationRegionsHasBeenSet = true; m_replicationRegions.push_back(std::move(value)); return *this; }

    /**
     * <p> If the <code>replicationStrategy</code> of the keyspace is
     * <code>MULTI_REGION</code>, a list of replication Regions is returned. </p>
     */
    inline KeyspaceSummary& AddReplicationRegions(const char* value) { m_replicationRegionsHasBeenSet = true; m_replicationRegions.push_back(value); return *this; }

  private:

    Aws::String m_keyspaceName;
    bool m_keyspaceNameHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Rs m_replicationStrategy;
    bool m_replicationStrategyHasBeenSet = false;

    Aws::Vector<Aws::String> m_replicationRegions;
    bool m_replicationRegionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
