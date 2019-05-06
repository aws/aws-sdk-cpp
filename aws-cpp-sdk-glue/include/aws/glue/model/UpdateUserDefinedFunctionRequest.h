/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/UserDefinedFunctionInput.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class AWS_GLUE_API UpdateUserDefinedFunctionRequest : public GlueRequest
  {
  public:
    UpdateUserDefinedFunctionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateUserDefinedFunction"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the Data Catalog where the function to be updated is located. If
     * none is supplied, the AWS account ID is used by default.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }

    /**
     * <p>The ID of the Data Catalog where the function to be updated is located. If
     * none is supplied, the AWS account ID is used by default.</p>
     */
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }

    /**
     * <p>The ID of the Data Catalog where the function to be updated is located. If
     * none is supplied, the AWS account ID is used by default.</p>
     */
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }

    /**
     * <p>The ID of the Data Catalog where the function to be updated is located. If
     * none is supplied, the AWS account ID is used by default.</p>
     */
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }

    /**
     * <p>The ID of the Data Catalog where the function to be updated is located. If
     * none is supplied, the AWS account ID is used by default.</p>
     */
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }

    /**
     * <p>The ID of the Data Catalog where the function to be updated is located. If
     * none is supplied, the AWS account ID is used by default.</p>
     */
    inline UpdateUserDefinedFunctionRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}

    /**
     * <p>The ID of the Data Catalog where the function to be updated is located. If
     * none is supplied, the AWS account ID is used by default.</p>
     */
    inline UpdateUserDefinedFunctionRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Data Catalog where the function to be updated is located. If
     * none is supplied, the AWS account ID is used by default.</p>
     */
    inline UpdateUserDefinedFunctionRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}


    /**
     * <p>The name of the catalog database where the function to be updated is
     * located.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The name of the catalog database where the function to be updated is
     * located.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>The name of the catalog database where the function to be updated is
     * located.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The name of the catalog database where the function to be updated is
     * located.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The name of the catalog database where the function to be updated is
     * located.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The name of the catalog database where the function to be updated is
     * located.</p>
     */
    inline UpdateUserDefinedFunctionRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The name of the catalog database where the function to be updated is
     * located.</p>
     */
    inline UpdateUserDefinedFunctionRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of the catalog database where the function to be updated is
     * located.</p>
     */
    inline UpdateUserDefinedFunctionRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>The name of the function.</p>
     */
    inline const Aws::String& GetFunctionName() const{ return m_functionName; }

    /**
     * <p>The name of the function.</p>
     */
    inline bool FunctionNameHasBeenSet() const { return m_functionNameHasBeenSet; }

    /**
     * <p>The name of the function.</p>
     */
    inline void SetFunctionName(const Aws::String& value) { m_functionNameHasBeenSet = true; m_functionName = value; }

    /**
     * <p>The name of the function.</p>
     */
    inline void SetFunctionName(Aws::String&& value) { m_functionNameHasBeenSet = true; m_functionName = std::move(value); }

    /**
     * <p>The name of the function.</p>
     */
    inline void SetFunctionName(const char* value) { m_functionNameHasBeenSet = true; m_functionName.assign(value); }

    /**
     * <p>The name of the function.</p>
     */
    inline UpdateUserDefinedFunctionRequest& WithFunctionName(const Aws::String& value) { SetFunctionName(value); return *this;}

    /**
     * <p>The name of the function.</p>
     */
    inline UpdateUserDefinedFunctionRequest& WithFunctionName(Aws::String&& value) { SetFunctionName(std::move(value)); return *this;}

    /**
     * <p>The name of the function.</p>
     */
    inline UpdateUserDefinedFunctionRequest& WithFunctionName(const char* value) { SetFunctionName(value); return *this;}


    /**
     * <p>A <code>FunctionInput</code> object that re-defines the function in the Data
     * Catalog.</p>
     */
    inline const UserDefinedFunctionInput& GetFunctionInput() const{ return m_functionInput; }

    /**
     * <p>A <code>FunctionInput</code> object that re-defines the function in the Data
     * Catalog.</p>
     */
    inline bool FunctionInputHasBeenSet() const { return m_functionInputHasBeenSet; }

    /**
     * <p>A <code>FunctionInput</code> object that re-defines the function in the Data
     * Catalog.</p>
     */
    inline void SetFunctionInput(const UserDefinedFunctionInput& value) { m_functionInputHasBeenSet = true; m_functionInput = value; }

    /**
     * <p>A <code>FunctionInput</code> object that re-defines the function in the Data
     * Catalog.</p>
     */
    inline void SetFunctionInput(UserDefinedFunctionInput&& value) { m_functionInputHasBeenSet = true; m_functionInput = std::move(value); }

    /**
     * <p>A <code>FunctionInput</code> object that re-defines the function in the Data
     * Catalog.</p>
     */
    inline UpdateUserDefinedFunctionRequest& WithFunctionInput(const UserDefinedFunctionInput& value) { SetFunctionInput(value); return *this;}

    /**
     * <p>A <code>FunctionInput</code> object that re-defines the function in the Data
     * Catalog.</p>
     */
    inline UpdateUserDefinedFunctionRequest& WithFunctionInput(UserDefinedFunctionInput&& value) { SetFunctionInput(std::move(value)); return *this;}

  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet;

    Aws::String m_functionName;
    bool m_functionNameHasBeenSet;

    UserDefinedFunctionInput m_functionInput;
    bool m_functionInputHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
