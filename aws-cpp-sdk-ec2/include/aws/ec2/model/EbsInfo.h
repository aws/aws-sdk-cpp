/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/EbsOptimizedSupport.h>
#include <aws/ec2/model/EbsEncryptionSupport.h>
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
  class AWS_EC2_API EbsInfo
  {
  public:
    EbsInfo();
    EbsInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    EbsInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Indicates that the instance type is Amazon EBS-optimized. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSOptimized.html">Amazon
     * EBS-Optimized Instances</a> in <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p>
     */
    inline const EbsOptimizedSupport& GetEbsOptimizedSupport() const{ return m_ebsOptimizedSupport; }

    /**
     * <p>Indicates that the instance type is Amazon EBS-optimized. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSOptimized.html">Amazon
     * EBS-Optimized Instances</a> in <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p>
     */
    inline bool EbsOptimizedSupportHasBeenSet() const { return m_ebsOptimizedSupportHasBeenSet; }

    /**
     * <p>Indicates that the instance type is Amazon EBS-optimized. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSOptimized.html">Amazon
     * EBS-Optimized Instances</a> in <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p>
     */
    inline void SetEbsOptimizedSupport(const EbsOptimizedSupport& value) { m_ebsOptimizedSupportHasBeenSet = true; m_ebsOptimizedSupport = value; }

    /**
     * <p>Indicates that the instance type is Amazon EBS-optimized. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSOptimized.html">Amazon
     * EBS-Optimized Instances</a> in <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p>
     */
    inline void SetEbsOptimizedSupport(EbsOptimizedSupport&& value) { m_ebsOptimizedSupportHasBeenSet = true; m_ebsOptimizedSupport = std::move(value); }

    /**
     * <p>Indicates that the instance type is Amazon EBS-optimized. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSOptimized.html">Amazon
     * EBS-Optimized Instances</a> in <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p>
     */
    inline EbsInfo& WithEbsOptimizedSupport(const EbsOptimizedSupport& value) { SetEbsOptimizedSupport(value); return *this;}

    /**
     * <p>Indicates that the instance type is Amazon EBS-optimized. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSOptimized.html">Amazon
     * EBS-Optimized Instances</a> in <i>Amazon EC2 User Guide for Linux
     * Instances</i>.</p>
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

  private:

    EbsOptimizedSupport m_ebsOptimizedSupport;
    bool m_ebsOptimizedSupportHasBeenSet;

    EbsEncryptionSupport m_encryptionSupport;
    bool m_encryptionSupportHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
