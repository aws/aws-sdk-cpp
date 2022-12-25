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
   * <p>The EBS field that contains a list of EBS metrics that are associated with
   * the current instance. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/EBSResourceUtilization">AWS
   * API Reference</a></p>
   */
  class EBSResourceUtilization
  {
  public:
    AWS_COSTEXPLORER_API EBSResourceUtilization();
    AWS_COSTEXPLORER_API EBSResourceUtilization(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API EBSResourceUtilization& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The maximum number of read operations per second. </p>
     */
    inline const Aws::String& GetEbsReadOpsPerSecond() const{ return m_ebsReadOpsPerSecond; }

    /**
     * <p>The maximum number of read operations per second. </p>
     */
    inline bool EbsReadOpsPerSecondHasBeenSet() const { return m_ebsReadOpsPerSecondHasBeenSet; }

    /**
     * <p>The maximum number of read operations per second. </p>
     */
    inline void SetEbsReadOpsPerSecond(const Aws::String& value) { m_ebsReadOpsPerSecondHasBeenSet = true; m_ebsReadOpsPerSecond = value; }

    /**
     * <p>The maximum number of read operations per second. </p>
     */
    inline void SetEbsReadOpsPerSecond(Aws::String&& value) { m_ebsReadOpsPerSecondHasBeenSet = true; m_ebsReadOpsPerSecond = std::move(value); }

    /**
     * <p>The maximum number of read operations per second. </p>
     */
    inline void SetEbsReadOpsPerSecond(const char* value) { m_ebsReadOpsPerSecondHasBeenSet = true; m_ebsReadOpsPerSecond.assign(value); }

    /**
     * <p>The maximum number of read operations per second. </p>
     */
    inline EBSResourceUtilization& WithEbsReadOpsPerSecond(const Aws::String& value) { SetEbsReadOpsPerSecond(value); return *this;}

    /**
     * <p>The maximum number of read operations per second. </p>
     */
    inline EBSResourceUtilization& WithEbsReadOpsPerSecond(Aws::String&& value) { SetEbsReadOpsPerSecond(std::move(value)); return *this;}

    /**
     * <p>The maximum number of read operations per second. </p>
     */
    inline EBSResourceUtilization& WithEbsReadOpsPerSecond(const char* value) { SetEbsReadOpsPerSecond(value); return *this;}


    /**
     * <p>The maximum number of write operations per second. </p>
     */
    inline const Aws::String& GetEbsWriteOpsPerSecond() const{ return m_ebsWriteOpsPerSecond; }

    /**
     * <p>The maximum number of write operations per second. </p>
     */
    inline bool EbsWriteOpsPerSecondHasBeenSet() const { return m_ebsWriteOpsPerSecondHasBeenSet; }

    /**
     * <p>The maximum number of write operations per second. </p>
     */
    inline void SetEbsWriteOpsPerSecond(const Aws::String& value) { m_ebsWriteOpsPerSecondHasBeenSet = true; m_ebsWriteOpsPerSecond = value; }

    /**
     * <p>The maximum number of write operations per second. </p>
     */
    inline void SetEbsWriteOpsPerSecond(Aws::String&& value) { m_ebsWriteOpsPerSecondHasBeenSet = true; m_ebsWriteOpsPerSecond = std::move(value); }

    /**
     * <p>The maximum number of write operations per second. </p>
     */
    inline void SetEbsWriteOpsPerSecond(const char* value) { m_ebsWriteOpsPerSecondHasBeenSet = true; m_ebsWriteOpsPerSecond.assign(value); }

    /**
     * <p>The maximum number of write operations per second. </p>
     */
    inline EBSResourceUtilization& WithEbsWriteOpsPerSecond(const Aws::String& value) { SetEbsWriteOpsPerSecond(value); return *this;}

    /**
     * <p>The maximum number of write operations per second. </p>
     */
    inline EBSResourceUtilization& WithEbsWriteOpsPerSecond(Aws::String&& value) { SetEbsWriteOpsPerSecond(std::move(value)); return *this;}

    /**
     * <p>The maximum number of write operations per second. </p>
     */
    inline EBSResourceUtilization& WithEbsWriteOpsPerSecond(const char* value) { SetEbsWriteOpsPerSecond(value); return *this;}


    /**
     * <p>The maximum size of read operations per second </p>
     */
    inline const Aws::String& GetEbsReadBytesPerSecond() const{ return m_ebsReadBytesPerSecond; }

    /**
     * <p>The maximum size of read operations per second </p>
     */
    inline bool EbsReadBytesPerSecondHasBeenSet() const { return m_ebsReadBytesPerSecondHasBeenSet; }

    /**
     * <p>The maximum size of read operations per second </p>
     */
    inline void SetEbsReadBytesPerSecond(const Aws::String& value) { m_ebsReadBytesPerSecondHasBeenSet = true; m_ebsReadBytesPerSecond = value; }

    /**
     * <p>The maximum size of read operations per second </p>
     */
    inline void SetEbsReadBytesPerSecond(Aws::String&& value) { m_ebsReadBytesPerSecondHasBeenSet = true; m_ebsReadBytesPerSecond = std::move(value); }

    /**
     * <p>The maximum size of read operations per second </p>
     */
    inline void SetEbsReadBytesPerSecond(const char* value) { m_ebsReadBytesPerSecondHasBeenSet = true; m_ebsReadBytesPerSecond.assign(value); }

    /**
     * <p>The maximum size of read operations per second </p>
     */
    inline EBSResourceUtilization& WithEbsReadBytesPerSecond(const Aws::String& value) { SetEbsReadBytesPerSecond(value); return *this;}

    /**
     * <p>The maximum size of read operations per second </p>
     */
    inline EBSResourceUtilization& WithEbsReadBytesPerSecond(Aws::String&& value) { SetEbsReadBytesPerSecond(std::move(value)); return *this;}

    /**
     * <p>The maximum size of read operations per second </p>
     */
    inline EBSResourceUtilization& WithEbsReadBytesPerSecond(const char* value) { SetEbsReadBytesPerSecond(value); return *this;}


    /**
     * <p>The maximum size of write operations per second. </p>
     */
    inline const Aws::String& GetEbsWriteBytesPerSecond() const{ return m_ebsWriteBytesPerSecond; }

    /**
     * <p>The maximum size of write operations per second. </p>
     */
    inline bool EbsWriteBytesPerSecondHasBeenSet() const { return m_ebsWriteBytesPerSecondHasBeenSet; }

    /**
     * <p>The maximum size of write operations per second. </p>
     */
    inline void SetEbsWriteBytesPerSecond(const Aws::String& value) { m_ebsWriteBytesPerSecondHasBeenSet = true; m_ebsWriteBytesPerSecond = value; }

    /**
     * <p>The maximum size of write operations per second. </p>
     */
    inline void SetEbsWriteBytesPerSecond(Aws::String&& value) { m_ebsWriteBytesPerSecondHasBeenSet = true; m_ebsWriteBytesPerSecond = std::move(value); }

    /**
     * <p>The maximum size of write operations per second. </p>
     */
    inline void SetEbsWriteBytesPerSecond(const char* value) { m_ebsWriteBytesPerSecondHasBeenSet = true; m_ebsWriteBytesPerSecond.assign(value); }

    /**
     * <p>The maximum size of write operations per second. </p>
     */
    inline EBSResourceUtilization& WithEbsWriteBytesPerSecond(const Aws::String& value) { SetEbsWriteBytesPerSecond(value); return *this;}

    /**
     * <p>The maximum size of write operations per second. </p>
     */
    inline EBSResourceUtilization& WithEbsWriteBytesPerSecond(Aws::String&& value) { SetEbsWriteBytesPerSecond(std::move(value)); return *this;}

    /**
     * <p>The maximum size of write operations per second. </p>
     */
    inline EBSResourceUtilization& WithEbsWriteBytesPerSecond(const char* value) { SetEbsWriteBytesPerSecond(value); return *this;}

  private:

    Aws::String m_ebsReadOpsPerSecond;
    bool m_ebsReadOpsPerSecondHasBeenSet = false;

    Aws::String m_ebsWriteOpsPerSecond;
    bool m_ebsWriteOpsPerSecondHasBeenSet = false;

    Aws::String m_ebsReadBytesPerSecond;
    bool m_ebsReadBytesPerSecondHasBeenSet = false;

    Aws::String m_ebsWriteBytesPerSecond;
    bool m_ebsWriteBytesPerSecondHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
