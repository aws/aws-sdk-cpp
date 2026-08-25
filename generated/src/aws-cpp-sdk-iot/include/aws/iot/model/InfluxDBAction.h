/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/InfluxDBBatchConfig.h>
#include <aws/iot/model/InfluxDBTimestampUnit.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace IoT {
namespace Model {

/**
 * <p>The InfluxDB rule action converts the message payload into InfluxDB line
 * protocol. It writes the result to a table in an InfluxDB database. The database
 * can be an Amazon Timestream for InfluxDB instance or a self-managed InfluxDB
 * cluster.</p> <p>The action connects to InfluxDB through an InfluxDB topic rule
 * destination, which must be in the <code>ENABLED</code> state before the action
 * can write data.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/InfluxDBAction">AWS
 * API Reference</a></p>
 */
class InfluxDBAction {
 public:
  AWS_IOT_API InfluxDBAction() = default;
  AWS_IOT_API InfluxDBAction(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOT_API InfluxDBAction& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the InfluxDB topic rule destination that identifies the InfluxDB
   * instance to write to.</p>
   */
  inline const Aws::String& GetDestinationArn() const { return m_destinationArn; }
  inline bool DestinationArnHasBeenSet() const { return m_destinationArnHasBeenSet; }
  template <typename DestinationArnT = Aws::String>
  void SetDestinationArn(DestinationArnT&& value) {
    m_destinationArnHasBeenSet = true;
    m_destinationArn = std::forward<DestinationArnT>(value);
  }
  template <typename DestinationArnT = Aws::String>
  InfluxDBAction& WithDestinationArn(DestinationArnT&& value) {
    SetDestinationArn(std::forward<DestinationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the role that grants permission to retrieve the InfluxDB API token
   * from Amazon Web Services Secrets Manager.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  InfluxDBAction& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the InfluxDB database to write to. In InfluxDB 2, this is the
   * name of the bucket.</p>
   */
  inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
  inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
  template <typename DatabaseNameT = Aws::String>
  void SetDatabaseName(DatabaseNameT&& value) {
    m_databaseNameHasBeenSet = true;
    m_databaseName = std::forward<DatabaseNameT>(value);
  }
  template <typename DatabaseNameT = Aws::String>
  InfluxDBAction& WithDatabaseName(DatabaseNameT&& value) {
    SetDatabaseName(std::forward<DatabaseNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the table to write the data point to. This is the measurement
   * name of the InfluxDB line protocol record.</p> <p>Accepts substitution
   * templates.</p>
   */
  inline const Aws::String& GetTableName() const { return m_tableName; }
  inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
  template <typename TableNameT = Aws::String>
  void SetTableName(TableNameT&& value) {
    m_tableNameHasBeenSet = true;
    m_tableName = std::forward<TableNameT>(value);
  }
  template <typename TableNameT = Aws::String>
  InfluxDBAction& WithTableName(TableNameT&& value) {
    SetTableName(std::forward<TableNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the InfluxDB organization that owns the database.</p> <p>A write
   * to an InfluxDB 2 instance fails if this value isn't set. This value isn't used
   * when the destination is an InfluxDB 3 instance.</p>
   */
  inline const Aws::String& GetOrganization() const { return m_organization; }
  inline bool OrganizationHasBeenSet() const { return m_organizationHasBeenSet; }
  template <typename OrganizationT = Aws::String>
  void SetOrganization(OrganizationT&& value) {
    m_organizationHasBeenSet = true;
    m_organization = std::forward<OrganizationT>(value);
  }
  template <typename OrganizationT = Aws::String>
  InfluxDBAction& WithOrganization(OrganizationT&& value) {
    SetOrganization(std::forward<OrganizationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The set of tags to write with each data point. Tags are the indexed metadata
   * of an InfluxDB data point.</p> <p>Tag names and tag values accept substitution
   * templates. A tag name can't use the <code>@{...}</code> per-element form. A tag
   * name must resolve to the same value for every element of an array payload.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  InfluxDBAction& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  InfluxDBAction& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The precision of the timestamp written with each data point. Valid values are
   * <code>s</code> (seconds), <code>ms</code> (milliseconds), <code>us</code>
   * (microseconds), and <code>ns</code> (nanoseconds).</p> <p>If omitted, the topic
   * rule action uses <code>ms</code>.</p>
   */
  inline InfluxDBTimestampUnit GetTimestampUnit() const { return m_timestampUnit; }
  inline bool TimestampUnitHasBeenSet() const { return m_timestampUnitHasBeenSet; }
  inline void SetTimestampUnit(InfluxDBTimestampUnit value) {
    m_timestampUnitHasBeenSet = true;
    m_timestampUnit = value;
  }
  inline InfluxDBAction& WithTimestampUnit(InfluxDBTimestampUnit value) {
    SetTimestampUnit(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The batching configuration for the action. When present, IoT collects data
   * points from multiple messages and writes them to InfluxDB in a single
   * request.</p> <p>If omitted, each message is written to InfluxDB in its own
   * request.</p>
   */
  inline const InfluxDBBatchConfig& GetBatchConfig() const { return m_batchConfig; }
  inline bool BatchConfigHasBeenSet() const { return m_batchConfigHasBeenSet; }
  template <typename BatchConfigT = InfluxDBBatchConfig>
  void SetBatchConfig(BatchConfigT&& value) {
    m_batchConfigHasBeenSet = true;
    m_batchConfig = std::forward<BatchConfigT>(value);
  }
  template <typename BatchConfigT = InfluxDBBatchConfig>
  InfluxDBAction& WithBatchConfig(BatchConfigT&& value) {
    SetBatchConfig(std::forward<BatchConfigT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_destinationArn;

  Aws::String m_roleArn;

  Aws::String m_databaseName;

  Aws::String m_tableName;

  Aws::String m_organization;

  Aws::Map<Aws::String, Aws::String> m_tags;

  InfluxDBTimestampUnit m_timestampUnit{InfluxDBTimestampUnit::NOT_SET};

  InfluxDBBatchConfig m_batchConfig;
  bool m_destinationArnHasBeenSet = false;
  bool m_roleArnHasBeenSet = false;
  bool m_databaseNameHasBeenSet = false;
  bool m_tableNameHasBeenSet = false;
  bool m_organizationHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_timestampUnitHasBeenSet = false;
  bool m_batchConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoT
}  // namespace Aws
