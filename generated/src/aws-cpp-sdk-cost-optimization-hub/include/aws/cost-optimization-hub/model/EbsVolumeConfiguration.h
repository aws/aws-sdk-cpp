/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cost-optimization-hub/model/BlockStoragePerformanceConfiguration.h>
#include <aws/cost-optimization-hub/model/StorageConfiguration.h>
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


    /**
     * <p>The Amazon Elastic Block Store attachment state.</p>
     */
    inline const Aws::String& GetAttachmentState() const{ return m_attachmentState; }

    /**
     * <p>The Amazon Elastic Block Store attachment state.</p>
     */
    inline bool AttachmentStateHasBeenSet() const { return m_attachmentStateHasBeenSet; }

    /**
     * <p>The Amazon Elastic Block Store attachment state.</p>
     */
    inline void SetAttachmentState(const Aws::String& value) { m_attachmentStateHasBeenSet = true; m_attachmentState = value; }

    /**
     * <p>The Amazon Elastic Block Store attachment state.</p>
     */
    inline void SetAttachmentState(Aws::String&& value) { m_attachmentStateHasBeenSet = true; m_attachmentState = std::move(value); }

    /**
     * <p>The Amazon Elastic Block Store attachment state.</p>
     */
    inline void SetAttachmentState(const char* value) { m_attachmentStateHasBeenSet = true; m_attachmentState.assign(value); }

    /**
     * <p>The Amazon Elastic Block Store attachment state.</p>
     */
    inline EbsVolumeConfiguration& WithAttachmentState(const Aws::String& value) { SetAttachmentState(value); return *this;}

    /**
     * <p>The Amazon Elastic Block Store attachment state.</p>
     */
    inline EbsVolumeConfiguration& WithAttachmentState(Aws::String&& value) { SetAttachmentState(std::move(value)); return *this;}

    /**
     * <p>The Amazon Elastic Block Store attachment state.</p>
     */
    inline EbsVolumeConfiguration& WithAttachmentState(const char* value) { SetAttachmentState(value); return *this;}


    /**
     * <p>The Amazon Elastic Block Store performance configuration.</p>
     */
    inline const BlockStoragePerformanceConfiguration& GetPerformance() const{ return m_performance; }

    /**
     * <p>The Amazon Elastic Block Store performance configuration.</p>
     */
    inline bool PerformanceHasBeenSet() const { return m_performanceHasBeenSet; }

    /**
     * <p>The Amazon Elastic Block Store performance configuration.</p>
     */
    inline void SetPerformance(const BlockStoragePerformanceConfiguration& value) { m_performanceHasBeenSet = true; m_performance = value; }

    /**
     * <p>The Amazon Elastic Block Store performance configuration.</p>
     */
    inline void SetPerformance(BlockStoragePerformanceConfiguration&& value) { m_performanceHasBeenSet = true; m_performance = std::move(value); }

    /**
     * <p>The Amazon Elastic Block Store performance configuration.</p>
     */
    inline EbsVolumeConfiguration& WithPerformance(const BlockStoragePerformanceConfiguration& value) { SetPerformance(value); return *this;}

    /**
     * <p>The Amazon Elastic Block Store performance configuration.</p>
     */
    inline EbsVolumeConfiguration& WithPerformance(BlockStoragePerformanceConfiguration&& value) { SetPerformance(std::move(value)); return *this;}


    /**
     * <p>The disk storage of the Amazon Elastic Block Store volume.</p>
     */
    inline const StorageConfiguration& GetStorage() const{ return m_storage; }

    /**
     * <p>The disk storage of the Amazon Elastic Block Store volume.</p>
     */
    inline bool StorageHasBeenSet() const { return m_storageHasBeenSet; }

    /**
     * <p>The disk storage of the Amazon Elastic Block Store volume.</p>
     */
    inline void SetStorage(const StorageConfiguration& value) { m_storageHasBeenSet = true; m_storage = value; }

    /**
     * <p>The disk storage of the Amazon Elastic Block Store volume.</p>
     */
    inline void SetStorage(StorageConfiguration&& value) { m_storageHasBeenSet = true; m_storage = std::move(value); }

    /**
     * <p>The disk storage of the Amazon Elastic Block Store volume.</p>
     */
    inline EbsVolumeConfiguration& WithStorage(const StorageConfiguration& value) { SetStorage(value); return *this;}

    /**
     * <p>The disk storage of the Amazon Elastic Block Store volume.</p>
     */
    inline EbsVolumeConfiguration& WithStorage(StorageConfiguration&& value) { SetStorage(std::move(value)); return *this;}

  private:

    Aws::String m_attachmentState;
    bool m_attachmentStateHasBeenSet = false;

    BlockStoragePerformanceConfiguration m_performance;
    bool m_performanceHasBeenSet = false;

    StorageConfiguration m_storage;
    bool m_storageHasBeenSet = false;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
