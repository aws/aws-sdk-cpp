/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
#include <aws/cost-optimization-hub/model/StorageConfiguration.h>
#include <aws/cost-optimization-hub/model/BlockStoragePerformanceConfiguration.h>
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
namespace CostOptimizationHub
{
namespace Model
{

  /**
   * <p>The Amazon Elastic Block Store volume configuration used for
   * recommendations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cost-optimization-hub-2022-07-26/EbsVolumeConfiguration">AWS
   * API Reference</a></p>
   */
  class EbsVolumeConfiguration
  {
  public:
    AWS_COSTOPTIMIZATIONHUB_API EbsVolumeConfiguration() = default;
    AWS_COSTOPTIMIZATIONHUB_API EbsVolumeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API EbsVolumeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The disk storage of the Amazon Elastic Block Store volume.</p>
     */
    inline const StorageConfiguration& GetStorage() const { return m_storage; }
    inline bool StorageHasBeenSet() const { return m_storageHasBeenSet; }
    template<typename StorageT = StorageConfiguration>
    void SetStorage(StorageT&& value) { m_storageHasBeenSet = true; m_storage = std::forward<StorageT>(value); }
    template<typename StorageT = StorageConfiguration>
    EbsVolumeConfiguration& WithStorage(StorageT&& value) { SetStorage(std::forward<StorageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Elastic Block Store performance configuration.</p>
     */
    inline const BlockStoragePerformanceConfiguration& GetPerformance() const { return m_performance; }
    inline bool PerformanceHasBeenSet() const { return m_performanceHasBeenSet; }
    template<typename PerformanceT = BlockStoragePerformanceConfiguration>
    void SetPerformance(PerformanceT&& value) { m_performanceHasBeenSet = true; m_performance = std::forward<PerformanceT>(value); }
    template<typename PerformanceT = BlockStoragePerformanceConfiguration>
    EbsVolumeConfiguration& WithPerformance(PerformanceT&& value) { SetPerformance(std::forward<PerformanceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Elastic Block Store attachment state.</p>
     */
    inline const Aws::String& GetAttachmentState() const { return m_attachmentState; }
    inline bool AttachmentStateHasBeenSet() const { return m_attachmentStateHasBeenSet; }
    template<typename AttachmentStateT = Aws::String>
    void SetAttachmentState(AttachmentStateT&& value) { m_attachmentStateHasBeenSet = true; m_attachmentState = std::forward<AttachmentStateT>(value); }
    template<typename AttachmentStateT = Aws::String>
    EbsVolumeConfiguration& WithAttachmentState(AttachmentStateT&& value) { SetAttachmentState(std::forward<AttachmentStateT>(value)); return *this;}
    ///@}
  private:

    StorageConfiguration m_storage;
    bool m_storageHasBeenSet = false;

    BlockStoragePerformanceConfiguration m_performance;
    bool m_performanceHasBeenSet = false;

    Aws::String m_attachmentState;
    bool m_attachmentStateHasBeenSet = false;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
