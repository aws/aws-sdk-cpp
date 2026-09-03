/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/ActivityType.h>
#include <aws/guardduty/model/ApiCall.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GuardDuty {
namespace Model {

/**
 * <p>Contains information about an activity, such as an API call, that was
 * observed for a signal.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/Activity">AWS
 * API Reference</a></p>
 */
class Activity {
 public:
  AWS_GUARDDUTY_API Activity() = default;
  AWS_GUARDDUTY_API Activity(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Activity& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of the observed activity.</p>
   */
  inline ActivityType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(ActivityType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline Activity& WithType(ActivityType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Contains information about the API call that was observed, when the activity
   * type is <code>API_CALL</code>.</p>
   */
  inline const ApiCall& GetApi() const { return m_api; }
  inline bool ApiHasBeenSet() const { return m_apiHasBeenSet; }
  template <typename ApiT = ApiCall>
  void SetApi(ApiT&& value) {
    m_apiHasBeenSet = true;
    m_api = std::forward<ApiT>(value);
  }
  template <typename ApiT = ApiCall>
  Activity& WithApi(ApiT&& value) {
    SetApi(std::forward<ApiT>(value));
    return *this;
  }
  ///@}
 private:
  ActivityType m_type{ActivityType::NOT_SET};

  ApiCall m_api;
  bool m_typeHasBeenSet = false;
  bool m_apiHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
