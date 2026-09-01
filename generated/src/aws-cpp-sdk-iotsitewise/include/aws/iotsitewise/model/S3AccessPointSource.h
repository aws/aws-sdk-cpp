/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace IoTSiteWise {
namespace Model {

/**
 * <p>Configures a mount that reads from an Amazon S3 access point.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/S3AccessPointSource">AWS
 * API Reference</a></p>
 */
class S3AccessPointSource {
 public:
  AWS_IOTSITEWISE_API S3AccessPointSource() = default;
  AWS_IOTSITEWISE_API S3AccessPointSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API S3AccessPointSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the S3 access point.</p>
   */
  inline const Aws::String& GetAccessPointArn() const { return m_accessPointArn; }
  inline bool AccessPointArnHasBeenSet() const { return m_accessPointArnHasBeenSet; }
  template <typename AccessPointArnT = Aws::String>
  void SetAccessPointArn(AccessPointArnT&& value) {
    m_accessPointArnHasBeenSet = true;
    m_accessPointArn = std::forward<AccessPointArnT>(value);
  }
  template <typename AccessPointArnT = Aws::String>
  S3AccessPointSource& WithAccessPointArn(AccessPointArnT&& value) {
    SetAccessPointArn(std::forward<AccessPointArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional key prefix to scope the mount to a subset of objects at the
   * access point.</p>
   */
  inline const Aws::String& GetPrefix() const { return m_prefix; }
  inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
  template <typename PrefixT = Aws::String>
  void SetPrefix(PrefixT&& value) {
    m_prefixHasBeenSet = true;
    m_prefix = std::forward<PrefixT>(value);
  }
  template <typename PrefixT = Aws::String>
  S3AccessPointSource& WithPrefix(PrefixT&& value) {
    SetPrefix(std::forward<PrefixT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_accessPointArn;

  Aws::String m_prefix;
  bool m_accessPointArnHasBeenSet = false;
  bool m_prefixHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
