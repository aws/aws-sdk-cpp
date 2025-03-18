﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/model/ResponseMetadata.h>
#include <aws/iam/model/ListPoliciesGrantingServiceAccessEntry.h>
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
namespace IAM
{
namespace Model
{
  class ListPoliciesGrantingServiceAccessResult
  {
  public:
    AWS_IAM_API ListPoliciesGrantingServiceAccessResult() = default;
    AWS_IAM_API ListPoliciesGrantingServiceAccessResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_IAM_API ListPoliciesGrantingServiceAccessResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A <code>ListPoliciesGrantingServiceAccess</code> object that contains details
     * about the permissions policies attached to the specified identity (user, group,
     * or role).</p>
     */
    inline const Aws::Vector<ListPoliciesGrantingServiceAccessEntry>& GetPoliciesGrantingServiceAccess() const { return m_policiesGrantingServiceAccess; }
    template<typename PoliciesGrantingServiceAccessT = Aws::Vector<ListPoliciesGrantingServiceAccessEntry>>
    void SetPoliciesGrantingServiceAccess(PoliciesGrantingServiceAccessT&& value) { m_policiesGrantingServiceAccessHasBeenSet = true; m_policiesGrantingServiceAccess = std::forward<PoliciesGrantingServiceAccessT>(value); }
    template<typename PoliciesGrantingServiceAccessT = Aws::Vector<ListPoliciesGrantingServiceAccessEntry>>
    ListPoliciesGrantingServiceAccessResult& WithPoliciesGrantingServiceAccess(PoliciesGrantingServiceAccessT&& value) { SetPoliciesGrantingServiceAccess(std::forward<PoliciesGrantingServiceAccessT>(value)); return *this;}
    template<typename PoliciesGrantingServiceAccessT = ListPoliciesGrantingServiceAccessEntry>
    ListPoliciesGrantingServiceAccessResult& AddPoliciesGrantingServiceAccess(PoliciesGrantingServiceAccessT&& value) { m_policiesGrantingServiceAccessHasBeenSet = true; m_policiesGrantingServiceAccess.emplace_back(std::forward<PoliciesGrantingServiceAccessT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A flag that indicates whether there are more items to return. If your results
     * were truncated, you can make a subsequent pagination request using the
     * <code>Marker</code> request parameter to retrieve more items. We recommend that
     * you check <code>IsTruncated</code> after every call to ensure that you receive
     * all your results.</p>
     */
    inline bool GetIsTruncated() const { return m_isTruncated; }
    inline void SetIsTruncated(bool value) { m_isTruncatedHasBeenSet = true; m_isTruncated = value; }
    inline ListPoliciesGrantingServiceAccessResult& WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When <code>IsTruncated</code> is <code>true</code>, this element is present
     * and contains the value to use for the <code>Marker</code> parameter in a
     * subsequent pagination request.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    ListPoliciesGrantingServiceAccessResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ListPoliciesGrantingServiceAccessResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ListPoliciesGrantingServiceAccessEntry> m_policiesGrantingServiceAccess;
    bool m_policiesGrantingServiceAccessHasBeenSet = false;

    bool m_isTruncated{false};
    bool m_isTruncatedHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
