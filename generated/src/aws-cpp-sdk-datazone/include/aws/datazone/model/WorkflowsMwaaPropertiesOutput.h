/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZone_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DataZone {
namespace Model {

/**
 * <p>The Amazon MWAA properties.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/WorkflowsMwaaPropertiesOutput">AWS
 * API Reference</a></p>
 */
class WorkflowsMwaaPropertiesOutput {
 public:
  AWS_DATAZONE_API WorkflowsMwaaPropertiesOutput() = default;
  AWS_DATAZONE_API WorkflowsMwaaPropertiesOutput(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API WorkflowsMwaaPropertiesOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The MWAA environment name.</p>
   */
  inline const Aws::String& GetMwaaEnvironmentName() const { return m_mwaaEnvironmentName; }
  inline bool MwaaEnvironmentNameHasBeenSet() const { return m_mwaaEnvironmentNameHasBeenSet; }
  template <typename MwaaEnvironmentNameT = Aws::String>
  void SetMwaaEnvironmentName(MwaaEnvironmentNameT&& value) {
    m_mwaaEnvironmentNameHasBeenSet = true;
    m_mwaaEnvironmentName = std::forward<MwaaEnvironmentNameT>(value);
  }
  template <typename MwaaEnvironmentNameT = Aws::String>
  WorkflowsMwaaPropertiesOutput& WithMwaaEnvironmentName(MwaaEnvironmentNameT&& value) {
    SetMwaaEnvironmentName(std::forward<MwaaEnvironmentNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_mwaaEnvironmentName;
  bool m_mwaaEnvironmentNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
