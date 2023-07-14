﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class AWS_GLUE_API CreateUserDefinedFunctionRequest : public GlueRequest
  {
  public:
    CreateUserDefinedFunctionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateUserDefinedFunction"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the Data Catalog in which to create the function. If none is
     * provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }

    /**
     * <p>The ID of the Data Catalog in which to create the function. If none is
     * provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }

    /**
     * <p>The ID of the Data Catalog in which to create the function. If none is
     * provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }

    /**
     * <p>The ID of the Data Catalog in which to create the function. If none is
     * provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }

    /**
     * <p>The ID of the Data Catalog in which to create the function. If none is
     * provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }

    /**
     * <p>The ID of the Data Catalog in which to create the function. If none is
     * provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline CreateUserDefinedFunctionRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}

    /**
     * <p>The ID of the Data Catalog in which to create the function. If none is
     * provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline CreateUserDefinedFunctionRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Data Catalog in which to create the function. If none is
     * provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline CreateUserDefinedFunctionRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}


    /**
     * <p>The name of the catalog database in which to create the function.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The name of the catalog database in which to create the function.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>The name of the catalog database in which to create the function.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The name of the catalog database in which to create the function.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The name of the catalog database in which to create the function.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The name of the catalog database in which to create the function.</p>
     */
    inline CreateUserDefinedFunctionRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The name of the catalog database in which to create the function.</p>
     */
    inline CreateUserDefinedFunctionRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of the catalog database in which to create the function.</p>
     */
    inline CreateUserDefinedFunctionRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>A <code>FunctionInput</code> object that defines the function to create in
     * the Data Catalog.</p>
     */
    inline const UserDefinedFunctionInput& GetFunctionInput() const{ return m_functionInput; }

    /**
     * <p>A <code>FunctionInput</code> object that defines the function to create in
     * the Data Catalog.</p>
     */
    inline bool FunctionInputHasBeenSet() const { return m_functionInputHasBeenSet; }

    /**
     * <p>A <code>FunctionInput</code> object that defines the function to create in
     * the Data Catalog.</p>
     */
    inline void SetFunctionInput(const UserDefinedFunctionInput& value) { m_functionInputHasBeenSet = true; m_functionInput = value; }

    /**
     * <p>A <code>FunctionInput</code> object that defines the function to create in
     * the Data Catalog.</p>
     */
    inline void SetFunctionInput(UserDefinedFunctionInput&& value) { m_functionInputHasBeenSet = true; m_functionInput = std::move(value); }

    /**
     * <p>A <code>FunctionInput</code> object that defines the function to create in
     * the Data Catalog.</p>
     */
    inline CreateUserDefinedFunctionRequest& WithFunctionInput(const UserDefinedFunctionInput& value) { SetFunctionInput(value); return *this;}

    /**
     * <p>A <code>FunctionInput</code> object that defines the function to create in
     * the Data Catalog.</p>
     */
    inline CreateUserDefinedFunctionRequest& WithFunctionInput(UserDefinedFunctionInput&& value) { SetFunctionInput(std::move(value)); return *this;}

  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet;

    UserDefinedFunctionInput m_functionInput;
    bool m_functionInputHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
