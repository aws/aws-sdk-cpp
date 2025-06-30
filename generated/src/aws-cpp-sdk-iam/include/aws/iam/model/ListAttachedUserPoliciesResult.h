/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/model/ResponseMetadata.h>
#include <aws/iam/model/AttachedPolicy.h>
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
  /**
   * <p>Contains the response to a successful <a
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_ListAttachedUserPolicies.html">ListAttachedUserPolicies</a>
   * request. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListAttachedUserPoliciesResponse">AWS
   * API Reference</a></p>
   */
  class ListAttachedUserPoliciesResult
  {
  public:
    AWS_IAM_API ListAttachedUserPoliciesResult() = default;
    AWS_IAM_API ListAttachedUserPoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_IAM_API ListAttachedUserPoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list of the attached policies.</p>
     */
    inline const Aws::Vector<AttachedPolicy>& GetAttachedPolicies() const { return m_attachedPolicies; }
    template<typename AttachedPoliciesT = Aws::Vector<AttachedPolicy>>
    void SetAttachedPolicies(AttachedPoliciesT&& value) { m_attachedPoliciesHasBeenSet = true; m_attachedPolicies = std::forward<AttachedPoliciesT>(value); }
    template<typename AttachedPoliciesT = Aws::Vector<AttachedPolicy>>
    ListAttachedUserPoliciesResult& WithAttachedPolicies(AttachedPoliciesT&& value) { SetAttachedPolicies(std::forward<AttachedPoliciesT>(value)); return *this;}
    template<typename AttachedPoliciesT = AttachedPolicy>
    ListAttachedUserPoliciesResult& AddAttachedPolicies(AttachedPoliciesT&& value) { m_attachedPoliciesHasBeenSet = true; m_attachedPolicies.emplace_back(std::forward<AttachedPoliciesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A flag that indicates whether there are more items to return. If your results
     * were truncated, you can make a subsequent pagination request using the
     * <code>Marker</code> request parameter to retrieve more items. Note that IAM
     * might return fewer than the <code>MaxItems</code> number of results even when
     * there are more results available. We recommend that you check
     * <code>IsTruncated</code> after every call to ensure that you receive all your
     * results.</p>
     */
    inline bool GetIsTruncated() const { return m_isTruncated; }
    inline void SetIsTruncated(bool value) { m_isTruncatedHasBeenSet = true; m_isTruncated = value; }
    inline ListAttachedUserPoliciesResult& WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}
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
    ListAttachedUserPoliciesResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ListAttachedUserPoliciesResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AttachedPolicy> m_attachedPolicies;
    bool m_attachedPoliciesHasBeenSet = false;

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
