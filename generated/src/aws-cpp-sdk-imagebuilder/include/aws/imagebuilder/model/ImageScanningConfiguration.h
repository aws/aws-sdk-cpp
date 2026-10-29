/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/model/EcrConfiguration.h>
#include <aws/imagebuilder/model/ImageScanningType.h>
#include <aws/imagebuilder/model/ScanResultCondition.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace imagebuilder {
namespace Model {

/**
 * <p>Contains settings for Image Builder image resource and container image
 * scans.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ImageScanningConfiguration">AWS
 * API Reference</a></p>
 */
class ImageScanningConfiguration {
 public:
  AWS_IMAGEBUILDER_API ImageScanningConfiguration() = default;
  AWS_IMAGEBUILDER_API ImageScanningConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_IMAGEBUILDER_API ImageScanningConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies whether Amazon Inspector scans for vulnerabilities when you create
   * a new image. You must also enable image tests. For AMI output,
   * <code>imageScanningTypes</code> sets whether Amazon Inspector scans the test
   * instance or the output AMI. For container output, Amazon Inspector scans the
   * container image that Image Builder pushes to the Amazon ECR repository from your
   * <code>ecrConfiguration</code> settings.</p> <p>To use container image scans, you
   * must activate Amazon Inspector for Amazon ECR scanning in your account. The
   * Image Builder <code>ListImageScanFindings</code> operation returns the findings
   * of these scans.</p>
   */
  inline bool GetImageScanningEnabled() const { return m_imageScanningEnabled; }
  inline bool ImageScanningEnabledHasBeenSet() const { return m_imageScanningEnabledHasBeenSet; }
  inline void SetImageScanningEnabled(bool value) {
    m_imageScanningEnabledHasBeenSet = true;
    m_imageScanningEnabled = value;
  }
  inline ImageScanningConfiguration& WithImageScanningEnabled(bool value) {
    SetImageScanningEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Contains Amazon ECR settings for vulnerability scans.</p>
   */
  inline const EcrConfiguration& GetEcrConfiguration() const { return m_ecrConfiguration; }
  inline bool EcrConfigurationHasBeenSet() const { return m_ecrConfigurationHasBeenSet; }
  template <typename EcrConfigurationT = EcrConfiguration>
  void SetEcrConfiguration(EcrConfigurationT&& value) {
    m_ecrConfigurationHasBeenSet = true;
    m_ecrConfiguration = std::forward<EcrConfigurationT>(value);
  }
  template <typename EcrConfigurationT = EcrConfiguration>
  ImageScanningConfiguration& WithEcrConfiguration(EcrConfigurationT&& value) {
    SetEcrConfiguration(std::forward<EcrConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of vulnerability scan that Image Builder runs for AMI output when
   * <code>imageScanningEnabled</code> is <code>true</code>. Specify a single value.
   * If you omit <code>imageScanningTypes</code>, Image Builder uses
   * <code>TEST_INSTANCE_CVE</code>. The scan types work as follows:</p> <ul> <li>
   * <p>With <code>TEST_INSTANCE_CVE</code>, Amazon Inspector scans the test instance
   * during image tests. To use this scan, you must activate Amazon Inspector for
   * Amazon EC2 scanning in your account. The Image Builder
   * <code>ListImageScanFindings</code> operation returns the findings.</p> </li>
   * <li> <p>With <code>ON_DEMAND_AMI_CVE</code>, Amazon Inspector starts an
   * on-demand scan of the output AMI during image tests. To use this scan, you must
   * build from an image recipe, but you do not need to activate Amazon Inspector in
   * your account. The Amazon EC2 <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_GetImageFindings.html">GetImageFindings</a>
   * operation returns the findings.</p> </li> </ul>
   */
  inline const Aws::Vector<ImageScanningType>& GetImageScanningTypes() const { return m_imageScanningTypes; }
  inline bool ImageScanningTypesHasBeenSet() const { return m_imageScanningTypesHasBeenSet; }
  template <typename ImageScanningTypesT = Aws::Vector<ImageScanningType>>
  void SetImageScanningTypes(ImageScanningTypesT&& value) {
    m_imageScanningTypesHasBeenSet = true;
    m_imageScanningTypes = std::forward<ImageScanningTypesT>(value);
  }
  template <typename ImageScanningTypesT = Aws::Vector<ImageScanningType>>
  ImageScanningConfiguration& WithImageScanningTypes(ImageScanningTypesT&& value) {
    SetImageScanningTypes(std::forward<ImageScanningTypesT>(value));
    return *this;
  }
  inline ImageScanningConfiguration& AddImageScanningTypes(ImageScanningType value) {
    m_imageScanningTypesHasBeenSet = true;
    m_imageScanningTypes.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The condition that the output AMI's scan results must meet for the image to
   * pass. You can set <code>scanResultCondition</code> only when
   * <code>imageScanningTypes</code> is <code>ON_DEMAND_AMI_CVE</code>. If you omit
   * it, Image Builder starts the scan but does not wait for it or use its results to
   * pass or fail the image.</p> <p>When you set <code>scanResultCondition</code>,
   * the test phase waits for the scan to finish. Then Image Builder checks the
   * findings against the condition. By default, Image Builder counts only findings
   * that have a fix available. To count every finding, set <code>fixAvailable</code>
   * to <code>false</code>. If a counted finding exceeds
   * <code>maximumSeverityLabel</code>, Image Builder fails the image in the test
   * phase and does not distribute the AMI.</p>
   */
  inline const ScanResultCondition& GetScanResultCondition() const { return m_scanResultCondition; }
  inline bool ScanResultConditionHasBeenSet() const { return m_scanResultConditionHasBeenSet; }
  template <typename ScanResultConditionT = ScanResultCondition>
  void SetScanResultCondition(ScanResultConditionT&& value) {
    m_scanResultConditionHasBeenSet = true;
    m_scanResultCondition = std::forward<ScanResultConditionT>(value);
  }
  template <typename ScanResultConditionT = ScanResultCondition>
  ImageScanningConfiguration& WithScanResultCondition(ScanResultConditionT&& value) {
    SetScanResultCondition(std::forward<ScanResultConditionT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_imageScanningEnabled{false};

  EcrConfiguration m_ecrConfiguration;

  Aws::Vector<ImageScanningType> m_imageScanningTypes;

  ScanResultCondition m_scanResultCondition;
  bool m_imageScanningEnabledHasBeenSet = false;
  bool m_ecrConfigurationHasBeenSet = false;
  bool m_imageScanningTypesHasBeenSet = false;
  bool m_scanResultConditionHasBeenSet = false;
};

}  // namespace Model
}  // namespace imagebuilder
}  // namespace Aws
