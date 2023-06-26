/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/honeycode/Honeycode_EXPORTS.h>
#include <aws/honeycode/HoneycodeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/honeycode/model/VariableValue.h>
#include <utility>

namespace Aws
{
namespace Honeycode
{
namespace Model
{

  /**
   */
  class InvokeScreenAutomationRequest : public HoneycodeRequest
  {
  public:
    AWS_HONEYCODE_API InvokeScreenAutomationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "InvokeScreenAutomation"; }

    AWS_HONEYCODE_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the workbook that contains the screen automation.</p>
     */
    inline const Aws::String& GetWorkbookId() const{ return m_workbookId; }

    /**
     * <p>The ID of the workbook that contains the screen automation.</p>
     */
    inline bool WorkbookIdHasBeenSet() const { return m_workbookIdHasBeenSet; }

    /**
     * <p>The ID of the workbook that contains the screen automation.</p>
     */
    inline void SetWorkbookId(const Aws::String& value) { m_workbookIdHasBeenSet = true; m_workbookId = value; }

    /**
     * <p>The ID of the workbook that contains the screen automation.</p>
     */
    inline void SetWorkbookId(Aws::String&& value) { m_workbookIdHasBeenSet = true; m_workbookId = std::move(value); }

    /**
     * <p>The ID of the workbook that contains the screen automation.</p>
     */
    inline void SetWorkbookId(const char* value) { m_workbookIdHasBeenSet = true; m_workbookId.assign(value); }

    /**
     * <p>The ID of the workbook that contains the screen automation.</p>
     */
    inline InvokeScreenAutomationRequest& WithWorkbookId(const Aws::String& value) { SetWorkbookId(value); return *this;}

    /**
     * <p>The ID of the workbook that contains the screen automation.</p>
     */
    inline InvokeScreenAutomationRequest& WithWorkbookId(Aws::String&& value) { SetWorkbookId(std::move(value)); return *this;}

    /**
     * <p>The ID of the workbook that contains the screen automation.</p>
     */
    inline InvokeScreenAutomationRequest& WithWorkbookId(const char* value) { SetWorkbookId(value); return *this;}


    /**
     * <p>The ID of the app that contains the screen automation.</p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }

    /**
     * <p>The ID of the app that contains the screen automation.</p>
     */
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }

    /**
     * <p>The ID of the app that contains the screen automation.</p>
     */
    inline void SetAppId(const Aws::String& value) { m_appIdHasBeenSet = true; m_appId = value; }

    /**
     * <p>The ID of the app that contains the screen automation.</p>
     */
    inline void SetAppId(Aws::String&& value) { m_appIdHasBeenSet = true; m_appId = std::move(value); }

    /**
     * <p>The ID of the app that contains the screen automation.</p>
     */
    inline void SetAppId(const char* value) { m_appIdHasBeenSet = true; m_appId.assign(value); }

    /**
     * <p>The ID of the app that contains the screen automation.</p>
     */
    inline InvokeScreenAutomationRequest& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}

