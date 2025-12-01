/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/QuickConnectContactData.h>

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
 * <p> Metadata information for next contact. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/NextContactMetadata">AWS
 * API Reference</a></p>
 */
class NextContactMetadata {
 public:
  AWS_CONNECT_API NextContactMetadata() = default;
  AWS_CONNECT_API NextContactMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API NextContactMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> Quick connect contact data for the next contact metadata. </p>
   */
  inline const QuickConnectContactData& GetQuickConnectContactData() const { return m_quickConnectContactData; }
  inline bool QuickConnectContactDataHasBeenSet() const { return m_quickConnectContactDataHasBeenSet; }
  template <typename QuickConnectContactDataT = QuickConnectContactData>
  void SetQuickConnectContactData(QuickConnectContactDataT&& value) {
    m_quickConnectContactDataHasBeenSet = true;
    m_quickConnectContactData = std::forward<QuickConnectContactDataT>(value);
  }
  template <typename QuickConnectContactDataT = QuickConnectContactData>
  NextContactMetadata& WithQuickConnectContactData(QuickConnectContactDataT&& value) {
    SetQuickConnectContactData(std::forward<QuickConnectContactDataT>(value));
    return *this;
  }
  ///@}
 private:
  QuickConnectContactData m_quickConnectContactData;
  bool m_quickConnectContactDataHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
