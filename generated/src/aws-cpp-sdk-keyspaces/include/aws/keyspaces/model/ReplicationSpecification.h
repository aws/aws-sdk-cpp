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
   * <code>regionList</code> - the Amazon Web Services Regions where the keyspace is
   * replicated in.</p> </li> <li> <p> <code>replicationStrategy</code> - the
   * required value is <code>SINGLE_REGION</code> or <code>MULTI_REGION</code>.</p>
   * </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/keyspaces-2022-02-10/ReplicationSpecification">AWS
   * API Reference</a></p>
   */
  class ReplicationSpecification
  {
  public:
    AWS_KEYSPACES_API ReplicationSpecification() = default;
    AWS_KEYSPACES_API ReplicationSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API ReplicationSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The <code>replicationStrategy</code> of a keyspace, the required value is
     * <code>SINGLE_REGION</code> or <code>MULTI_REGION</code>. </p>
     */
    inline Rs GetReplicationStrategy() const { return m_replicationStrategy; }
    inline bool ReplicationStrategyHasBeenSet() const { return m_replicationStrategyHasBeenSet; }
    inline void SetReplicationStrategy(Rs value) { m_replicationStrategyHasBeenSet = true; m_replicationStrategy = value; }
    inline ReplicationSpecification& WithReplicationStrategy(Rs value) { SetReplicationStrategy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The <code>regionList</code> contains the Amazon Web Services Regions where
     * the keyspace is replicated in. </p>
     */
    inline const Aws::Vector<Aws::String>& GetRegionList() const { return m_regionList; }
    inline bool RegionListHasBeenSet() const { return m_regionListHasBeenSet; }
    template<typename RegionListT = Aws::Vector<Aws::String>>
    void SetRegionList(RegionListT&& value) { m_regionListHasBeenSet = true; m_regionList = std::forward<RegionListT>(value); }
    template<typename RegionListT = Aws::Vector<Aws::String>>
    ReplicationSpecification& WithRegionList(RegionListT&& value) { SetRegionList(std::forward<RegionListT>(value)); return *this;}
    template<typename RegionListT = Aws::String>
    ReplicationSpecification& AddRegionList(RegionListT&& value) { m_regionListHasBeenSet = true; m_regionList.emplace_back(std::forward<RegionListT>(value)); return *this; }
    ///@}
  private:

    Rs m_replicationStrategy{Rs::NOT_SET};
    bool m_replicationStrategyHasBeenSet = false;

    Aws::Vector<Aws::String> m_regionList;
    bool m_regionListHasBeenSet = false;
  };

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
