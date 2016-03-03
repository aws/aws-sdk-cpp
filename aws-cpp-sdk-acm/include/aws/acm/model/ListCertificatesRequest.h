/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/acm/ACMRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/acm/model/CertificateStatus.h>

namespace Aws
{
namespace ACM
{
namespace Model
{

  /**
   */
  class AWS_ACM_API ListCertificatesRequest : public ACMRequest
  {
  public:
    ListCertificatesRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p> Identifies the statuses of the ACM Certificates for which you want to
     * retrieve the ARNs. This can be one or more of the following values: <ul>
     * <li><code>PENDING_VALIDATION</code></li> <li><code>ISSUED</code></li>
     * <li><code>INACTIVE</code></li> <li><code>EXPIRED</code></li>
     * <li><code>VALIDATION_TIMED_OUT</code></li> <li><code>REVOKED</code></li>
     * <li><code>FAILED</code></li> </ul> </p>
     */
    inline const Aws::Vector<CertificateStatus>& GetCertificateStatuses() const{ return m_certificateStatuses; }

    /**
     * <p> Identifies the statuses of the ACM Certificates for which you want to
     * retrieve the ARNs. This can be one or more of the following values: <ul>
     * <li><code>PENDING_VALIDATION</code></li> <li><code>ISSUED</code></li>
     * <li><code>INACTIVE</code></li> <li><code>EXPIRED</code></li>
     * <li><code>VALIDATION_TIMED_OUT</code></li> <li><code>REVOKED</code></li>
     * <li><code>FAILED</code></li> </ul> </p>
     */
    inline void SetCertificateStatuses(const Aws::Vector<CertificateStatus>& value) { m_certificateStatusesHasBeenSet = true; m_certificateStatuses = value; }

    /**
     * <p> Identifies the statuses of the ACM Certificates for which you want to
     * retrieve the ARNs. This can be one or more of the following values: <ul>
     * <li><code>PENDING_VALIDATION</code></li> <li><code>ISSUED</code></li>
     * <li><code>INACTIVE</code></li> <li><code>EXPIRED</code></li>
     * <li><code>VALIDATION_TIMED_OUT</code></li> <li><code>REVOKED</code></li>
     * <li><code>FAILED</code></li> </ul> </p>
     */
    inline void SetCertificateStatuses(Aws::Vector<CertificateStatus>&& value) { m_certificateStatusesHasBeenSet = true; m_certificateStatuses = value; }

    /**
     * <p> Identifies the statuses of the ACM Certificates for which you want to
     * retrieve the ARNs. This can be one or more of the following values: <ul>
     * <li><code>PENDING_VALIDATION</code></li> <li><code>ISSUED</code></li>
     * <li><code>INACTIVE</code></li> <li><code>EXPIRED</code></li>
     * <li><code>VALIDATION_TIMED_OUT</code></li> <li><code>REVOKED</code></li>
     * <li><code>FAILED</code></li> </ul> </p>
     */
    inline ListCertificatesRequest& WithCertificateStatuses(const Aws::Vector<CertificateStatus>& value) { SetCertificateStatuses(value); return *this;}

    /**
     * <p> Identifies the statuses of the ACM Certificates for which you want to
     * retrieve the ARNs. This can be one or more of the following values: <ul>
     * <li><code>PENDING_VALIDATION</code></li> <li><code>ISSUED</code></li>
     * <li><code>INACTIVE</code></li> <li><code>EXPIRED</code></li>
     * <li><code>VALIDATION_TIMED_OUT</code></li> <li><code>REVOKED</code></li>
     * <li><code>FAILED</code></li> </ul> </p>
     */
    inline ListCertificatesRequest& WithCertificateStatuses(Aws::Vector<CertificateStatus>&& value) { SetCertificateStatuses(value); return *this;}

    /**
     * <p> Identifies the statuses of the ACM Certificates for which you want to
     * retrieve the ARNs. This can be one or more of the following values: <ul>
     * <li><code>PENDING_VALIDATION</code></li> <li><code>ISSUED</code></li>
     * <li><code>INACTIVE</code></li> <li><code>EXPIRED</code></li>
     * <li><code>VALIDATION_TIMED_OUT</code></li> <li><code>REVOKED</code></li>
     * <li><code>FAILED</code></li> </ul> </p>
     */
    inline ListCertificatesRequest& AddCertificateStatuses(const CertificateStatus& value) { m_certificateStatusesHasBeenSet = true; m_certificateStatuses.push_back(value); return *this; }

