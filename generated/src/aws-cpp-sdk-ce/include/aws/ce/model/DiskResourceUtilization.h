/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
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
namespace CostExplorer
{
namespace Model
{

  /**
   * <p>The field that contains a list of disk (local storage) metrics that are
   * associated with the current instance. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/DiskResourceUtilization">AWS
   * API Reference</a></p>
   */
  class DiskResourceUtilization
  {
  public:
    AWS_COSTEXPLORER_API DiskResourceUtilization() = default;
    AWS_COSTEXPLORER_API DiskResourceUtilization(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API DiskResourceUtilization& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The maximum number of read operations per second. </p>
     */
    inline const Aws::String& GetDiskReadOpsPerSecond() const { return m_diskReadOpsPerSecond; }
    inline bool DiskReadOpsPerSecondHasBeenSet() const { return m_diskReadOpsPerSecondHasBeenSet; }
    template<typename DiskReadOpsPerSecondT = Aws::String>
    void SetDiskReadOpsPerSecond(DiskReadOpsPerSecondT&& value) { m_diskReadOpsPerSecondHasBeenSet = true; m_diskReadOpsPerSecond = std::forward<DiskReadOpsPerSecondT>(value); }
    template<typename DiskReadOpsPerSecondT = Aws::String>
    DiskResourceUtilization& WithDiskReadOpsPerSecond(DiskReadOpsPerSecondT&& value) { SetDiskReadOpsPerSecond(std::forward<DiskReadOpsPerSecondT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of write operations per second. </p>
     */
    inline const Aws::String& GetDiskWriteOpsPerSecond() const { return m_diskWriteOpsPerSecond; }
    inline bool DiskWriteOpsPerSecondHasBeenSet() const { return m_diskWriteOpsPerSecondHasBeenSet; }
    template<typename DiskWriteOpsPerSecondT = Aws::String>
    void SetDiskWriteOpsPerSecond(DiskWriteOpsPerSecondT&& value) { m_diskWriteOpsPerSecondHasBeenSet = true; m_diskWriteOpsPerSecond = std::forward<DiskWriteOpsPerSecondT>(value); }
    template<typename DiskWriteOpsPerSecondT = Aws::String>
    DiskResourceUtilization& WithDiskWriteOpsPerSecond(DiskWriteOpsPerSecondT&& value) { SetDiskWriteOpsPerSecond(std::forward<DiskWriteOpsPerSecondT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum read throughput operations per second. </p>
     */
    inline const Aws::String& GetDiskReadBytesPerSecond() const { return m_diskReadBytesPerSecond; }
    inline bool DiskReadBytesPerSecondHasBeenSet() const { return m_diskReadBytesPerSecondHasBeenSet; }
    template<typename DiskReadBytesPerSecondT = Aws::String>
    void SetDiskReadBytesPerSecond(DiskReadBytesPerSecondT&& value) { m_diskReadBytesPerSecondHasBeenSet = true; m_diskReadBytesPerSecond = std::forward<DiskReadBytesPerSecondT>(value); }
    template<typename DiskReadBytesPerSecondT = Aws::String>
    DiskResourceUtilization& WithDiskReadBytesPerSecond(DiskReadBytesPerSecondT&& value) { SetDiskReadBytesPerSecond(std::forward<DiskReadBytesPerSecondT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum write throughput operations per second. </p>
     */
    inline const Aws::String& GetDiskWriteBytesPerSecond() const { return m_diskWriteBytesPerSecond; }
    inline bool DiskWriteBytesPerSecondHasBeenSet() const { return m_diskWriteBytesPerSecondHasBeenSet; }
    template<typename DiskWriteBytesPerSecondT = Aws::String>
    void SetDiskWriteBytesPerSecond(DiskWriteBytesPerSecondT&& value) { m_diskWriteBytesPerSecondHasBeenSet = true; m_diskWriteBytesPerSecond = std::forward<DiskWriteBytesPerSecondT>(value); }
    template<typename DiskWriteBytesPerSecondT = Aws::String>
    DiskResourceUtilization& WithDiskWriteBytesPerSecond(DiskWriteBytesPerSecondT&& value) { SetDiskWriteBytesPerSecond(std::forward<DiskWriteBytesPerSecondT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_diskReadOpsPerSecond;
    bool m_diskReadOpsPerSecondHasBeenSet = false;

    Aws::String m_diskWriteOpsPerSecond;
    bool m_diskWriteOpsPerSecondHasBeenSet = false;

    Aws::String m_diskReadBytesPerSecond;
    bool m_diskReadBytesPerSecondHasBeenSet = false;

    Aws::String m_diskWriteBytesPerSecond;
    bool m_diskWriteBytesPerSecondHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
