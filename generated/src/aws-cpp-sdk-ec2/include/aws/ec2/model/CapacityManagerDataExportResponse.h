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
#include <aws/ec2/model/CapacityManagerDataExportStatus.h>
#include <aws/ec2/model/OutputFormat.h>
#include <aws/ec2/model/Schedule.h>
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
 * <p> Contains information about a Capacity Manager data export configuration,
 * including export settings, delivery status, and recent export activity.
 * </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CapacityManagerDataExportResponse">AWS
 * API Reference</a></p>
 */
class CapacityManagerDataExportResponse {
 public:
  AWS_EC2_API CapacityManagerDataExportResponse() = default;
  AWS_EC2_API CapacityManagerDataExportResponse(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API CapacityManagerDataExportResponse& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p> The unique identifier for the data export configuration. </p>
   */
  inline const Aws::String& GetCapacityManagerDataExportId() const { return m_capacityManagerDataExportId; }
  inline bool CapacityManagerDataExportIdHasBeenSet() const { return m_capacityManagerDataExportIdHasBeenSet; }
  template <typename CapacityManagerDataExportIdT = Aws::String>
  void SetCapacityManagerDataExportId(CapacityManagerDataExportIdT&& value) {
    m_capacityManagerDataExportIdHasBeenSet = true;
    m_capacityManagerDataExportId = std::forward<CapacityManagerDataExportIdT>(value);
  }
  template <typename CapacityManagerDataExportIdT = Aws::String>
  CapacityManagerDataExportResponse& WithCapacityManagerDataExportId(CapacityManagerDataExportIdT&& value) {
    SetCapacityManagerDataExportId(std::forward<CapacityManagerDataExportIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The name of the S3 bucket where export files are delivered. </p>
   */
  inline const Aws::String& GetS3BucketName() const { return m_s3BucketName; }
  inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }
  template <typename S3BucketNameT = Aws::String>
  void SetS3BucketName(S3BucketNameT&& value) {
    m_s3BucketNameHasBeenSet = true;
    m_s3BucketName = std::forward<S3BucketNameT>(value);
  }
  template <typename S3BucketNameT = Aws::String>
  CapacityManagerDataExportResponse& WithS3BucketName(S3BucketNameT&& value) {
    SetS3BucketName(std::forward<S3BucketNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The S3 key prefix used for organizing export files within the bucket. </p>
   */
  inline const Aws::String& GetS3BucketPrefix() const { return m_s3BucketPrefix; }
  inline bool S3BucketPrefixHasBeenSet() const { return m_s3BucketPrefixHasBeenSet; }
  template <typename S3BucketPrefixT = Aws::String>
  void SetS3BucketPrefix(S3BucketPrefixT&& value) {
    m_s3BucketPrefixHasBeenSet = true;
    m_s3BucketPrefix = std::forward<S3BucketPrefixT>(value);
  }
  template <typename S3BucketPrefixT = Aws::String>
  CapacityManagerDataExportResponse& WithS3BucketPrefix(S3BucketPrefixT&& value) {
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
  inline CapacityManagerDataExportResponse& WithSchedule(Schedule value) {
    SetSchedule(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The file format of the exported data. </p>
   */
  inline OutputFormat GetOutputFormat() const { return m_outputFormat; }
  inline bool OutputFormatHasBeenSet() const { return m_outputFormatHasBeenSet; }
  inline void SetOutputFormat(OutputFormat value) {
    m_outputFormatHasBeenSet = true;
    m_outputFormat = value;
  }
  inline CapacityManagerDataExportResponse& WithOutputFormat(OutputFormat value) {
    SetOutputFormat(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The timestamp when the data export configuration was created. </p>
   */
  inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
  inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
  template <typename CreateTimeT = Aws::Utils::DateTime>
  void SetCreateTime(CreateTimeT&& value) {
    m_createTimeHasBeenSet = true;
    m_createTime = std::forward<CreateTimeT>(value);
  }
  template <typename CreateTimeT = Aws::Utils::DateTime>
  CapacityManagerDataExportResponse& WithCreateTime(CreateTimeT&& value) {
    SetCreateTime(std::forward<CreateTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The status of the most recent export delivery. </p>
   */
  inline CapacityManagerDataExportStatus GetLatestDeliveryStatus() const { return m_latestDeliveryStatus; }
  inline bool LatestDeliveryStatusHasBeenSet() const { return m_latestDeliveryStatusHasBeenSet; }
  inline void SetLatestDeliveryStatus(CapacityManagerDataExportStatus value) {
    m_latestDeliveryStatusHasBeenSet = true;
    m_latestDeliveryStatus = value;
  }
  inline CapacityManagerDataExportResponse& WithLatestDeliveryStatus(CapacityManagerDataExportStatus value) {
    SetLatestDeliveryStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> A message describing the status of the most recent export delivery,
   * including any error details if the delivery failed. </p>
   */
  inline const Aws::String& GetLatestDeliveryStatusMessage() const { return m_latestDeliveryStatusMessage; }
  inline bool LatestDeliveryStatusMessageHasBeenSet() const { return m_latestDeliveryStatusMessageHasBeenSet; }
  template <typename LatestDeliveryStatusMessageT = Aws::String>
  void SetLatestDeliveryStatusMessage(LatestDeliveryStatusMessageT&& value) {
    m_latestDeliveryStatusMessageHasBeenSet = true;
    m_latestDeliveryStatusMessage = std::forward<LatestDeliveryStatusMessageT>(value);
  }
  template <typename LatestDeliveryStatusMessageT = Aws::String>
  CapacityManagerDataExportResponse& WithLatestDeliveryStatusMessage(LatestDeliveryStatusMessageT&& value) {
    SetLatestDeliveryStatusMessage(std::forward<LatestDeliveryStatusMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The S3 URI of the most recently delivered export file. </p>
   */
  inline const Aws::String& GetLatestDeliveryS3LocationUri() const { return m_latestDeliveryS3LocationUri; }
  inline bool LatestDeliveryS3LocationUriHasBeenSet() const { return m_latestDeliveryS3LocationUriHasBeenSet; }
  template <typename LatestDeliveryS3LocationUriT = Aws::String>
  void SetLatestDeliveryS3LocationUri(LatestDeliveryS3LocationUriT&& value) {
    m_latestDeliveryS3LocationUriHasBeenSet = true;
    m_latestDeliveryS3LocationUri = std::forward<LatestDeliveryS3LocationUriT>(value);
  }
  template <typename LatestDeliveryS3LocationUriT = Aws::String>
  CapacityManagerDataExportResponse& WithLatestDeliveryS3LocationUri(LatestDeliveryS3LocationUriT&& value) {
    SetLatestDeliveryS3LocationUri(std::forward<LatestDeliveryS3LocationUriT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The timestamp when the most recent export was delivered to S3. </p>
   */
  inline const Aws::Utils::DateTime& GetLatestDeliveryTime() const { return m_latestDeliveryTime; }
  inline bool LatestDeliveryTimeHasBeenSet() const { return m_latestDeliveryTimeHasBeenSet; }
  template <typename LatestDeliveryTimeT = Aws::Utils::DateTime>
  void SetLatestDeliveryTime(LatestDeliveryTimeT&& value) {
    m_latestDeliveryTimeHasBeenSet = true;
    m_latestDeliveryTime = std::forward<LatestDeliveryTimeT>(value);
  }
  template <typename LatestDeliveryTimeT = Aws::Utils::DateTime>
  CapacityManagerDataExportResponse& WithLatestDeliveryTime(LatestDeliveryTimeT&& value) {
    SetLatestDeliveryTime(std::forward<LatestDeliveryTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The tags associated with the data export configuration. </p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  CapacityManagerDataExportResponse& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CapacityManagerDataExportResponse& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_capacityManagerDataExportId;

  Aws::String m_s3BucketName;

  Aws::String m_s3BucketPrefix;

  Schedule m_schedule{Schedule::NOT_SET};

  OutputFormat m_outputFormat{OutputFormat::NOT_SET};

  Aws::Utils::DateTime m_createTime{};

  CapacityManagerDataExportStatus m_latestDeliveryStatus{CapacityManagerDataExportStatus::NOT_SET};

  Aws::String m_latestDeliveryStatusMessage;

  Aws::String m_latestDeliveryS3LocationUri;

  Aws::Utils::DateTime m_latestDeliveryTime{};

  Aws::Vector<Tag> m_tags;
  bool m_capacityManagerDataExportIdHasBeenSet = false;
  bool m_s3BucketNameHasBeenSet = false;
  bool m_s3BucketPrefixHasBeenSet = false;
  bool m_scheduleHasBeenSet = false;
  bool m_outputFormatHasBeenSet = false;
  bool m_createTimeHasBeenSet = false;
  bool m_latestDeliveryStatusHasBeenSet = false;
  bool m_latestDeliveryStatusMessageHasBeenSet = false;
  bool m_latestDeliveryS3LocationUriHasBeenSet = false;
  bool m_latestDeliveryTimeHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
