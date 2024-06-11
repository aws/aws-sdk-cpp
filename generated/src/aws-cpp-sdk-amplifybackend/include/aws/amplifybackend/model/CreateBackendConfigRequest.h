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
   * <p>The request body for CreateBackendConfig.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/CreateBackendConfigRequest">AWS
   * API Reference</a></p>
   */
  class CreateBackendConfigRequest : public AmplifyBackendRequest
  {
  public:
    AWS_AMPLIFYBACKEND_API CreateBackendConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateBackendConfig"; }

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
    inline CreateBackendConfigRequest& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}
    inline CreateBackendConfigRequest& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}
    inline CreateBackendConfigRequest& WithAppId(const char* value) { SetAppId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The app ID for the backend manager.</p>
     */
    inline const Aws::String& GetBackendManagerAppId() const{ return m_backendManagerAppId; }
    inline bool BackendManagerAppIdHasBeenSet() const { return m_backendManagerAppIdHasBeenSet; }
    inline void SetBackendManagerAppId(const Aws::String& value) { m_backendManagerAppIdHasBeenSet = true; m_backendManagerAppId = value; }
    inline void SetBackendManagerAppId(Aws::String&& value) { m_backendManagerAppIdHasBeenSet = true; m_backendManagerAppId = std::move(value); }
    inline void SetBackendManagerAppId(const char* value) { m_backendManagerAppIdHasBeenSet = true; m_backendManagerAppId.assign(value); }
    inline CreateBackendConfigRequest& WithBackendManagerAppId(const Aws::String& value) { SetBackendManagerAppId(value); return *this;}
    inline CreateBackendConfigRequest& WithBackendManagerAppId(Aws::String&& value) { SetBackendManagerAppId(std::move(value)); return *this;}
    inline CreateBackendConfigRequest& WithBackendManagerAppId(const char* value) { SetBackendManagerAppId(value); return *this;}
    ///@}
  private:

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;

    Aws::String m_backendManagerAppId;
    bool m_backendManagerAppIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
