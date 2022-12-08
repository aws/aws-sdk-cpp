/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/TransferRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Transfer
{
namespace Model
{

  /**
   */
  class ListCertificatesRequest : public TransferRequest
  {
  public:
    AWS_TRANSFER_API ListCertificatesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListCertificates"; }

    AWS_TRANSFER_API Aws::String SerializePayload() const override;

    AWS_TRANSFER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The maximum number of certificates to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of certificates to return.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of certificates to return.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of certificates to return.</p>
     */
    inline ListCertificatesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>When you can get additional results from the <code>ListCertificates</code>
     * call, a <code>NextToken</code> parameter is returned in the output. You can then
     * pass in a subsequent command to the <code>NextToken</code> parameter to continue
     * listing additional certificates.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>When you can get additional results from the <code>ListCertificates</code>
     * call, a <code>NextToken</code> parameter is returned in the output. You can then
     * pass in a subsequent command to the <code>NextToken</code> parameter to continue
     * listing additional certificates.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>When you can get additional results from the <code>ListCertificates</code>
     * call, a <code>NextToken</code> parameter is returned in the output. You can then
     * pass in a subsequent command to the <code>NextToken</code> parameter to continue
     * listing additional certificates.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>When you can get additional results from the <code>ListCertificates</code>
     * call, a <code>NextToken</code> parameter is returned in the output. You can then
     * pass in a subsequent command to the <code>NextToken</code> parameter to continue
     * listing additional certificates.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>When you can get additional results from the <code>ListCertificates</code>
     * call, a <code>NextToken</code> parameter is returned in the output. You can then
     * pass in a subsequent command to the <code>NextToken</code> parameter to continue
     * listing additional certificates.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>When you can get additional results from the <code>ListCertificates</code>
     * call, a <code>NextToken</code> parameter is returned in the output. You can then
     * pass in a subsequent command to the <code>NextToken</code> parameter to continue
     * listing additional certificates.</p>
     */
    inline ListCertificatesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>When you can get additional results from the <code>ListCertificates</code>
     * call, a <code>NextToken</code> parameter is returned in the output. You can then
     * pass in a subsequent command to the <code>NextToken</code> parameter to continue
     * listing additional certificates.</p>
     */
    inline ListCertificatesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>When you can get additional results from the <code>ListCertificates</code>
     * call, a <code>NextToken</code> parameter is returned in the output. You can then
     * pass in a subsequent command to the <code>NextToken</code> parameter to continue
     * listing additional certificates.</p>
     */
    inline ListCertificatesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
