/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudfront/model/DomainConflict.h>
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
  class ListDomainConflicts2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API ListDomainConflicts2020_05_31Result() = default;
    AWS_CLOUDFRONT_API ListDomainConflicts2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API ListDomainConflicts2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Contains details about the domain conflicts.</p>
     */
    inline const Aws::Vector<DomainConflict>& GetDomainConflicts() const { return m_domainConflicts; }
    template<typename DomainConflictsT = Aws::Vector<DomainConflict>>
    void SetDomainConflicts(DomainConflictsT&& value) { m_domainConflictsHasBeenSet = true; m_domainConflicts = std::forward<DomainConflictsT>(value); }
    template<typename DomainConflictsT = Aws::Vector<DomainConflict>>
    ListDomainConflicts2020_05_31Result& WithDomainConflicts(DomainConflictsT&& value) { SetDomainConflicts(std::forward<DomainConflictsT>(value)); return *this;}
    template<typename DomainConflictsT = DomainConflict>
    ListDomainConflicts2020_05_31Result& AddDomainConflicts(DomainConflictsT&& value) { m_domainConflictsHasBeenSet = true; m_domainConflicts.emplace_back(std::forward<DomainConflictsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token used for pagination of results returned in the response. You can use
     * the token from the previous request to define where the current request should
     * begin.</p>
     */
    inline const Aws::String& GetNextMarker() const { return m_nextMarker; }
    template<typename NextMarkerT = Aws::String>
    void SetNextMarker(NextMarkerT&& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = std::forward<NextMarkerT>(value); }
    template<typename NextMarkerT = Aws::String>
    ListDomainConflicts2020_05_31Result& WithNextMarker(NextMarkerT&& value) { SetNextMarker(std::forward<NextMarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDomainConflicts2020_05_31Result& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DomainConflict> m_domainConflicts;
    bool m_domainConflictsHasBeenSet = false;

    Aws::String m_nextMarker;
    bool m_nextMarkerHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
