/**
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
  class CreateUserDefinedFunctionRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API CreateUserDefinedFunctionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateUserDefinedFunction"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the Data Catalog in which to create the function. If none is
     * provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }
    inline CreateUserDefinedFunctionRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}
    inline CreateUserDefinedFunctionRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}
    inline CreateUserDefinedFunctionRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the catalog database in which to create the function.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }
    inline CreateUserDefinedFunctionRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}
    inline CreateUserDefinedFunctionRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}
    inline CreateUserDefinedFunctionRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>FunctionInput</code> object that defines the function to create in
     * the Data Catalog.</p>
     */
    inline const UserDefinedFunctionInput& GetFunctionInput() const{ return m_functionInput; }
    inline bool FunctionInputHasBeenSet() const { return m_functionInputHasBeenSet; }
    inline void SetFunctionInput(const UserDefinedFunctionInput& value) { m_functionInputHasBeenSet = true; m_functionInput = value; }
    inline void SetFunctionInput(UserDefinedFunctionInput&& value) { m_functionInputHasBeenSet = true; m_functionInput = std::move(value); }
    inline CreateUserDefinedFunctionRequest& WithFunctionInput(const UserDefinedFunctionInput& value) { SetFunctionInput(value); return *this;}
    inline CreateUserDefinedFunctionRequest& WithFunctionInput(UserDefinedFunctionInput&& value) { SetFunctionInput(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    UserDefinedFunctionInput m_functionInput;
    bool m_functionInputHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
