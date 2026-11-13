/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
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
 * <p>Describes the application operation that initiated a snapshot operation. To
 * get information about the application operation, use
 * <code>DescribeApplicationOperation</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ApplicationOperationDescription">AWS
 * API Reference</a></p>
 */
class ApplicationOperationDescription {
 public:
  AWS_KINESISANALYTICSV2_API ApplicationOperationDescription() = default;
  AWS_KINESISANALYTICSV2_API ApplicationOperationDescription(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESISANALYTICSV2_API ApplicationOperationDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::String& GetApplicationOperationId() const { return m_applicationOperationId; }
  inline bool ApplicationOperationIdHasBeenSet() const { return m_applicationOperationIdHasBeenSet; }
  template <typename ApplicationOperationIdT = Aws::String>
  void SetApplicationOperationId(ApplicationOperationIdT&& value) {
    m_applicationOperationIdHasBeenSet = true;
    m_applicationOperationId = std::forward<ApplicationOperationIdT>(value);
  }
  template <typename ApplicationOperationIdT = Aws::String>
  ApplicationOperationDescription& WithApplicationOperationId(ApplicationOperationIdT&& value) {
    SetApplicationOperationId(std::forward<ApplicationOperationIdT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetApplicationName() const { return m_applicationName; }
  inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }
  template <typename ApplicationNameT = Aws::String>
  void SetApplicationName(ApplicationNameT&& value) {
    m_applicationNameHasBeenSet = true;
    m_applicationName = std::forward<ApplicationNameT>(value);
  }
  template <typename ApplicationNameT = Aws::String>
  ApplicationOperationDescription& WithApplicationName(ApplicationNameT&& value) {
    SetApplicationName(std::forward<ApplicationNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_applicationOperationId;

  Aws::String m_applicationName;
  bool m_applicationOperationIdHasBeenSet = false;
  bool m_applicationNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace KinesisAnalyticsV2
}  // namespace Aws
