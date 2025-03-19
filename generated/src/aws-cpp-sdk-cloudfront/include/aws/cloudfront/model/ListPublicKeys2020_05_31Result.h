/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/PublicKeyList.h>
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
  class ListPublicKeys2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API ListPublicKeys2020_05_31Result() = default;
    AWS_CLOUDFRONT_API ListPublicKeys2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API ListPublicKeys2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Returns a list of all public keys that have been added to CloudFront for this
     * account.</p>
     */
    inline const PublicKeyList& GetPublicKeyList() const { return m_publicKeyList; }
    template<typename PublicKeyListT = PublicKeyList>
    void SetPublicKeyList(PublicKeyListT&& value) { m_publicKeyListHasBeenSet = true; m_publicKeyList = std::forward<PublicKeyListT>(value); }
    template<typename PublicKeyListT = PublicKeyList>
    ListPublicKeys2020_05_31Result& WithPublicKeyList(PublicKeyListT&& value) { SetPublicKeyList(std::forward<PublicKeyListT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPublicKeys2020_05_31Result& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    PublicKeyList m_publicKeyList;
    bool m_publicKeyListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
