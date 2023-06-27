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
  class DeleteAppBundleRequest : public AppFabricRequest
  {
  public:
    AWS_APPFABRIC_API DeleteAppBundleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAppBundle"; }

    AWS_APPFABRIC_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID or Amazon Resource Name (ARN) of the app bundle that needs to be
     * deleted.</p>
     */
    inline const Aws::String& GetAppBundleIdentifier() const{ return m_appBundleIdentifier; }

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the app bundle that needs to be
     * deleted.</p>
     */
    inline bool AppBundleIdentifierHasBeenSet() const { return m_appBundleIdentifierHasBeenSet; }

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the app bundle that needs to be
     * deleted.</p>
     */
    inline void SetAppBundleIdentifier(const Aws::String& value) { m_appBundleIdentifierHasBeenSet = true; m_appBundleIdentifier = value; }

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the app bundle that needs to be
     * deleted.</p>
     */
    inline void SetAppBundleIdentifier(Aws::String&& value) { m_appBundleIdentifierHasBeenSet = true; m_appBundleIdentifier = std::move(value); }

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the app bundle that needs to be
     * deleted.</p>
     */
    inline void SetAppBundleIdentifier(const char* value) { m_appBundleIdentifierHasBeenSet = true; m_appBundleIdentifier.assign(value); }

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the app bundle that needs to be
     * deleted.</p>
     */
    inline DeleteAppBundleRequest& WithAppBundleIdentifier(const Aws::String& value) { SetAppBundleIdentifier(value); return *this;}

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the app bundle that needs to be
     * deleted.</p>
     */
    inline DeleteAppBundleRequest& WithAppBundleIdentifier(Aws::String&& value) { SetAppBundleIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the app bundle that needs to be
     * deleted.</p>
     */
    inline DeleteAppBundleRequest& WithAppBundleIdentifier(const char* value) { SetAppBundleIdentifier(value); return *this;}

  private:

    Aws::String m_appBundleIdentifier;
    bool m_appBundleIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace AppFabric
} // namespace Aws
