/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/OutputFormat.h>
#include <aws/ec2/model/Schedule.h>
#include <aws/ec2/model/TagSpecification.h>

#include <utility>

namespace Aws {
namespace EC2 {
namespace Model {

/**
 */
class CreateCapacityManagerDataExportRequest : public EC2Request {
 public:
  AWS_EC2_API CreateCapacityManagerDataExportRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateCapacityManagerDataExport"; }

  AWS_EC2_API Aws::String SerializePayload() const override;

 protected:
  AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p> The name of the S3 bucket where the capacity data export files will be
   * delivered. The bucket must exist and you must have write permissions to it. </p>
   */
  inline const Aws::String& GetS3BucketName() const { return m_s3BucketName; }
  inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }
  template <typename S3BucketNameT = Aws::String>
  void SetS3BucketName(S3BucketNameT&& value) {
    m_s3BucketNameHasBeenSet = true;
    m_s3BucketName = std::forward<S3BucketNameT>(value);
  }
  template <typename S3BucketNameT = Aws::String>
  CreateCapacityManagerDataExportRequest& WithS3BucketName(S3BucketNameT&& value) {
    SetS3BucketName(std::forward<S3BucketNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The S3 key prefix for the exported data files. This allows you to organize
   * exports in a specific folder structure within your bucket. If not specified,
   * files are placed at the bucket root. </p>
   */
  inline const Aws::String& GetS3BucketPrefix() const { return m_s3BucketPrefix; }
  inline bool S3BucketPrefixHasBeenSet() const { return m_s3BucketPrefixHasBeenSet; }
  template <typename S3BucketPrefixT = Aws::String>
  void SetS3BucketPrefix(S3BucketPrefixT&& value) {
    m_s3BucketPrefixHasBeenSet = true;
    m_s3BucketPrefix = std::forward<S3BucketPrefixT>(value);
  }
  template <typename S3BucketPrefixT = Aws::String>
  CreateCapacityManagerDataExportRequest& WithS3BucketPrefix(S3BucketPrefixT&& value) {
    SetS3BucketPrefix(std::forward<S3BucketPrefixT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The frequency at which data exports are generated. </p>
   */
  inline Schedule GetSchedule() const { return m_schedule; }
  inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
  inline void SetSchedule(Schedule value) {
    m_scheduleHasBeenSet = true;
    m_schedule = value;
  }
  inline CreateCapacityManagerDataExportRequest& WithSchedule(Schedule value) {
    SetSchedule(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The file format for the exported data. Parquet format is recommended for
   * large datasets and better compression. </p>
   */
  inline OutputFormat GetOutputFormat() const { return m_outputFormat; }
  inline bool OutputFormatHasBeenSet() const { return m_outputFormatHasBeenSet; }
  inline void SetOutputFormat(OutputFormat value) {
    m_outputFormatHasBeenSet = true;
    m_outputFormat = value;
  }
  inline CreateCapacityManagerDataExportRequest& WithOutputFormat(OutputFormat value) {
    SetOutputFormat(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Unique, case-sensitive identifier that you provide to ensure the idempotency
   * of the request. For more information, see Ensure Idempotency. </p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateCapacityManagerDataExportRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
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
  inline CreateCapacityManagerDataExportRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The tags to apply to the data export configuration. You can tag the export
   * for organization and cost tracking purposes. </p>
   */
  inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const { return m_tagSpecifications; }
  inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
  template <typename TagSpecificationsT = Aws::Vector<TagSpecification>>
  void SetTagSpecifications(TagSpecificationsT&& value) {
    m_tagSpecificationsHasBeenSet = true;
    m_tagSpecifications = std::forward<TagSpecificationsT>(value);
  }
  template <typename TagSpecificationsT = Aws::Vector<TagSpecification>>
  CreateCapacityManagerDataExportRequest& WithTagSpecifications(TagSpecificationsT&& value) {
    SetTagSpecifications(std::forward<TagSpecificationsT>(value));
    return *this;
  }
  template <typename TagSpecificationsT = TagSpecification>
  CreateCapacityManagerDataExportRequest& AddTagSpecifications(TagSpecificationsT&& value) {
    m_tagSpecificationsHasBeenSet = true;
    m_tagSpecifications.emplace_back(std::forward<TagSpecificationsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_s3BucketName;
  bool m_s3BucketNameHasBeenSet = false;

  Aws::String m_s3BucketPrefix;
  bool m_s3BucketPrefixHasBeenSet = false;

  Schedule m_schedule{Schedule::NOT_SET};
  bool m_scheduleHasBeenSet = false;

  OutputFormat m_outputFormat{OutputFormat::NOT_SET};
  bool m_outputFormatHasBeenSet = false;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_clientTokenHasBeenSet = true;

  bool m_dryRun{false};
  bool m_dryRunHasBeenSet = false;

  Aws::Vector<TagSpecification> m_tagSpecifications;
  bool m_tagSpecificationsHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
