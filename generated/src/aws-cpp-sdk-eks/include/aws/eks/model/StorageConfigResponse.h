/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/BlockStorage.h>
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
namespace EKS
{
namespace Model
{

  /**
   * <p>Indicates the status of the request to update the block storage capability of
   * your EKS Auto Mode cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/StorageConfigResponse">AWS
   * API Reference</a></p>
   */
  class StorageConfigResponse
  {
  public:
    AWS_EKS_API StorageConfigResponse() = default;
    AWS_EKS_API StorageConfigResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API StorageConfigResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates the current configuration of the block storage capability on your
     * EKS Auto Mode cluster. For example, if the capability is enabled or
     * disabled.</p>
     */
    inline const BlockStorage& GetBlockStorage() const { return m_blockStorage; }
    inline bool BlockStorageHasBeenSet() const { return m_blockStorageHasBeenSet; }
    template<typename BlockStorageT = BlockStorage>
    void SetBlockStorage(BlockStorageT&& value) { m_blockStorageHasBeenSet = true; m_blockStorage = std::forward<BlockStorageT>(value); }
    template<typename BlockStorageT = BlockStorage>
    StorageConfigResponse& WithBlockStorage(BlockStorageT&& value) { SetBlockStorage(std::forward<BlockStorageT>(value)); return *this;}
    ///@}
  private:

    BlockStorage m_blockStorage;
    bool m_blockStorageHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
