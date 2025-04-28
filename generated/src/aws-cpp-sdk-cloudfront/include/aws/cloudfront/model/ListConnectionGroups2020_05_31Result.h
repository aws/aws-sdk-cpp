/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudfront/model/ConnectionGroupSummary.h>
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
  class ListConnectionGroups2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API ListConnectionGroups2020_05_31Result() = default;
    AWS_CLOUDFRONT_API ListConnectionGroups2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API ListConnectionGroups2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
    ListConnectionGroups2020_05_31Result& WithNextMarker(NextMarkerT&& value) { SetNextMarker(std::forward<NextMarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of connection groups that you retrieved.</p>
     */
    inline const Aws::Vector<ConnectionGroupSummary>& GetConnectionGroups() const { return m_connectionGroups; }
    template<typename ConnectionGroupsT = Aws::Vector<ConnectionGroupSummary>>
    void SetConnectionGroups(ConnectionGroupsT&& value) { m_connectionGroupsHasBeenSet = true; m_connectionGroups = std::forward<ConnectionGroupsT>(value); }
    template<typename ConnectionGroupsT = Aws::Vector<ConnectionGroupSummary>>
    ListConnectionGroups2020_05_31Result& WithConnectionGroups(ConnectionGroupsT&& value) { SetConnectionGroups(std::forward<ConnectionGroupsT>(value)); return *this;}
    template<typename ConnectionGroupsT = ConnectionGroupSummary>
    ListConnectionGroups2020_05_31Result& AddConnectionGroups(ConnectionGroupsT&& value) { m_connectionGroupsHasBeenSet = true; m_connectionGroups.emplace_back(std::forward<ConnectionGroupsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListConnectionGroups2020_05_31Result& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextMarker;
    bool m_nextMarkerHasBeenSet = false;

    Aws::Vector<ConnectionGroupSummary> m_connectionGroups;
    bool m_connectionGroupsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
