﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class GetUserDefinedFunctionsRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API GetUserDefinedFunctionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetUserDefinedFunctions"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the Data Catalog where the functions to be retrieved are located.
     * If none is provided, the Amazon Web Services account ID is used by default.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }
    inline GetUserDefinedFunctionsRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}
    inline GetUserDefinedFunctionsRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}
    inline GetUserDefinedFunctionsRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the catalog database where the functions are located. If none is
     * provided, functions from all the databases across the catalog will be
     * returned.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }
    inline GetUserDefinedFunctionsRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}
    inline GetUserDefinedFunctionsRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}
    inline GetUserDefinedFunctionsRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional function-name pattern string that filters the function
     * definitions returned.</p>
     */
    inline const Aws::String& GetPattern() const{ return m_pattern; }
    inline bool PatternHasBeenSet() const { return m_patternHasBeenSet; }
    inline void SetPattern(const Aws::String& value) { m_patternHasBeenSet = true; m_pattern = value; }
    inline void SetPattern(Aws::String&& value) { m_patternHasBeenSet = true; m_pattern = std::move(value); }
    inline void SetPattern(const char* value) { m_patternHasBeenSet = true; m_pattern.assign(value); }
    inline GetUserDefinedFunctionsRequest& WithPattern(const Aws::String& value) { SetPattern(value); return *this;}
    inline GetUserDefinedFunctionsRequest& WithPattern(Aws::String&& value) { SetPattern(std::move(value)); return *this;}
    inline GetUserDefinedFunctionsRequest& WithPattern(const char* value) { SetPattern(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline GetUserDefinedFunctionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetUserDefinedFunctionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetUserDefinedFunctionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of functions to return in one response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetUserDefinedFunctionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_pattern;
    bool m_patternHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
