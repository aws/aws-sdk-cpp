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
#include <aws/athena/model/QueryExecutionContext.h>
#include <aws/athena/model/ResultConfiguration.h>
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
  class AWS_ATHENA_API StartQueryExecutionRequest : public AthenaRequest
  {
  public:
    StartQueryExecutionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartQueryExecution"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The SQL query statements to be executed.</p>
     */
    inline const Aws::String& GetQueryString() const{ return m_queryString; }

    /**
     * <p>The SQL query statements to be executed.</p>
     */
    inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }

    /**
     * <p>The SQL query statements to be executed.</p>
     */
    inline void SetQueryString(const Aws::String& value) { m_queryStringHasBeenSet = true; m_queryString = value; }

    /**
     * <p>The SQL query statements to be executed.</p>
     */
    inline void SetQueryString(Aws::String&& value) { m_queryStringHasBeenSet = true; m_queryString = std::move(value); }

    /**
     * <p>The SQL query statements to be executed.</p>
     */
    inline void SetQueryString(const char* value) { m_queryStringHasBeenSet = true; m_queryString.assign(value); }

    /**
     * <p>The SQL query statements to be executed.</p>
     */
    inline StartQueryExecutionRequest& WithQueryString(const Aws::String& value) { SetQueryString(value); return *this;}

    /**
     * <p>The SQL query statements to be executed.</p>
     */
    inline StartQueryExecutionRequest& WithQueryString(Aws::String&& value) { SetQueryString(std::move(value)); return *this;}

    /**
     * <p>The SQL query statements to be executed.</p>
     */
    inline StartQueryExecutionRequest& WithQueryString(const char* value) { SetQueryString(value); return *this;}


    /**
     * <p>A unique case-sensitive string used to ensure the request to create the query
     * is idempotent (executes only once). If another <code>StartQueryExecution</code>
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
     * is idempotent (executes only once). If another <code>StartQueryExecution</code>
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
     * is idempotent (executes only once). If another <code>StartQueryExecution</code>
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
     * is idempotent (executes only once). If another <code>StartQueryExecution</code>
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
     * is idempotent (executes only once). If another <code>StartQueryExecution</code>
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
     * is idempotent (executes only once). If another <code>StartQueryExecution</code>
     * request is received, the same response is returned and another query is not
     * created. If a parameter has changed, for example, the <code>QueryString</code>,
     * an error is returned.</p> <important> <p>This token is listed as not required
     * because AWS SDKs (for example the AWS SDK for Java) auto-generate the token for
     * users. If you are not using the AWS SDK or the AWS CLI, you must provide this
     * token or the action will fail.</p> </important>
     */
    inline StartQueryExecutionRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>A unique case-sensitive string used to ensure the request to create the query
     * is idempotent (executes only once). If another <code>StartQueryExecution</code>
     * request is received, the same response is returned and another query is not
     * created. If a parameter has changed, for example, the <code>QueryString</code>,
     * an error is returned.</p> <important> <p>This token is listed as not required
     * because AWS SDKs (for example the AWS SDK for Java) auto-generate the token for
     * users. If you are not using the AWS SDK or the AWS CLI, you must provide this
     * token or the action will fail.</p> </important>
     */
    inline StartQueryExecutionRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>A unique case-sensitive string used to ensure the request to create the query
     * is idempotent (executes only once). If another <code>StartQueryExecution</code>
     * request is received, the same response is returned and another query is not
     * created. If a parameter has changed, for example, the <code>QueryString</code>,
     * an error is returned.</p> <important> <p>This token is listed as not required
     * because AWS SDKs (for example the AWS SDK for Java) auto-generate the token for
     * users. If you are not using the AWS SDK or the AWS CLI, you must provide this
     * token or the action will fail.</p> </important>
     */
    inline StartQueryExecutionRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>The database within which the query executes.</p>
     */
    inline const QueryExecutionContext& GetQueryExecutionContext() const{ return m_queryExecutionContext; }

    /**
     * <p>The database within which the query executes.</p>
     */
    inline bool QueryExecutionContextHasBeenSet() const { return m_queryExecutionContextHasBeenSet; }

    /**
     * <p>The database within which the query executes.</p>
     */
    inline void SetQueryExecutionContext(const QueryExecutionContext& value) { m_queryExecutionContextHasBeenSet = true; m_queryExecutionContext = value; }

    /**
     * <p>The database within which the query executes.</p>
     */
    inline void SetQueryExecutionContext(QueryExecutionContext&& value) { m_queryExecutionContextHasBeenSet = true; m_queryExecutionContext = std::move(value); }

    /**
     * <p>The database within which the query executes.</p>
     */
    inline StartQueryExecutionRequest& WithQueryExecutionContext(const QueryExecutionContext& value) { SetQueryExecutionContext(value); return *this;}

    /**
     * <p>The database within which the query executes.</p>
     */
    inline StartQueryExecutionRequest& WithQueryExecutionContext(QueryExecutionContext&& value) { SetQueryExecutionContext(std::move(value)); return *this;}


    /**
     * <p>Specifies information about where and how to save the results of the query
     * execution. If the query runs in a workgroup, then workgroup's settings may
     * override query settings. This affects the query results location. The workgroup
     * settings override is specified in EnforceWorkGroupConfiguration (true/false) in
     * the WorkGroupConfiguration. See
     * <a>WorkGroupConfiguration$EnforceWorkGroupConfiguration</a>.</p>
     */
    inline const ResultConfiguration& GetResultConfiguration() const{ return m_resultConfiguration; }

    /**
     * <p>Specifies information about where and how to save the results of the query
     * execution. If the query runs in a workgroup, then workgroup's settings may
     * override query settings. This affects the query results location. The workgroup
     * settings override is specified in EnforceWorkGroupConfiguration (true/false) in
     * the WorkGroupConfiguration. See
     * <a>WorkGroupConfiguration$EnforceWorkGroupConfiguration</a>.</p>
     */
    inline bool ResultConfigurationHasBeenSet() const { return m_resultConfigurationHasBeenSet; }

    /**
     * <p>Specifies information about where and how to save the results of the query
     * execution. If the query runs in a workgroup, then workgroup's settings may
     * override query settings. This affects the query results location. The workgroup
     * settings override is specified in EnforceWorkGroupConfiguration (true/false) in
     * the WorkGroupConfiguration. See
     * <a>WorkGroupConfiguration$EnforceWorkGroupConfiguration</a>.</p>
     */
    inline void SetResultConfiguration(const ResultConfiguration& value) { m_resultConfigurationHasBeenSet = true; m_resultConfiguration = value; }

    /**
     * <p>Specifies information about where and how to save the results of the query
     * execution. If the query runs in a workgroup, then workgroup's settings may
     * override query settings. This affects the query results location. The workgroup
     * settings override is specified in EnforceWorkGroupConfiguration (true/false) in
     * the WorkGroupConfiguration. See
     * <a>WorkGroupConfiguration$EnforceWorkGroupConfiguration</a>.</p>
     */
    inline void SetResultConfiguration(ResultConfiguration&& value) { m_resultConfigurationHasBeenSet = true; m_resultConfiguration = std::move(value); }

    /**
     * <p>Specifies information about where and how to save the results of the query
     * execution. If the query runs in a workgroup, then workgroup's settings may
     * override query settings. This affects the query results location. The workgroup
     * settings override is specified in EnforceWorkGroupConfiguration (true/false) in
     * the WorkGroupConfiguration. See
     * <a>WorkGroupConfiguration$EnforceWorkGroupConfiguration</a>.</p>
     */
    inline StartQueryExecutionRequest& WithResultConfiguration(const ResultConfiguration& value) { SetResultConfiguration(value); return *this;}

    /**
     * <p>Specifies information about where and how to save the results of the query
     * execution. If the query runs in a workgroup, then workgroup's settings may
     * override query settings. This affects the query results location. The workgroup
     * settings override is specified in EnforceWorkGroupConfiguration (true/false) in
     * the WorkGroupConfiguration. See
     * <a>WorkGroupConfiguration$EnforceWorkGroupConfiguration</a>.</p>
     */
    inline StartQueryExecutionRequest& WithResultConfiguration(ResultConfiguration&& value) { SetResultConfiguration(std::move(value)); return *this;}


    /**
     * <p>The name of the workgroup in which the query is being started.</p>
     */
    inline const Aws::String& GetWorkGroup() const{ return m_workGroup; }

    /**
     * <p>The name of the workgroup in which the query is being started.</p>
     */
    inline bool WorkGroupHasBeenSet() const { return m_workGroupHasBeenSet; }

    /**
     * <p>The name of the workgroup in which the query is being started.</p>
     */
    inline void SetWorkGroup(const Aws::String& value) { m_workGroupHasBeenSet = true; m_workGroup = value; }

    /**
     * <p>The name of the workgroup in which the query is being started.</p>
     */
    inline void SetWorkGroup(Aws::String&& value) { m_workGroupHasBeenSet = true; m_workGroup = std::move(value); }

    /**
     * <p>The name of the workgroup in which the query is being started.</p>
     */
    inline void SetWorkGroup(const char* value) { m_workGroupHasBeenSet = true; m_workGroup.assign(value); }

    /**
     * <p>The name of the workgroup in which the query is being started.</p>
     */
    inline StartQueryExecutionRequest& WithWorkGroup(const Aws::String& value) { SetWorkGroup(value); return *this;}

    /**
     * <p>The name of the workgroup in which the query is being started.</p>
     */
    inline StartQueryExecutionRequest& WithWorkGroup(Aws::String&& value) { SetWorkGroup(std::move(value)); return *this;}

    /**
     * <p>The name of the workgroup in which the query is being started.</p>
     */
    inline StartQueryExecutionRequest& WithWorkGroup(const char* value) { SetWorkGroup(value); return *this;}

  private:

    Aws::String m_queryString;
    bool m_queryStringHasBeenSet;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet;

    QueryExecutionContext m_queryExecutionContext;
    bool m_queryExecutionContextHasBeenSet;

    ResultConfiguration m_resultConfiguration;
    bool m_resultConfigurationHasBeenSet;

    Aws::String m_workGroup;
    bool m_workGroupHasBeenSet;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
