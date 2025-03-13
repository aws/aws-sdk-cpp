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
    AWS_COSTEXPLORER_API EBSResourceUtilization() = default;
    AWS_COSTEXPLORER_API EBSResourceUtilization(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API EBSResourceUtilization& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The maximum number of read operations per second. </p>
     */
    inline const Aws::String& GetEbsReadOpsPerSecond() const { return m_ebsReadOpsPerSecond; }
    inline bool EbsReadOpsPerSecondHasBeenSet() const { return m_ebsReadOpsPerSecondHasBeenSet; }
    template<typename EbsReadOpsPerSecondT = Aws::String>
    void SetEbsReadOpsPerSecond(EbsReadOpsPerSecondT&& value) { m_ebsReadOpsPerSecondHasBeenSet = true; m_ebsReadOpsPerSecond = std::forward<EbsReadOpsPerSecondT>(value); }
    template<typename EbsReadOpsPerSecondT = Aws::String>
    EBSResourceUtilization& WithEbsReadOpsPerSecond(EbsReadOpsPerSecondT&& value) { SetEbsReadOpsPerSecond(std::forward<EbsReadOpsPerSecondT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of write operations per second. </p>
     */
    inline const Aws::String& GetEbsWriteOpsPerSecond() const { return m_ebsWriteOpsPerSecond; }
    inline bool EbsWriteOpsPerSecondHasBeenSet() const { return m_ebsWriteOpsPerSecondHasBeenSet; }
    template<typename EbsWriteOpsPerSecondT = Aws::String>
    void SetEbsWriteOpsPerSecond(EbsWriteOpsPerSecondT&& value) { m_ebsWriteOpsPerSecondHasBeenSet = true; m_ebsWriteOpsPerSecond = std::forward<EbsWriteOpsPerSecondT>(value); }
    template<typename EbsWriteOpsPerSecondT = Aws::String>
    EBSResourceUtilization& WithEbsWriteOpsPerSecond(EbsWriteOpsPerSecondT&& value) { SetEbsWriteOpsPerSecond(std::forward<EbsWriteOpsPerSecondT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum size of read operations per second </p>
     */
    inline const Aws::String& GetEbsReadBytesPerSecond() const { return m_ebsReadBytesPerSecond; }
    inline bool EbsReadBytesPerSecondHasBeenSet() const { return m_ebsReadBytesPerSecondHasBeenSet; }
    template<typename EbsReadBytesPerSecondT = Aws::String>
    void SetEbsReadBytesPerSecond(EbsReadBytesPerSecondT&& value) { m_ebsReadBytesPerSecondHasBeenSet = true; m_ebsReadBytesPerSecond = std::forward<EbsReadBytesPerSecondT>(value); }
    template<typename EbsReadBytesPerSecondT = Aws::String>
    EBSResourceUtilization& WithEbsReadBytesPerSecond(EbsReadBytesPerSecondT&& value) { SetEbsReadBytesPerSecond(std::forward<EbsReadBytesPerSecondT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum size of write operations per second. </p>
     */
    inline const Aws::String& GetEbsWriteBytesPerSecond() const { return m_ebsWriteBytesPerSecond; }
    inline bool EbsWriteBytesPerSecondHasBeenSet() const { return m_ebsWriteBytesPerSecondHasBeenSet; }
    template<typename EbsWriteBytesPerSecondT = Aws::String>
    void SetEbsWriteBytesPerSecond(EbsWriteBytesPerSecondT&& value) { m_ebsWriteBytesPerSecondHasBeenSet = true; m_ebsWriteBytesPerSecond = std::forward<EbsWriteBytesPerSecondT>(value); }
    template<typename EbsWriteBytesPerSecondT = Aws::String>
    EBSResourceUtilization& WithEbsWriteBytesPerSecond(EbsWriteBytesPerSecondT&& value) { SetEbsWriteBytesPerSecond(std::forward<EbsWriteBytesPerSecondT>(value)); return *this;}
    ///@}
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
