/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/EC2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace EC2 {
namespace Model {

/**
 */
class DeleteCapacityManagerDataExportRequest : public EC2Request {
 public:
  AWS_EC2_API DeleteCapacityManagerDataExportRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteCapacityManagerDataExport"; }

  AWS_EC2_API Aws::String SerializePayload() const override;

 protected:
  AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p> The unique identifier of the data export configuration to delete. </p>
   */
  inline const Aws::String& GetCapacityManagerDataExportId() const { return m_capacityManagerDataExportId; }
  inline bool CapacityManagerDataExportIdHasBeenSet() const { return m_capacityManagerDataExportIdHasBeenSet; }
  template <typename CapacityManagerDataExportIdT = Aws::String>
  void SetCapacityManagerDataExportId(CapacityManagerDataExportIdT&& value) {
    m_capacityManagerDataExportIdHasBeenSet = true;
    m_capacityManagerDataExportId = std::forward<CapacityManagerDataExportIdT>(value);
  }
  template <typename CapacityManagerDataExportIdT = Aws::String>
  DeleteCapacityManagerDataExportRequest& WithCapacityManagerDataExportId(CapacityManagerDataExportIdT&& value) {
    SetCapacityManagerDataExportId(std::forward<CapacityManagerDataExportIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Checks whether you have the required permissions for the action, without
   * actually making the request, and provides an error response. If you have the
   * required permissions, the error response is <code>DryRunOperation</code>.
   * Otherwise, it is <code>UnauthorizedOperation</code>. </p>
   */
  inline bool GetDryRun() const { return m_dryRun; }
  inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
  inline void SetDryRun(bool value) {
    m_dryRunHasBeenSet = true;
    m_dryRun = value;
  }
  inline DeleteCapacityManagerDataExportRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_capacityManagerDataExportId;
  bool m_capacityManagerDataExportIdHasBeenSet = false;

  bool m_dryRun{false};
  bool m_dryRunHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
