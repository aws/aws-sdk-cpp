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
    AWS_EC2_API EbsInfo();
    AWS_EC2_API EbsInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API EbsInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Indicates whether the instance type is Amazon EBS-optimized. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSOptimized.html">Amazon
     * EBS-optimized instances</a> in <i>Amazon EC2 User Guide</i>.</p>
     */
    inline const EbsOptimizedSupport& GetEbsOptimizedSupport() const{ return m_ebsOptimizedSupport; }

    /**
     * <p>Indicates whether the instance type is Amazon EBS-optimized. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSOptimized.html">Amazon
     * EBS-optimized instances</a> in <i>Amazon EC2 User Guide</i>.</p>
     */
    inline bool EbsOptimizedSupportHasBeenSet() const { return m_ebsOptimizedSupportHasBeenSet; }

    /**
     * <p>Indicates whether the instance type is Amazon EBS-optimized. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSOptimized.html">Amazon
     * EBS-optimized instances</a> in <i>Amazon EC2 User Guide</i>.</p>
     */
    inline void SetEbsOptimizedSupport(const EbsOptimizedSupport& value) { m_ebsOptimizedSupportHasBeenSet = true; m_ebsOptimizedSupport = value; }

    /**
     * <p>Indicates whether the instance type is Amazon EBS-optimized. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSOptimized.html">Amazon
     * EBS-optimized instances</a> in <i>Amazon EC2 User Guide</i>.</p>
     */
    inline void SetEbsOptimizedSupport(EbsOptimizedSupport&& value) { m_ebsOptimizedSupportHasBeenSet = true; m_ebsOptimizedSupport = std::move(value); }

    /**
     * <p>Indicates whether the instance type is Amazon EBS-optimized. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSOptimized.html">Amazon
     * EBS-optimized instances</a> in <i>Amazon EC2 User Guide</i>.</p>
     */
    inline EbsInfo& WithEbsOptimizedSupport(const EbsOptimizedSupport& value) { SetEbsOptimizedSupport(value); return *this;}

    /**
     * <p>Indicates whether the instance type is Amazon EBS-optimized. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSOptimized.html">Amazon
     * EBS-optimized instances</a> in <i>Amazon EC2 User Guide</i>.</p>
     */
    inline EbsInfo& WithEbsOptimizedSupport(EbsOptimizedSupport&& value) { SetEbsOptimizedSupport(std::move(value)); return *this;}


    /**
     * <p>Indicates whether Amazon EBS encryption is supported.</p>
     */
    inline const EbsEncryptionSupport& GetEncryptionSupport() const{ return m_encryptionSupport; }

    /**
     * <p>Indicates whether Amazon EBS encryption is supported.</p>
     */
    inline bool EncryptionSupportHasBeenSet() const { return m_encryptionSupportHasBeenSet; }

    /**
     * <p>Indicates whether Amazon EBS encryption is supported.</p>
     */
    inline void SetEncryptionSupport(const EbsEncryptionSupport& value) { m_encryptionSupportHasBeenSet = true; m_encryptionSupport = value; }

    /**
     * <p>Indicates whether Amazon EBS encryption is supported.</p>
     */
    inline void SetEncryptionSupport(EbsEncryptionSupport&& value) { m_encryptionSupportHasBeenSet = true; m_encryptionSupport = std::move(value); }

    /**
     * <p>Indicates whether Amazon EBS encryption is supported.</p>
     */
    inline EbsInfo& WithEncryptionSupport(const EbsEncryptionSupport& value) { SetEncryptionSupport(value); return *this;}

    /**
     * <p>Indicates whether Amazon EBS encryption is supported.</p>
     */
    inline EbsInfo& WithEncryptionSupport(EbsEncryptionSupport&& value) { SetEncryptionSupport(std::move(value)); return *this;}


    /**
     * <p>Describes the optimized EBS performance for the instance type.</p>
     */
    inline const EbsOptimizedInfo& GetEbsOptimizedInfo() const{ return m_ebsOptimizedInfo; }

    /**
     * <p>Describes the optimized EBS performance for the instance type.</p>
     */
    inline bool EbsOptimizedInfoHasBeenSet() const { return m_ebsOptimizedInfoHasBeenSet; }

    /**
     * <p>Describes the optimized EBS performance for the instance type.</p>
     */
    inline void SetEbsOptimizedInfo(const EbsOptimizedInfo& value) { m_ebsOptimizedInfoHasBeenSet = true; m_ebsOptimizedInfo = value; }

    /**
     * <p>Describes the optimized EBS performance for the instance type.</p>
     */
    inline void SetEbsOptimizedInfo(EbsOptimizedInfo&& value) { m_ebsOptimizedInfoHasBeenSet = true; m_ebsOptimizedInfo = std::move(value); }

    /**
     * <p>Describes the optimized EBS performance for the instance type.</p>
     */
    inline EbsInfo& WithEbsOptimizedInfo(const EbsOptimizedInfo& value) { SetEbsOptimizedInfo(value); return *this;}

    /**
     * <p>Describes the optimized EBS performance for the instance type.</p>
     */
    inline EbsInfo& WithEbsOptimizedInfo(EbsOptimizedInfo&& value) { SetEbsOptimizedInfo(std::move(value)); return *this;}


    /**
     * <p>Indicates whether non-volatile memory express (NVMe) is supported.</p>
     */
    inline const EbsNvmeSupport& GetNvmeSupport() const{ return m_nvmeSupport; }

    /**
     * <p>Indicates whether non-volatile memory express (NVMe) is supported.</p>
     */
    inline bool NvmeSupportHasBeenSet() const { return m_nvmeSupportHasBeenSet; }

    /**
     * <p>Indicates whether non-volatile memory express (NVMe) is supported.</p>
     */
    inline void SetNvmeSupport(const EbsNvmeSupport& value) { m_nvmeSupportHasBeenSet = true; m_nvmeSupport = value; }

    /**
     * <p>Indicates whether non-volatile memory express (NVMe) is supported.</p>
     */
    inline void SetNvmeSupport(EbsNvmeSupport&& value) { m_nvmeSupportHasBeenSet = true; m_nvmeSupport = std::move(value); }

    /**
     * <p>Indicates whether non-volatile memory express (NVMe) is supported.</p>
     */
    inline EbsInfo& WithNvmeSupport(const EbsNvmeSupport& value) { SetNvmeSupport(value); return *this;}

    /**
     * <p>Indicates whether non-volatile memory express (NVMe) is supported.</p>
     */
    inline EbsInfo& WithNvmeSupport(EbsNvmeSupport&& value) { SetNvmeSupport(std::move(value)); return *this;}

  private:

    EbsOptimizedSupport m_ebsOptimizedSupport;
    bool m_ebsOptimizedSupportHasBeenSet = false;

    EbsEncryptionSupport m_encryptionSupport;
    bool m_encryptionSupportHasBeenSet = false;

    EbsOptimizedInfo m_ebsOptimizedInfo;
    bool m_ebsOptimizedInfoHasBeenSet = false;

    EbsNvmeSupport m_nvmeSupport;
    bool m_nvmeSupportHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
