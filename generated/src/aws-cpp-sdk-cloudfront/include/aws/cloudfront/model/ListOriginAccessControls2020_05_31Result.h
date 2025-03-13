/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/OriginAccessControlList.h>
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
  class ListOriginAccessControls2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API ListOriginAccessControls2020_05_31Result() = default;
    AWS_CLOUDFRONT_API ListOriginAccessControls2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API ListOriginAccessControls2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list of origin access controls.</p>
     */
    inline const OriginAccessControlList& GetOriginAccessControlList() const { return m_originAccessControlList; }
    template<typename OriginAccessControlListT = OriginAccessControlList>
    void SetOriginAccessControlList(OriginAccessControlListT&& value) { m_originAccessControlListHasBeenSet = true; m_originAccessControlList = std::forward<OriginAccessControlListT>(value); }
    template<typename OriginAccessControlListT = OriginAccessControlList>
    ListOriginAccessControls2020_05_31Result& WithOriginAccessControlList(OriginAccessControlListT&& value) { SetOriginAccessControlList(std::forward<OriginAccessControlListT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListOriginAccessControls2020_05_31Result& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    OriginAccessControlList m_originAccessControlList;
    bool m_originAccessControlListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
