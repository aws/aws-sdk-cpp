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
    AWS_AMPLIFYBACKEND_API RemoveAllBackendsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemoveAllBackends"; }

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
    inline RemoveAllBackendsRequest& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}

    /**
     * <p>The app ID.</p>
     */
    inline RemoveAllBackendsRequest& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}

    /**
     * <p>The app ID.</p>
     */
    inline RemoveAllBackendsRequest& WithAppId(const char* value) { SetAppId(value); return *this;}


    /**
     * <p>Cleans up the Amplify Console app if this value is set to true.</p>
     */
    inline bool GetCleanAmplifyApp() const{ return m_cleanAmplifyApp; }

    /**
     * <p>Cleans up the Amplify Console app if this value is set to true.</p>
     */
    inline bool CleanAmplifyAppHasBeenSet() const { return m_cleanAmplifyAppHasBeenSet; }

    /**
     * <p>Cleans up the Amplify Console app if this value is set to true.</p>
     */
    inline void SetCleanAmplifyApp(bool value) { m_cleanAmplifyAppHasBeenSet = true; m_cleanAmplifyApp = value; }

    /**
     * <p>Cleans up the Amplify Console app if this value is set to true.</p>
     */
    inline RemoveAllBackendsRequest& WithCleanAmplifyApp(bool value) { SetCleanAmplifyApp(value); return *this;}

  private:

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;

    bool m_cleanAmplifyApp;
    bool m_cleanAmplifyAppHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
