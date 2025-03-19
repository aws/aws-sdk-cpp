/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/EbsOptimizedSupport.h>
#include <aws/ec2/model/EbsEncryptionSupport.h>
#include <aws/ec2/model/EbsOptimizedInfo.h>
#include <aws/ec2/model/EbsNvmeSupport.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes the Amazon EBS features supported by the instance
   * type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/EbsInfo">AWS API
   * Reference</a></p>
   */
  class EbsInfo
  {
  public:
    AWS_EC2_API EbsInfo() = default;
    AWS_EC2_API EbsInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API EbsInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Indicates whether the instance type is Amazon EBS-optimized. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSOptimized.html">Amazon
     * EBS-optimized instances</a> in <i>Amazon EC2 User Guide</i>.</p>
     */
    inline EbsOptimizedSupport GetEbsOptimizedSupport() const { return m_ebsOptimizedSupport; }
    inline bool EbsOptimizedSupportHasBeenSet() const { return m_ebsOptimizedSupportHasBeenSet; }
    inline void SetEbsOptimizedSupport(EbsOptimizedSupport value) { m_ebsOptimizedSupportHasBeenSet = true; m_ebsOptimizedSupport = value; }
    inline EbsInfo& WithEbsOptimizedSupport(EbsOptimizedSupport value) { SetEbsOptimizedSupport(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether Amazon EBS encryption is supported.</p>
     */
    inline EbsEncryptionSupport GetEncryptionSupport() const { return m_encryptionSupport; }
    inline bool EncryptionSupportHasBeenSet() const { return m_encryptionSupportHasBeenSet; }
    inline void SetEncryptionSupport(EbsEncryptionSupport value) { m_encryptionSupportHasBeenSet = true; m_encryptionSupport = value; }
    inline EbsInfo& WithEncryptionSupport(EbsEncryptionSupport value) { SetEncryptionSupport(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the optimized EBS performance for the instance type.</p>
     */
    inline const EbsOptimizedInfo& GetEbsOptimizedInfo() const { return m_ebsOptimizedInfo; }
    inline bool EbsOptimizedInfoHasBeenSet() const { return m_ebsOptimizedInfoHasBeenSet; }
    template<typename EbsOptimizedInfoT = EbsOptimizedInfo>
    void SetEbsOptimizedInfo(EbsOptimizedInfoT&& value) { m_ebsOptimizedInfoHasBeenSet = true; m_ebsOptimizedInfo = std::forward<EbsOptimizedInfoT>(value); }
    template<typename EbsOptimizedInfoT = EbsOptimizedInfo>
    EbsInfo& WithEbsOptimizedInfo(EbsOptimizedInfoT&& value) { SetEbsOptimizedInfo(std::forward<EbsOptimizedInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether non-volatile memory express (NVMe) is supported.</p>
     */
    inline EbsNvmeSupport GetNvmeSupport() const { return m_nvmeSupport; }
    inline bool NvmeSupportHasBeenSet() const { return m_nvmeSupportHasBeenSet; }
    inline void SetNvmeSupport(EbsNvmeSupport value) { m_nvmeSupportHasBeenSet = true; m_nvmeSupport = value; }
    inline EbsInfo& WithNvmeSupport(EbsNvmeSupport value) { SetNvmeSupport(value); return *this;}
    ///@}
  private:

    EbsOptimizedSupport m_ebsOptimizedSupport{EbsOptimizedSupport::NOT_SET};
    bool m_ebsOptimizedSupportHasBeenSet = false;

    EbsEncryptionSupport m_encryptionSupport{EbsEncryptionSupport::NOT_SET};
    bool m_encryptionSupportHasBeenSet = false;

    EbsOptimizedInfo m_ebsOptimizedInfo;
    bool m_ebsOptimizedInfoHasBeenSet = false;

    EbsNvmeSupport m_nvmeSupport{EbsNvmeSupport::NOT_SET};
    bool m_nvmeSupportHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
