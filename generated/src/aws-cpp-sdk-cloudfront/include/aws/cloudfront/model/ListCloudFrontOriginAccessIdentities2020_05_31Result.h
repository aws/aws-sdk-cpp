/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/CloudFrontOriginAccessIdentityList.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListCloudFrontOriginAccessIdentitiesResult">AWS
   * API Reference</a></p>
   */
  class ListCloudFrontOriginAccessIdentities2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API ListCloudFrontOriginAccessIdentities2020_05_31Result() = default;
    AWS_CLOUDFRONT_API ListCloudFrontOriginAccessIdentities2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API ListCloudFrontOriginAccessIdentities2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The <code>CloudFrontOriginAccessIdentityList</code> type.</p>
     */
    inline const CloudFrontOriginAccessIdentityList& GetCloudFrontOriginAccessIdentityList() const { return m_cloudFrontOriginAccessIdentityList; }
    template<typename CloudFrontOriginAccessIdentityListT = CloudFrontOriginAccessIdentityList>
    void SetCloudFrontOriginAccessIdentityList(CloudFrontOriginAccessIdentityListT&& value) { m_cloudFrontOriginAccessIdentityListHasBeenSet = true; m_cloudFrontOriginAccessIdentityList = std::forward<CloudFrontOriginAccessIdentityListT>(value); }
    template<typename CloudFrontOriginAccessIdentityListT = CloudFrontOriginAccessIdentityList>
    ListCloudFrontOriginAccessIdentities2020_05_31Result& WithCloudFrontOriginAccessIdentityList(CloudFrontOriginAccessIdentityListT&& value) { SetCloudFrontOriginAccessIdentityList(std::forward<CloudFrontOriginAccessIdentityListT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCloudFrontOriginAccessIdentities2020_05_31Result& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    CloudFrontOriginAccessIdentityList m_cloudFrontOriginAccessIdentityList;
    bool m_cloudFrontOriginAccessIdentityListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
