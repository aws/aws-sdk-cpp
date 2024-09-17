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
    AWS_COSTOPTIMIZATIONHUB_API EbsVolumeConfiguration();
    AWS_COSTOPTIMIZATIONHUB_API EbsVolumeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API EbsVolumeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The disk storage of the Amazon Elastic Block Store volume.</p>
     */
    inline const StorageConfiguration& GetStorage() const{ return m_storage; }
    inline bool StorageHasBeenSet() const { return m_storageHasBeenSet; }
    inline void SetStorage(const StorageConfiguration& value) { m_storageHasBeenSet = true; m_storage = value; }
    inline void SetStorage(StorageConfiguration&& value) { m_storageHasBeenSet = true; m_storage = std::move(value); }
    inline EbsVolumeConfiguration& WithStorage(const StorageConfiguration& value) { SetStorage(value); return *this;}
    inline EbsVolumeConfiguration& WithStorage(StorageConfiguration&& value) { SetStorage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Elastic Block Store performance configuration.</p>
     */
    inline const BlockStoragePerformanceConfiguration& GetPerformance() const{ return m_performance; }
    inline bool PerformanceHasBeenSet() const { return m_performanceHasBeenSet; }
    inline void SetPerformance(const BlockStoragePerformanceConfiguration& value) { m_performanceHasBeenSet = true; m_performance = value; }
    inline void SetPerformance(BlockStoragePerformanceConfiguration&& value) { m_performanceHasBeenSet = true; m_performance = std::move(value); }
    inline EbsVolumeConfiguration& WithPerformance(const BlockStoragePerformanceConfiguration& value) { SetPerformance(value); return *this;}
    inline EbsVolumeConfiguration& WithPerformance(BlockStoragePerformanceConfiguration&& value) { SetPerformance(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Elastic Block Store attachment state.</p>
     */
    inline const Aws::String& GetAttachmentState() const{ return m_attachmentState; }
    inline bool AttachmentStateHasBeenSet() const { return m_attachmentStateHasBeenSet; }
    inline void SetAttachmentState(const Aws::String& value) { m_attachmentStateHasBeenSet = true; m_attachmentState = value; }
    inline void SetAttachmentState(Aws::String&& value) { m_attachmentStateHasBeenSet = true; m_attachmentState = std::move(value); }
    inline void SetAttachmentState(const char* value) { m_attachmentStateHasBeenSet = true; m_attachmentState.assign(value); }
    inline EbsVolumeConfiguration& WithAttachmentState(const Aws::String& value) { SetAttachmentState(value); return *this;}
    inline EbsVolumeConfiguration& WithAttachmentState(Aws::String&& value) { SetAttachmentState(std::move(value)); return *this;}
    inline EbsVolumeConfiguration& WithAttachmentState(const char* value) { SetAttachmentState(value); return *this;}
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
