/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/ProductCode.h>
#include <aws/ec2/model/CreateVolumePermission.h>
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
  class DescribeSnapshotAttributeResponse
  {
  public:
    AWS_EC2_API DescribeSnapshotAttributeResponse() = default;
    AWS_EC2_API DescribeSnapshotAttributeResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeSnapshotAttributeResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The product codes.</p>
     */
    inline const Aws::Vector<ProductCode>& GetProductCodes() const { return m_productCodes; }
    template<typename ProductCodesT = Aws::Vector<ProductCode>>
    void SetProductCodes(ProductCodesT&& value) { m_productCodesHasBeenSet = true; m_productCodes = std::forward<ProductCodesT>(value); }
    template<typename ProductCodesT = Aws::Vector<ProductCode>>
    DescribeSnapshotAttributeResponse& WithProductCodes(ProductCodesT&& value) { SetProductCodes(std::forward<ProductCodesT>(value)); return *this;}
    template<typename ProductCodesT = ProductCode>
    DescribeSnapshotAttributeResponse& AddProductCodes(ProductCodesT&& value) { m_productCodesHasBeenSet = true; m_productCodes.emplace_back(std::forward<ProductCodesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the EBS snapshot.</p>
     */
    inline const Aws::String& GetSnapshotId() const { return m_snapshotId; }
    template<typename SnapshotIdT = Aws::String>
    void SetSnapshotId(SnapshotIdT&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::forward<SnapshotIdT>(value); }
    template<typename SnapshotIdT = Aws::String>
    DescribeSnapshotAttributeResponse& WithSnapshotId(SnapshotIdT&& value) { SetSnapshotId(std::forward<SnapshotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The users and groups that have the permissions for creating volumes from the
     * snapshot.</p>
     */
    inline const Aws::Vector<CreateVolumePermission>& GetCreateVolumePermissions() const { return m_createVolumePermissions; }
    template<typename CreateVolumePermissionsT = Aws::Vector<CreateVolumePermission>>
    void SetCreateVolumePermissions(CreateVolumePermissionsT&& value) { m_createVolumePermissionsHasBeenSet = true; m_createVolumePermissions = std::forward<CreateVolumePermissionsT>(value); }
    template<typename CreateVolumePermissionsT = Aws::Vector<CreateVolumePermission>>
    DescribeSnapshotAttributeResponse& WithCreateVolumePermissions(CreateVolumePermissionsT&& value) { SetCreateVolumePermissions(std::forward<CreateVolumePermissionsT>(value)); return *this;}
    template<typename CreateVolumePermissionsT = CreateVolumePermission>
    DescribeSnapshotAttributeResponse& AddCreateVolumePermissions(CreateVolumePermissionsT&& value) { m_createVolumePermissionsHasBeenSet = true; m_createVolumePermissions.emplace_back(std::forward<CreateVolumePermissionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeSnapshotAttributeResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ProductCode> m_productCodes;
    bool m_productCodesHasBeenSet = false;

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;

    Aws::Vector<CreateVolumePermission> m_createVolumePermissions;
    bool m_createVolumePermissionsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
