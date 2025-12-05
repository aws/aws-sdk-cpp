/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2_EXPORTS.h>
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
class DeleteCapacityManagerDataExportResponse {
 public:
  AWS_EC2_API DeleteCapacityManagerDataExportResponse() = default;
  AWS_EC2_API DeleteCapacityManagerDataExportResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_EC2_API DeleteCapacityManagerDataExportResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p> The unique identifier of the deleted data export configuration. </p>
   */
  inline const Aws::String& GetCapacityManagerDataExportId() const { return m_capacityManagerDataExportId; }
  template <typename CapacityManagerDataExportIdT = Aws::String>
  void SetCapacityManagerDataExportId(CapacityManagerDataExportIdT&& value) {
    m_capacityManagerDataExportIdHasBeenSet = true;
    m_capacityManagerDataExportId = std::forward<CapacityManagerDataExportIdT>(value);
  }
  template <typename CapacityManagerDataExportIdT = Aws::String>
  DeleteCapacityManagerDataExportResponse& WithCapacityManagerDataExportId(CapacityManagerDataExportIdT&& value) {
    SetCapacityManagerDataExportId(std::forward<CapacityManagerDataExportIdT>(value));
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
  DeleteCapacityManagerDataExportResponse& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_capacityManagerDataExportId;

  ResponseMetadata m_responseMetadata;
  bool m_capacityManagerDataExportIdHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
