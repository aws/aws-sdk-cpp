/**
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
   * <p>The request structure for the get backend environment request. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/GetBackendEnvironmentRequest">AWS
   * API Reference</a></p>
   */
  class GetBackendEnvironmentRequest : public AmplifyRequest
  {
  public:
    AWS_AMPLIFY_API GetBackendEnvironmentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetBackendEnvironment"; }

    AWS_AMPLIFY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique id for an Amplify app. </p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }
    inline void SetAppId(const Aws::String& value) { m_appIdHasBeenSet = true; m_appId = value; }
    inline void SetAppId(Aws::String&& value) { m_appIdHasBeenSet = true; m_appId = std::move(value); }
    inline void SetAppId(const char* value) { m_appIdHasBeenSet = true; m_appId.assign(value); }
    inline GetBackendEnvironmentRequest& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}
    inline GetBackendEnvironmentRequest& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}
    inline GetBackendEnvironmentRequest& WithAppId(const char* value) { SetAppId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for the backend environment. </p>
     */
    inline const Aws::String& GetEnvironmentName() const{ return m_environmentName; }
    inline bool EnvironmentNameHasBeenSet() const { return m_environmentNameHasBeenSet; }
    inline void SetEnvironmentName(const Aws::String& value) { m_environmentNameHasBeenSet = true; m_environmentName = value; }
    inline void SetEnvironmentName(Aws::String&& value) { m_environmentNameHasBeenSet = true; m_environmentName = std::move(value); }
    inline void SetEnvironmentName(const char* value) { m_environmentNameHasBeenSet = true; m_environmentName.assign(value); }
    inline GetBackendEnvironmentRequest& WithEnvironmentName(const Aws::String& value) { SetEnvironmentName(value); return *this;}
    inline GetBackendEnvironmentRequest& WithEnvironmentName(Aws::String&& value) { SetEnvironmentName(std::move(value)); return *this;}
    inline GetBackendEnvironmentRequest& WithEnvironmentName(const char* value) { SetEnvironmentName(value); return *this;}
    ///@}
  private:

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;

    Aws::String m_environmentName;
    bool m_environmentNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
