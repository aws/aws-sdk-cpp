/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/Invalidation.h>
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
  class GetInvalidationForDistributionTenant2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API GetInvalidationForDistributionTenant2020_05_31Result() = default;
    AWS_CLOUDFRONT_API GetInvalidationForDistributionTenant2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API GetInvalidationForDistributionTenant2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const Invalidation& GetInvalidation() const { return m_invalidation; }
    template<typename InvalidationT = Invalidation>
    void SetInvalidation(InvalidationT&& value) { m_invalidationHasBeenSet = true; m_invalidation = std::forward<InvalidationT>(value); }
    template<typename InvalidationT = Invalidation>
    GetInvalidationForDistributionTenant2020_05_31Result& WithInvalidation(InvalidationT&& value) { SetInvalidation(std::forward<InvalidationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetInvalidationForDistributionTenant2020_05_31Result& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Invalidation m_invalidation;
    bool m_invalidationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
