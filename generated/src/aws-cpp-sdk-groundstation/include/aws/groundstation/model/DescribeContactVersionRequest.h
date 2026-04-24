/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/groundstation/GroundStationRequest.h>
#include <aws/groundstation/GroundStation_EXPORTS.h>

#include <utility>

namespace Aws {
namespace GroundStation {
namespace Model {

/**
 */
class DescribeContactVersionRequest : public GroundStationRequest {
 public:
  AWS_GROUNDSTATION_API DescribeContactVersionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeContactVersion"; }

  AWS_GROUNDSTATION_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>UUID of a contact.</p>
   */
  inline const Aws::String& GetContactId() const { return m_contactId; }
  inline bool ContactIdHasBeenSet() const { return m_contactIdHasBeenSet; }
  template <typename ContactIdT = Aws::String>
  void SetContactId(ContactIdT&& value) {
    m_contactIdHasBeenSet = true;
    m_contactId = std::forward<ContactIdT>(value);
  }
  template <typename ContactIdT = Aws::String>
  DescribeContactVersionRequest& WithContactId(ContactIdT&& value) {
    SetContactId(std::forward<ContactIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Version ID of a contact.</p>
   */
  inline int GetVersionId() const { return m_versionId; }
  inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }
  inline void SetVersionId(int value) {
    m_versionIdHasBeenSet = true;
    m_versionId = value;
  }
  inline DescribeContactVersionRequest& WithVersionId(int value) {
    SetVersionId(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_contactId;

  int m_versionId{0};
  bool m_contactIdHasBeenSet = false;
  bool m_versionIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
