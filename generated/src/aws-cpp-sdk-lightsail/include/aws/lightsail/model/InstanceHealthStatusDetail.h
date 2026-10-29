/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/InstanceHealthStatusDetailName.h>
#include <aws/lightsail/model/InstanceHealthStatusDetailValue.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Lightsail {
namespace Model {

/**
 * <p>Describes the instance status.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/InstanceHealthStatusDetail">AWS
 * API Reference</a></p>
 */
class InstanceHealthStatusDetail {
 public:
  AWS_LIGHTSAIL_API InstanceHealthStatusDetail() = default;
  AWS_LIGHTSAIL_API InstanceHealthStatusDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_LIGHTSAIL_API InstanceHealthStatusDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of instance status. The only possible value is
   * <code>reachability</code>.</p>
   */
  inline InstanceHealthStatusDetailName GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  inline void SetName(InstanceHealthStatusDetailName value) {
    m_nameHasBeenSet = true;
    m_name = value;
  }
  inline InstanceHealthStatusDetail& WithName(InstanceHealthStatusDetailName value) {
    SetName(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status.</p> <p>The following values are possible:</p> <ul> <li> <p>
   * <code>passed</code> - The check passed.</p> </li> <li> <p> <code>failed</code> -
   * The check failed.</p> </li> <li> <p> <code>initializing</code> - The check is in
   * progress.</p> </li> <li> <p> <code>insufficient-data</code> - There isn't enough
   * data yet to determine the result.</p> </li> </ul>
   */
  inline InstanceHealthStatusDetailValue GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(InstanceHealthStatusDetailValue value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline InstanceHealthStatusDetail& WithStatus(InstanceHealthStatusDetailValue value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when a status check failed. For an instance that was launched and
   * impaired, this is the time when the instance was launched.</p>
   */
  inline const Aws::Utils::DateTime& GetImpairedSince() const { return m_impairedSince; }
  inline bool ImpairedSinceHasBeenSet() const { return m_impairedSinceHasBeenSet; }
  template <typename ImpairedSinceT = Aws::Utils::DateTime>
  void SetImpairedSince(ImpairedSinceT&& value) {
    m_impairedSinceHasBeenSet = true;
    m_impairedSince = std::forward<ImpairedSinceT>(value);
  }
  template <typename ImpairedSinceT = Aws::Utils::DateTime>
  InstanceHealthStatusDetail& WithImpairedSince(ImpairedSinceT&& value) {
    SetImpairedSince(std::forward<ImpairedSinceT>(value));
    return *this;
  }
  ///@}
 private:
  InstanceHealthStatusDetailName m_name{InstanceHealthStatusDetailName::NOT_SET};

  InstanceHealthStatusDetailValue m_status{InstanceHealthStatusDetailValue::NOT_SET};

  Aws::Utils::DateTime m_impairedSince{};
  bool m_nameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_impairedSinceHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
