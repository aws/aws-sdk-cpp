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
    AWS_COSTEXPLORER_API DiskResourceUtilization();
    AWS_COSTEXPLORER_API DiskResourceUtilization(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API DiskResourceUtilization& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The maximum number of read operations per second. </p>
     */
    inline const Aws::String& GetDiskReadOpsPerSecond() const{ return m_diskReadOpsPerSecond; }

    /**
     * <p>The maximum number of read operations per second. </p>
     */
    inline bool DiskReadOpsPerSecondHasBeenSet() const { return m_diskReadOpsPerSecondHasBeenSet; }

    /**
     * <p>The maximum number of read operations per second. </p>
     */
    inline void SetDiskReadOpsPerSecond(const Aws::String& value) { m_diskReadOpsPerSecondHasBeenSet = true; m_diskReadOpsPerSecond = value; }

    /**
     * <p>The maximum number of read operations per second. </p>
     */
    inline void SetDiskReadOpsPerSecond(Aws::String&& value) { m_diskReadOpsPerSecondHasBeenSet = true; m_diskReadOpsPerSecond = std::move(value); }

    /**
     * <p>The maximum number of read operations per second. </p>
     */
    inline void SetDiskReadOpsPerSecond(const char* value) { m_diskReadOpsPerSecondHasBeenSet = true; m_diskReadOpsPerSecond.assign(value); }

    /**
     * <p>The maximum number of read operations per second. </p>
     */
    inline DiskResourceUtilization& WithDiskReadOpsPerSecond(const Aws::String& value) { SetDiskReadOpsPerSecond(value); return *this;}

    /**
     * <p>The maximum number of read operations per second. </p>
     */
    inline DiskResourceUtilization& WithDiskReadOpsPerSecond(Aws::String&& value) { SetDiskReadOpsPerSecond(std::move(value)); return *this;}

    /**
     * <p>The maximum number of read operations per second. </p>
     */
    inline DiskResourceUtilization& WithDiskReadOpsPerSecond(const char* value) { SetDiskReadOpsPerSecond(value); return *this;}


    /**
     * <p>The maximum number of write operations per second. </p>
     */
    inline const Aws::String& GetDiskWriteOpsPerSecond() const{ return m_diskWriteOpsPerSecond; }

    /**
     * <p>The maximum number of write operations per second. </p>
     */
    inline bool DiskWriteOpsPerSecondHasBeenSet() const { return m_diskWriteOpsPerSecondHasBeenSet; }

    /**
     * <p>The maximum number of write operations per second. </p>
     */
    inline void SetDiskWriteOpsPerSecond(const Aws::String& value) { m_diskWriteOpsPerSecondHasBeenSet = true; m_diskWriteOpsPerSecond = value; }

    /**
     * <p>The maximum number of write operations per second. </p>
     */
    inline void SetDiskWriteOpsPerSecond(Aws::String&& value) { m_diskWriteOpsPerSecondHasBeenSet = true; m_diskWriteOpsPerSecond = std::move(value); }

    /**
     * <p>The maximum number of write operations per second. </p>
     */
    inline void SetDiskWriteOpsPerSecond(const char* value) { m_diskWriteOpsPerSecondHasBeenSet = true; m_diskWriteOpsPerSecond.assign(value); }

    /**
     * <p>The maximum number of write operations per second. </p>
     */
    inline DiskResourceUtilization& WithDiskWriteOpsPerSecond(const Aws::String& value) { SetDiskWriteOpsPerSecond(value); return *this;}

    /**
     * <p>The maximum number of write operations per second. </p>
     */
    inline DiskResourceUtilization& WithDiskWriteOpsPerSecond(Aws::String&& value) { SetDiskWriteOpsPerSecond(std::move(value)); return *this;}

    /**
     * <p>The maximum number of write operations per second. </p>
     */
    inline DiskResourceUtilization& WithDiskWriteOpsPerSecond(const char* value) { SetDiskWriteOpsPerSecond(value); return *this;}


    /**
     * <p>The maximum read throughput operations per second. </p>
     */
    inline const Aws::String& GetDiskReadBytesPerSecond() const{ return m_diskReadBytesPerSecond; }

    /**
     * <p>The maximum read throughput operations per second. </p>
     */
    inline bool DiskReadBytesPerSecondHasBeenSet() const { return m_diskReadBytesPerSecondHasBeenSet; }

    /**
     * <p>The maximum read throughput operations per second. </p>
     */
    inline void SetDiskReadBytesPerSecond(const Aws::String& value) { m_diskReadBytesPerSecondHasBeenSet = true; m_diskReadBytesPerSecond = value; }

    /**
     * <p>The maximum read throughput operations per second. </p>
     */
    inline void SetDiskReadBytesPerSecond(Aws::String&& value) { m_diskReadBytesPerSecondHasBeenSet = true; m_diskReadBytesPerSecond = std::move(value); }

    /**
     * <p>The maximum read throughput operations per second. </p>
     */
    inline void SetDiskReadBytesPerSecond(const char* value) { m_diskReadBytesPerSecondHasBeenSet = true; m_diskReadBytesPerSecond.assign(value); }

    /**
     * <p>The maximum read throughput operations per second. </p>
     */
    inline DiskResourceUtilization& WithDiskReadBytesPerSecond(const Aws::String& value) { SetDiskReadBytesPerSecond(value); return *this;}

    /**
     * <p>The maximum read throughput operations per second. </p>
     */
    inline DiskResourceUtilization& WithDiskReadBytesPerSecond(Aws::String&& value) { SetDiskReadBytesPerSecond(std::move(value)); return *this;}

    /**
     * <p>The maximum read throughput operations per second. </p>
     */
    inline DiskResourceUtilization& WithDiskReadBytesPerSecond(const char* value) { SetDiskReadBytesPerSecond(value); return *this;}


    /**
     * <p>The maximum write throughput operations per second. </p>
     */
    inline const Aws::String& GetDiskWriteBytesPerSecond() const{ return m_diskWriteBytesPerSecond; }

    /**
     * <p>The maximum write throughput operations per second. </p>
     */
    inline bool DiskWriteBytesPerSecondHasBeenSet() const { return m_diskWriteBytesPerSecondHasBeenSet; }

    /**
     * <p>The maximum write throughput operations per second. </p>
     */
    inline void SetDiskWriteBytesPerSecond(const Aws::String& value) { m_diskWriteBytesPerSecondHasBeenSet = true; m_diskWriteBytesPerSecond = value; }

    /**
     * <p>The maximum write throughput operations per second. </p>
     */
    inline void SetDiskWriteBytesPerSecond(Aws::String&& value) { m_diskWriteBytesPerSecondHasBeenSet = true; m_diskWriteBytesPerSecond = std::move(value); }

    /**
     * <p>The maximum write throughput operations per second. </p>
     */
    inline void SetDiskWriteBytesPerSecond(const char* value) { m_diskWriteBytesPerSecondHasBeenSet = true; m_diskWriteBytesPerSecond.assign(value); }

    /**
     * <p>The maximum write throughput operations per second. </p>
     */
    inline DiskResourceUtilization& WithDiskWriteBytesPerSecond(const Aws::String& value) { SetDiskWriteBytesPerSecond(value); return *this;}

    /**
     * <p>The maximum write throughput operations per second. </p>
     */
    inline DiskResourceUtilization& WithDiskWriteBytesPerSecond(Aws::String&& value) { SetDiskWriteBytesPerSecond(std::move(value)); return *this;}

    /**
     * <p>The maximum write throughput operations per second. </p>
     */
    inline DiskResourceUtilization& WithDiskWriteBytesPerSecond(const char* value) { SetDiskWriteBytesPerSecond(value); return *this;}

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
