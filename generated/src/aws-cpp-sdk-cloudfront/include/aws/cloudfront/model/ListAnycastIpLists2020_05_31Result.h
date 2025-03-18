/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/AnycastIpListCollection.h>
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
  class ListAnycastIpLists2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API ListAnycastIpLists2020_05_31Result() = default;
    AWS_CLOUDFRONT_API ListAnycastIpLists2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API ListAnycastIpLists2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Root level tag for the <code>AnycastIpLists</code> parameters.</p>
     */
    inline const AnycastIpListCollection& GetAnycastIpLists() const { return m_anycastIpLists; }
    template<typename AnycastIpListsT = AnycastIpListCollection>
    void SetAnycastIpLists(AnycastIpListsT&& value) { m_anycastIpListsHasBeenSet = true; m_anycastIpLists = std::forward<AnycastIpListsT>(value); }
    template<typename AnycastIpListsT = AnycastIpListCollection>
    ListAnycastIpLists2020_05_31Result& WithAnycastIpLists(AnycastIpListsT&& value) { SetAnycastIpLists(std::forward<AnycastIpListsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAnycastIpLists2020_05_31Result& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AnycastIpListCollection m_anycastIpLists;
    bool m_anycastIpListsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
