﻿/*
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
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/IAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /**
   */
  class AWS_IAM_API ListSSHPublicKeysRequest : public IAMRequest
  {
  public:
    ListSSHPublicKeysRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSSHPublicKeys"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the IAM user to list SSH public keys for. If none is specified,
     * the <code>UserName</code> field is determined implicitly based on the AWS access
     * key used to sign the request.</p> <p>This parameter allows (per its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: _+=,.@-</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>The name of the IAM user to list SSH public keys for. If none is specified,
     * the <code>UserName</code> field is determined implicitly based on the AWS access
     * key used to sign the request.</p> <p>This parameter allows (per its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: _+=,.@-</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The name of the IAM user to list SSH public keys for. If none is specified,
     * the <code>UserName</code> field is determined implicitly based on the AWS access
     * key used to sign the request.</p> <p>This parameter allows (per its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: _+=,.@-</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }

    /**
     * <p>The name of the IAM user to list SSH public keys for. If none is specified,
     * the <code>UserName</code> field is determined implicitly based on the AWS access
     * key used to sign the request.</p> <p>This parameter allows (per its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: _+=,.@-</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>The name of the IAM user to list SSH public keys for. If none is specified,
     * the <code>UserName</code> field is determined implicitly based on the AWS access
     * key used to sign the request.</p> <p>This parameter allows (per its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: _+=,.@-</p>
     */
    inline ListSSHPublicKeysRequest& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>The name of the IAM user to list SSH public keys for. If none is specified,
     * the <code>UserName</code> field is determined implicitly based on the AWS access
     * key used to sign the request.</p> <p>This parameter allows (per its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: _+=,.@-</p>
     */
    inline ListSSHPublicKeysRequest& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>The name of the IAM user to list SSH public keys for. If none is specified,
     * the <code>UserName</code> field is determined implicitly based on the AWS access
     * key used to sign the request.</p> <p>This parameter allows (per its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: _+=,.@-</p>
     */
    inline ListSSHPublicKeysRequest& WithUserName(const char* value) { SetUserName(value); return *this;}


    /**
     * <p>Use this parameter only when paginating results and only after you receive a
     * response indicating that the results are truncated. Set it to the value of the
     * <code>Marker</code> element in the response that you received to indicate where
     * the next call should start.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>Use this parameter only when paginating results and only after you receive a
     * response indicating that the results are truncated. Set it to the value of the
     * <code>Marker</code> element in the response that you received to indicate where
     * the next call should start.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>Use this parameter only when paginating results and only after you receive a
     * response indicating that the results are truncated. Set it to the value of the
     * <code>Marker</code> element in the response that you received to indicate where
     * the next call should start.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>Use this parameter only when paginating results and only after you receive a
     * response indicating that the results are truncated. Set it to the value of the
     * <code>Marker</code> element in the response that you received to indicate where
     * the next call should start.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>Use this parameter only when paginating results and only after you receive a
     * response indicating that the results are truncated. Set it to the value of the
     * <code>Marker</code> element in the response that you received to indicate where
     * the next call should start.</p>
     */
    inline ListSSHPublicKeysRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>Use this parameter only when paginating results and only after you receive a
     * response indicating that the results are truncated. Set it to the value of the
     * <code>Marker</code> element in the response that you received to indicate where
     * the next call should start.</p>
     */
    inline ListSSHPublicKeysRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>Use this parameter only when paginating results and only after you receive a
     * response indicating that the results are truncated. Set it to the value of the
     * <code>Marker</code> element in the response that you received to indicate where
     * the next call should start.</p>
     */
    inline ListSSHPublicKeysRequest& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>(Optional) Use this only when paginating results to indicate the maximum
     * number of items you want in the response. If additional items exist beyond the
     * maximum you specify, the <code>IsTruncated</code> response element is
     * <code>true</code>.</p> <p>If you do not include this parameter, it defaults to
     * 100. Note that IAM might return fewer results, even when there are more results
     * available. In that case, the <code>IsTruncated</code> response element returns
     * <code>true</code> and <code>Marker</code> contains a value to include in the
     * subsequent call that tells the service where to continue from.</p>
     */
    inline int GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>(Optional) Use this only when paginating results to indicate the maximum
     * number of items you want in the response. If additional items exist beyond the
     * maximum you specify, the <code>IsTruncated</code> response element is
     * <code>true</code>.</p> <p>If you do not include this parameter, it defaults to
     * 100. Note that IAM might return fewer results, even when there are more results
     * available. In that case, the <code>IsTruncated</code> response element returns
     * <code>true</code> and <code>Marker</code> contains a value to include in the
     * subsequent call that tells the service where to continue from.</p>
     */
    inline void SetMaxItems(int value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>(Optional) Use this only when paginating results to indicate the maximum
     * number of items you want in the response. If additional items exist beyond the
     * maximum you specify, the <code>IsTruncated</code> response element is
     * <code>true</code>.</p> <p>If you do not include this parameter, it defaults to
     * 100. Note that IAM might return fewer results, even when there are more results
     * available. In that case, the <code>IsTruncated</code> response element returns
     * <code>true</code> and <code>Marker</code> contains a value to include in the
     * subsequent call that tells the service where to continue from.</p>
     */
    inline ListSSHPublicKeysRequest& WithMaxItems(int value) { SetMaxItems(value); return *this;}

  private:

    Aws::String m_userName;
    bool m_userNameHasBeenSet;

    Aws::String m_marker;
    bool m_markerHasBeenSet;

    int m_maxItems;
    bool m_maxItemsHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
