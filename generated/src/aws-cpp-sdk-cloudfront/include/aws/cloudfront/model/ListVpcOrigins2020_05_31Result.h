/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/VpcOriginList.h>
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
  class ListVpcOrigins2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API ListVpcOrigins2020_05_31Result() = default;
    AWS_CLOUDFRONT_API ListVpcOrigins2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API ListVpcOrigins2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>List of VPC origins.</p>
     */
    inline const VpcOriginList& GetVpcOriginList() const { return m_vpcOriginList; }
    template<typename VpcOriginListT = VpcOriginList>
    void SetVpcOriginList(VpcOriginListT&& value) { m_vpcOriginListHasBeenSet = true; m_vpcOriginList = std::forward<VpcOriginListT>(value); }
    template<typename VpcOriginListT = VpcOriginList>
    ListVpcOrigins2020_05_31Result& WithVpcOriginList(VpcOriginListT&& value) { SetVpcOriginList(std::forward<VpcOriginListT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListVpcOrigins2020_05_31Result& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    VpcOriginList m_vpcOriginList;
    bool m_vpcOriginListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
