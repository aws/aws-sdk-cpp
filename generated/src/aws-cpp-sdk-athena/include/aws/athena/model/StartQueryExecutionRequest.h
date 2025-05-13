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
    AWS_ATHENA_API StartQueryExecutionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartQueryExecution"; }

    AWS_ATHENA_API Aws::String SerializePayload() const override;

    AWS_ATHENA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The SQL query statements to be executed.</p>
     */
    inline const Aws::String& GetQueryString() const { return m_queryString; }
    inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }
    template<typename QueryStringT = Aws::String>
    void SetQueryString(QueryStringT&& value) { m_queryStringHasBeenSet = true; m_queryString = std::forward<QueryStringT>(value); }
    template<typename QueryStringT = Aws::String>
    StartQueryExecutionRequest& WithQueryString(QueryStringT&& value) { SetQueryString(std::forward<QueryStringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique case-sensitive string used to ensure the request to create the query
     * is idempotent (executes only once). If another <code>StartQueryExecution</code>
     * request is received, the same response is returned and another query is not
     * created. An error is returned if a parameter, such as <code>QueryString</code>,
     * has changed. A call to <code>StartQueryExecution</code> that uses a previous
     * client request token returns the same <code>QueryExecutionId</code> even if the
     * requester doesn't have permission on the tables specified in
     * <code>QueryString</code>.</p>  <p>This token is listed as not
     * required because Amazon Web Services SDKs (for example the Amazon Web Services
     * SDK for Java) auto-generate the token for users. If you are not using the Amazon
     * Web Services SDK or the Amazon Web Services CLI, you must provide this token or
     * the action will fail.</p> 
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    StartQueryExecutionRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database within which the query executes.</p>
     */
    inline const QueryExecutionContext& GetQueryExecutionContext() const { return m_queryExecutionContext; }
    inline bool QueryExecutionContextHasBeenSet() const { return m_queryExecutionContextHasBeenSet; }
    template<typename QueryExecutionContextT = QueryExecutionContext>
    void SetQueryExecutionContext(QueryExecutionContextT&& value) { m_queryExecutionContextHasBeenSet = true; m_queryExecutionContext = std::forward<QueryExecutionContextT>(value); }
    template<typename QueryExecutionContextT = QueryExecutionContext>
    StartQueryExecutionRequest& WithQueryExecutionContext(QueryExecutionContextT&& value) { SetQueryExecutionContext(std::forward<QueryExecutionContextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies information about where and how to save the results of the query
     * execution. If the query runs in a workgroup, then workgroup's settings may
     * override query settings. This affects the query results location. The workgroup
     * settings override is specified in EnforceWorkGroupConfiguration (true/false) in
     * the WorkGroupConfiguration. See
     * <a>WorkGroupConfiguration$EnforceWorkGroupConfiguration</a>.</p>
     */
    inline const ResultConfiguration& GetResultConfiguration() const { return m_resultConfiguration; }
    inline bool ResultConfigurationHasBeenSet() const { return m_resultConfigurationHasBeenSet; }
    template<typename ResultConfigurationT = ResultConfiguration>
    void SetResultConfiguration(ResultConfigurationT&& value) { m_resultConfigurationHasBeenSet = true; m_resultConfiguration = std::forward<ResultConfigurationT>(value); }
    template<typename ResultConfigurationT = ResultConfiguration>
    StartQueryExecutionRequest& WithResultConfiguration(ResultConfigurationT&& value) { SetResultConfiguration(std::forward<ResultConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the workgroup in which the query is being started.</p>
     */
    inline const Aws::String& GetWorkGroup() const { return m_workGroup; }
    inline bool WorkGroupHasBeenSet() const { return m_workGroupHasBeenSet; }
    template<typename WorkGroupT = Aws::String>
    void SetWorkGroup(WorkGroupT&& value) { m_workGroupHasBeenSet = true; m_workGroup = std::forward<WorkGroupT>(value); }
    template<typename WorkGroupT = Aws::String>
    StartQueryExecutionRequest& WithWorkGroup(WorkGroupT&& value) { SetWorkGroup(std::forward<WorkGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of values for the parameters in a query. The values are applied
     * sequentially to the parameters in the query in the order in which the parameters
     * occur.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExecutionParameters() const { return m_executionParameters; }
    inline bool ExecutionParametersHasBeenSet() const { return m_executionParametersHasBeenSet; }
    template<typename ExecutionParametersT = Aws::Vector<Aws::String>>
    void SetExecutionParameters(ExecutionParametersT&& value) { m_executionParametersHasBeenSet = true; m_executionParameters = std::forward<ExecutionParametersT>(value); }
    template<typename ExecutionParametersT = Aws::Vector<Aws::String>>
    StartQueryExecutionRequest& WithExecutionParameters(ExecutionParametersT&& value) { SetExecutionParameters(std::forward<ExecutionParametersT>(value)); return *this;}
    template<typename ExecutionParametersT = Aws::String>
    StartQueryExecutionRequest& AddExecutionParameters(ExecutionParametersT&& value) { m_executionParametersHasBeenSet = true; m_executionParameters.emplace_back(std::forward<ExecutionParametersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the query result reuse behavior for the query.</p>
     */
    inline const ResultReuseConfiguration& GetResultReuseConfiguration() const { return m_resultReuseConfiguration; }
    inline bool ResultReuseConfigurationHasBeenSet() const { return m_resultReuseConfigurationHasBeenSet; }
    template<typename ResultReuseConfigurationT = ResultReuseConfiguration>
    void SetResultReuseConfiguration(ResultReuseConfigurationT&& value) { m_resultReuseConfigurationHasBeenSet = true; m_resultReuseConfiguration = std::forward<ResultReuseConfigurationT>(value); }
    template<typename ResultReuseConfigurationT = ResultReuseConfiguration>
    StartQueryExecutionRequest& WithResultReuseConfiguration(ResultReuseConfigurationT&& value) { SetResultReuseConfiguration(std::forward<ResultReuseConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_queryString;
    bool m_queryStringHasBeenSet = false;

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;

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
