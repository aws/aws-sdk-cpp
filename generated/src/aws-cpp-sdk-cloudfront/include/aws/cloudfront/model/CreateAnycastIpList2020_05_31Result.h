/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/AnycastIpList.h>
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
  class CreateAnycastIpList2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API CreateAnycastIpList2020_05_31Result() = default;
    AWS_CLOUDFRONT_API CreateAnycastIpList2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API CreateAnycastIpList2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A response structure that includes the version identifier (ETag) and the
     * created <a>AnycastIpList</a> structure.</p>
     */
    inline const AnycastIpList& GetAnycastIpList() const { return m_anycastIpList; }
    template<typename AnycastIpListT = AnycastIpList>
    void SetAnycastIpList(AnycastIpListT&& value) { m_anycastIpListHasBeenSet = true; m_anycastIpList = std::forward<AnycastIpListT>(value); }
    template<typename AnycastIpListT = AnycastIpList>
    CreateAnycastIpList2020_05_31Result& WithAnycastIpList(AnycastIpListT&& value) { SetAnycastIpList(std::forward<AnycastIpListT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version identifier for the current version of the Anycast static IP
     * list.</p>
     */
    inline const Aws::String& GetETag() const { return m_eTag; }
    template<typename ETagT = Aws::String>
    void SetETag(ETagT&& value) { m_eTagHasBeenSet = true; m_eTag = std::forward<ETagT>(value); }
    template<typename ETagT = Aws::String>
    CreateAnycastIpList2020_05_31Result& WithETag(ETagT&& value) { SetETag(std::forward<ETagT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateAnycastIpList2020_05_31Result& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AnycastIpList m_anycastIpList;
    bool m_anycastIpListHasBeenSet = false;

    Aws::String m_eTag;
    bool m_eTagHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
