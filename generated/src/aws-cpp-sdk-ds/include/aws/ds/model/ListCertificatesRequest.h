/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/DirectoryServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

  /**
   */
  class ListCertificatesRequest : public DirectoryServiceRequest
  {
  public:
    AWS_DIRECTORYSERVICE_API ListCertificatesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListCertificates"; }

    AWS_DIRECTORYSERVICE_API Aws::String SerializePayload() const override;

    AWS_DIRECTORYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the directory.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>The identifier of the directory.</p>
     */
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }

    /**
     * <p>The identifier of the directory.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>The identifier of the directory.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }

    /**
     * <p>The identifier of the directory.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>The identifier of the directory.</p>
     */
    inline ListCertificatesRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The identifier of the directory.</p>
     */
    inline ListCertificatesRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the directory.</p>
     */
    inline ListCertificatesRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}


    /**
     * <p>A token for requesting another page of certificates if the
     * <code>NextToken</code> response element indicates that more certificates are
     * available. Use the value of the returned <code>NextToken</code> element in your
     * request until the token comes back as <code>null</code>. Pass <code>null</code>
     * if this is the first call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token for requesting another page of certificates if the
     * <code>NextToken</code> response element indicates that more certificates are
     * available. Use the value of the returned <code>NextToken</code> element in your
     * request until the token comes back as <code>null</code>. Pass <code>null</code>
     * if this is the first call.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token for requesting another page of certificates if the
     * <code>NextToken</code> response element indicates that more certificates are
     * available. Use the value of the returned <code>NextToken</code> element in your
     * request until the token comes back as <code>null</code>. Pass <code>null</code>
     * if this is the first call.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token for requesting another page of certificates if the
     * <code>NextToken</code> response element indicates that more certificates are
     * available. Use the value of the returned <code>NextToken</code> element in your
     * request until the token comes back as <code>null</code>. Pass <code>null</code>
     * if this is the first call.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token for requesting another page of certificates if the
     * <code>NextToken</code> response element indicates that more certificates are
     * available. Use the value of the returned <code>NextToken</code> element in your
     * request until the token comes back as <code>null</code>. Pass <code>null</code>
     * if this is the first call.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token for requesting another page of certificates if the
     * <code>NextToken</code> response element indicates that more certificates are
     * available. Use the value of the returned <code>NextToken</code> element in your
     * request until the token comes back as <code>null</code>. Pass <code>null</code>
     * if this is the first call.</p>
     */
    inline ListCertificatesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token for requesting another page of certificates if the
     * <code>NextToken</code> response element indicates that more certificates are
     * available. Use the value of the returned <code>NextToken</code> element in your
     * request until the token comes back as <code>null</code>. Pass <code>null</code>
     * if this is the first call.</p>
     */
    inline ListCertificatesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token for requesting another page of certificates if the
     * <code>NextToken</code> response element indicates that more certificates are
     * available. Use the value of the returned <code>NextToken</code> element in your
     * request until the token comes back as <code>null</code>. Pass <code>null</code>
     * if this is the first call.</p>
     */
    inline ListCertificatesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The number of items that should show up on one page</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The number of items that should show up on one page</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The number of items that should show up on one page</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The number of items that should show up on one page</p>
     */
    inline ListCertificatesRequest& WithLimit(int value) { SetLimit(value); return *this;}

  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
