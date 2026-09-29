/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/FleetSoftwareAddOnName.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace deadline {
namespace Model {

/**
 * <p>Software that the service installs on worker hosts in a service-managed
 * fleet.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/FleetSoftwareAddOn">AWS
 * API Reference</a></p>
 */
class FleetSoftwareAddOn {
 public:
  AWS_DEADLINE_API FleetSoftwareAddOn() = default;
  AWS_DEADLINE_API FleetSoftwareAddOn(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEADLINE_API FleetSoftwareAddOn& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the software add-on. The supported value is
   * <code>docker</code>.</p>
   */
  inline FleetSoftwareAddOnName GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  inline void SetName(FleetSoftwareAddOnName value) {
    m_nameHasBeenSet = true;
    m_name = value;
  }
  inline FleetSoftwareAddOn& WithName(FleetSoftwareAddOnName value) {
    SetName(value);
    return *this;
  }
  ///@}
 private:
  FleetSoftwareAddOnName m_name{FleetSoftwareAddOnName::NOT_SET};
  bool m_nameHasBeenSet = false;
};

}  // namespace Model
}  // namespace deadline
}  // namespace Aws
