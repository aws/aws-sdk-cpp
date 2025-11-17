/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/EC2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace EC2 {
namespace Model {

/**
 */
class EnableInstanceSqlHaStandbyDetectionsRequest : public EC2Request {
 public:
  AWS_EC2_API EnableInstanceSqlHaStandbyDetectionsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "EnableInstanceSqlHaStandbyDetections"; }

  AWS_EC2_API Aws::String SerializePayload() const override;

 protected:
  AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>The IDs of the instances to enable for SQL Server High Availability standby
   * detection monitoring.</p>
   */
  inline const Aws::Vector<Aws::String>& GetInstanceIds() const { return m_instanceIds; }
  inline bool InstanceIdsHasBeenSet() const { return m_instanceIdsHasBeenSet; }
  template <typename InstanceIdsT = Aws::Vector<Aws::String>>
  void SetInstanceIds(InstanceIdsT&& value) {
    m_instanceIdsHasBeenSet = true;
    m_instanceIds = std::forward<InstanceIdsT>(value);
  }
  template <typename InstanceIdsT = Aws::Vector<Aws::String>>
  EnableInstanceSqlHaStandbyDetectionsRequest& WithInstanceIds(InstanceIdsT&& value) {
    SetInstanceIds(std::forward<InstanceIdsT>(value));
    return *this;
  }
  template <typename InstanceIdsT = Aws::String>
  EnableInstanceSqlHaStandbyDetectionsRequest& AddInstanceIds(InstanceIdsT&& value) {
    m_instanceIdsHasBeenSet = true;
    m_instanceIds.emplace_back(std::forward<InstanceIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the Secrets Manager secret containing the SQL Server access
   * credentials. The specified secret must contain valid SQL Server credentials for
   * the specified instances. If not specified, deafult local user credentials will
   * be used by the Amazon Web Services Systems Manager agent. To enable instances
   * with different credentials, you must make separate requests.</p>
   */
  inline const Aws::String& GetSqlServerCredentials() const { return m_sqlServerCredentials; }
  inline bool SqlServerCredentialsHasBeenSet() const { return m_sqlServerCredentialsHasBeenSet; }
  template <typename SqlServerCredentialsT = Aws::String>
  void SetSqlServerCredentials(SqlServerCredentialsT&& value) {
    m_sqlServerCredentialsHasBeenSet = true;
    m_sqlServerCredentials = std::forward<SqlServerCredentialsT>(value);
  }
  template <typename SqlServerCredentialsT = Aws::String>
  EnableInstanceSqlHaStandbyDetectionsRequest& WithSqlServerCredentials(SqlServerCredentialsT&& value) {
    SetSqlServerCredentials(std::forward<SqlServerCredentialsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Checks whether you have the required permissions for the action, without
   * actually making the request, and provides an error response. If you have the
   * required permissions, the error response is <code>DryRunOperation</code>.
   * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
   */
  inline bool GetDryRun() const { return m_dryRun; }
  inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
  inline void SetDryRun(bool value) {
    m_dryRunHasBeenSet = true;
    m_dryRun = value;
  }
  inline EnableInstanceSqlHaStandbyDetectionsRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_instanceIds;
  bool m_instanceIdsHasBeenSet = false;

  Aws::String m_sqlServerCredentials;
  bool m_sqlServerCredentialsHasBeenSet = false;

  bool m_dryRun{false};
  bool m_dryRunHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
