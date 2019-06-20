/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
#include <aws/acm-pca/ACMPCARequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ACMPCA
{
namespace Model
{

  /**
   */
  class AWS_ACMPCA_API ListPermissionsRequest : public ACMPCARequest
  {
  public:
    ListPermissionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListPermissions"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Number (ARN) of the private CA to inspect. You can find
     * the ARN by calling the <a>ListCertificateAuthorities</a> action. This must be of
     * the form:
     * <code>arn:aws:acm-pca:region:account:certificate-authority/12345678-1234-1234-1234-123456789012</code>
     * You can get a private CA's ARN by running the <a>ListCertificateAuthorities</a>
     * action.</p>
     */
    inline const Aws::String& GetCertificateAuthorityArn() const{ return m_certificateAuthorityArn; }

    /**
     * <p>The Amazon Resource Number (ARN) of the private CA to inspect. You can find
     * the ARN by calling the <a>ListCertificateAuthorities</a> action. This must be of
     * the form:
     * <code>arn:aws:acm-pca:region:account:certificate-authority/12345678-1234-1234-1234-123456789012</code>
     * You can get a private CA's ARN by running the <a>ListCertificateAuthorities</a>
     * action.</p>
     */
    inline bool CertificateAuthorityArnHasBeenSet() const { return m_certificateAuthorityArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Number (ARN) of the private CA to inspect. You can find
     * the ARN by calling the <a>ListCertificateAuthorities</a> action. This must be of
     * the form:
     * <code>arn:aws:acm-pca:region:account:certificate-authority/12345678-1234-1234-1234-123456789012</code>
     * You can get a private CA's ARN by running the <a>ListCertificateAuthorities</a>
     * action.</p>
     */
    inline void SetCertificateAuthorityArn(const Aws::String& value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn = value; }

    /**
     * <p>The Amazon Resource Number (ARN) of the private CA to inspect. You can find
     * the ARN by calling the <a>ListCertificateAuthorities</a> action. This must be of
     * the form:
     * <code>arn:aws:acm-pca:region:account:certificate-authority/12345678-1234-1234-1234-123456789012</code>
     * You can get a private CA's ARN by running the <a>ListCertificateAuthorities</a>
     * action.</p>
     */
    inline void SetCertificateAuthorityArn(Aws::String&& value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn = std::move(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of the private CA to inspect. You can find
     * the ARN by calling the <a>ListCertificateAuthorities</a> action. This must be of
     * the form:
     * <code>arn:aws:acm-pca:region:account:certificate-authority/12345678-1234-1234-1234-123456789012</code>
     * You can get a private CA's ARN by running the <a>ListCertificateAuthorities</a>
     * action.</p>
     */
    inline void SetCertificateAuthorityArn(const char* value) { m_certificateAuthorityArnHasBeenSet = true; m_certificateAuthorityArn.assign(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of the private CA to inspect. You can find
     * the ARN by calling the <a>ListCertificateAuthorities</a> action. This must be of
     * the form:
     * <code>arn:aws:acm-pca:region:account:certificate-authority/12345678-1234-1234-1234-123456789012</code>
     * You can get a private CA's ARN by running the <a>ListCertificateAuthorities</a>
     * action.</p>
     */
    inline ListPermissionsRequest& WithCertificateAuthorityArn(const Aws::String& value) { SetCertificateAuthorityArn(value); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of the private CA to inspect. You can find
     * the ARN by calling the <a>ListCertificateAuthorities</a> action. This must be of
     * the form:
     * <code>arn:aws:acm-pca:region:account:certificate-authority/12345678-1234-1234-1234-123456789012</code>
     * You can get a private CA's ARN by running the <a>ListCertificateAuthorities</a>
     * action.</p>
     */
    inline ListPermissionsRequest& WithCertificateAuthorityArn(Aws::String&& value) { SetCertificateAuthorityArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of the private CA to inspect. You can find
     * the ARN by calling the <a>ListCertificateAuthorities</a> action. This must be of
     * the form:
     * <code>arn:aws:acm-pca:region:account:certificate-authority/12345678-1234-1234-1234-123456789012</code>
     * You can get a private CA's ARN by running the <a>ListCertificateAuthorities</a>
     * action.</p>
     */
    inline ListPermissionsRequest& WithCertificateAuthorityArn(const char* value) { SetCertificateAuthorityArn(value); return *this;}


    /**
     * <p>When paginating results, use this parameter in a subsequent request after you
     * receive a response with truncated results. Set it to the value of
     * <b>NextToken</b> from the response you just received.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>When paginating results, use this parameter in a subsequent request after you
     * receive a response with truncated results. Set it to the value of
     * <b>NextToken</b> from the response you just received.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>When paginating results, use this parameter in a subsequent request after you
     * receive a response with truncated results. Set it to the value of
     * <b>NextToken</b> from the response you just received.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>When paginating results, use this parameter in a subsequent request after you
     * receive a response with truncated results. Set it to the value of
     * <b>NextToken</b> from the response you just received.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>When paginating results, use this parameter in a subsequent request after you
     * receive a response with truncated results. Set it to the value of
     * <b>NextToken</b> from the response you just received.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>When paginating results, use this parameter in a subsequent request after you
     * receive a response with truncated results. Set it to the value of
     * <b>NextToken</b> from the response you just received.</p>
     */
    inline ListPermissionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>When paginating results, use this parameter in a subsequent request after you
     * receive a response with truncated results. Set it to the value of
     * <b>NextToken</b> from the response you just received.</p>
     */
    inline ListPermissionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>When paginating results, use this parameter in a subsequent request after you
     * receive a response with truncated results. Set it to the value of
     * <b>NextToken</b> from the response you just received.</p>
     */
    inline ListPermissionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>When paginating results, use this parameter to specify the maximum number of
     * items to return in the response. If additional items exist beyond the number you
     * specify, the <b>NextToken</b> element is sent in the response. Use this
     * <b>NextToken</b> value in a subsequent request to retrieve additional items.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>When paginating results, use this parameter to specify the maximum number of
     * items to return in the response. If additional items exist beyond the number you
     * specify, the <b>NextToken</b> element is sent in the response. Use this
     * <b>NextToken</b> value in a subsequent request to retrieve additional items.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>When paginating results, use this parameter to specify the maximum number of
     * items to return in the response. If additional items exist beyond the number you
     * specify, the <b>NextToken</b> element is sent in the response. Use this
     * <b>NextToken</b> value in a subsequent request to retrieve additional items.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>When paginating results, use this parameter to specify the maximum number of
     * items to return in the response. If additional items exist beyond the number you
     * specify, the <b>NextToken</b> element is sent in the response. Use this
     * <b>NextToken</b> value in a subsequent request to retrieve additional items.</p>
     */
    inline ListPermissionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_certificateAuthorityArn;
    bool m_certificateAuthorityArnHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
