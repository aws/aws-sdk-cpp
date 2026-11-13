/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace KinesisAnalyticsV2 {
namespace Model {

/**
 * <p>Describes the application that an enhanced snapshot was created
 * from.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/SourceApplicationDescription">AWS
 * API Reference</a></p>
 */
class SourceApplicationDescription {
 public:
  AWS_KINESISANALYTICSV2_API SourceApplicationDescription() = default;
  AWS_KINESISANALYTICSV2_API SourceApplicationDescription(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESISANALYTICSV2_API SourceApplicationDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::String& GetApplicationName() const { return m_applicationName; }
  inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }
  template <typename ApplicationNameT = Aws::String>
  void SetApplicationName(ApplicationNameT&& value) {
    m_applicationNameHasBeenSet = true;
    m_applicationName = std::forward<ApplicationNameT>(value);
  }
  template <typename ApplicationNameT = Aws::String>
  SourceApplicationDescription& WithApplicationName(ApplicationNameT&& value) {
    SetApplicationName(std::forward<ApplicationNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp that indicates when the source application was created.</p>
   */
  inline const Aws::Utils::DateTime& GetApplicationCreationTimestamp() const { return m_applicationCreationTimestamp; }
  inline bool ApplicationCreationTimestampHasBeenSet() const { return m_applicationCreationTimestampHasBeenSet; }
  template <typename ApplicationCreationTimestampT = Aws::Utils::DateTime>
  void SetApplicationCreationTimestamp(ApplicationCreationTimestampT&& value) {
    m_applicationCreationTimestampHasBeenSet = true;
    m_applicationCreationTimestamp = std::forward<ApplicationCreationTimestampT>(value);
  }
  template <typename ApplicationCreationTimestampT = Aws::Utils::DateTime>
  SourceApplicationDescription& WithApplicationCreationTimestamp(ApplicationCreationTimestampT&& value) {
    SetApplicationCreationTimestamp(std::forward<ApplicationCreationTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version ID of the source application when the snapshot was created.</p>
   */
  inline long long GetApplicationVersionId() const { return m_applicationVersionId; }
  inline bool ApplicationVersionIdHasBeenSet() const { return m_applicationVersionIdHasBeenSet; }
  inline void SetApplicationVersionId(long long value) {
    m_applicationVersionIdHasBeenSet = true;
    m_applicationVersionId = value;
  }
  inline SourceApplicationDescription& WithApplicationVersionId(long long value) {
    SetApplicationVersionId(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_applicationName;

  Aws::Utils::DateTime m_applicationCreationTimestamp{};

  long long m_applicationVersionId{0};
  bool m_applicationNameHasBeenSet = false;
  bool m_applicationCreationTimestampHasBeenSet = false;
  bool m_applicationVersionIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace KinesisAnalyticsV2
}  // namespace Aws