    /**
     * <p> Identifies the statuses of the ACM Certificates for which you want to
     * retrieve the ARNs. This can be one or more of the following values: <ul>
     * <li><code>PENDING_VALIDATION</code></li> <li><code>ISSUED</code></li>
     * <li><code>INACTIVE</code></li> <li><code>EXPIRED</code></li>
     * <li><code>VALIDATION_TIMED_OUT</code></li> <li><code>REVOKED</code></li>
     * <li><code>FAILED</code></li> </ul> </p>
     */
    inline ListCertificatesRequest& AddCertificateStatuses(CertificateStatus&& value) { m_certificateStatusesHasBeenSet = true; m_certificateStatuses.push_back(value); return *this; }

    /**
     * <p> String that contains an opaque marker of the next ACM Certificate ARN to be
     * displayed. Use this parameter when paginating results, and only in a subsequent
     * request after you've received a response where the results have been truncated.
     * Set it to an empty string the first time you call this action, and set it to the
     * value of the <code>NextToken</code> element you receive in the response object
     * for subsequent calls. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> String that contains an opaque marker of the next ACM Certificate ARN to be
     * displayed. Use this parameter when paginating results, and only in a subsequent
     * request after you've received a response where the results have been truncated.
     * Set it to an empty string the first time you call this action, and set it to the
     * value of the <code>NextToken</code> element you receive in the response object
     * for subsequent calls. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> String that contains an opaque marker of the next ACM Certificate ARN to be
     * displayed. Use this parameter when paginating results, and only in a subsequent
     * request after you've received a response where the results have been truncated.
     * Set it to an empty string the first time you call this action, and set it to the
     * value of the <code>NextToken</code> element you receive in the response object
     * for subsequent calls. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> String that contains an opaque marker of the next ACM Certificate ARN to be
     * displayed. Use this parameter when paginating results, and only in a subsequent
     * request after you've received a response where the results have been truncated.
     * Set it to an empty string the first time you call this action, and set it to the
     * value of the <code>NextToken</code> element you receive in the response object
     * for subsequent calls. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> String that contains an opaque marker of the next ACM Certificate ARN to be
     * displayed. Use this parameter when paginating results, and only in a subsequent
     * request after you've received a response where the results have been truncated.
     * Set it to an empty string the first time you call this action, and set it to the
     * value of the <code>NextToken</code> element you receive in the response object
     * for subsequent calls. </p>
     */
    inline ListCertificatesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> String that contains an opaque marker of the next ACM Certificate ARN to be
     * displayed. Use this parameter when paginating results, and only in a subsequent
     * request after you've received a response where the results have been truncated.
     * Set it to an empty string the first time you call this action, and set it to the
     * value of the <code>NextToken</code> element you receive in the response object
     * for subsequent calls. </p>
     */
    inline ListCertificatesRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p> String that contains an opaque marker of the next ACM Certificate ARN to be
     * displayed. Use this parameter when paginating results, and only in a subsequent
     * request after you've received a response where the results have been truncated.
     * Set it to an empty string the first time you call this action, and set it to the
     * value of the <code>NextToken</code> element you receive in the response object
     * for subsequent calls. </p>
     */
    inline ListCertificatesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    /**
     * <p> Specify this parameter when paginating results to indicate the maximum
     * number of ACM Certificates that you want to display for each response. If there
     * are additional certificates beyond the maximum you specify, use the
     * <code>NextToken</code> value in your next call to the
     * <code>ListCertificates</code> action. </p>
     */
    inline long GetMaxItems() const{ return m_maxItems; }

    /**
     * <p> Specify this parameter when paginating results to indicate the maximum
     * number of ACM Certificates that you want to display for each response. If there
     * are additional certificates beyond the maximum you specify, use the
     * <code>NextToken</code> value in your next call to the
     * <code>ListCertificates</code> action. </p>
     */
    inline void SetMaxItems(long value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p> Specify this parameter when paginating results to indicate the maximum
     * number of ACM Certificates that you want to display for each response. If there
     * are additional certificates beyond the maximum you specify, use the
     * <code>NextToken</code> value in your next call to the
     * <code>ListCertificates</code> action. </p>
     */
    inline ListCertificatesRequest& WithMaxItems(long value) { SetMaxItems(value); return *this;}

  private:
    Aws::Vector<CertificateStatus> m_certificateStatuses;
    bool m_certificateStatusesHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
    long m_maxItems;
    bool m_maxItemsHasBeenSet;
  };

} // namespace Model
} // namespace ACM
} // namespace Aws
