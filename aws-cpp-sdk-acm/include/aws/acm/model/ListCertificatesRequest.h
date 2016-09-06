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
     * <p>The status or statuses on which to filter the list of ACM Certificates.</p>
     */
    inline const Aws::Vector<CertificateStatus>& GetCertificateStatuses() const{ return m_certificateStatuses; }

    /**
     * <p>The status or statuses on which to filter the list of ACM Certificates.</p>
     */
    inline void SetCertificateStatuses(const Aws::Vector<CertificateStatus>& value) { m_certificateStatusesHasBeenSet = true; m_certificateStatuses = value; }

    /**
     * <p>The status or statuses on which to filter the list of ACM Certificates.</p>
     */
    inline void SetCertificateStatuses(Aws::Vector<CertificateStatus>&& value) { m_certificateStatusesHasBeenSet = true; m_certificateStatuses = value; }

    /**
     * <p>The status or statuses on which to filter the list of ACM Certificates.</p>
     */
    inline ListCertificatesRequest& WithCertificateStatuses(const Aws::Vector<CertificateStatus>& value) { SetCertificateStatuses(value); return *this;}

    /**
     * <p>The status or statuses on which to filter the list of ACM Certificates.</p>
     */
    inline ListCertificatesRequest& WithCertificateStatuses(Aws::Vector<CertificateStatus>&& value) { SetCertificateStatuses(value); return *this;}

    /**
     * <p>The status or statuses on which to filter the list of ACM Certificates.</p>
     */
    inline ListCertificatesRequest& AddCertificateStatuses(const CertificateStatus& value) { m_certificateStatusesHasBeenSet = true; m_certificateStatuses.push_back(value); return *this; }

    /**
     * <p>The status or statuses on which to filter the list of ACM Certificates.</p>
     */
    inline ListCertificatesRequest& AddCertificateStatuses(CertificateStatus&& value) { m_certificateStatusesHasBeenSet = true; m_certificateStatuses.push_back(value); return *this; }

    /**
     * <p>Use this parameter only when paginating results and only in a subsequent
     * request after you receive a response with truncated results. Set it to the value
     * of <code>NextToken</code> from the response you just received.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Use this parameter only when paginating results and only in a subsequent
     * request after you receive a response with truncated results. Set it to the value
     * of <code>NextToken</code> from the response you just received.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Use this parameter only when paginating results and only in a subsequent
     * request after you receive a response with truncated results. Set it to the value
     * of <code>NextToken</code> from the response you just received.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Use this parameter only when paginating results and only in a subsequent
     * request after you receive a response with truncated results. Set it to the value
     * of <code>NextToken</code> from the response you just received.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Use this parameter only when paginating results and only in a subsequent
     * request after you receive a response with truncated results. Set it to the value
     * of <code>NextToken</code> from the response you just received.</p>
     */
    inline ListCertificatesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Use this parameter only when paginating results and only in a subsequent
     * request after you receive a response with truncated results. Set it to the value
     * of <code>NextToken</code> from the response you just received.</p>
     */
    inline ListCertificatesRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>Use this parameter only when paginating results and only in a subsequent
     * request after you receive a response with truncated results. Set it to the value
     * of <code>NextToken</code> from the response you just received.</p>
     */
    inline ListCertificatesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    /**
     * <p>Use this parameter when paginating results to specify the maximum number of
     * items to return in the response. If additional items exist beyond the number you
     * specify, the <code>NextToken</code> element is sent in the response. Use this
     * <code>NextToken</code> value in a subsequent request to retrieve additional
     * items.</p>
     */
    inline int GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>Use this parameter when paginating results to specify the maximum number of
     * items to return in the response. If additional items exist beyond the number you
     * specify, the <code>NextToken</code> element is sent in the response. Use this
     * <code>NextToken</code> value in a subsequent request to retrieve additional
     * items.</p>
     */
    inline void SetMaxItems(int value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>Use this parameter when paginating results to specify the maximum number of
     * items to return in the response. If additional items exist beyond the number you
     * specify, the <code>NextToken</code> element is sent in the response. Use this
     * <code>NextToken</code> value in a subsequent request to retrieve additional
     * items.</p>
     */
    inline ListCertificatesRequest& WithMaxItems(int value) { SetMaxItems(value); return *this;}

  private:
    Aws::Vector<CertificateStatus> m_certificateStatuses;
    bool m_certificateStatusesHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
    int m_maxItems;
    bool m_maxItemsHasBeenSet;
  };

} // namespace Model
} // namespace ACM
} // namespace Aws
