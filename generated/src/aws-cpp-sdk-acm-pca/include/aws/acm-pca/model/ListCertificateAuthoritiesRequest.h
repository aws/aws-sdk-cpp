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
    AWS_ACMPCA_API ListCertificateAuthoritiesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListCertificateAuthorities"; }

    AWS_ACMPCA_API Aws::String SerializePayload() const override;

    AWS_ACMPCA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Use this parameter when paginating results in a subsequent request after you
     * receive a response with truncated results. Set it to the value of the
     * <code>NextToken</code> parameter from the response you just received.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Use this parameter when paginating results in a subsequent request after you
     * receive a response with truncated results. Set it to the value of the
     * <code>NextToken</code> parameter from the response you just received.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Use this parameter when paginating results in a subsequent request after you
     * receive a response with truncated results. Set it to the value of the
     * <code>NextToken</code> parameter from the response you just received.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Use this parameter when paginating results in a subsequent request after you
     * receive a response with truncated results. Set it to the value of the
     * <code>NextToken</code> parameter from the response you just received.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Use this parameter when paginating results in a subsequent request after you
     * receive a response with truncated results. Set it to the value of the
     * <code>NextToken</code> parameter from the response you just received.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Use this parameter when paginating results in a subsequent request after you
     * receive a response with truncated results. Set it to the value of the
     * <code>NextToken</code> parameter from the response you just received.</p>
     */
    inline ListCertificateAuthoritiesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Use this parameter when paginating results in a subsequent request after you
     * receive a response with truncated results. Set it to the value of the
     * <code>NextToken</code> parameter from the response you just received.</p>
     */
    inline ListCertificateAuthoritiesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Use this parameter when paginating results in a subsequent request after you
     * receive a response with truncated results. Set it to the value of the
     * <code>NextToken</code> parameter from the response you just received.</p>
     */
    inline ListCertificateAuthoritiesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Use this parameter when paginating results to specify the maximum number of
     * items to return in the response on each page. If additional items exist beyond
     * the number you specify, the <code>NextToken</code> element is sent in the
     * response. Use this <code>NextToken</code> value in a subsequent request to
     * retrieve additional items.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Use this parameter when paginating results to specify the maximum number of
     * items to return in the response on each page. If additional items exist beyond
     * the number you specify, the <code>NextToken</code> element is sent in the
     * response. Use this <code>NextToken</code> value in a subsequent request to
     * retrieve additional items.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Use this parameter when paginating results to specify the maximum number of
     * items to return in the response on each page. If additional items exist beyond
     * the number you specify, the <code>NextToken</code> element is sent in the
     * response. Use this <code>NextToken</code> value in a subsequent request to
     * retrieve additional items.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Use this parameter when paginating results to specify the maximum number of
     * items to return in the response on each page. If additional items exist beyond
     * the number you specify, the <code>NextToken</code> element is sent in the
     * response. Use this <code>NextToken</code> value in a subsequent request to
     * retrieve additional items.</p>
     */
    inline ListCertificateAuthoritiesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Use this parameter to filter the returned set of certificate authorities
     * based on their owner. The default is SELF.</p>
     */
    inline const ResourceOwner& GetResourceOwner() const{ return m_resourceOwner; }

    /**
     * <p>Use this parameter to filter the returned set of certificate authorities
     * based on their owner. The default is SELF.</p>
     */
    inline bool ResourceOwnerHasBeenSet() const { return m_resourceOwnerHasBeenSet; }

    /**
     * <p>Use this parameter to filter the returned set of certificate authorities
     * based on their owner. The default is SELF.</p>
     */
    inline void SetResourceOwner(const ResourceOwner& value) { m_resourceOwnerHasBeenSet = true; m_resourceOwner = value; }

    /**
     * <p>Use this parameter to filter the returned set of certificate authorities
     * based on their owner. The default is SELF.</p>
     */
    inline void SetResourceOwner(ResourceOwner&& value) { m_resourceOwnerHasBeenSet = true; m_resourceOwner = std::move(value); }

    /**
     * <p>Use this parameter to filter the returned set of certificate authorities
     * based on their owner. The default is SELF.</p>
     */
    inline ListCertificateAuthoritiesRequest& WithResourceOwner(const ResourceOwner& value) { SetResourceOwner(value); return *this;}

    /**
     * <p>Use this parameter to filter the returned set of certificate authorities
     * based on their owner. The default is SELF.</p>
     */
    inline ListCertificateAuthoritiesRequest& WithResourceOwner(ResourceOwner&& value) { SetResourceOwner(std::move(value)); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    ResourceOwner m_resourceOwner;
    bool m_resourceOwnerHasBeenSet = false;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
