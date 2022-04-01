﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class AWS_IAM_API DeleteOpenIDConnectProviderRequest : public IAMRequest
  {
  public:
    DeleteOpenIDConnectProviderRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteOpenIDConnectProvider"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM OpenID Connect provider resource
     * object to delete. You can get a list of OpenID Connect provider resource ARNs by
     * using the <a>ListOpenIDConnectProviders</a> operation.</p>
     */
    inline const Aws::String& GetOpenIDConnectProviderArn() const{ return m_openIDConnectProviderArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM OpenID Connect provider resource
     * object to delete. You can get a list of OpenID Connect provider resource ARNs by
     * using the <a>ListOpenIDConnectProviders</a> operation.</p>
     */
    inline bool OpenIDConnectProviderArnHasBeenSet() const { return m_openIDConnectProviderArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM OpenID Connect provider resource
     * object to delete. You can get a list of OpenID Connect provider resource ARNs by
     * using the <a>ListOpenIDConnectProviders</a> operation.</p>
     */
    inline void SetOpenIDConnectProviderArn(const Aws::String& value) { m_openIDConnectProviderArnHasBeenSet = true; m_openIDConnectProviderArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM OpenID Connect provider resource
     * object to delete. You can get a list of OpenID Connect provider resource ARNs by
     * using the <a>ListOpenIDConnectProviders</a> operation.</p>
     */
    inline void SetOpenIDConnectProviderArn(Aws::String&& value) { m_openIDConnectProviderArnHasBeenSet = true; m_openIDConnectProviderArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM OpenID Connect provider resource
     * object to delete. You can get a list of OpenID Connect provider resource ARNs by
     * using the <a>ListOpenIDConnectProviders</a> operation.</p>
     */
    inline void SetOpenIDConnectProviderArn(const char* value) { m_openIDConnectProviderArnHasBeenSet = true; m_openIDConnectProviderArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM OpenID Connect provider resource
     * object to delete. You can get a list of OpenID Connect provider resource ARNs by
     * using the <a>ListOpenIDConnectProviders</a> operation.</p>
     */
    inline DeleteOpenIDConnectProviderRequest& WithOpenIDConnectProviderArn(const Aws::String& value) { SetOpenIDConnectProviderArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM OpenID Connect provider resource
     * object to delete. You can get a list of OpenID Connect provider resource ARNs by
     * using the <a>ListOpenIDConnectProviders</a> operation.</p>
     */
    inline DeleteOpenIDConnectProviderRequest& WithOpenIDConnectProviderArn(Aws::String&& value) { SetOpenIDConnectProviderArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM OpenID Connect provider resource
     * object to delete. You can get a list of OpenID Connect provider resource ARNs by
     * using the <a>ListOpenIDConnectProviders</a> operation.</p>
     */
    inline DeleteOpenIDConnectProviderRequest& WithOpenIDConnectProviderArn(const char* value) { SetOpenIDConnectProviderArn(value); return *this;}

  private:

    Aws::String m_openIDConnectProviderArn;
    bool m_openIDConnectProviderArnHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
