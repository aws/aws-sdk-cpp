/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/CapacityManagerStatus.h>
#include <aws/ec2/model/IngestionStatus.h>
#include <aws/ec2/model/ResponseMetadata.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Xml {
class XmlDocument;
}  // namespace Xml
}  // namespace Utils
namespace EC2 {
namespace Model {
class GetCapacityManagerAttributesResponse {
 public:
  AWS_EC2_API GetCapacityManagerAttributesResponse() = default;
  AWS_EC2_API GetCapacityManagerAttributesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API GetCapacityManagerAttributesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p> The current status of Capacity Manager. </p>
   */
  inline CapacityManagerStatus GetCapacityManagerStatus() const { return m_capacityManagerStatus; }
  inline void SetCapacityManagerStatus(CapacityManagerStatus value) {
    m_capacityManagerStatusHasBeenSet = true;
    m_capacityManagerStatus = value;
  }
  inline GetCapacityManagerAttributesResponse& WithCapacityManagerStatus(CapacityManagerStatus value) {
    SetCapacityManagerStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Indicates whether Organizations access is enabled for cross-account data
   * aggregation. </p>
   */
  inline bool GetOrganizationsAccess() const { return m_organizationsAccess; }
  inline void SetOrganizationsAccess(bool value) {
    m_organizationsAccessHasBeenSet = true;
    m_organizationsAccess = value;
  }
  inline GetCapacityManagerAttributesResponse& WithOrganizationsAccess(bool value) {
    SetOrganizationsAccess(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The number of active data export configurations for this account. This count
   * includes all data exports regardless of their current delivery status. </p>
   */
  inline int GetDataExportCount() const { return m_dataExportCount; }
  inline void SetDataExportCount(int value) {
    m_dataExportCountHasBeenSet = true;
    m_dataExportCount = value;
  }
  inline GetCapacityManagerAttributesResponse& WithDataExportCount(int value) {
    SetDataExportCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The current data ingestion status. Initial ingestion may take several hours
   * after enabling Capacity Manager. </p>
   */
  inline IngestionStatus GetIngestionStatus() const { return m_ingestionStatus; }
  inline void SetIngestionStatus(IngestionStatus value) {
    m_ingestionStatusHasBeenSet = true;
    m_ingestionStatus = value;
  }
  inline GetCapacityManagerAttributesResponse& WithIngestionStatus(IngestionStatus value) {
    SetIngestionStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> A descriptive message providing additional details about the current
   * ingestion status. This may include error information if ingestion has failed or
   * progress details during initial setup. </p>
   */
  inline const Aws::String& GetIngestionStatusMessage() const { return m_ingestionStatusMessage; }
  template <typename IngestionStatusMessageT = Aws::String>
  void SetIngestionStatusMessage(IngestionStatusMessageT&& value) {
    m_ingestionStatusMessageHasBeenSet = true;
    m_ingestionStatusMessage = std::forward<IngestionStatusMessageT>(value);
  }
  template <typename IngestionStatusMessageT = Aws::String>
  GetCapacityManagerAttributesResponse& WithIngestionStatusMessage(IngestionStatusMessageT&& value) {
    SetIngestionStatusMessage(std::forward<IngestionStatusMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The timestamp of the earliest data point available in Capacity Manager, in
   * milliseconds since epoch. This indicates how far back historical data is
   * available for queries. </p>
   */
  inline const Aws::Utils::DateTime& GetEarliestDatapointTimestamp() const { return m_earliestDatapointTimestamp; }
  template <typename EarliestDatapointTimestampT = Aws::Utils::DateTime>
  void SetEarliestDatapointTimestamp(EarliestDatapointTimestampT&& value) {
    m_earliestDatapointTimestampHasBeenSet = true;
    m_earliestDatapointTimestamp = std::forward<EarliestDatapointTimestampT>(value);
  }
  template <typename EarliestDatapointTimestampT = Aws::Utils::DateTime>
  GetCapacityManagerAttributesResponse& WithEarliestDatapointTimestamp(EarliestDatapointTimestampT&& value) {
    SetEarliestDatapointTimestamp(std::forward<EarliestDatapointTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The timestamp of the most recent data point ingested by Capacity Manager, in
   * milliseconds since epoch. This indicates how current your capacity data is. </p>
   */
  inline const Aws::Utils::DateTime& GetLatestDatapointTimestamp() const { return m_latestDatapointTimestamp; }
  template <typename LatestDatapointTimestampT = Aws::Utils::DateTime>
  void SetLatestDatapointTimestamp(LatestDatapointTimestampT&& value) {
    m_latestDatapointTimestampHasBeenSet = true;
    m_latestDatapointTimestamp = std::forward<LatestDatapointTimestampT>(value);
  }
  template <typename LatestDatapointTimestampT = Aws::Utils::DateTime>
  GetCapacityManagerAttributesResponse& WithLatestDatapointTimestamp(LatestDatapointTimestampT&& value) {
    SetLatestDatapointTimestamp(std::forward<LatestDatapointTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
  template <typename ResponseMetadataT = ResponseMetadata>
  void SetResponseMetadata(ResponseMetadataT&& value) {
    m_responseMetadataHasBeenSet = true;
    m_responseMetadata = std::forward<ResponseMetadataT>(value);
  }
  template <typename ResponseMetadataT = ResponseMetadata>
  GetCapacityManagerAttributesResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  CapacityManagerStatus m_capacityManagerStatus{CapacityManagerStatus::NOT_SET};

  bool m_organizationsAccess{false};

  int m_dataExportCount{0};

  IngestionStatus m_ingestionStatus{IngestionStatus::NOT_SET};

  Aws::String m_ingestionStatusMessage;

  Aws::Utils::DateTime m_earliestDatapointTimestamp{};

  Aws::Utils::DateTime m_latestDatapointTimestamp{};

  ResponseMetadata m_responseMetadata;
  bool m_capacityManagerStatusHasBeenSet = false;
  bool m_organizationsAccessHasBeenSet = false;
  bool m_dataExportCountHasBeenSet = false;
  bool m_ingestionStatusHasBeenSet = false;
  bool m_ingestionStatusMessageHasBeenSet = false;
  bool m_earliestDatapointTimestampHasBeenSet = false;
  bool m_latestDatapointTimestampHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
