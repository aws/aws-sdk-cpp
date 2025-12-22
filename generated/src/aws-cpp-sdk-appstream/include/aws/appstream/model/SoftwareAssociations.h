/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/model/ErrorDetails.h>
#include <aws/appstream/model/SoftwareDeploymentStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AppStream {
namespace Model {

/**
 * <p>The association between a license-included application and a
 * resource.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/SoftwareAssociations">AWS
 * API Reference</a></p>
 */
class SoftwareAssociations {
 public:
  AWS_APPSTREAM_API SoftwareAssociations() = default;
  AWS_APPSTREAM_API SoftwareAssociations(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPSTREAM_API SoftwareAssociations& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the license-included application.</p> <p>Possible values include
   * the following:</p> <ul> <li>
   * <p>Microsoft_Office_2021_LTSC_Professional_Plus_32Bit</p> </li> <li>
   * <p>Microsoft_Office_2021_LTSC_Professional_Plus_64Bit</p> </li> <li>
   * <p>Microsoft_Office_2024_LTSC_Professional_Plus_32Bit</p> </li> <li>
   * <p>Microsoft_Office_2024_LTSC_Professional_Plus_64Bit</p> </li> <li>
   * <p>Microsoft_Visio_2021_LTSC_Professional_32Bit</p> </li> <li>
   * <p>Microsoft_Visio_2021_LTSC_Professional_64Bit</p> </li> <li>
   * <p>Microsoft_Visio_2024_LTSC_Professional_32Bit</p> </li> <li>
   * <p>Microsoft_Visio_2024_LTSC_Professional_64Bit</p> </li> <li>
   * <p>Microsoft_Project_2021_Professional_32Bit</p> </li> <li>
   * <p>Microsoft_Project_2021_Professional_64Bit</p> </li> <li>
   * <p>Microsoft_Project_2024_Professional_32Bit</p> </li> <li>
   * <p>Microsoft_Project_2024_Professional_64Bit</p> </li> <li>
   * <p>Microsoft_Office_2021_LTSC_Standard_32Bit</p> </li> <li>
   * <p>Microsoft_Office_2021_LTSC_Standard_64Bit</p> </li> <li>
   * <p>Microsoft_Office_2024_LTSC_Standard_32Bit</p> </li> <li>
   * <p>Microsoft_Office_2024_LTSC_Standard_64Bit</p> </li> <li>
   * <p>Microsoft_Visio_2021_LTSC_Standard_32Bit</p> </li> <li>
   * <p>Microsoft_Visio_2021_LTSC_Standard_64Bit</p> </li> <li>
   * <p>Microsoft_Visio_2024_LTSC_Standard_32Bit</p> </li> <li>
   * <p>Microsoft_Visio_2024_LTSC_Standard_64Bit</p> </li> <li>
   * <p>Microsoft_Project_2021_Standard_32Bit</p> </li> <li>
   * <p>Microsoft_Project_2021_Standard_64Bit</p> </li> <li>
   * <p>Microsoft_Project_2024_Standard_32Bit</p> </li> <li>
   * <p>Microsoft_Project_2024_Standard_64Bit</p> </li> </ul>
   */
  inline const Aws::String& GetSoftwareName() const { return m_softwareName; }
  inline bool SoftwareNameHasBeenSet() const { return m_softwareNameHasBeenSet; }
  template <typename SoftwareNameT = Aws::String>
  void SetSoftwareName(SoftwareNameT&& value) {
    m_softwareNameHasBeenSet = true;
    m_softwareName = std::forward<SoftwareNameT>(value);
  }
  template <typename SoftwareNameT = Aws::String>
  SoftwareAssociations& WithSoftwareName(SoftwareNameT&& value) {
    SetSoftwareName(std::forward<SoftwareNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The deployment status of the license-included application.</p>
   */
  inline SoftwareDeploymentStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(SoftwareDeploymentStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline SoftwareAssociations& WithStatus(SoftwareDeploymentStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The error details for failed deployments of the license-included
   * application.</p>
   */
  inline const Aws::Vector<ErrorDetails>& GetDeploymentError() const { return m_deploymentError; }
  inline bool DeploymentErrorHasBeenSet() const { return m_deploymentErrorHasBeenSet; }
  template <typename DeploymentErrorT = Aws::Vector<ErrorDetails>>
  void SetDeploymentError(DeploymentErrorT&& value) {
    m_deploymentErrorHasBeenSet = true;
    m_deploymentError = std::forward<DeploymentErrorT>(value);
  }
  template <typename DeploymentErrorT = Aws::Vector<ErrorDetails>>
  SoftwareAssociations& WithDeploymentError(DeploymentErrorT&& value) {
    SetDeploymentError(std::forward<DeploymentErrorT>(value));
    return *this;
  }
  template <typename DeploymentErrorT = ErrorDetails>
  SoftwareAssociations& AddDeploymentError(DeploymentErrorT&& value) {
    m_deploymentErrorHasBeenSet = true;
    m_deploymentError.emplace_back(std::forward<DeploymentErrorT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_softwareName;

  SoftwareDeploymentStatus m_status{SoftwareDeploymentStatus::NOT_SET};

  Aws::Vector<ErrorDetails> m_deploymentError;
  bool m_softwareNameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_deploymentErrorHasBeenSet = false;
};

}  // namespace Model
}  // namespace AppStream
}  // namespace Aws
