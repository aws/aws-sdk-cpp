/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  class CreateCapacityManagerDataExportResponse
  {
  public:
    AWS_EC2_API CreateCapacityManagerDataExportResponse() = default;
    AWS_EC2_API CreateCapacityManagerDataExportResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateCapacityManagerDataExportResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p> The unique identifier for the created data export configuration. Use this ID
     * to reference the export in other API calls. </p>
     */
    inline const Aws::String& GetCapacityManagerDataExportId() const { return m_capacityManagerDataExportId; }
    template<typename CapacityManagerDataExportIdT = Aws::String>
    void SetCapacityManagerDataExportId(CapacityManagerDataExportIdT&& value) { m_capacityManagerDataExportIdHasBeenSet = true; m_capacityManagerDataExportId = std::forward<CapacityManagerDataExportIdT>(value); }
    template<typename CapacityManagerDataExportIdT = Aws::String>
    CreateCapacityManagerDataExportResponse& WithCapacityManagerDataExportId(CapacityManagerDataExportIdT&& value) { SetCapacityManagerDataExportId(std::forward<CapacityManagerDataExportIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CreateCapacityManagerDataExportResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_capacityManagerDataExportId;
    bool m_capacityManagerDataExportIdHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
