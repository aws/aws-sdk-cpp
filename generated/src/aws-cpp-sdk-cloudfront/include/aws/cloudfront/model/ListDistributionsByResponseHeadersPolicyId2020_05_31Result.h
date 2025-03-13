/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/DistributionIdList.h>
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
  class ListDistributionsByResponseHeadersPolicyId2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API ListDistributionsByResponseHeadersPolicyId2020_05_31Result() = default;
    AWS_CLOUDFRONT_API ListDistributionsByResponseHeadersPolicyId2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API ListDistributionsByResponseHeadersPolicyId2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const DistributionIdList& GetDistributionIdList() const { return m_distributionIdList; }
    template<typename DistributionIdListT = DistributionIdList>
    void SetDistributionIdList(DistributionIdListT&& value) { m_distributionIdListHasBeenSet = true; m_distributionIdList = std::forward<DistributionIdListT>(value); }
    template<typename DistributionIdListT = DistributionIdList>
    ListDistributionsByResponseHeadersPolicyId2020_05_31Result& WithDistributionIdList(DistributionIdListT&& value) { SetDistributionIdList(std::forward<DistributionIdListT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDistributionsByResponseHeadersPolicyId2020_05_31Result& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DistributionIdList m_distributionIdList;
    bool m_distributionIdListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
