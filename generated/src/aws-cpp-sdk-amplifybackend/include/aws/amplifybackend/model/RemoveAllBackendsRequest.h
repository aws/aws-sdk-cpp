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
   * <p>The request body for RemoveAllBackends.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/RemoveAllBackendsRequest">AWS
   * API Reference</a></p>
   */
  class RemoveAllBackendsRequest : public AmplifyBackendRequest
  {
  public:
    AWS_AMPLIFYBACKEND_API RemoveAllBackendsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemoveAllBackends"; }

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
    RemoveAllBackendsRequest& WithAppId(AppIdT&& value) { SetAppId(std::forward<AppIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Cleans up the Amplify Console app if this value is set to true.</p>
     */
    inline bool GetCleanAmplifyApp() const { return m_cleanAmplifyApp; }
    inline bool CleanAmplifyAppHasBeenSet() const { return m_cleanAmplifyAppHasBeenSet; }
    inline void SetCleanAmplifyApp(bool value) { m_cleanAmplifyAppHasBeenSet = true; m_cleanAmplifyApp = value; }
    inline RemoveAllBackendsRequest& WithCleanAmplifyApp(bool value) { SetCleanAmplifyApp(value); return *this;}
    ///@}
  private:

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;

    bool m_cleanAmplifyApp{false};
    bool m_cleanAmplifyAppHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
