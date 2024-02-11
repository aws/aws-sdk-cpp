/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
#include <aws/keyspaces/model/Rs.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p> The replication specification of the keyspace includes:</p> <ul> <li> <p>
   * <code>regionList</code> - up to six Amazon Web Services Regions where the
   * keyspace is replicated in.</p> </li> <li> <p> <code>replicationStrategy</code> -
   * the required value is <code>SINGLE_REGION</code> or
   * <code>MULTI_REGION</code>.</p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/keyspaces-2022-02-10/ReplicationSpecification">AWS
   * API Reference</a></p>
   */
  class ReplicationSpecification
  {
  public:
    AWS_KEYSPACES_API ReplicationSpecification();
    AWS_KEYSPACES_API ReplicationSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API ReplicationSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The <code>replicationStrategy</code> of a keyspace, the required value is
     * <code>SINGLE_REGION</code> or <code>MULTI_REGION</code>. </p>
     */
    inline const Rs& GetReplicationStrategy() const{ return m_replicationStrategy; }

    /**
     * <p> The <code>replicationStrategy</code> of a keyspace, the required value is
     * <code>SINGLE_REGION</code> or <code>MULTI_REGION</code>. </p>
     */
    inline bool ReplicationStrategyHasBeenSet() const { return m_replicationStrategyHasBeenSet; }

    /**
     * <p> The <code>replicationStrategy</code> of a keyspace, the required value is
     * <code>SINGLE_REGION</code> or <code>MULTI_REGION</code>. </p>
     */
    inline void SetReplicationStrategy(const Rs& value) { m_replicationStrategyHasBeenSet = true; m_replicationStrategy = value; }

    /**
     * <p> The <code>replicationStrategy</code> of a keyspace, the required value is
     * <code>SINGLE_REGION</code> or <code>MULTI_REGION</code>. </p>
     */
    inline void SetReplicationStrategy(Rs&& value) { m_replicationStrategyHasBeenSet = true; m_replicationStrategy = std::move(value); }

    /**
     * <p> The <code>replicationStrategy</code> of a keyspace, the required value is
     * <code>SINGLE_REGION</code> or <code>MULTI_REGION</code>. </p>
     */
    inline ReplicationSpecification& WithReplicationStrategy(const Rs& value) { SetReplicationStrategy(value); return *this;}

    /**
     * <p> The <code>replicationStrategy</code> of a keyspace, the required value is
     * <code>SINGLE_REGION</code> or <code>MULTI_REGION</code>. </p>
     */
    inline ReplicationSpecification& WithReplicationStrategy(Rs&& value) { SetReplicationStrategy(std::move(value)); return *this;}


    /**
     * <p> The <code>regionList</code> can contain up to six Amazon Web Services
     * Regions where the keyspace is replicated in. </p>
     */
    inline const Aws::Vector<Aws::String>& GetRegionList() const{ return m_regionList; }

    /**
     * <p> The <code>regionList</code> can contain up to six Amazon Web Services
     * Regions where the keyspace is replicated in. </p>
     */
    inline bool RegionListHasBeenSet() const { return m_regionListHasBeenSet; }

    /**
     * <p> The <code>regionList</code> can contain up to six Amazon Web Services
     * Regions where the keyspace is replicated in. </p>
     */
    inline void SetRegionList(const Aws::Vector<Aws::String>& value) { m_regionListHasBeenSet = true; m_regionList = value; }

    /**
     * <p> The <code>regionList</code> can contain up to six Amazon Web Services
     * Regions where the keyspace is replicated in. </p>
     */
    inline void SetRegionList(Aws::Vector<Aws::String>&& value) { m_regionListHasBeenSet = true; m_regionList = std::move(value); }

    /**
     * <p> The <code>regionList</code> can contain up to six Amazon Web Services
     * Regions where the keyspace is replicated in. </p>
     */
    inline ReplicationSpecification& WithRegionList(const Aws::Vector<Aws::String>& value) { SetRegionList(value); return *this;}

    /**
     * <p> The <code>regionList</code> can contain up to six Amazon Web Services
     * Regions where the keyspace is replicated in. </p>
     */
    inline ReplicationSpecification& WithRegionList(Aws::Vector<Aws::String>&& value) { SetRegionList(std::move(value)); return *this;}

    /**
     * <p> The <code>regionList</code> can contain up to six Amazon Web Services
     * Regions where the keyspace is replicated in. </p>
     */
    inline ReplicationSpecification& AddRegionList(const Aws::String& value) { m_regionListHasBeenSet = true; m_regionList.push_back(value); return *this; }

    /**
     * <p> The <code>regionList</code> can contain up to six Amazon Web Services
     * Regions where the keyspace is replicated in. </p>
     */
    inline ReplicationSpecification& AddRegionList(Aws::String&& value) { m_regionListHasBeenSet = true; m_regionList.push_back(std::move(value)); return *this; }

    /**
     * <p> The <code>regionList</code> can contain up to six Amazon Web Services
     * Regions where the keyspace is replicated in. </p>
     */
    inline ReplicationSpecification& AddRegionList(const char* value) { m_regionListHasBeenSet = true; m_regionList.push_back(value); return *this; }

  private:

    Rs m_replicationStrategy;
    bool m_replicationStrategyHasBeenSet = false;

    Aws::Vector<Aws::String> m_regionList;
    bool m_regionListHasBeenSet = false;
  };

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
