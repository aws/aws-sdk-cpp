﻿/**
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
   * <p>The request body for GetBackendAPIModels.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/GetBackendAPIModelsRequest">AWS
   * API Reference</a></p>
   */
  class GetBackendAPIModelsRequest : public AmplifyBackendRequest
  {
  public:
    AWS_AMPLIFYBACKEND_API GetBackendAPIModelsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetBackendAPIModels"; }

    AWS_AMPLIFYBACKEND_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The app ID.</p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }
    inline void SetAppId(const Aws::String& value) { m_appIdHasBeenSet = true; m_appId = value; }
    inline void SetAppId(Aws::String&& value) { m_appIdHasBeenSet = true; m_appId = std::move(value); }
    inline void SetAppId(const char* value) { m_appIdHasBeenSet = true; m_appId.assign(value); }
    inline GetBackendAPIModelsRequest& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}
    inline GetBackendAPIModelsRequest& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}
    inline GetBackendAPIModelsRequest& WithAppId(const char* value) { SetAppId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the backend environment.</p>
     */
    inline const Aws::String& GetBackendEnvironmentName() const{ return m_backendEnvironmentName; }
    inline bool BackendEnvironmentNameHasBeenSet() const { return m_backendEnvironmentNameHasBeenSet; }
    inline void SetBackendEnvironmentName(const Aws::String& value) { m_backendEnvironmentNameHasBeenSet = true; m_backendEnvironmentName = value; }
    inline void SetBackendEnvironmentName(Aws::String&& value) { m_backendEnvironmentNameHasBeenSet = true; m_backendEnvironmentName = std::move(value); }
    inline void SetBackendEnvironmentName(const char* value) { m_backendEnvironmentNameHasBeenSet = true; m_backendEnvironmentName.assign(value); }
    inline GetBackendAPIModelsRequest& WithBackendEnvironmentName(const Aws::String& value) { SetBackendEnvironmentName(value); return *this;}
    inline GetBackendAPIModelsRequest& WithBackendEnvironmentName(Aws::String&& value) { SetBackendEnvironmentName(std::move(value)); return *this;}
    inline GetBackendAPIModelsRequest& WithBackendEnvironmentName(const char* value) { SetBackendEnvironmentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of this resource.</p>
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }
    inline void SetResourceName(const Aws::String& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }
    inline void SetResourceName(Aws::String&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::move(value); }
    inline void SetResourceName(const char* value) { m_resourceNameHasBeenSet = true; m_resourceName.assign(value); }
    inline GetBackendAPIModelsRequest& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}
    inline GetBackendAPIModelsRequest& WithResourceName(Aws::String&& value) { SetResourceName(std::move(value)); return *this;}
    inline GetBackendAPIModelsRequest& WithResourceName(const char* value) { SetResourceName(value); return *this;}
    ///@}
  private:

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;

    Aws::String m_backendEnvironmentName;
    bool m_backendEnvironmentNameHasBeenSet = false;

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
