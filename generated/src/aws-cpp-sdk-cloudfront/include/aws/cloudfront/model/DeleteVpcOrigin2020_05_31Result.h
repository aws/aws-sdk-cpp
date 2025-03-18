/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/VpcOrigin.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CloudFront
{
namespace Model
{
  class DeleteVpcOrigin2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API DeleteVpcOrigin2020_05_31Result() = default;
    AWS_CLOUDFRONT_API DeleteVpcOrigin2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API DeleteVpcOrigin2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The VPC origin.</p>
     */
    inline const VpcOrigin& GetVpcOrigin() const { return m_vpcOrigin; }
    template<typename VpcOriginT = VpcOrigin>
    void SetVpcOrigin(VpcOriginT&& value) { m_vpcOriginHasBeenSet = true; m_vpcOrigin = std::forward<VpcOriginT>(value); }
    template<typename VpcOriginT = VpcOrigin>
    DeleteVpcOrigin2020_05_31Result& WithVpcOrigin(VpcOriginT&& value) { SetVpcOrigin(std::forward<VpcOriginT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC origin ETag.</p>
     */
    inline const Aws::String& GetETag() const { return m_eTag; }
    template<typename ETagT = Aws::String>
    void SetETag(ETagT&& value) { m_eTagHasBeenSet = true; m_eTag = std::forward<ETagT>(value); }
    template<typename ETagT = Aws::String>
    DeleteVpcOrigin2020_05_31Result& WithETag(ETagT&& value) { SetETag(std::forward<ETagT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteVpcOrigin2020_05_31Result& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    VpcOrigin m_vpcOrigin;
    bool m_vpcOriginHasBeenSet = false;

    Aws::String m_eTag;
    bool m_eTagHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
