﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/amplify/AmplifyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Amplify
{
namespace Model
{

  /**
   * <p> The request structure for the delete backend environment request.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/DeleteBackendEnvironmentRequest">AWS
   * API Reference</a></p>
   */
  class AWS_AMPLIFY_API DeleteBackendEnvironmentRequest : public AmplifyRequest
  {
  public:
    DeleteBackendEnvironmentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteBackendEnvironment"; }

    Aws::String SerializePayload() const override;


    /**
     * <p> The unique ID of an Amplify app. </p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }

    /**
     * <p> The unique ID of an Amplify app. </p>
     */
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }

    /**
     * <p> The unique ID of an Amplify app. </p>
     */
    inline void SetAppId(const Aws::String& value) { m_appIdHasBeenSet = true; m_appId = value; }

    /**
     * <p> The unique ID of an Amplify app. </p>
     */
    inline void SetAppId(Aws::String&& value) { m_appIdHasBeenSet = true; m_appId = std::move(value); }

    /**
     * <p> The unique ID of an Amplify app. </p>
     */
    inline void SetAppId(const char* value) { m_appIdHasBeenSet = true; m_appId.assign(value); }

    /**
     * <p> The unique ID of an Amplify app. </p>
     */
    inline DeleteBackendEnvironmentRequest& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}

    /**
     * <p> The unique ID of an Amplify app. </p>
     */
    inline DeleteBackendEnvironmentRequest& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}

    /**
     * <p> The unique ID of an Amplify app. </p>
     */
    inline DeleteBackendEnvironmentRequest& WithAppId(const char* value) { SetAppId(value); return *this;}


    /**
     * <p> The name of a backend environment of an Amplify app. </p>
     */
    inline const Aws::String& GetEnvironmentName() const{ return m_environmentName; }

    /**
     * <p> The name of a backend environment of an Amplify app. </p>
     */
    inline bool EnvironmentNameHasBeenSet() const { return m_environmentNameHasBeenSet; }

    /**
     * <p> The name of a backend environment of an Amplify app. </p>
     */
    inline void SetEnvironmentName(const Aws::String& value) { m_environmentNameHasBeenSet = true; m_environmentName = value; }

    /**
     * <p> The name of a backend environment of an Amplify app. </p>
     */
    inline void SetEnvironmentName(Aws::String&& value) { m_environmentNameHasBeenSet = true; m_environmentName = std::move(value); }

    /**
     * <p> The name of a backend environment of an Amplify app. </p>
     */
    inline void SetEnvironmentName(const char* value) { m_environmentNameHasBeenSet = true; m_environmentName.assign(value); }

    /**
     * <p> The name of a backend environment of an Amplify app. </p>
     */
    inline DeleteBackendEnvironmentRequest& WithEnvironmentName(const Aws::String& value) { SetEnvironmentName(value); return *this;}

    /**
     * <p> The name of a backend environment of an Amplify app. </p>
     */
    inline DeleteBackendEnvironmentRequest& WithEnvironmentName(Aws::String&& value) { SetEnvironmentName(std::move(value)); return *this;}

    /**
     * <p> The name of a backend environment of an Amplify app. </p>
     */
    inline DeleteBackendEnvironmentRequest& WithEnvironmentName(const char* value) { SetEnvironmentName(value); return *this;}

  private:

    Aws::String m_appId;
    bool m_appIdHasBeenSet;

    Aws::String m_environmentName;
    bool m_environmentNameHasBeenSet;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
