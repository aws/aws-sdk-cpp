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
#include <aws/email/SES_EXPORTS.h>
#include <aws/email/SESRequest.h>
#include <aws/email/model/IdentityType.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SES
{
namespace Model
{

  /**
   * <p>Represents a request to return a list of all identities (email addresses and
   * domains) that you have attempted to verify under your AWS account, regardless of
   * verification status.</p>
   */
  class AWS_SES_API ListIdentitiesRequest : public SESRequest
  {
  public:
    ListIdentitiesRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The type of the identities to list. Possible values are "EmailAddress" and
     * "Domain". If this parameter is omitted, then all identities will be listed.</p>
     */
    inline const IdentityType& GetIdentityType() const{ return m_identityType; }

    /**
     * <p>The type of the identities to list. Possible values are "EmailAddress" and
     * "Domain". If this parameter is omitted, then all identities will be listed.</p>
     */
    inline void SetIdentityType(const IdentityType& value) { m_identityTypeHasBeenSet = true; m_identityType = value; }

    /**
     * <p>The type of the identities to list. Possible values are "EmailAddress" and
     * "Domain". If this parameter is omitted, then all identities will be listed.</p>
     */
    inline void SetIdentityType(IdentityType&& value) { m_identityTypeHasBeenSet = true; m_identityType = value; }

    /**
     * <p>The type of the identities to list. Possible values are "EmailAddress" and
     * "Domain". If this parameter is omitted, then all identities will be listed.</p>
     */
    inline ListIdentitiesRequest& WithIdentityType(const IdentityType& value) { SetIdentityType(value); return *this;}

    /**
     * <p>The type of the identities to list. Possible values are "EmailAddress" and
     * "Domain". If this parameter is omitted, then all identities will be listed.</p>
     */
    inline ListIdentitiesRequest& WithIdentityType(IdentityType&& value) { SetIdentityType(value); return *this;}

    /**
     * <p>The token to use for pagination.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use for pagination.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to use for pagination.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to use for pagination.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to use for pagination.</p>
     */
    inline ListIdentitiesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use for pagination.</p>
     */
    inline ListIdentitiesRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use for pagination.</p>
     */
    inline ListIdentitiesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    /**
     * <p>The maximum number of identities per page. Possible values are 1-1000
     * inclusive.</p>
     */
    inline int GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>The maximum number of identities per page. Possible values are 1-1000
     * inclusive.</p>
     */
    inline void SetMaxItems(int value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>The maximum number of identities per page. Possible values are 1-1000
     * inclusive.</p>
     */
    inline ListIdentitiesRequest& WithMaxItems(int value) { SetMaxItems(value); return *this;}

  private:
    IdentityType m_identityType;
    bool m_identityTypeHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
    int m_maxItems;
    bool m_maxItemsHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
