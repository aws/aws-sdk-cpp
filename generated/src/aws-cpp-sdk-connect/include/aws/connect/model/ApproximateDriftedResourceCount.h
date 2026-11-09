/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p>Contains an approximate count of the resources of a given type that are not
 * yet in sync in a Region, along with the time the count was last
 * calculated.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ApproximateDriftedResourceCount">AWS
 * API Reference</a></p>
 */
class ApproximateDriftedResourceCount {
 public:
  AWS_CONNECT_API ApproximateDriftedResourceCount() = default;
  AWS_CONNECT_API ApproximateDriftedResourceCount(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API ApproximateDriftedResourceCount& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Web Services Region that the count applies to.</p>
   */
  inline const Aws::String& GetRegion() const { return m_region; }
  inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
  template <typename RegionT = Aws::String>
  void SetRegion(RegionT&& value) {
    m_regionHasBeenSet = true;
    m_region = std::forward<RegionT>(value);
  }
  template <typename RegionT = Aws::String>
  ApproximateDriftedResourceCount& WithRegion(RegionT&& value) {
    SetRegion(std::forward<RegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The approximate number of resources of the requested type that are not yet in
   * sync in the Region. A value of zero means the resources are in sync.</p>
   */
  inline long long GetCount() const { return m_count; }
  inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
  inline void SetCount(long long value) {
    m_countHasBeenSet = true;
    m_count = value;
  }
  inline ApproximateDriftedResourceCount& WithCount(long long value) {
    SetCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time, in Unix epoch time, when the count was last calculated.</p>
   */
  inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
  inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
  template <typename TimestampT = Aws::Utils::DateTime>
  void SetTimestamp(TimestampT&& value) {
    m_timestampHasBeenSet = true;
    m_timestamp = std::forward<TimestampT>(value);
  }
  template <typename TimestampT = Aws::Utils::DateTime>
  ApproximateDriftedResourceCount& WithTimestamp(TimestampT&& value) {
    SetTimestamp(std::forward<TimestampT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_region;

  long long m_count{0};

  Aws::Utils::DateTime m_timestamp{};
  bool m_regionHasBeenSet = false;
  bool m_countHasBeenSet = false;
  bool m_timestampHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
