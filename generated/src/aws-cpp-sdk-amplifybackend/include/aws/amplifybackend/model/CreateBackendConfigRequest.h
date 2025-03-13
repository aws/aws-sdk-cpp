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
    AWS_AMPLIFYBACKEND_API CreateBackendConfigRequest() = default;

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
    inline const Aws::String& GetAppId() const { return m_appId; }
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }
    template<typename AppIdT = Aws::String>
    void SetAppId(AppIdT&& value) { m_appIdHasBeenSet = true; m_appId = std::forward<AppIdT>(value); }
    template<typename AppIdT = Aws::String>
    CreateBackendConfigRequest& WithAppId(AppIdT&& value) { SetAppId(std::forward<AppIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The app ID for the backend manager.</p>
     */
    inline const Aws::String& GetBackendManagerAppId() const { return m_backendManagerAppId; }
    inline bool BackendManagerAppIdHasBeenSet() const { return m_backendManagerAppIdHasBeenSet; }
    template<typename BackendManagerAppIdT = Aws::String>
    void SetBackendManagerAppId(BackendManagerAppIdT&& value) { m_backendManagerAppIdHasBeenSet = true; m_backendManagerAppId = std::forward<BackendManagerAppIdT>(value); }
    template<typename BackendManagerAppIdT = Aws::String>
    CreateBackendConfigRequest& WithBackendManagerAppId(BackendManagerAppIdT&& value) { SetBackendManagerAppId(std::forward<BackendManagerAppIdT>(value)); return *this;}
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
