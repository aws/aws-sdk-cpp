/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/amplifyuibuilder/AmplifyUIBuilderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amplifyuibuilder/model/StartCodegenJobData.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace AmplifyUIBuilder
{
namespace Model
{

  /**
   */
  class StartCodegenJobRequest : public AmplifyUIBuilderRequest
  {
  public:
    AWS_AMPLIFYUIBUILDER_API StartCodegenJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartCodegenJob"; }

    AWS_AMPLIFYUIBUILDER_API Aws::String SerializePayload() const override;

    AWS_AMPLIFYUIBUILDER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The unique ID for the Amplify app.</p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }

    /**
     * <p>The unique ID for the Amplify app.</p>
     */
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }

    /**
     * <p>The unique ID for the Amplify app.</p>
     */
    inline void SetAppId(const Aws::String& value) { m_appIdHasBeenSet = true; m_appId = value; }

    /**
     * <p>The unique ID for the Amplify app.</p>
     */
    inline void SetAppId(Aws::String&& value) { m_appIdHasBeenSet = true; m_appId = std::move(value); }

    /**
     * <p>The unique ID for the Amplify app.</p>
     */
    inline void SetAppId(const char* value) { m_appIdHasBeenSet = true; m_appId.assign(value); }

    /**
     * <p>The unique ID for the Amplify app.</p>
     */
    inline StartCodegenJobRequest& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}

    /**
     * <p>The unique ID for the Amplify app.</p>
     */
    inline StartCodegenJobRequest& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}

    /**
     * <p>The unique ID for the Amplify app.</p>
     */
    inline StartCodegenJobRequest& WithAppId(const char* value) { SetAppId(value); return *this;}


    /**
     * <p>The name of the backend environment that is a part of the Amplify app.</p>
     */
    inline const Aws::String& GetEnvironmentName() const{ return m_environmentName; }

    /**
     * <p>The name of the backend environment that is a part of the Amplify app.</p>
     */
    inline bool EnvironmentNameHasBeenSet() const { return m_environmentNameHasBeenSet; }

    /**
     * <p>The name of the backend environment that is a part of the Amplify app.</p>
     */
    inline void SetEnvironmentName(const Aws::String& value) { m_environmentNameHasBeenSet = true; m_environmentName = value; }

    /**
     * <p>The name of the backend environment that is a part of the Amplify app.</p>
     */
    inline void SetEnvironmentName(Aws::String&& value) { m_environmentNameHasBeenSet = true; m_environmentName = std::move(value); }

    /**
     * <p>The name of the backend environment that is a part of the Amplify app.</p>
     */
    inline void SetEnvironmentName(const char* value) { m_environmentNameHasBeenSet = true; m_environmentName.assign(value); }

    /**
     * <p>The name of the backend environment that is a part of the Amplify app.</p>
     */
    inline StartCodegenJobRequest& WithEnvironmentName(const Aws::String& value) { SetEnvironmentName(value); return *this;}

    /**
     * <p>The name of the backend environment that is a part of the Amplify app.</p>
     */
    inline StartCodegenJobRequest& WithEnvironmentName(Aws::String&& value) { SetEnvironmentName(std::move(value)); return *this;}

    /**
     * <p>The name of the backend environment that is a part of the Amplify app.</p>
     */
    inline StartCodegenJobRequest& WithEnvironmentName(const char* value) { SetEnvironmentName(value); return *this;}


    /**
     * <p>The idempotency token used to ensure that the code generation job request
     * completes only once.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>The idempotency token used to ensure that the code generation job request
     * completes only once.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>The idempotency token used to ensure that the code generation job request
     * completes only once.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>The idempotency token used to ensure that the code generation job request
     * completes only once.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>The idempotency token used to ensure that the code generation job request
     * completes only once.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>The idempotency token used to ensure that the code generation job request
     * completes only once.</p>
     */
    inline StartCodegenJobRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The idempotency token used to ensure that the code generation job request
     * completes only once.</p>
     */
    inline StartCodegenJobRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The idempotency token used to ensure that the code generation job request
     * completes only once.</p>
     */
    inline StartCodegenJobRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The code generation job resource configuration.</p>
     */
    inline const StartCodegenJobData& GetCodegenJobToCreate() const{ return m_codegenJobToCreate; }

    /**
     * <p>The code generation job resource configuration.</p>
     */
    inline bool CodegenJobToCreateHasBeenSet() const { return m_codegenJobToCreateHasBeenSet; }

    /**
     * <p>The code generation job resource configuration.</p>
     */
    inline void SetCodegenJobToCreate(const StartCodegenJobData& value) { m_codegenJobToCreateHasBeenSet = true; m_codegenJobToCreate = value; }

    /**
     * <p>The code generation job resource configuration.</p>
     */
    inline void SetCodegenJobToCreate(StartCodegenJobData&& value) { m_codegenJobToCreateHasBeenSet = true; m_codegenJobToCreate = std::move(value); }

    /**
     * <p>The code generation job resource configuration.</p>
     */
    inline StartCodegenJobRequest& WithCodegenJobToCreate(const StartCodegenJobData& value) { SetCodegenJobToCreate(value); return *this;}

    /**
     * <p>The code generation job resource configuration.</p>
     */
    inline StartCodegenJobRequest& WithCodegenJobToCreate(StartCodegenJobData&& value) { SetCodegenJobToCreate(std::move(value)); return *this;}

  private:

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;

    Aws::String m_environmentName;
    bool m_environmentNameHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    StartCodegenJobData m_codegenJobToCreate;
    bool m_codegenJobToCreateHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
