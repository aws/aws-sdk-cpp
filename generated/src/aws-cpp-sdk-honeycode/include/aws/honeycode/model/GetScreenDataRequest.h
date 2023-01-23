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
  class GetScreenDataRequest : public HoneycodeRequest
  {
  public:
    AWS_HONEYCODE_API GetScreenDataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetScreenData"; }

    AWS_HONEYCODE_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the workbook that contains the screen.</p>
     */
    inline const Aws::String& GetWorkbookId() const{ return m_workbookId; }

    /**
     * <p>The ID of the workbook that contains the screen.</p>
     */
    inline bool WorkbookIdHasBeenSet() const { return m_workbookIdHasBeenSet; }

    /**
     * <p>The ID of the workbook that contains the screen.</p>
     */
    inline void SetWorkbookId(const Aws::String& value) { m_workbookIdHasBeenSet = true; m_workbookId = value; }

    /**
     * <p>The ID of the workbook that contains the screen.</p>
     */
    inline void SetWorkbookId(Aws::String&& value) { m_workbookIdHasBeenSet = true; m_workbookId = std::move(value); }

    /**
     * <p>The ID of the workbook that contains the screen.</p>
     */
    inline void SetWorkbookId(const char* value) { m_workbookIdHasBeenSet = true; m_workbookId.assign(value); }

    /**
     * <p>The ID of the workbook that contains the screen.</p>
     */
    inline GetScreenDataRequest& WithWorkbookId(const Aws::String& value) { SetWorkbookId(value); return *this;}

    /**
     * <p>The ID of the workbook that contains the screen.</p>
     */
    inline GetScreenDataRequest& WithWorkbookId(Aws::String&& value) { SetWorkbookId(std::move(value)); return *this;}

    /**
     * <p>The ID of the workbook that contains the screen.</p>
     */
    inline GetScreenDataRequest& WithWorkbookId(const char* value) { SetWorkbookId(value); return *this;}


    /**
     * <p>The ID of the app that contains the screen.</p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }

    /**
     * <p>The ID of the app that contains the screen.</p>
     */
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }

    /**
     * <p>The ID of the app that contains the screen.</p>
     */
    inline void SetAppId(const Aws::String& value) { m_appIdHasBeenSet = true; m_appId = value; }

    /**
     * <p>The ID of the app that contains the screen.</p>
     */
    inline void SetAppId(Aws::String&& value) { m_appIdHasBeenSet = true; m_appId = std::move(value); }

    /**
     * <p>The ID of the app that contains the screen.</p>
     */
    inline void SetAppId(const char* value) { m_appIdHasBeenSet = true; m_appId.assign(value); }

    /**
     * <p>The ID of the app that contains the screen.</p>
     */
    inline GetScreenDataRequest& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}

    /**
     * <p>The ID of the app that contains the screen.</p>
     */
    inline GetScreenDataRequest& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}

    /**
     * <p>The ID of the app that contains the screen.</p>
     */
    inline GetScreenDataRequest& WithAppId(const char* value) { SetAppId(value); return *this;}


    /**
     * <p>The ID of the screen.</p>
     */
    inline const Aws::String& GetScreenId() const{ return m_screenId; }

    /**
     * <p>The ID of the screen.</p>
     */
    inline bool ScreenIdHasBeenSet() const { return m_screenIdHasBeenSet; }

    /**
     * <p>The ID of the screen.</p>
     */
    inline void SetScreenId(const Aws::String& value) { m_screenIdHasBeenSet = true; m_screenId = value; }

    /**
     * <p>The ID of the screen.</p>
     */
    inline void SetScreenId(Aws::String&& value) { m_screenIdHasBeenSet = true; m_screenId = std::move(value); }

    /**
     * <p>The ID of the screen.</p>
     */
    inline void SetScreenId(const char* value) { m_screenIdHasBeenSet = true; m_screenId.assign(value); }

    /**
     * <p>The ID of the screen.</p>
     */
    inline GetScreenDataRequest& WithScreenId(const Aws::String& value) { SetScreenId(value); return *this;}

    /**
     * <p>The ID of the screen.</p>
     */
    inline GetScreenDataRequest& WithScreenId(Aws::String&& value) { SetScreenId(std::move(value)); return *this;}

    /**
     * <p>The ID of the screen.</p>
     */
    inline GetScreenDataRequest& WithScreenId(const char* value) { SetScreenId(value); return *this;}


    /**
     * <p> Variables are optional and are needed only if the screen requires them to
     * render correctly. Variables are specified as a map where the key is the name of
     * the variable as defined on the screen. The value is an object which currently
     * has only one property, rawValue, which holds the value of the variable to be
     * passed to the screen. </p>
     */
    inline const Aws::Map<Aws::String, VariableValue>& GetVariables() const{ return m_variables; }

    /**
     * <p> Variables are optional and are needed only if the screen requires them to
     * render correctly. Variables are specified as a map where the key is the name of
     * the variable as defined on the screen. The value is an object which currently
     * has only one property, rawValue, which holds the value of the variable to be
     * passed to the screen. </p>
     */
    inline bool VariablesHasBeenSet() const { return m_variablesHasBeenSet; }

    /**
     * <p> Variables are optional and are needed only if the screen requires them to
     * render correctly. Variables are specified as a map where the key is the name of
     * the variable as defined on the screen. The value is an object which currently
     * has only one property, rawValue, which holds the value of the variable to be
     * passed to the screen. </p>
     */
    inline void SetVariables(const Aws::Map<Aws::String, VariableValue>& value) { m_variablesHasBeenSet = true; m_variables = value; }

    /**
     * <p> Variables are optional and are needed only if the screen requires them to
     * render correctly. Variables are specified as a map where the key is the name of
     * the variable as defined on the screen. The value is an object which currently
     * has only one property, rawValue, which holds the value of the variable to be
     * passed to the screen. </p>
     */
    inline void SetVariables(Aws::Map<Aws::String, VariableValue>&& value) { m_variablesHasBeenSet = true; m_variables = std::move(value); }

    /**
     * <p> Variables are optional and are needed only if the screen requires them to
     * render correctly. Variables are specified as a map where the key is the name of
     * the variable as defined on the screen. The value is an object which currently
     * has only one property, rawValue, which holds the value of the variable to be
     * passed to the screen. </p>
     */
    inline GetScreenDataRequest& WithVariables(const Aws::Map<Aws::String, VariableValue>& value) { SetVariables(value); return *this;}

    /**
     * <p> Variables are optional and are needed only if the screen requires them to
     * render correctly. Variables are specified as a map where the key is the name of
     * the variable as defined on the screen. The value is an object which currently
     * has only one property, rawValue, which holds the value of the variable to be
     * passed to the screen. </p>
     */
    inline GetScreenDataRequest& WithVariables(Aws::Map<Aws::String, VariableValue>&& value) { SetVariables(std::move(value)); return *this;}

    /**
     * <p> Variables are optional and are needed only if the screen requires them to
     * render correctly. Variables are specified as a map where the key is the name of
     * the variable as defined on the screen. The value is an object which currently
     * has only one property, rawValue, which holds the value of the variable to be
     * passed to the screen. </p>
     */
    inline GetScreenDataRequest& AddVariables(const Aws::String& key, const VariableValue& value) { m_variablesHasBeenSet = true; m_variables.emplace(key, value); return *this; }

    /**
     * <p> Variables are optional and are needed only if the screen requires them to
     * render correctly. Variables are specified as a map where the key is the name of
     * the variable as defined on the screen. The value is an object which currently
     * has only one property, rawValue, which holds the value of the variable to be
     * passed to the screen. </p>
     */
    inline GetScreenDataRequest& AddVariables(Aws::String&& key, const VariableValue& value) { m_variablesHasBeenSet = true; m_variables.emplace(std::move(key), value); return *this; }

    /**
     * <p> Variables are optional and are needed only if the screen requires them to
     * render correctly. Variables are specified as a map where the key is the name of
     * the variable as defined on the screen. The value is an object which currently
     * has only one property, rawValue, which holds the value of the variable to be
     * passed to the screen. </p>
     */
    inline GetScreenDataRequest& AddVariables(const Aws::String& key, VariableValue&& value) { m_variablesHasBeenSet = true; m_variables.emplace(key, std::move(value)); return *this; }

    /**
     * <p> Variables are optional and are needed only if the screen requires them to
     * render correctly. Variables are specified as a map where the key is the name of
     * the variable as defined on the screen. The value is an object which currently
     * has only one property, rawValue, which holds the value of the variable to be
     * passed to the screen. </p>
     */
    inline GetScreenDataRequest& AddVariables(Aws::String&& key, VariableValue&& value) { m_variablesHasBeenSet = true; m_variables.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> Variables are optional and are needed only if the screen requires them to
     * render correctly. Variables are specified as a map where the key is the name of
     * the variable as defined on the screen. The value is an object which currently
     * has only one property, rawValue, which holds the value of the variable to be
     * passed to the screen. </p>
     */
    inline GetScreenDataRequest& AddVariables(const char* key, VariableValue&& value) { m_variablesHasBeenSet = true; m_variables.emplace(key, std::move(value)); return *this; }

    /**
     * <p> Variables are optional and are needed only if the screen requires them to
     * render correctly. Variables are specified as a map where the key is the name of
     * the variable as defined on the screen. The value is an object which currently
     * has only one property, rawValue, which holds the value of the variable to be
     * passed to the screen. </p>
     */
    inline GetScreenDataRequest& AddVariables(const char* key, const VariableValue& value) { m_variablesHasBeenSet = true; m_variables.emplace(key, value); return *this; }


    /**
     * <p> The number of results to be returned on a single page. Specify a number
     * between 1 and 100. The maximum value is 100. </p> <p> This parameter is
     * optional. If you don't specify this parameter, the default page size is 100.
     * </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p> The number of results to be returned on a single page. Specify a number
     * between 1 and 100. The maximum value is 100. </p> <p> This parameter is
     * optional. If you don't specify this parameter, the default page size is 100.
     * </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p> The number of results to be returned on a single page. Specify a number
     * between 1 and 100. The maximum value is 100. </p> <p> This parameter is
     * optional. If you don't specify this parameter, the default page size is 100.
     * </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p> The number of results to be returned on a single page. Specify a number
     * between 1 and 100. The maximum value is 100. </p> <p> This parameter is
     * optional. If you don't specify this parameter, the default page size is 100.
     * </p>
     */
    inline GetScreenDataRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p> This parameter is optional. If a nextToken is not specified, the API returns
     * the first page of data. </p> <p> Pagination tokens expire after 1 hour. If you
     * use a token that was returned more than an hour back, the API will throw
     * ValidationException. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> This parameter is optional. If a nextToken is not specified, the API returns
     * the first page of data. </p> <p> Pagination tokens expire after 1 hour. If you
     * use a token that was returned more than an hour back, the API will throw
     * ValidationException. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p> This parameter is optional. If a nextToken is not specified, the API returns
     * the first page of data. </p> <p> Pagination tokens expire after 1 hour. If you
     * use a token that was returned more than an hour back, the API will throw
     * ValidationException. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> This parameter is optional. If a nextToken is not specified, the API returns
     * the first page of data. </p> <p> Pagination tokens expire after 1 hour. If you
     * use a token that was returned more than an hour back, the API will throw
     * ValidationException. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p> This parameter is optional. If a nextToken is not specified, the API returns
     * the first page of data. </p> <p> Pagination tokens expire after 1 hour. If you
     * use a token that was returned more than an hour back, the API will throw
     * ValidationException. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> This parameter is optional. If a nextToken is not specified, the API returns
     * the first page of data. </p> <p> Pagination tokens expire after 1 hour. If you
     * use a token that was returned more than an hour back, the API will throw
     * ValidationException. </p>
     */
    inline GetScreenDataRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> This parameter is optional. If a nextToken is not specified, the API returns
     * the first page of data. </p> <p> Pagination tokens expire after 1 hour. If you
     * use a token that was returned more than an hour back, the API will throw
     * ValidationException. </p>
     */
    inline GetScreenDataRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> This parameter is optional. If a nextToken is not specified, the API returns
     * the first page of data. </p> <p> Pagination tokens expire after 1 hour. If you
     * use a token that was returned more than an hour back, the API will throw
     * ValidationException. </p>
     */
    inline GetScreenDataRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_workbookId;
    bool m_workbookIdHasBeenSet = false;

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;

    Aws::String m_screenId;
    bool m_screenIdHasBeenSet = false;

    Aws::Map<Aws::String, VariableValue> m_variables;
    bool m_variablesHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Honeycode
} // namespace Aws
