/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/CapacityManagerStatus.h>
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
  class DisableCapacityManagerResponse
  {
  public:
    AWS_EC2_API DisableCapacityManagerResponse() = default;
    AWS_EC2_API DisableCapacityManagerResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DisableCapacityManagerResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p> The current status of Capacity Manager after the disable operation. </p>
     */
    inline CapacityManagerStatus GetCapacityManagerStatus() const { return m_capacityManagerStatus; }
    inline void SetCapacityManagerStatus(CapacityManagerStatus value) { m_capacityManagerStatusHasBeenSet = true; m_capacityManagerStatus = value; }
    inline DisableCapacityManagerResponse& WithCapacityManagerStatus(CapacityManagerStatus value) { SetCapacityManagerStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates whether Organizations access is enabled. This will be
     * <code>false</code> after disabling Capacity Manager. </p>
     */
    inline bool GetOrganizationsAccess() const { return m_organizationsAccess; }
    inline void SetOrganizationsAccess(bool value) { m_organizationsAccessHasBeenSet = true; m_organizationsAccess = value; }
    inline DisableCapacityManagerResponse& WithOrganizationsAccess(bool value) { SetOrganizationsAccess(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DisableCapacityManagerResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    CapacityManagerStatus m_capacityManagerStatus{CapacityManagerStatus::NOT_SET};
    bool m_capacityManagerStatusHasBeenSet = false;

    bool m_organizationsAccess{false};
    bool m_organizationsAccessHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
