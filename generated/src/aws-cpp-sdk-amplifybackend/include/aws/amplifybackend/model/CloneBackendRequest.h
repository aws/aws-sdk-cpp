/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifybackend/AmplifyBackend_EXPORTS.h>
#include <aws/amplifybackend/AmplifyBackendRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AmplifyBackend
{
namespace Model
{

  /**
   * <p>The request body for CloneBackend.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/CloneBackendRequest">AWS
   * API Reference</a></p>
   */
  class CloneBackendRequest : public AmplifyBackendRequest
  {
  public:
    AWS_AMPLIFYBACKEND_API CloneBackendRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CloneBackend"; }

    AWS_AMPLIFYBACKEND_API Aws::String SerializePayload() const override;


    /**
     * <p>The app ID.</p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }

    /**
     * <p>The app ID.</p>
     */
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }

    /**
     * <p>The app ID.</p>
     */
    inline void SetAppId(const Aws::String& value) { m_appIdHasBeenSet = true; m_appId = value; }

    /**
     * <p>The app ID.</p>
     */
    inline void SetAppId(Aws::String&& value) { m_appIdHasBeenSet = true; m_appId = std::move(value); }

    /**
     * <p>The app ID.</p>
     */
    inline void SetAppId(const char* value) { m_appIdHasBeenSet = true; m_appId.assign(value); }

    /**
     * <p>The app ID.</p>
     */
    inline CloneBackendRequest& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}

    /**
     * <p>The app ID.</p>
     */
    inline CloneBackendRequest& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}

    /**
     * <p>The app ID.</p>
     */
    inline CloneBackendRequest& WithAppId(const char* value) { SetAppId(value); return *this;}


    /**
     * <p>The name of the backend environment.</p>
     */
    inline const Aws::String& GetBackendEnvironmentName() const{ return m_backendEnvironmentName; }

    /**
     * <p>The name of the backend environment.</p>
     */
    inline bool BackendEnvironmentNameHasBeenSet() const { return m_backendEnvironmentNameHasBeenSet; }

    /**
     * <p>The name of the backend environment.</p>
     */
    inline void SetBackendEnvironmentName(const Aws::String& value) { m_backendEnvironmentNameHasBeenSet = true; m_backendEnvironmentName = value; }

    /**
     * <p>The name of the backend environment.</p>
     */
    inline void SetBackendEnvironmentName(Aws::String&& value) { m_backendEnvironmentNameHasBeenSet = true; m_backendEnvironmentName = std::move(value); }

    /**
     * <p>The name of the backend environment.</p>
     */
    inline void SetBackendEnvironmentName(const char* value) { m_backendEnvironmentNameHasBeenSet = true; m_backendEnvironmentName.assign(value); }

    /**
     * <p>The name of the backend environment.</p>
     */
    inline CloneBackendRequest& WithBackendEnvironmentName(const Aws::String& value) { SetBackendEnvironmentName(value); return *this;}

    /**
     * <p>The name of the backend environment.</p>
     */
    inline CloneBackendRequest& WithBackendEnvironmentName(Aws::String&& value) { SetBackendEnvironmentName(std::move(value)); return *this;}

    /**
     * <p>The name of the backend environment.</p>
     */
    inline CloneBackendRequest& WithBackendEnvironmentName(const char* value) { SetBackendEnvironmentName(value); return *this;}


    /**
     * <p>The name of the destination backend environment to be created.</p>
     */
    inline const Aws::String& GetTargetEnvironmentName() const{ return m_targetEnvironmentName; }

    /**
     * <p>The name of the destination backend environment to be created.</p>
     */
    inline bool TargetEnvironmentNameHasBeenSet() const { return m_targetEnvironmentNameHasBeenSet; }

    /**
     * <p>The name of the destination backend environment to be created.</p>
     */
    inline void SetTargetEnvironmentName(const Aws::String& value) { m_targetEnvironmentNameHasBeenSet = true; m_targetEnvironmentName = value; }

    /**
     * <p>The name of the destination backend environment to be created.</p>
     */
    inline void SetTargetEnvironmentName(Aws::String&& value) { m_targetEnvironmentNameHasBeenSet = true; m_targetEnvironmentName = std::move(value); }

    /**
     * <p>The name of the destination backend environment to be created.</p>
     */
    inline void SetTargetEnvironmentName(const char* value) { m_targetEnvironmentNameHasBeenSet = true; m_targetEnvironmentName.assign(value); }

    /**
     * <p>The name of the destination backend environment to be created.</p>
     */
    inline CloneBackendRequest& WithTargetEnvironmentName(const Aws::String& value) { SetTargetEnvironmentName(value); return *this;}

    /**
     * <p>The name of the destination backend environment to be created.</p>
     */
    inline CloneBackendRequest& WithTargetEnvironmentName(Aws::String&& value) { SetTargetEnvironmentName(std::move(value)); return *this;}

    /**
     * <p>The name of the destination backend environment to be created.</p>
     */
    inline CloneBackendRequest& WithTargetEnvironmentName(const char* value) { SetTargetEnvironmentName(value); return *this;}

  private:

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;

    Aws::String m_backendEnvironmentName;
    bool m_backendEnvironmentNameHasBeenSet = false;

    Aws::String m_targetEnvironmentName;
    bool m_targetEnvironmentNameHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
