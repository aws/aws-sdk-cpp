/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/AthenaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/athena/model/QueryExecutionContext.h>
#include <aws/athena/model/ResultConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/athena/model/ResultReuseConfiguration.h>
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
  class StartQueryExecutionRequest : public AthenaRequest
  {
  public:
    AWS_ATHENA_API StartQueryExecutionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartQueryExecution"; }

    AWS_ATHENA_API Aws::String SerializePayload() const override;

    AWS_ATHENA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
     * an error is returned.</p>  <p>This token is listed as not required
     * because Amazon Web Services SDKs (for example the Amazon Web Services SDK for
     * Java) auto-generate the token for users. If you are not using the Amazon Web
     * Services SDK or the Amazon Web Services CLI, you must provide this token or the
     * action will fail.</p> 
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>A unique case-sensitive string used to ensure the request to create the query
     * is idempotent (executes only once). If another <code>StartQueryExecution</code>
     * request is received, the same response is returned and another query is not
     * created. If a parameter has changed, for example, the <code>QueryString</code>,
     * an error is returned.</p>  <p>This token is listed as not required
     * because Amazon Web Services SDKs (for example the Amazon Web Services SDK for
     * Java) auto-generate the token for users. If you are not using the Amazon Web
     * Services SDK or the Amazon Web Services CLI, you must provide this token or the
     * action will fail.</p> 
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>A unique case-sensitive string used to ensure the request to create the query
     * is idempotent (executes only once). If another <code>StartQueryExecution</code>
     * request is received, the same response is returned and another query is not
     * created. If a parameter has changed, for example, the <code>QueryString</code>,
     * an error is returned.</p>  <p>This token is listed as not required
     * because Amazon Web Services SDKs (for example the Amazon Web Services SDK for
     * Java) auto-generate the token for users. If you are not using the Amazon Web
     * Services SDK or the Amazon Web Services CLI, you must provide this token or the
     * action will fail.</p> 
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>A unique case-sensitive string used to ensure the request to create the query
     * is idempotent (executes only once). If another <code>StartQueryExecution</code>
     * request is received, the same response is returned and another query is not
     * created. If a parameter has changed, for example, the <code>QueryString</code>,
     * an error is returned.</p>  <p>This token is listed as not required
     * because Amazon Web Services SDKs (for example the Amazon Web Services SDK for
     * Java) auto-generate the token for users. If you are not using the Amazon Web
     * Services SDK or the Amazon Web Services CLI, you must provide this token or the
     * action will fail.</p> 
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>A unique case-sensitive string used to ensure the request to create the query
     * is idempotent (executes only once). If another <code>StartQueryExecution</code>
     * request is received, the same response is returned and another query is not
     * created. If a parameter has changed, for example, the <code>QueryString</code>,
     * an error is returned.</p>  <p>This token is listed as not required
     * because Amazon Web Services SDKs (for example the Amazon Web Services SDK for
     * Java) auto-generate the token for users. If you are not using the Amazon Web
     * Services SDK or the Amazon Web Services CLI, you must provide this token or the
     * action will fail.</p> 
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>A unique case-sensitive string used to ensure the request to create the query
     * is idempotent (executes only once). If another <code>StartQueryExecution</code>
     * request is received, the same response is returned and another query is not
     * created. If a parameter has changed, for example, the <code>QueryString</code>,
     * an error is returned.</p>  <p>This token is listed as not required
     * because Amazon Web Services SDKs (for example the Amazon Web Services SDK for
     * Java) auto-generate the token for users. If you are not using the Amazon Web
     * Services SDK or the Amazon Web Services CLI, you must provide this token or the
     * action will fail.</p> 
     */
    inline StartQueryExecutionRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>A unique case-sensitive string used to ensure the request to create the query
     * is idempotent (executes only once). If another <code>StartQueryExecution</code>
     * request is received, the same response is returned and another query is not
     * created. If a parameter has changed, for example, the <code>QueryString</code>,
     * an error is returned.</p>  <p>This token is listed as not required
     * because Amazon Web Services SDKs (for example the Amazon Web Services SDK for
     * Java) auto-generate the token for users. If you are not using the Amazon Web
     * Services SDK or the Amazon Web Services CLI, you must provide this token or the
     * action will fail.</p> 
     */
    inline StartQueryExecutionRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>A unique case-sensitive string used to ensure the request to create the query
     * is idempotent (executes only once). If another <code>StartQueryExecution</code>
     * request is received, the same response is returned and another query is not
     * created. If a parameter has changed, for example, the <code>QueryString</code>,
     * an error is returned.</p>  <p>This token is listed as not required
     * because Amazon Web Services SDKs (for example the Amazon Web Services SDK for
     * Java) auto-generate the token for users. If you are not using the Amazon Web
     * Services SDK or the Amazon Web Services CLI, you must provide this token or the
     * action will fail.</p> 
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


    /**
     * <p>A list of values for the parameters in a query. The values are applied
     * sequentially to the parameters in the query in the order in which the parameters
     * occur.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExecutionParameters() const{ return m_executionParameters; }

    /**
     * <p>A list of values for the parameters in a query. The values are applied
     * sequentially to the parameters in the query in the order in which the parameters
     * occur.</p>
     */
    inline bool ExecutionParametersHasBeenSet() const { return m_executionParametersHasBeenSet; }

    /**
     * <p>A list of values for the parameters in a query. The values are applied
     * sequentially to the parameters in the query in the order in which the parameters
     * occur.</p>
     */
    inline void SetExecutionParameters(const Aws::Vector<Aws::String>& value) { m_executionParametersHasBeenSet = true; m_executionParameters = value; }

    /**
     * <p>A list of values for the parameters in a query. The values are applied
     * sequentially to the parameters in the query in the order in which the parameters
     * occur.</p>
     */
    inline void SetExecutionParameters(Aws::Vector<Aws::String>&& value) { m_executionParametersHasBeenSet = true; m_executionParameters = std::move(value); }

    /**
     * <p>A list of values for the parameters in a query. The values are applied
     * sequentially to the parameters in the query in the order in which the parameters
     * occur.</p>
     */
    inline StartQueryExecutionRequest& WithExecutionParameters(const Aws::Vector<Aws::String>& value) { SetExecutionParameters(value); return *this;}

    /**
     * <p>A list of values for the parameters in a query. The values are applied
     * sequentially to the parameters in the query in the order in which the parameters
     * occur.</p>
     */
    inline StartQueryExecutionRequest& WithExecutionParameters(Aws::Vector<Aws::String>&& value) { SetExecutionParameters(std::move(value)); return *this;}

    /**
     * <p>A list of values for the parameters in a query. The values are applied
     * sequentially to the parameters in the query in the order in which the parameters
     * occur.</p>
     */
    inline StartQueryExecutionRequest& AddExecutionParameters(const Aws::String& value) { m_executionParametersHasBeenSet = true; m_executionParameters.push_back(value); return *this; }

    /**
     * <p>A list of values for the parameters in a query. The values are applied
     * sequentially to the parameters in the query in the order in which the parameters
     * occur.</p>
     */
    inline StartQueryExecutionRequest& AddExecutionParameters(Aws::String&& value) { m_executionParametersHasBeenSet = true; m_executionParameters.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of values for the parameters in a query. The values are applied
     * sequentially to the parameters in the query in the order in which the parameters
     * occur.</p>
     */
    inline StartQueryExecutionRequest& AddExecutionParameters(const char* value) { m_executionParametersHasBeenSet = true; m_executionParameters.push_back(value); return *this; }


    /**
     * <p>Specifies the query result reuse behavior for the query.</p>
     */
    inline const ResultReuseConfiguration& GetResultReuseConfiguration() const{ return m_resultReuseConfiguration; }

    /**
     * <p>Specifies the query result reuse behavior for the query.</p>
     */
    inline bool ResultReuseConfigurationHasBeenSet() const { return m_resultReuseConfigurationHasBeenSet; }

    /**
     * <p>Specifies the query result reuse behavior for the query.</p>
     */
    inline void SetResultReuseConfiguration(const ResultReuseConfiguration& value) { m_resultReuseConfigurationHasBeenSet = true; m_resultReuseConfiguration = value; }

    /**
     * <p>Specifies the query result reuse behavior for the query.</p>
     */
    inline void SetResultReuseConfiguration(ResultReuseConfiguration&& value) { m_resultReuseConfigurationHasBeenSet = true; m_resultReuseConfiguration = std::move(value); }

    /**
     * <p>Specifies the query result reuse behavior for the query.</p>
     */
    inline StartQueryExecutionRequest& WithResultReuseConfiguration(const ResultReuseConfiguration& value) { SetResultReuseConfiguration(value); return *this;}

    /**
     * <p>Specifies the query result reuse behavior for the query.</p>
     */
    inline StartQueryExecutionRequest& WithResultReuseConfiguration(ResultReuseConfiguration&& value) { SetResultReuseConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_queryString;
    bool m_queryStringHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    QueryExecutionContext m_queryExecutionContext;
    bool m_queryExecutionContextHasBeenSet = false;

    ResultConfiguration m_resultConfiguration;
    bool m_resultConfigurationHasBeenSet = false;

    Aws::String m_workGroup;
    bool m_workGroupHasBeenSet = false;

    Aws::Vector<Aws::String> m_executionParameters;
    bool m_executionParametersHasBeenSet = false;

    ResultReuseConfiguration m_resultReuseConfiguration;
    bool m_resultReuseConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
