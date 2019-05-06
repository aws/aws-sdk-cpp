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
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/AthenaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Athena
{
namespace Model
{

  /**
   */
  class AWS_ATHENA_API CreateNamedQueryRequest : public AthenaRequest
  {
  public:
    CreateNamedQueryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateNamedQuery"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The query name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The query name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The query name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The query name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The query name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The query name.</p>
     */
    inline CreateNamedQueryRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The query name.</p>
     */
    inline CreateNamedQueryRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The query name.</p>
     */
    inline CreateNamedQueryRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The query description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The query description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The query description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The query description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The query description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The query description.</p>
     */
    inline CreateNamedQueryRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The query description.</p>
     */
    inline CreateNamedQueryRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The query description.</p>
     */
    inline CreateNamedQueryRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The database to which the query belongs.</p>
     */
    inline const Aws::String& GetDatabase() const{ return m_database; }

    /**
     * <p>The database to which the query belongs.</p>
     */
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }

    /**
     * <p>The database to which the query belongs.</p>
     */
    inline void SetDatabase(const Aws::String& value) { m_databaseHasBeenSet = true; m_database = value; }

    /**
     * <p>The database to which the query belongs.</p>
     */
    inline void SetDatabase(Aws::String&& value) { m_databaseHasBeenSet = true; m_database = std::move(value); }

    /**
     * <p>The database to which the query belongs.</p>
     */
    inline void SetDatabase(const char* value) { m_databaseHasBeenSet = true; m_database.assign(value); }

    /**
     * <p>The database to which the query belongs.</p>
     */
    inline CreateNamedQueryRequest& WithDatabase(const Aws::String& value) { SetDatabase(value); return *this;}

    /**
     * <p>The database to which the query belongs.</p>
     */
    inline CreateNamedQueryRequest& WithDatabase(Aws::String&& value) { SetDatabase(std::move(value)); return *this;}

    /**
     * <p>The database to which the query belongs.</p>
     */
    inline CreateNamedQueryRequest& WithDatabase(const char* value) { SetDatabase(value); return *this;}


    /**
     * <p>The contents of the query with all query statements.</p>
     */
    inline const Aws::String& GetQueryString() const{ return m_queryString; }

    /**
     * <p>The contents of the query with all query statements.</p>
     */
    inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }

    /**
     * <p>The contents of the query with all query statements.</p>
     */
    inline void SetQueryString(const Aws::String& value) { m_queryStringHasBeenSet = true; m_queryString = value; }

    /**
     * <p>The contents of the query with all query statements.</p>
     */
    inline void SetQueryString(Aws::String&& value) { m_queryStringHasBeenSet = true; m_queryString = std::move(value); }

    /**
     * <p>The contents of the query with all query statements.</p>
     */
    inline void SetQueryString(const char* value) { m_queryStringHasBeenSet = true; m_queryString.assign(value); }

    /**
     * <p>The contents of the query with all query statements.</p>
     */
    inline CreateNamedQueryRequest& WithQueryString(const Aws::String& value) { SetQueryString(value); return *this;}

    /**
     * <p>The contents of the query with all query statements.</p>
     */
    inline CreateNamedQueryRequest& WithQueryString(Aws::String&& value) { SetQueryString(std::move(value)); return *this;}

    /**
     * <p>The contents of the query with all query statements.</p>
     */
    inline CreateNamedQueryRequest& WithQueryString(const char* value) { SetQueryString(value); return *this;}


    /**
     * <p>A unique case-sensitive string used to ensure the request to create the query
     * is idempotent (executes only once). If another <code>CreateNamedQuery</code>
     * request is received, the same response is returned and another query is not
     * created. If a parameter has changed, for example, the <code>QueryString</code>,
     * an error is returned.</p> <important> <p>This token is listed as not required
     * because AWS SDKs (for example the AWS SDK for Java) auto-generate the token for
     * users. If you are not using the AWS SDK or the AWS CLI, you must provide this
     * token or the action will fail.</p> </important>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>A unique case-sensitive string used to ensure the request to create the query
     * is idempotent (executes only once). If another <code>CreateNamedQuery</code>
     * request is received, the same response is returned and another query is not
     * created. If a parameter has changed, for example, the <code>QueryString</code>,
     * an error is returned.</p> <important> <p>This token is listed as not required
     * because AWS SDKs (for example the AWS SDK for Java) auto-generate the token for
     * users. If you are not using the AWS SDK or the AWS CLI, you must provide this
     * token or the action will fail.</p> </important>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>A unique case-sensitive string used to ensure the request to create the query
     * is idempotent (executes only once). If another <code>CreateNamedQuery</code>
     * request is received, the same response is returned and another query is not
     * created. If a parameter has changed, for example, the <code>QueryString</code>,
     * an error is returned.</p> <important> <p>This token is listed as not required
     * because AWS SDKs (for example the AWS SDK for Java) auto-generate the token for
     * users. If you are not using the AWS SDK or the AWS CLI, you must provide this
     * token or the action will fail.</p> </important>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>A unique case-sensitive string used to ensure the request to create the query
     * is idempotent (executes only once). If another <code>CreateNamedQuery</code>
     * request is received, the same response is returned and another query is not
     * created. If a parameter has changed, for example, the <code>QueryString</code>,
     * an error is returned.</p> <important> <p>This token is listed as not required
     * because AWS SDKs (for example the AWS SDK for Java) auto-generate the token for
     * users. If you are not using the AWS SDK or the AWS CLI, you must provide this
     * token or the action will fail.</p> </important>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>A unique case-sensitive string used to ensure the request to create the query
     * is idempotent (executes only once). If another <code>CreateNamedQuery</code>
     * request is received, the same response is returned and another query is not
     * created. If a parameter has changed, for example, the <code>QueryString</code>,
     * an error is returned.</p> <important> <p>This token is listed as not required
     * because AWS SDKs (for example the AWS SDK for Java) auto-generate the token for
     * users. If you are not using the AWS SDK or the AWS CLI, you must provide this
     * token or the action will fail.</p> </important>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>A unique case-sensitive string used to ensure the request to create the query
     * is idempotent (executes only once). If another <code>CreateNamedQuery</code>
     * request is received, the same response is returned and another query is not
     * created. If a parameter has changed, for example, the <code>QueryString</code>,
     * an error is returned.</p> <important> <p>This token is listed as not required
     * because AWS SDKs (for example the AWS SDK for Java) auto-generate the token for
     * users. If you are not using the AWS SDK or the AWS CLI, you must provide this
     * token or the action will fail.</p> </important>
     */
    inline CreateNamedQueryRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>A unique case-sensitive string used to ensure the request to create the query
     * is idempotent (executes only once). If another <code>CreateNamedQuery</code>
     * request is received, the same response is returned and another query is not
     * created. If a parameter has changed, for example, the <code>QueryString</code>,
     * an error is returned.</p> <important> <p>This token is listed as not required
     * because AWS SDKs (for example the AWS SDK for Java) auto-generate the token for
     * users. If you are not using the AWS SDK or the AWS CLI, you must provide this
     * token or the action will fail.</p> </important>
     */
    inline CreateNamedQueryRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>A unique case-sensitive string used to ensure the request to create the query
     * is idempotent (executes only once). If another <code>CreateNamedQuery</code>
     * request is received, the same response is returned and another query is not
     * created. If a parameter has changed, for example, the <code>QueryString</code>,
     * an error is returned.</p> <important> <p>This token is listed as not required
     * because AWS SDKs (for example the AWS SDK for Java) auto-generate the token for
     * users. If you are not using the AWS SDK or the AWS CLI, you must provide this
     * token or the action will fail.</p> </important>
     */
    inline CreateNamedQueryRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>The name of the workgroup in which the named query is being created.</p>
     */
    inline const Aws::String& GetWorkGroup() const{ return m_workGroup; }

    /**
     * <p>The name of the workgroup in which the named query is being created.</p>
     */
    inline bool WorkGroupHasBeenSet() const { return m_workGroupHasBeenSet; }

    /**
     * <p>The name of the workgroup in which the named query is being created.</p>
     */
    inline void SetWorkGroup(const Aws::String& value) { m_workGroupHasBeenSet = true; m_workGroup = value; }

    /**
     * <p>The name of the workgroup in which the named query is being created.</p>
     */
    inline void SetWorkGroup(Aws::String&& value) { m_workGroupHasBeenSet = true; m_workGroup = std::move(value); }

    /**
     * <p>The name of the workgroup in which the named query is being created.</p>
     */
    inline void SetWorkGroup(const char* value) { m_workGroupHasBeenSet = true; m_workGroup.assign(value); }

    /**
     * <p>The name of the workgroup in which the named query is being created.</p>
     */
    inline CreateNamedQueryRequest& WithWorkGroup(const Aws::String& value) { SetWorkGroup(value); return *this;}

    /**
     * <p>The name of the workgroup in which the named query is being created.</p>
     */
    inline CreateNamedQueryRequest& WithWorkGroup(Aws::String&& value) { SetWorkGroup(std::move(value)); return *this;}

    /**
     * <p>The name of the workgroup in which the named query is being created.</p>
     */
    inline CreateNamedQueryRequest& WithWorkGroup(const char* value) { SetWorkGroup(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_database;
    bool m_databaseHasBeenSet;

    Aws::String m_queryString;
    bool m_queryStringHasBeenSet;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet;

    Aws::String m_workGroup;
    bool m_workGroupHasBeenSet;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
