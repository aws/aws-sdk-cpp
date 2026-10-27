/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/Lightsail_EXPORTS.h>

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
 * <p>Describes the attributes to update on a Lightsail instance when it
 * starts.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/InstanceAttributeUpdates">AWS
 * API Reference</a></p>
 */
class InstanceAttributeUpdates {
 public:
  AWS_LIGHTSAIL_API InstanceAttributeUpdates() = default;
  AWS_LIGHTSAIL_API InstanceAttributeUpdates(Aws::Utils::Json::JsonView jsonValue);
  AWS_LIGHTSAIL_API InstanceAttributeUpdates& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the bundle to update the instance to.</p> <p>Specify one of the
   * following values for the bundle ID:</p> <ul> <li> <p> <b> <code>auto</code> </b>
   * – Updates an instance that runs on a previous-generation bundle to the
   * newer-generation equivalent of that bundle. For example, specify
   * <code>auto</code> to update an instance that runs on <code>small_2_0</code> to
   * <code>small_3_0</code>.</p> </li> <li> <p> <b>Newer-generation bundle ID</b> –
   * Updates an instance that runs on a previous-generation bundle to the specified
   * bundle. For example, specify <code>small_3_0</code> to update an instance that
   * runs on <code>small_2_0</code> to <code>small_3_0</code>.</p> </li> <li> <p>
   * <b>Original bundle ID</b> – Updates an instance to the previous-generation
   * bundle that it ran on before an earlier update. For example, specify
   * <code>small_2_0</code> to return an instance that runs on <code>small_3_0</code>
   * to <code>small_2_0</code>.</p> </li> </ul>  <p>The instance must be in the
   * <code>stopped</code> state to update its bundle.</p> <p>There is no additional
   * cost to update an instance to a newer-generation bundle.</p>
   */
  inline const Aws::String& GetBundleId() const { return m_bundleId; }
  inline bool BundleIdHasBeenSet() const { return m_bundleIdHasBeenSet; }
  template <typename BundleIdT = Aws::String>
  void SetBundleId(BundleIdT&& value) {
    m_bundleIdHasBeenSet = true;
    m_bundleId = std::forward<BundleIdT>(value);
  }
  template <typename BundleIdT = Aws::String>
  InstanceAttributeUpdates& WithBundleId(BundleIdT&& value) {
    SetBundleId(std::forward<BundleIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_bundleId;
  bool m_bundleIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
