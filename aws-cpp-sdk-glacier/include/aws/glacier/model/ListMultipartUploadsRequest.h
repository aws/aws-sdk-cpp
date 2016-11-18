﻿/*
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
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/glacier/GlacierRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Glacier
{
namespace Model
{

  /**
   * <p>Provides options for retrieving list of in-progress multipart uploads for an
   * Amazon Glacier vault.</p>
   */
  class AWS_GLACIER_API ListMultipartUploadsRequest : public GlacierRequest
  {
  public:
    ListMultipartUploadsRequest();
    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * apos<code>-</code>apos (hyphen), in which case Amazon Glacier uses the AWS
     * account ID associated with the credentials used to sign the request. If you use
     * an account ID, do not include any hyphens (apos-apos) in the ID. </p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * apos<code>-</code>apos (hyphen), in which case Amazon Glacier uses the AWS
     * account ID associated with the credentials used to sign the request. If you use
     * an account ID, do not include any hyphens (apos-apos) in the ID. </p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * apos<code>-</code>apos (hyphen), in which case Amazon Glacier uses the AWS
     * account ID associated with the credentials used to sign the request. If you use
     * an account ID, do not include any hyphens (apos-apos) in the ID. </p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * apos<code>-</code>apos (hyphen), in which case Amazon Glacier uses the AWS
     * account ID associated with the credentials used to sign the request. If you use
     * an account ID, do not include any hyphens (apos-apos) in the ID. </p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * apos<code>-</code>apos (hyphen), in which case Amazon Glacier uses the AWS
     * account ID associated with the credentials used to sign the request. If you use
     * an account ID, do not include any hyphens (apos-apos) in the ID. </p>
     */
    inline ListMultipartUploadsRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * apos<code>-</code>apos (hyphen), in which case Amazon Glacier uses the AWS
     * account ID associated with the credentials used to sign the request. If you use
     * an account ID, do not include any hyphens (apos-apos) in the ID. </p>
     */
    inline ListMultipartUploadsRequest& WithAccountId(Aws::String&& value) { SetAccountId(value); return *this;}

    /**
     * <p>The <code>AccountId</code> value is the AWS account ID of the account that
     * owns the vault. You can either specify an AWS account ID or optionally a single
     * apos<code>-</code>apos (hyphen), in which case Amazon Glacier uses the AWS
     * account ID associated with the credentials used to sign the request. If you use
     * an account ID, do not include any hyphens (apos-apos) in the ID. </p>
     */
    inline ListMultipartUploadsRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}

    /**
     * <p>The name of the vault.</p>
     */
    inline const Aws::String& GetVaultName() const{ return m_vaultName; }

    /**
     * <p>The name of the vault.</p>
     */
    inline void SetVaultName(const Aws::String& value) { m_vaultNameHasBeenSet = true; m_vaultName = value; }

    /**
     * <p>The name of the vault.</p>
     */
    inline void SetVaultName(Aws::String&& value) { m_vaultNameHasBeenSet = true; m_vaultName = value; }

    /**
     * <p>The name of the vault.</p>
     */
    inline void SetVaultName(const char* value) { m_vaultNameHasBeenSet = true; m_vaultName.assign(value); }

    /**
     * <p>The name of the vault.</p>
     */
    inline ListMultipartUploadsRequest& WithVaultName(const Aws::String& value) { SetVaultName(value); return *this;}

    /**
     * <p>The name of the vault.</p>
     */
    inline ListMultipartUploadsRequest& WithVaultName(Aws::String&& value) { SetVaultName(value); return *this;}

    /**
     * <p>The name of the vault.</p>
     */
    inline ListMultipartUploadsRequest& WithVaultName(const char* value) { SetVaultName(value); return *this;}

    /**
     * <p>An opaque string used for pagination. This value specifies the upload at
     * which the listing of uploads should begin. Get the marker value from a previous
     * List Uploads response. You need only include the marker if you are continuing
     * the pagination of results started in a previous List Uploads request.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An opaque string used for pagination. This value specifies the upload at
     * which the listing of uploads should begin. Get the marker value from a previous
     * List Uploads response. You need only include the marker if you are continuing
     * the pagination of results started in a previous List Uploads request.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>An opaque string used for pagination. This value specifies the upload at
     * which the listing of uploads should begin. Get the marker value from a previous
     * List Uploads response. You need only include the marker if you are continuing
     * the pagination of results started in a previous List Uploads request.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>An opaque string used for pagination. This value specifies the upload at
     * which the listing of uploads should begin. Get the marker value from a previous
     * List Uploads response. You need only include the marker if you are continuing
     * the pagination of results started in a previous List Uploads request.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>An opaque string used for pagination. This value specifies the upload at
     * which the listing of uploads should begin. Get the marker value from a previous
     * List Uploads response. You need only include the marker if you are continuing
     * the pagination of results started in a previous List Uploads request.</p>
     */
    inline ListMultipartUploadsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An opaque string used for pagination. This value specifies the upload at
     * which the listing of uploads should begin. Get the marker value from a previous
     * List Uploads response. You need only include the marker if you are continuing
     * the pagination of results started in a previous List Uploads request.</p>
     */
    inline ListMultipartUploadsRequest& WithMarker(Aws::String&& value) { SetMarker(value); return *this;}

    /**
     * <p>An opaque string used for pagination. This value specifies the upload at
     * which the listing of uploads should begin. Get the marker value from a previous
     * List Uploads response. You need only include the marker if you are continuing
     * the pagination of results started in a previous List Uploads request.</p>
     */
    inline ListMultipartUploadsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

    /**
     * <p>Specifies the maximum number of uploads returned in the response body. If
     * this value is not specified, the List Uploads operation returns up to 1,000
     * uploads.</p>
     */
    inline const Aws::String& GetLimit() const{ return m_limit; }

    /**
     * <p>Specifies the maximum number of uploads returned in the response body. If
     * this value is not specified, the List Uploads operation returns up to 1,000
     * uploads.</p>
     */
    inline void SetLimit(const Aws::String& value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>Specifies the maximum number of uploads returned in the response body. If
     * this value is not specified, the List Uploads operation returns up to 1,000
     * uploads.</p>
     */
    inline void SetLimit(Aws::String&& value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>Specifies the maximum number of uploads returned in the response body. If
     * this value is not specified, the List Uploads operation returns up to 1,000
     * uploads.</p>
     */
    inline void SetLimit(const char* value) { m_limitHasBeenSet = true; m_limit.assign(value); }

    /**
     * <p>Specifies the maximum number of uploads returned in the response body. If
     * this value is not specified, the List Uploads operation returns up to 1,000
     * uploads.</p>
     */
    inline ListMultipartUploadsRequest& WithLimit(const Aws::String& value) { SetLimit(value); return *this;}

    /**
     * <p>Specifies the maximum number of uploads returned in the response body. If
     * this value is not specified, the List Uploads operation returns up to 1,000
     * uploads.</p>
     */
    inline ListMultipartUploadsRequest& WithLimit(Aws::String&& value) { SetLimit(value); return *this;}

    /**
     * <p>Specifies the maximum number of uploads returned in the response body. If
     * this value is not specified, the List Uploads operation returns up to 1,000
     * uploads.</p>
     */
    inline ListMultipartUploadsRequest& WithLimit(const char* value) { SetLimit(value); return *this;}

  private:
    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;
    Aws::String m_vaultName;
    bool m_vaultNameHasBeenSet;
    Aws::String m_marker;
    bool m_markerHasBeenSet;
    Aws::String m_limit;
    bool m_limitHasBeenSet;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
