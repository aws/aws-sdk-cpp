/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/HaStatus.h>
#include <aws/ec2/model/SqlServerLicenseUsage.h>
#include <aws/ec2/model/Tag.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace EC2 {
namespace Model {

/**
 * <p>Describes an Amazon EC2 instance that is enabled for SQL Server High
 * Availability standby detection monitoring.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RegisteredInstance">AWS
 * API Reference</a></p>
 */
class RegisteredInstance {
 public:
  AWS_EC2_API RegisteredInstance() = default;
  AWS_EC2_API RegisteredInstance(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API RegisteredInstance& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The ID of the SQL Server High Availability instance.</p>
   */
  inline const Aws::String& GetInstanceId() const { return m_instanceId; }
  inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
  template <typename InstanceIdT = Aws::String>
  void SetInstanceId(InstanceIdT&& value) {
    m_instanceIdHasBeenSet = true;
    m_instanceId = std::forward<InstanceIdT>(value);
  }
  template <typename InstanceIdT = Aws::String>
  RegisteredInstance& WithInstanceId(InstanceIdT&& value) {
    SetInstanceId(std::forward<InstanceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The license type for the SQL Server license. Valid values include:</p> <ul>
   * <li> <p> <code>full</code> - The SQL Server High Availability instance is using
   * a full SQL Server license.</p> </li> <li> <p> <code>waived</code> - The SQL
   * Server High Availability instance is waived from the SQL Server license.</p>
   * </li> </ul>
   */
  inline SqlServerLicenseUsage GetSqlServerLicenseUsage() const { return m_sqlServerLicenseUsage; }
  inline bool SqlServerLicenseUsageHasBeenSet() const { return m_sqlServerLicenseUsageHasBeenSet; }
  inline void SetSqlServerLicenseUsage(SqlServerLicenseUsage value) {
    m_sqlServerLicenseUsageHasBeenSet = true;
    m_sqlServerLicenseUsage = value;
  }
  inline RegisteredInstance& WithSqlServerLicenseUsage(SqlServerLicenseUsage value) {
    SetSqlServerLicenseUsage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The SQL Server High Availability status of the instance. Valid values
   * are:</p> <ul> <li> <p> <code>processing</code> - The SQL Server High
   * Availability status for the SQL Server High Availability instance is being
   * updated.</p> </li> <li> <p> <code>active</code> - The SQL Server High
   * Availability instance is an active node in an SQL Server High Availability
   * cluster.</p> </li> <li> <p> <code>standby</code> - The SQL Server High
   * Availability instance is a standby failover node in an SQL Server High
   * Availability cluster.</p> </li> <li> <p> <code>invalid</code> - An error
   * occurred due to misconfigured permissions, or unable to dertemine SQL Server
   * High Availability status for the SQL Server High Availability instance.</p>
   * </li> </ul>
   */
  inline HaStatus GetHaStatus() const { return m_haStatus; }
  inline bool HaStatusHasBeenSet() const { return m_haStatusHasBeenSet; }
  inline void SetHaStatus(HaStatus value) {
    m_haStatusHasBeenSet = true;
    m_haStatus = value;
  }
  inline RegisteredInstance& WithHaStatus(HaStatus value) {
    SetHaStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A brief description of the SQL Server High Availability status. If the
   * instance is in the <code>invalid</code> High Availability status, this parameter
   * includes the error message.</p>
   */
  inline const Aws::String& GetProcessingStatus() const { return m_processingStatus; }
  inline bool ProcessingStatusHasBeenSet() const { return m_processingStatusHasBeenSet; }
  template <typename ProcessingStatusT = Aws::String>
  void SetProcessingStatus(ProcessingStatusT&& value) {
    m_processingStatusHasBeenSet = true;
    m_processingStatus = std::forward<ProcessingStatusT>(value);
  }
  template <typename ProcessingStatusT = Aws::String>
  RegisteredInstance& WithProcessingStatus(ProcessingStatusT&& value) {
    SetProcessingStatus(std::forward<ProcessingStatusT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the instance's SQL Server High Availability status was
   * last updated, in the ISO 8601 format in the UTC time zone
   * (<code>YYYY-MM-DDThh:mm:ss.sssZ</code>).</p>
   */
  inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
  inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
  template <typename LastUpdatedTimeT = Aws::Utils::DateTime>
  void SetLastUpdatedTime(LastUpdatedTimeT&& value) {
    m_lastUpdatedTimeHasBeenSet = true;
    m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value);
  }
  template <typename LastUpdatedTimeT = Aws::Utils::DateTime>
  RegisteredInstance& WithLastUpdatedTime(LastUpdatedTimeT&& value) {
    SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the Secrets Manager secret containing the SQL Server access
   * credentials for the SQL Server High Availability instance. If not specified,
   * deafult local user credentials will be used by the Amazon Web Services Systems
   * Manager agent.</p>
   */
  inline const Aws::String& GetSqlServerCredentials() const { return m_sqlServerCredentials; }
  inline bool SqlServerCredentialsHasBeenSet() const { return m_sqlServerCredentialsHasBeenSet; }
  template <typename SqlServerCredentialsT = Aws::String>
  void SetSqlServerCredentials(SqlServerCredentialsT&& value) {
    m_sqlServerCredentialsHasBeenSet = true;
    m_sqlServerCredentials = std::forward<SqlServerCredentialsT>(value);
  }
  template <typename SqlServerCredentialsT = Aws::String>
  RegisteredInstance& WithSqlServerCredentials(SqlServerCredentialsT&& value) {
    SetSqlServerCredentials(std::forward<SqlServerCredentialsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags assigned to the SQL Server High Availability instance.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  RegisteredInstance& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  RegisteredInstance& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceId;
  bool m_instanceIdHasBeenSet = false;

  SqlServerLicenseUsage m_sqlServerLicenseUsage{SqlServerLicenseUsage::NOT_SET};
  bool m_sqlServerLicenseUsageHasBeenSet = false;

  HaStatus m_haStatus{HaStatus::NOT_SET};
  bool m_haStatusHasBeenSet = false;

  Aws::String m_processingStatus;
  bool m_processingStatusHasBeenSet = false;

  Aws::Utils::DateTime m_lastUpdatedTime{};
  bool m_lastUpdatedTimeHasBeenSet = false;

  Aws::String m_sqlServerCredentials;
  bool m_sqlServerCredentialsHasBeenSet = false;

  Aws::Vector<Tag> m_tags;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
