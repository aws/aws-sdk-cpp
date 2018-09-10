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
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/KMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace KMS
{
namespace Model
{

  /**
   */
  class AWS_KMS_API ListAliasesRequest : public KMSRequest
  {
  public:
    ListAliasesRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAliases"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Lists only aliases that refer to the specified CMK. The value of this
     * parameter can be the ID or Amazon Resource Name (ARN) of a CMK in the caller's
     * account and region. You cannot use an alias name or alias ARN in this value.</p>
     * <p>This parameter is optional. If you omit it, <code>ListAliases</code> returns
     * all aliases in the account and region.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>Lists only aliases that refer to the specified CMK. The value of this
     * parameter can be the ID or Amazon Resource Name (ARN) of a CMK in the caller's
     * account and region. You cannot use an alias name or alias ARN in this value.</p>
     * <p>This parameter is optional. If you omit it, <code>ListAliases</code> returns
     * all aliases in the account and region.</p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>Lists only aliases that refer to the specified CMK. The value of this
     * parameter can be the ID or Amazon Resource Name (ARN) of a CMK in the caller's
     * account and region. You cannot use an alias name or alias ARN in this value.</p>
     * <p>This parameter is optional. If you omit it, <code>ListAliases</code> returns
     * all aliases in the account and region.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = std::move(value); }

    /**
     * <p>Lists only aliases that refer to the specified CMK. The value of this
     * parameter can be the ID or Amazon Resource Name (ARN) of a CMK in the caller's
     * account and region. You cannot use an alias name or alias ARN in this value.</p>
     * <p>This parameter is optional. If you omit it, <code>ListAliases</code> returns
     * all aliases in the account and region.</p>
     */
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }

    /**
     * <p>Lists only aliases that refer to the specified CMK. The value of this
     * parameter can be the ID or Amazon Resource Name (ARN) of a CMK in the caller's
     * account and region. You cannot use an alias name or alias ARN in this value.</p>
     * <p>This parameter is optional. If you omit it, <code>ListAliases</code> returns
     * all aliases in the account and region.</p>
     */
    inline ListAliasesRequest& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>Lists only aliases that refer to the specified CMK. The value of this
     * parameter can be the ID or Amazon Resource Name (ARN) of a CMK in the caller's
     * account and region. You cannot use an alias name or alias ARN in this value.</p>
     * <p>This parameter is optional. If you omit it, <code>ListAliases</code> returns
     * all aliases in the account and region.</p>
     */
    inline ListAliasesRequest& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>Lists only aliases that refer to the specified CMK. The value of this
     * parameter can be the ID or Amazon Resource Name (ARN) of a CMK in the caller's
     * account and region. You cannot use an alias name or alias ARN in this value.</p>
     * <p>This parameter is optional. If you omit it, <code>ListAliases</code> returns
     * all aliases in the account and region.</p>
     */
    inline ListAliasesRequest& WithKeyId(const char* value) { SetKeyId(value); return *this;}


    /**
     * <p>Use this parameter to specify the maximum number of items to return. When
     * this value is present, AWS KMS does not return more than the specified number of
     * items, but it might return fewer.</p> <p>This value is optional. If you include
     * a value, it must be between 1 and 100, inclusive. If you do not include a value,
     * it defaults to 50.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>Use this parameter to specify the maximum number of items to return. When
     * this value is present, AWS KMS does not return more than the specified number of
     * items, but it might return fewer.</p> <p>This value is optional. If you include
     * a value, it must be between 1 and 100, inclusive. If you do not include a value,
     * it defaults to 50.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>Use this parameter to specify the maximum number of items to return. When
     * this value is present, AWS KMS does not return more than the specified number of
     * items, but it might return fewer.</p> <p>This value is optional. If you include
     * a value, it must be between 1 and 100, inclusive. If you do not include a value,
     * it defaults to 50.</p>
     */
    inline ListAliasesRequest& WithLimit(int value) { SetLimit(value); return *this;}


    /**
     * <p>Use this parameter in a subsequent request after you receive a response with
     * truncated results. Set it to the value of <code>NextMarker</code> from the
     * truncated response you just received.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>Use this parameter in a subsequent request after you receive a response with
     * truncated results. Set it to the value of <code>NextMarker</code> from the
     * truncated response you just received.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>Use this parameter in a subsequent request after you receive a response with
     * truncated results. Set it to the value of <code>NextMarker</code> from the
     * truncated response you just received.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>Use this parameter in a subsequent request after you receive a response with
     * truncated results. Set it to the value of <code>NextMarker</code> from the
     * truncated response you just received.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>Use this parameter in a subsequent request after you receive a response with
     * truncated results. Set it to the value of <code>NextMarker</code> from the
     * truncated response you just received.</p>
     */
    inline ListAliasesRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>Use this parameter in a subsequent request after you receive a response with
     * truncated results. Set it to the value of <code>NextMarker</code> from the
     * truncated response you just received.</p>
     */
    inline ListAliasesRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>Use this parameter in a subsequent request after you receive a response with
     * truncated results. Set it to the value of <code>NextMarker</code> from the
     * truncated response you just received.</p>
     */
    inline ListAliasesRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet;

    int m_limit;
    bool m_limitHasBeenSet;

    Aws::String m_marker;
    bool m_markerHasBeenSet;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