    /**
     * <p>The ID of the app that contains the screen automation.</p>
     */
    inline InvokeScreenAutomationRequest& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}

    /**
     * <p>The ID of the app that contains the screen automation.</p>
     */
    inline InvokeScreenAutomationRequest& WithAppId(const char* value) { SetAppId(value); return *this;}


    /**
     * <p>The ID of the screen that contains the screen automation.</p>
     */
    inline const Aws::String& GetScreenId() const{ return m_screenId; }

    /**
     * <p>The ID of the screen that contains the screen automation.</p>
     */
    inline bool ScreenIdHasBeenSet() const { return m_screenIdHasBeenSet; }

    /**
     * <p>The ID of the screen that contains the screen automation.</p>
     */
    inline void SetScreenId(const Aws::String& value) { m_screenIdHasBeenSet = true; m_screenId = value; }

    /**
     * <p>The ID of the screen that contains the screen automation.</p>
     */
    inline void SetScreenId(Aws::String&& value) { m_screenIdHasBeenSet = true; m_screenId = std::move(value); }

    /**
     * <p>The ID of the screen that contains the screen automation.</p>
     */
    inline void SetScreenId(const char* value) { m_screenIdHasBeenSet = true; m_screenId.assign(value); }

    /**
     * <p>The ID of the screen that contains the screen automation.</p>
     */
    inline InvokeScreenAutomationRequest& WithScreenId(const Aws::String& value) { SetScreenId(value); return *this;}

    /**
     * <p>The ID of the screen that contains the screen automation.</p>
     */
    inline InvokeScreenAutomationRequest& WithScreenId(Aws::String&& value) { SetScreenId(std::move(value)); return *this;}

    /**
     * <p>The ID of the screen that contains the screen automation.</p>
     */
    inline InvokeScreenAutomationRequest& WithScreenId(const char* value) { SetScreenId(value); return *this;}


    /**
     * <p>The ID of the automation action to be performed.</p>
     */
    inline const Aws::String& GetScreenAutomationId() const{ return m_screenAutomationId; }

    /**
     * <p>The ID of the automation action to be performed.</p>
     */
    inline bool ScreenAutomationIdHasBeenSet() const { return m_screenAutomationIdHasBeenSet; }

    /**
     * <p>The ID of the automation action to be performed.</p>
     */
    inline void SetScreenAutomationId(const Aws::String& value) { m_screenAutomationIdHasBeenSet = true; m_screenAutomationId = value; }

    /**
     * <p>The ID of the automation action to be performed.</p>
     */
    inline void SetScreenAutomationId(Aws::String&& value) { m_screenAutomationIdHasBeenSet = true; m_screenAutomationId = std::move(value); }

    /**
     * <p>The ID of the automation action to be performed.</p>
     */
    inline void SetScreenAutomationId(const char* value) { m_screenAutomationIdHasBeenSet = true; m_screenAutomationId.assign(value); }

    /**
     * <p>The ID of the automation action to be performed.</p>
     */
    inline InvokeScreenAutomationRequest& WithScreenAutomationId(const Aws::String& value) { SetScreenAutomationId(value); return *this;}

    /**
     * <p>The ID of the automation action to be performed.</p>
     */
    inline InvokeScreenAutomationRequest& WithScreenAutomationId(Aws::String&& value) { SetScreenAutomationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the automation action to be performed.</p>
     */
    inline InvokeScreenAutomationRequest& WithScreenAutomationId(const char* value) { SetScreenAutomationId(value); return *this;}


    /**
     * <p> Variables are specified as a map where the key is the name of the variable
     * as defined on the screen. The value is an object which currently has only one
     * property, rawValue, which holds the value of the variable to be passed to the
     * screen. Any variables defined in a screen are required to be passed in the call.
     * </p>
     */
    inline const Aws::Map<Aws::String, VariableValue>& GetVariables() const{ return m_variables; }

    /**
     * <p> Variables are specified as a map where the key is the name of the variable
     * as defined on the screen. The value is an object which currently has only one
     * property, rawValue, which holds the value of the variable to be passed to the
     * screen. Any variables defined in a screen are required to be passed in the call.
     * </p>
     */
    inline bool VariablesHasBeenSet() const { return m_variablesHasBeenSet; }

    /**
     * <p> Variables are specified as a map where the key is the name of the variable
     * as defined on the screen. The value is an object which currently has only one
     * property, rawValue, which holds the value of the variable to be passed to the
     * screen. Any variables defined in a screen are required to be passed in the call.
     * </p>
     */
    inline void SetVariables(const Aws::Map<Aws::String, VariableValue>& value) { m_variablesHasBeenSet = true; m_variables = value; }

    /**
     * <p> Variables are specified as a map where the key is the name of the variable
     * as defined on the screen. The value is an object which currently has only one
     * property, rawValue, which holds the value of the variable to be passed to the
     * screen. Any variables defined in a screen are required to be passed in the call.
     * </p>
     */
    inline void SetVariables(Aws::Map<Aws::String, VariableValue>&& value) { m_variablesHasBeenSet = true; m_variables = std::move(value); }

    /**
     * <p> Variables are specified as a map where the key is the name of the variable
     * as defined on the screen. The value is an object which currently has only one
     * property, rawValue, which holds the value of the variable to be passed to the
     * screen. Any variables defined in a screen are required to be passed in the call.
     * </p>
     */
    inline InvokeScreenAutomationRequest& WithVariables(const Aws::Map<Aws::String, VariableValue>& value) { SetVariables(value); return *this;}

    /**
     * <p> Variables are specified as a map where the key is the name of the variable
     * as defined on the screen. The value is an object which currently has only one
     * property, rawValue, which holds the value of the variable to be passed to the
     * screen. Any variables defined in a screen are required to be passed in the call.
     * </p>
     */
    inline InvokeScreenAutomationRequest& WithVariables(Aws::Map<Aws::String, VariableValue>&& value) { SetVariables(std::move(value)); return *this;}

    /**
     * <p> Variables are specified as a map where the key is the name of the variable
     * as defined on the screen. The value is an object which currently has only one
     * property, rawValue, which holds the value of the variable to be passed to the
     * screen. Any variables defined in a screen are required to be passed in the call.
     * </p>
     */
    inline InvokeScreenAutomationRequest& AddVariables(const Aws::String& key, const VariableValue& value) { m_variablesHasBeenSet = true; m_variables.emplace(key, value); return *this; }

    /**
     * <p> Variables are specified as a map where the key is the name of the variable
     * as defined on the screen. The value is an object which currently has only one
     * property, rawValue, which holds the value of the variable to be passed to the
     * screen. Any variables defined in a screen are required to be passed in the call.
     * </p>
     */
    inline InvokeScreenAutomationRequest& AddVariables(Aws::String&& key, const VariableValue& value) { m_variablesHasBeenSet = true; m_variables.emplace(std::move(key), value); return *this; }

    /**
     * <p> Variables are specified as a map where the key is the name of the variable
     * as defined on the screen. The value is an object which currently has only one
     * property, rawValue, which holds the value of the variable to be passed to the
     * screen. Any variables defined in a screen are required to be passed in the call.
     * </p>
     */
    inline InvokeScreenAutomationRequest& AddVariables(const Aws::String& key, VariableValue&& value) { m_variablesHasBeenSet = true; m_variables.emplace(key, std::move(value)); return *this; }

    /**
     * <p> Variables are specified as a map where the key is the name of the variable
     * as defined on the screen. The value is an object which currently has only one
     * property, rawValue, which holds the value of the variable to be passed to the
     * screen. Any variables defined in a screen are required to be passed in the call.
     * </p>
     */
    inline InvokeScreenAutomationRequest& AddVariables(Aws::String&& key, VariableValue&& value) { m_variablesHasBeenSet = true; m_variables.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> Variables are specified as a map where the key is the name of the variable
     * as defined on the screen. The value is an object which currently has only one
     * property, rawValue, which holds the value of the variable to be passed to the
     * screen. Any variables defined in a screen are required to be passed in the call.
     * </p>
     */
    inline InvokeScreenAutomationRequest& AddVariables(const char* key, VariableValue&& value) { m_variablesHasBeenSet = true; m_variables.emplace(key, std::move(value)); return *this; }

    /**
     * <p> Variables are specified as a map where the key is the name of the variable
     * as defined on the screen. The value is an object which currently has only one
     * property, rawValue, which holds the value of the variable to be passed to the
     * screen. Any variables defined in a screen are required to be passed in the call.
     * </p>
     */
    inline InvokeScreenAutomationRequest& AddVariables(const char* key, const VariableValue& value) { m_variablesHasBeenSet = true; m_variables.emplace(key, value); return *this; }


    /**
     * <p> The row ID for the automation if the automation is defined inside a block
     * with source or list. </p>
     */
    inline const Aws::String& GetRowId() const{ return m_rowId; }

    /**
     * <p> The row ID for the automation if the automation is defined inside a block
     * with source or list. </p>
     */
    inline bool RowIdHasBeenSet() const { return m_rowIdHasBeenSet; }

    /**
     * <p> The row ID for the automation if the automation is defined inside a block
     * with source or list. </p>
     */
    inline void SetRowId(const Aws::String& value) { m_rowIdHasBeenSet = true; m_rowId = value; }

    /**
     * <p> The row ID for the automation if the automation is defined inside a block
     * with source or list. </p>
     */
    inline void SetRowId(Aws::String&& value) { m_rowIdHasBeenSet = true; m_rowId = std::move(value); }

    /**
     * <p> The row ID for the automation if the automation is defined inside a block
     * with source or list. </p>
     */
    inline void SetRowId(const char* value) { m_rowIdHasBeenSet = true; m_rowId.assign(value); }

    /**
     * <p> The row ID for the automation if the automation is defined inside a block
     * with source or list. </p>
     */
    inline InvokeScreenAutomationRequest& WithRowId(const Aws::String& value) { SetRowId(value); return *this;}

    /**
     * <p> The row ID for the automation if the automation is defined inside a block
     * with source or list. </p>
     */
    inline InvokeScreenAutomationRequest& WithRowId(Aws::String&& value) { SetRowId(std::move(value)); return *this;}

    /**
     * <p> The row ID for the automation if the automation is defined inside a block
     * with source or list. </p>
     */
    inline InvokeScreenAutomationRequest& WithRowId(const char* value) { SetRowId(value); return *this;}


    /**
     * <p> The request token for performing the automation action. Request tokens help
     * to identify duplicate requests. If a call times out or fails due to a transient
     * error like a failed network connection, you can retry the call with the same
     * request token. The service ensures that if the first call using that request
     * token is successfully performed, the second call will return the response of the
     * previous call rather than performing the action again. </p> <p> Note that
     * request tokens are valid only for a few minutes. You cannot use request tokens
     * to dedupe requests spanning hours or days. </p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p> The request token for performing the automation action. Request tokens help
     * to identify duplicate requests. If a call times out or fails due to a transient
     * error like a failed network connection, you can retry the call with the same
     * request token. The service ensures that if the first call using that request
     * token is successfully performed, the second call will return the response of the
     * previous call rather than performing the action again. </p> <p> Note that
     * request tokens are valid only for a few minutes. You cannot use request tokens
     * to dedupe requests spanning hours or days. </p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p> The request token for performing the automation action. Request tokens help
     * to identify duplicate requests. If a call times out or fails due to a transient
     * error like a failed network connection, you can retry the call with the same
     * request token. The service ensures that if the first call using that request
     * token is successfully performed, the second call will return the response of the
     * previous call rather than performing the action again. </p> <p> Note that
     * request tokens are valid only for a few minutes. You cannot use request tokens
     * to dedupe requests spanning hours or days. </p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p> The request token for performing the automation action. Request tokens help
     * to identify duplicate requests. If a call times out or fails due to a transient
     * error like a failed network connection, you can retry the call with the same
     * request token. The service ensures that if the first call using that request
     * token is successfully performed, the second call will return the response of the
     * previous call rather than performing the action again. </p> <p> Note that
     * request tokens are valid only for a few minutes. You cannot use request tokens
     * to dedupe requests spanning hours or days. </p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p> The request token for performing the automation action. Request tokens help
     * to identify duplicate requests. If a call times out or fails due to a transient
     * error like a failed network connection, you can retry the call with the same
     * request token. The service ensures that if the first call using that request
     * token is successfully performed, the second call will return the response of the
     * previous call rather than performing the action again. </p> <p> Note that
     * request tokens are valid only for a few minutes. You cannot use request tokens
     * to dedupe requests spanning hours or days. </p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p> The request token for performing the automation action. Request tokens help
     * to identify duplicate requests. If a call times out or fails due to a transient
     * error like a failed network connection, you can retry the call with the same
     * request token. The service ensures that if the first call using that request
     * token is successfully performed, the second call will return the response of the
     * previous call rather than performing the action again. </p> <p> Note that
     * request tokens are valid only for a few minutes. You cannot use request tokens
     * to dedupe requests spanning hours or days. </p>
     */
    inline InvokeScreenAutomationRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p> The request token for performing the automation action. Request tokens help
     * to identify duplicate requests. If a call times out or fails due to a transient
     * error like a failed network connection, you can retry the call with the same
     * request token. The service ensures that if the first call using that request
     * token is successfully performed, the second call will return the response of the
     * previous call rather than performing the action again. </p> <p> Note that
     * request tokens are valid only for a few minutes. You cannot use request tokens
     * to dedupe requests spanning hours or days. </p>
     */
    inline InvokeScreenAutomationRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p> The request token for performing the automation action. Request tokens help
     * to identify duplicate requests. If a call times out or fails due to a transient
     * error like a failed network connection, you can retry the call with the same
     * request token. The service ensures that if the first call using that request
     * token is successfully performed, the second call will return the response of the
     * previous call rather than performing the action again. </p> <p> Note that
     * request tokens are valid only for a few minutes. You cannot use request tokens
     * to dedupe requests spanning hours or days. </p>
     */
    inline InvokeScreenAutomationRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}

  private:

    Aws::String m_workbookId;
    bool m_workbookIdHasBeenSet = false;

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;

    Aws::String m_screenId;
    bool m_screenIdHasBeenSet = false;

    Aws::String m_screenAutomationId;
    bool m_screenAutomationIdHasBeenSet = false;

    Aws::Map<Aws::String, VariableValue> m_variables;
    bool m_variablesHasBeenSet = false;

    Aws::String m_rowId;
    bool m_rowIdHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Honeycode
} // namespace Aws
