/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/LogType.h>
#include <aws/elasticmapreduce/model/LogUploadPolicyValue.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace EMR {
namespace Model {

/**
 * <p>Configuration for S3 logging behavior in EMR clusters. Defines how different
 * types of logs are uploaded to S3 based on the specified upload policies for each
 * log type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/S3LoggingConfiguration">AWS
 * API Reference</a></p>
 */
class S3LoggingConfiguration {
 public:
  AWS_EMR_API S3LoggingConfiguration() = default;
  AWS_EMR_API S3LoggingConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_EMR_API S3LoggingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A map that specifies the upload policy for each log type. The key is the log
   * type, and the value is the upload policy.</p> <p>Valid log types:</p> <ul> <li>
   * <p> <code>system-logs</code>: EMR Daemon logs.</p> </li> <li> <p>
   * <code>application-logs</code>: Framework logs from Hadoop, Spark, Hive and other
   * applications running on the cluster.</p> </li> <li> <p>
   * <code>persistent-ui-logs</code>: Logs required for persistent application UIs
   * such as Spark History Server and Tez UI.</p> </li> </ul> <p>Valid upload
   * policies:</p> <ul> <li> <p> <code>emr-managed</code>: Standard behavior. Logs
   * are uploaded to S3 bucket as configured in your LogUri, with certain logs
   * retained by the service for operational support and troubleshooting
   * purposes.</p> </li> <li> <p> <code>on-customer-s3only</code>: Logs are uploaded
   * only to the customer-specified S3 bucket. This requires you to specify a LogUri
   * when creating the cluster. Persistent-ui-logs cannot have on-customer-s3only
   * policy. Allowed policies for persistent-ui-logs are emr-managed and
   * disabled.</p> </li> <li> <p> <code>disabled</code>: No S3 upload for this log
   * type.</p> </li> </ul>
   */
  inline const Aws::Map<LogType, LogUploadPolicyValue>& GetLogTypeUploadPolicy() const { return m_logTypeUploadPolicy; }
  inline bool LogTypeUploadPolicyHasBeenSet() const { return m_logTypeUploadPolicyHasBeenSet; }
  template <typename LogTypeUploadPolicyT = Aws::Map<LogType, LogUploadPolicyValue>>
  void SetLogTypeUploadPolicy(LogTypeUploadPolicyT&& value) {
    m_logTypeUploadPolicyHasBeenSet = true;
    m_logTypeUploadPolicy = std::forward<LogTypeUploadPolicyT>(value);
  }
  template <typename LogTypeUploadPolicyT = Aws::Map<LogType, LogUploadPolicyValue>>
  S3LoggingConfiguration& WithLogTypeUploadPolicy(LogTypeUploadPolicyT&& value) {
    SetLogTypeUploadPolicy(std::forward<LogTypeUploadPolicyT>(value));
    return *this;
  }
  inline S3LoggingConfiguration& AddLogTypeUploadPolicy(LogType key, LogUploadPolicyValue value) {
    m_logTypeUploadPolicyHasBeenSet = true;
    m_logTypeUploadPolicy.emplace(key, value);
    return *this;
  }
  ///@}
 private:
  Aws::Map<LogType, LogUploadPolicyValue> m_logTypeUploadPolicy;
  bool m_logTypeUploadPolicyHasBeenSet = false;
};

}  // namespace Model
}  // namespace EMR
}  // namespace Aws
