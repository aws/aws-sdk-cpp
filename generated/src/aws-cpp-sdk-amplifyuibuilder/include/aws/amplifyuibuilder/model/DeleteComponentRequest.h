/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/amplifyuibuilder/AmplifyUIBuilderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AmplifyUIBuilder
{
namespace Model
{

  /**
   */
  class DeleteComponentRequest : public AmplifyUIBuilderRequest
  {
  public:
    AWS_AMPLIFYUIBUILDER_API DeleteComponentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteComponent"; }

    AWS_AMPLIFYUIBUILDER_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique ID of the Amplify app associated with the component to delete.</p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }

    /**
     * <p>The unique ID of the Amplify app associated with the component to delete.</p>
     */
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }

    /**
     * <p>The unique ID of the Amplify app associated with the component to delete.</p>
     */
    inline void SetAppId(const Aws::String& value) { m_appIdHasBeenSet = true; m_appId = value; }

    /**
     * <p>The unique ID of the Amplify app associated with the component to delete.</p>
     */
    inline void SetAppId(Aws::String&& value) { m_appIdHasBeenSet = true; m_appId = std::move(value); }

    /**
     * <p>The unique ID of the Amplify app associated with the component to delete.</p>
     */
    inline void SetAppId(const char* value) { m_appIdHasBeenSet = true; m_appId.assign(value); }

    /**
     * <p>The unique ID of the Amplify app associated with the component to delete.</p>
     */
    inline DeleteComponentRequest& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}

    /**
     * <p>The unique ID of the Amplify app associated with the component to delete.</p>
     */
    inline DeleteComponentRequest& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the Amplify app associated with the component to delete.</p>
     */
    inline DeleteComponentRequest& WithAppId(const char* value) { SetAppId(value); return *this;}


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
    inline DeleteComponentRequest& WithEnvironmentName(const Aws::String& value) { SetEnvironmentName(value); return *this;}

    /**
     * <p>The name of the backend environment that is a part of the Amplify app.</p>
     */
    inline DeleteComponentRequest& WithEnvironmentName(Aws::String&& value) { SetEnvironmentName(std::move(value)); return *this;}

    /**
     * <p>The name of the backend environment that is a part of the Amplify app.</p>
     */
    inline DeleteComponentRequest& WithEnvironmentName(const char* value) { SetEnvironmentName(value); return *this;}


    /**
     * <p>The unique ID of the component to delete.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique ID of the component to delete.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique ID of the component to delete.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique ID of the component to delete.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique ID of the component to delete.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique ID of the component to delete.</p>
     */
    inline DeleteComponentRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique ID of the component to delete.</p>
     */
    inline DeleteComponentRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the component to delete.</p>
     */
    inline DeleteComponentRequest& WithId(const char* value) { SetId(value); return *this;}

  private:

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;

    Aws::String m_environmentName;
    bool m_environmentNameHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
