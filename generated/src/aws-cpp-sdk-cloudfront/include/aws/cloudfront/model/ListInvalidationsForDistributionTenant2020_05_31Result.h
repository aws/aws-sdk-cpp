/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/InvalidationList.h>
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
  class ListInvalidationsForDistributionTenant2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API ListInvalidationsForDistributionTenant2020_05_31Result() = default;
    AWS_CLOUDFRONT_API ListInvalidationsForDistributionTenant2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API ListInvalidationsForDistributionTenant2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const InvalidationList& GetInvalidationList() const { return m_invalidationList; }
    template<typename InvalidationListT = InvalidationList>
    void SetInvalidationList(InvalidationListT&& value) { m_invalidationListHasBeenSet = true; m_invalidationList = std::forward<InvalidationListT>(value); }
    template<typename InvalidationListT = InvalidationList>
    ListInvalidationsForDistributionTenant2020_05_31Result& WithInvalidationList(InvalidationListT&& value) { SetInvalidationList(std::forward<InvalidationListT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListInvalidationsForDistributionTenant2020_05_31Result& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    InvalidationList m_invalidationList;
    bool m_invalidationListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
