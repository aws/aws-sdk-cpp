/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
#include <aws/acm-pca/ACMPCARequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/acm-pca/model/ResourceOwner.h>
#include <utility>

namespace Aws
{
namespace ACMPCA
{
namespace Model
{

  /**
   */
  class ListCertificateAuthoritiesRequest : public ACMPCARequest
  {
  public:
    AWS_ACMPCA_API ListCertificateAuthoritiesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListCertificateAuthorities"; }

    AWS_ACMPCA_API Aws::String SerializePayload() const override;

    AWS_ACMPCA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Use this parameter when paginating results to specify the maximum number of
     * items to return in the response on each page. If additional items exist beyond
     * the number you specify, the <code>NextToken</code> element is sent in the
     * response. Use this <code>NextToken</code> value in a subsequent request to
     * retrieve additional items.</p> <p>Although the maximum value is 1000, the action
     * only returns a maximum of 100 items.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListCertificateAuthoritiesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter when paginating results in a subsequent request after you
     * receive a response with truncated results. Set it to the value of the
     * <code>NextToken</code> parameter from the response you just received.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCertificateAuthoritiesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to filter the returned set of certificate authorities
     * based on their owner. The default is SELF.</p>
     */
    inline ResourceOwner GetResourceOwner() const { return m_resourceOwner; }
    inline bool ResourceOwnerHasBeenSet() const { return m_resourceOwnerHasBeenSet; }
    inline void SetResourceOwner(ResourceOwner value) { m_resourceOwnerHasBeenSet = true; m_resourceOwner = value; }
    inline ListCertificateAuthoritiesRequest& WithResourceOwner(ResourceOwner value) { SetResourceOwner(value); return *this;}
    ///@}
  private:

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResourceOwner m_resourceOwner{ResourceOwner::NOT_SET};
    bool m_resourceOwnerHasBeenSet = false;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
