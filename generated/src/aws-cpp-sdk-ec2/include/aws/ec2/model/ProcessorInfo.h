/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ArchitectureType.h>
#include <aws/ec2/model/SupportedAdditionalProcessorFeature.h>
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
   * <p>Describes the processor used by the instance type.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ProcessorInfo">AWS
   * API Reference</a></p>
   */
  class ProcessorInfo
  {
  public:
    AWS_EC2_API ProcessorInfo();
    AWS_EC2_API ProcessorInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ProcessorInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The architectures supported by the instance type.</p>
     */
    inline const Aws::Vector<ArchitectureType>& GetSupportedArchitectures() const{ return m_supportedArchitectures; }

    /**
     * <p>The architectures supported by the instance type.</p>
     */
    inline bool SupportedArchitecturesHasBeenSet() const { return m_supportedArchitecturesHasBeenSet; }

    /**
     * <p>The architectures supported by the instance type.</p>
     */
    inline void SetSupportedArchitectures(const Aws::Vector<ArchitectureType>& value) { m_supportedArchitecturesHasBeenSet = true; m_supportedArchitectures = value; }

    /**
     * <p>The architectures supported by the instance type.</p>
     */
    inline void SetSupportedArchitectures(Aws::Vector<ArchitectureType>&& value) { m_supportedArchitecturesHasBeenSet = true; m_supportedArchitectures = std::move(value); }

    /**
     * <p>The architectures supported by the instance type.</p>
     */
    inline ProcessorInfo& WithSupportedArchitectures(const Aws::Vector<ArchitectureType>& value) { SetSupportedArchitectures(value); return *this;}

    /**
     * <p>The architectures supported by the instance type.</p>
     */
    inline ProcessorInfo& WithSupportedArchitectures(Aws::Vector<ArchitectureType>&& value) { SetSupportedArchitectures(std::move(value)); return *this;}

    /**
     * <p>The architectures supported by the instance type.</p>
     */
    inline ProcessorInfo& AddSupportedArchitectures(const ArchitectureType& value) { m_supportedArchitecturesHasBeenSet = true; m_supportedArchitectures.push_back(value); return *this; }

    /**
     * <p>The architectures supported by the instance type.</p>
     */
    inline ProcessorInfo& AddSupportedArchitectures(ArchitectureType&& value) { m_supportedArchitecturesHasBeenSet = true; m_supportedArchitectures.push_back(std::move(value)); return *this; }


    /**
     * <p>The speed of the processor, in GHz.</p>
     */
    inline double GetSustainedClockSpeedInGhz() const{ return m_sustainedClockSpeedInGhz; }

    /**
     * <p>The speed of the processor, in GHz.</p>
     */
    inline bool SustainedClockSpeedInGhzHasBeenSet() const { return m_sustainedClockSpeedInGhzHasBeenSet; }

    /**
     * <p>The speed of the processor, in GHz.</p>
     */
    inline void SetSustainedClockSpeedInGhz(double value) { m_sustainedClockSpeedInGhzHasBeenSet = true; m_sustainedClockSpeedInGhz = value; }

    /**
     * <p>The speed of the processor, in GHz.</p>
     */
    inline ProcessorInfo& WithSustainedClockSpeedInGhz(double value) { SetSustainedClockSpeedInGhz(value); return *this;}


    /**
     * <p>Indicates whether the instance type supports AMD SEV-SNP. If the request
     * returns <code>amd-sev-snp</code>, AMD SEV-SNP is supported. Otherwise, it is not
     * supported. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/sev-snp.html"> AMD
     * SEV-SNP</a>.</p>
     */
    inline const Aws::Vector<SupportedAdditionalProcessorFeature>& GetSupportedFeatures() const{ return m_supportedFeatures; }

    /**
     * <p>Indicates whether the instance type supports AMD SEV-SNP. If the request
     * returns <code>amd-sev-snp</code>, AMD SEV-SNP is supported. Otherwise, it is not
     * supported. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/sev-snp.html"> AMD
     * SEV-SNP</a>.</p>
     */
    inline bool SupportedFeaturesHasBeenSet() const { return m_supportedFeaturesHasBeenSet; }

    /**
     * <p>Indicates whether the instance type supports AMD SEV-SNP. If the request
     * returns <code>amd-sev-snp</code>, AMD SEV-SNP is supported. Otherwise, it is not
     * supported. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/sev-snp.html"> AMD
     * SEV-SNP</a>.</p>
     */
    inline void SetSupportedFeatures(const Aws::Vector<SupportedAdditionalProcessorFeature>& value) { m_supportedFeaturesHasBeenSet = true; m_supportedFeatures = value; }

    /**
     * <p>Indicates whether the instance type supports AMD SEV-SNP. If the request
     * returns <code>amd-sev-snp</code>, AMD SEV-SNP is supported. Otherwise, it is not
     * supported. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/sev-snp.html"> AMD
     * SEV-SNP</a>.</p>
     */
    inline void SetSupportedFeatures(Aws::Vector<SupportedAdditionalProcessorFeature>&& value) { m_supportedFeaturesHasBeenSet = true; m_supportedFeatures = std::move(value); }

    /**
     * <p>Indicates whether the instance type supports AMD SEV-SNP. If the request
     * returns <code>amd-sev-snp</code>, AMD SEV-SNP is supported. Otherwise, it is not
     * supported. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/sev-snp.html"> AMD
     * SEV-SNP</a>.</p>
     */
    inline ProcessorInfo& WithSupportedFeatures(const Aws::Vector<SupportedAdditionalProcessorFeature>& value) { SetSupportedFeatures(value); return *this;}

    /**
     * <p>Indicates whether the instance type supports AMD SEV-SNP. If the request
     * returns <code>amd-sev-snp</code>, AMD SEV-SNP is supported. Otherwise, it is not
     * supported. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/sev-snp.html"> AMD
     * SEV-SNP</a>.</p>
     */
    inline ProcessorInfo& WithSupportedFeatures(Aws::Vector<SupportedAdditionalProcessorFeature>&& value) { SetSupportedFeatures(std::move(value)); return *this;}

    /**
     * <p>Indicates whether the instance type supports AMD SEV-SNP. If the request
     * returns <code>amd-sev-snp</code>, AMD SEV-SNP is supported. Otherwise, it is not
     * supported. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/sev-snp.html"> AMD
     * SEV-SNP</a>.</p>
     */
    inline ProcessorInfo& AddSupportedFeatures(const SupportedAdditionalProcessorFeature& value) { m_supportedFeaturesHasBeenSet = true; m_supportedFeatures.push_back(value); return *this; }

    /**
     * <p>Indicates whether the instance type supports AMD SEV-SNP. If the request
     * returns <code>amd-sev-snp</code>, AMD SEV-SNP is supported. Otherwise, it is not
     * supported. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/sev-snp.html"> AMD
     * SEV-SNP</a>.</p>
     */
    inline ProcessorInfo& AddSupportedFeatures(SupportedAdditionalProcessorFeature&& value) { m_supportedFeaturesHasBeenSet = true; m_supportedFeatures.push_back(std::move(value)); return *this; }


    /**
     * <p>The manufacturer of the processor.</p>
     */
    inline const Aws::String& GetManufacturer() const{ return m_manufacturer; }

    /**
     * <p>The manufacturer of the processor.</p>
     */
    inline bool ManufacturerHasBeenSet() const { return m_manufacturerHasBeenSet; }

    /**
     * <p>The manufacturer of the processor.</p>
     */
    inline void SetManufacturer(const Aws::String& value) { m_manufacturerHasBeenSet = true; m_manufacturer = value; }

    /**
     * <p>The manufacturer of the processor.</p>
     */
    inline void SetManufacturer(Aws::String&& value) { m_manufacturerHasBeenSet = true; m_manufacturer = std::move(value); }

    /**
     * <p>The manufacturer of the processor.</p>
     */
    inline void SetManufacturer(const char* value) { m_manufacturerHasBeenSet = true; m_manufacturer.assign(value); }

    /**
     * <p>The manufacturer of the processor.</p>
     */
    inline ProcessorInfo& WithManufacturer(const Aws::String& value) { SetManufacturer(value); return *this;}

    /**
     * <p>The manufacturer of the processor.</p>
     */
    inline ProcessorInfo& WithManufacturer(Aws::String&& value) { SetManufacturer(std::move(value)); return *this;}

    /**
     * <p>The manufacturer of the processor.</p>
     */
    inline ProcessorInfo& WithManufacturer(const char* value) { SetManufacturer(value); return *this;}

  private:

    Aws::Vector<ArchitectureType> m_supportedArchitectures;
    bool m_supportedArchitecturesHasBeenSet = false;

    double m_sustainedClockSpeedInGhz;
    bool m_sustainedClockSpeedInGhzHasBeenSet = false;

    Aws::Vector<SupportedAdditionalProcessorFeature> m_supportedFeatures;
    bool m_supportedFeaturesHasBeenSet = false;

    Aws::String m_manufacturer;
    bool m_manufacturerHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
