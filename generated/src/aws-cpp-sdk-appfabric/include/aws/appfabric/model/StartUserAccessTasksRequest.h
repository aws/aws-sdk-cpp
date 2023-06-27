/**
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
  class StartUserAccessTasksRequest : public AppFabricRequest
  {
  public:
    AWS_APPFABRIC_API StartUserAccessTasksRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartUserAccessTasks"; }

    AWS_APPFABRIC_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app bundle to use for the request.</p>
     */
    inline const Aws::String& GetAppBundleIdentifier() const{ return m_appBundleIdentifier; }

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app bundle to use for the request.</p>
     */
    inline bool AppBundleIdentifierHasBeenSet() const { return m_appBundleIdentifierHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app bundle to use for the request.</p>
     */
    inline void SetAppBundleIdentifier(const Aws::String& value) { m_appBundleIdentifierHasBeenSet = true; m_appBundleIdentifier = value; }

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app bundle to use for the request.</p>
     */
    inline void SetAppBundleIdentifier(Aws::String&& value) { m_appBundleIdentifierHasBeenSet = true; m_appBundleIdentifier = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app bundle to use for the request.</p>
     */
    inline void SetAppBundleIdentifier(const char* value) { m_appBundleIdentifierHasBeenSet = true; m_appBundleIdentifier.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app bundle to use for the request.</p>
     */
    inline StartUserAccessTasksRequest& WithAppBundleIdentifier(const Aws::String& value) { SetAppBundleIdentifier(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app bundle to use for the request.</p>
     */
    inline StartUserAccessTasksRequest& WithAppBundleIdentifier(Aws::String&& value) { SetAppBundleIdentifier(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app bundle to use for the request.</p>
     */
    inline StartUserAccessTasksRequest& WithAppBundleIdentifier(const char* value) { SetAppBundleIdentifier(value); return *this;}


    /**
     * <p>The email address of the target user.</p>
     */
    inline const Aws::String& GetEmail() const{ return m_email; }

    /**
     * <p>The email address of the target user.</p>
     */
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }

    /**
     * <p>The email address of the target user.</p>
     */
    inline void SetEmail(const Aws::String& value) { m_emailHasBeenSet = true; m_email = value; }

    /**
     * <p>The email address of the target user.</p>
     */
    inline void SetEmail(Aws::String&& value) { m_emailHasBeenSet = true; m_email = std::move(value); }

    /**
     * <p>The email address of the target user.</p>
     */
    inline void SetEmail(const char* value) { m_emailHasBeenSet = true; m_email.assign(value); }

    /**
     * <p>The email address of the target user.</p>
     */
    inline StartUserAccessTasksRequest& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}

    /**
     * <p>The email address of the target user.</p>
     */
    inline StartUserAccessTasksRequest& WithEmail(Aws::String&& value) { SetEmail(std::move(value)); return *this;}

    /**
     * <p>The email address of the target user.</p>
     */
    inline StartUserAccessTasksRequest& WithEmail(const char* value) { SetEmail(value); return *this;}

  private:

    Aws::String m_appBundleIdentifier;
    bool m_appBundleIdentifierHasBeenSet = false;

    Aws::String m_email;
    bool m_emailHasBeenSet = false;
  };

} // namespace Model
} // namespace AppFabric
} // namespace Aws
