/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/model/MultiRegionKeyType.h>
#include <aws/kms/model/MultiRegionKey.h>
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
namespace KMS
{
namespace Model
{

  /**
   * <p>Describes the configuration of this multi-Region key. This field appears only
   * when the KMS key is a primary or replica of a multi-Region key.</p> <p>For more
   * information about any listed KMS key, use the <a>DescribeKey</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kms-2014-11-01/MultiRegionConfiguration">AWS
   * API Reference</a></p>
   */
  class MultiRegionConfiguration
  {
  public:
    AWS_KMS_API MultiRegionConfiguration() = default;
    AWS_KMS_API MultiRegionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KMS_API MultiRegionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether the KMS key is a <code>PRIMARY</code> or
     * <code>REPLICA</code> key.</p>
     */
    inline MultiRegionKeyType GetMultiRegionKeyType() const { return m_multiRegionKeyType; }
    inline bool MultiRegionKeyTypeHasBeenSet() const { return m_multiRegionKeyTypeHasBeenSet; }
    inline void SetMultiRegionKeyType(MultiRegionKeyType value) { m_multiRegionKeyTypeHasBeenSet = true; m_multiRegionKeyType = value; }
    inline MultiRegionConfiguration& WithMultiRegionKeyType(MultiRegionKeyType value) { SetMultiRegionKeyType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Displays the key ARN and Region of the primary key. This field includes the
     * current KMS key if it is the primary key.</p>
     */
    inline const MultiRegionKey& GetPrimaryKey() const { return m_primaryKey; }
    inline bool PrimaryKeyHasBeenSet() const { return m_primaryKeyHasBeenSet; }
    template<typename PrimaryKeyT = MultiRegionKey>
    void SetPrimaryKey(PrimaryKeyT&& value) { m_primaryKeyHasBeenSet = true; m_primaryKey = std::forward<PrimaryKeyT>(value); }
    template<typename PrimaryKeyT = MultiRegionKey>
    MultiRegionConfiguration& WithPrimaryKey(PrimaryKeyT&& value) { SetPrimaryKey(std::forward<PrimaryKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>displays the key ARNs and Regions of all replica keys. This field includes
     * the current KMS key if it is a replica key.</p>
     */
    inline const Aws::Vector<MultiRegionKey>& GetReplicaKeys() const { return m_replicaKeys; }
    inline bool ReplicaKeysHasBeenSet() const { return m_replicaKeysHasBeenSet; }
    template<typename ReplicaKeysT = Aws::Vector<MultiRegionKey>>
    void SetReplicaKeys(ReplicaKeysT&& value) { m_replicaKeysHasBeenSet = true; m_replicaKeys = std::forward<ReplicaKeysT>(value); }
    template<typename ReplicaKeysT = Aws::Vector<MultiRegionKey>>
    MultiRegionConfiguration& WithReplicaKeys(ReplicaKeysT&& value) { SetReplicaKeys(std::forward<ReplicaKeysT>(value)); return *this;}
    template<typename ReplicaKeysT = MultiRegionKey>
    MultiRegionConfiguration& AddReplicaKeys(ReplicaKeysT&& value) { m_replicaKeysHasBeenSet = true; m_replicaKeys.emplace_back(std::forward<ReplicaKeysT>(value)); return *this; }
    ///@}
  private:

    MultiRegionKeyType m_multiRegionKeyType{MultiRegionKeyType::NOT_SET};
    bool m_multiRegionKeyTypeHasBeenSet = false;

    MultiRegionKey m_primaryKey;
    bool m_primaryKeyHasBeenSet = false;

    Aws::Vector<MultiRegionKey> m_replicaKeys;
    bool m_replicaKeysHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
