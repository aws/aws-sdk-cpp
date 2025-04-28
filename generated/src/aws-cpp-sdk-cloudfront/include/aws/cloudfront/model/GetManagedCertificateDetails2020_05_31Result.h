/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/ManagedCertificateDetails.h>
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
  class GetManagedCertificateDetails2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API GetManagedCertificateDetails2020_05_31Result() = default;
    AWS_CLOUDFRONT_API GetManagedCertificateDetails2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API GetManagedCertificateDetails2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Contains details about the CloudFront managed ACM certificate.</p>
     */
    inline const ManagedCertificateDetails& GetManagedCertificateDetails() const { return m_managedCertificateDetails; }
    template<typename ManagedCertificateDetailsT = ManagedCertificateDetails>
    void SetManagedCertificateDetails(ManagedCertificateDetailsT&& value) { m_managedCertificateDetailsHasBeenSet = true; m_managedCertificateDetails = std::forward<ManagedCertificateDetailsT>(value); }
    template<typename ManagedCertificateDetailsT = ManagedCertificateDetails>
    GetManagedCertificateDetails2020_05_31Result& WithManagedCertificateDetails(ManagedCertificateDetailsT&& value) { SetManagedCertificateDetails(std::forward<ManagedCertificateDetailsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetManagedCertificateDetails2020_05_31Result& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ManagedCertificateDetails m_managedCertificateDetails;
    bool m_managedCertificateDetailsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
