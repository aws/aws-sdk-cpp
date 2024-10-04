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
    AWS_EC2_API DescribeSnapshotAttributeResponse();
    AWS_EC2_API DescribeSnapshotAttributeResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeSnapshotAttributeResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The product codes.</p>
     */
    inline const Aws::Vector<ProductCode>& GetProductCodes() const{ return m_productCodes; }
    inline void SetProductCodes(const Aws::Vector<ProductCode>& value) { m_productCodes = value; }
    inline void SetProductCodes(Aws::Vector<ProductCode>&& value) { m_productCodes = std::move(value); }
    inline DescribeSnapshotAttributeResponse& WithProductCodes(const Aws::Vector<ProductCode>& value) { SetProductCodes(value); return *this;}
    inline DescribeSnapshotAttributeResponse& WithProductCodes(Aws::Vector<ProductCode>&& value) { SetProductCodes(std::move(value)); return *this;}
    inline DescribeSnapshotAttributeResponse& AddProductCodes(const ProductCode& value) { m_productCodes.push_back(value); return *this; }
    inline DescribeSnapshotAttributeResponse& AddProductCodes(ProductCode&& value) { m_productCodes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the EBS snapshot.</p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotId = value; }
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotId = std::move(value); }
    inline void SetSnapshotId(const char* value) { m_snapshotId.assign(value); }
    inline DescribeSnapshotAttributeResponse& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}
    inline DescribeSnapshotAttributeResponse& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}
    inline DescribeSnapshotAttributeResponse& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The users and groups that have the permissions for creating volumes from the
     * snapshot.</p>
     */
    inline const Aws::Vector<CreateVolumePermission>& GetCreateVolumePermissions() const{ return m_createVolumePermissions; }
    inline void SetCreateVolumePermissions(const Aws::Vector<CreateVolumePermission>& value) { m_createVolumePermissions = value; }
    inline void SetCreateVolumePermissions(Aws::Vector<CreateVolumePermission>&& value) { m_createVolumePermissions = std::move(value); }
    inline DescribeSnapshotAttributeResponse& WithCreateVolumePermissions(const Aws::Vector<CreateVolumePermission>& value) { SetCreateVolumePermissions(value); return *this;}
    inline DescribeSnapshotAttributeResponse& WithCreateVolumePermissions(Aws::Vector<CreateVolumePermission>&& value) { SetCreateVolumePermissions(std::move(value)); return *this;}
    inline DescribeSnapshotAttributeResponse& AddCreateVolumePermissions(const CreateVolumePermission& value) { m_createVolumePermissions.push_back(value); return *this; }
    inline DescribeSnapshotAttributeResponse& AddCreateVolumePermissions(CreateVolumePermission&& value) { m_createVolumePermissions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeSnapshotAttributeResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeSnapshotAttributeResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ProductCode> m_productCodes;

    Aws::String m_snapshotId;

    Aws::Vector<CreateVolumePermission> m_createVolumePermissions;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
