/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/CloudFrontOriginAccessIdentity.h>
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
  /**
   * <p>The returned result of the corresponding request.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/UpdateCloudFrontOriginAccessIdentityResult">AWS
   * API Reference</a></p>
   */
  class UpdateCloudFrontOriginAccessIdentity2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API UpdateCloudFrontOriginAccessIdentity2020_05_31Result() = default;
    AWS_CLOUDFRONT_API UpdateCloudFrontOriginAccessIdentity2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API UpdateCloudFrontOriginAccessIdentity2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The origin access identity's information.</p>
     */
    inline const CloudFrontOriginAccessIdentity& GetCloudFrontOriginAccessIdentity() const { return m_cloudFrontOriginAccessIdentity; }
    template<typename CloudFrontOriginAccessIdentityT = CloudFrontOriginAccessIdentity>
    void SetCloudFrontOriginAccessIdentity(CloudFrontOriginAccessIdentityT&& value) { m_cloudFrontOriginAccessIdentityHasBeenSet = true; m_cloudFrontOriginAccessIdentity = std::forward<CloudFrontOriginAccessIdentityT>(value); }
    template<typename CloudFrontOriginAccessIdentityT = CloudFrontOriginAccessIdentity>
    UpdateCloudFrontOriginAccessIdentity2020_05_31Result& WithCloudFrontOriginAccessIdentity(CloudFrontOriginAccessIdentityT&& value) { SetCloudFrontOriginAccessIdentity(std::forward<CloudFrontOriginAccessIdentityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current version of the configuration. For example:
     * <code>E2QWRUHAPOMQZL</code>.</p>
     */
    inline const Aws::String& GetETag() const { return m_eTag; }
    template<typename ETagT = Aws::String>
    void SetETag(ETagT&& value) { m_eTagHasBeenSet = true; m_eTag = std::forward<ETagT>(value); }
    template<typename ETagT = Aws::String>
    UpdateCloudFrontOriginAccessIdentity2020_05_31Result& WithETag(ETagT&& value) { SetETag(std::forward<ETagT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateCloudFrontOriginAccessIdentity2020_05_31Result& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    CloudFrontOriginAccessIdentity m_cloudFrontOriginAccessIdentity;
    bool m_cloudFrontOriginAccessIdentityHasBeenSet = false;

    Aws::String m_eTag;
    bool m_eTagHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
