﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appfabric/AppFabric_EXPORTS.h>
#include <aws/appfabric/AppFabricRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AppFabric
{
namespace Model
{

  /**
   */
  class GetAppAuthorizationRequest : public AppFabricRequest
  {
  public:
    AWS_APPFABRIC_API GetAppAuthorizationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAppAuthorization"; }

    AWS_APPFABRIC_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app bundle to use for the request.</p>
     */
    inline const Aws::String& GetAppBundleIdentifier() const{ return m_appBundleIdentifier; }
    inline bool AppBundleIdentifierHasBeenSet() const { return m_appBundleIdentifierHasBeenSet; }
    inline void SetAppBundleIdentifier(const Aws::String& value) { m_appBundleIdentifierHasBeenSet = true; m_appBundleIdentifier = value; }
    inline void SetAppBundleIdentifier(Aws::String&& value) { m_appBundleIdentifierHasBeenSet = true; m_appBundleIdentifier = std::move(value); }
    inline void SetAppBundleIdentifier(const char* value) { m_appBundleIdentifierHasBeenSet = true; m_appBundleIdentifier.assign(value); }
    inline GetAppAuthorizationRequest& WithAppBundleIdentifier(const Aws::String& value) { SetAppBundleIdentifier(value); return *this;}
    inline GetAppAuthorizationRequest& WithAppBundleIdentifier(Aws::String&& value) { SetAppBundleIdentifier(std::move(value)); return *this;}
    inline GetAppAuthorizationRequest& WithAppBundleIdentifier(const char* value) { SetAppBundleIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app authorization to use for the request.</p>
     */
    inline const Aws::String& GetAppAuthorizationIdentifier() const{ return m_appAuthorizationIdentifier; }
    inline bool AppAuthorizationIdentifierHasBeenSet() const { return m_appAuthorizationIdentifierHasBeenSet; }
    inline void SetAppAuthorizationIdentifier(const Aws::String& value) { m_appAuthorizationIdentifierHasBeenSet = true; m_appAuthorizationIdentifier = value; }
    inline void SetAppAuthorizationIdentifier(Aws::String&& value) { m_appAuthorizationIdentifierHasBeenSet = true; m_appAuthorizationIdentifier = std::move(value); }
    inline void SetAppAuthorizationIdentifier(const char* value) { m_appAuthorizationIdentifierHasBeenSet = true; m_appAuthorizationIdentifier.assign(value); }
    inline GetAppAuthorizationRequest& WithAppAuthorizationIdentifier(const Aws::String& value) { SetAppAuthorizationIdentifier(value); return *this;}
    inline GetAppAuthorizationRequest& WithAppAuthorizationIdentifier(Aws::String&& value) { SetAppAuthorizationIdentifier(std::move(value)); return *this;}
    inline GetAppAuthorizationRequest& WithAppAuthorizationIdentifier(const char* value) { SetAppAuthorizationIdentifier(value); return *this;}
    ///@}
  private:

    Aws::String m_appBundleIdentifier;
    bool m_appBundleIdentifierHasBeenSet = false;

    Aws::String m_appAuthorizationIdentifier;
    bool m_appAuthorizationIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace AppFabric
} // namespace Aws
