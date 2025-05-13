/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/logs/model/QueryLanguage.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

  /**
   */
  class PutQueryDefinitionRequest : public CloudWatchLogsRequest
  {
  public:
    AWS_CLOUDWATCHLOGS_API PutQueryDefinitionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutQueryDefinition"; }

    AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specify the query language to use for this query. The options are Logs
     * Insights QL, OpenSearch PPL, and OpenSearch SQL. For more information about the
     * query languages that CloudWatch Logs supports, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CWL_AnalyzeLogData_Languages.html">Supported
     * query languages</a>.</p>
     */
    inline QueryLanguage GetQueryLanguage() const { return m_queryLanguage; }
    inline bool QueryLanguageHasBeenSet() const { return m_queryLanguageHasBeenSet; }
    inline void SetQueryLanguage(QueryLanguage value) { m_queryLanguageHasBeenSet = true; m_queryLanguage = value; }
    inline PutQueryDefinitionRequest& WithQueryLanguage(QueryLanguage value) { SetQueryLanguage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the query definition. If you are saving numerous query
     * definitions, we recommend that you name them. This way, you can find the ones
     * you want by using the first part of the name as a filter in the
     * <code>queryDefinitionNamePrefix</code> parameter of <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_DescribeQueryDefinitions.html">DescribeQueryDefinitions</a>.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    PutQueryDefinitionRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you are updating a query definition, use this parameter to specify the ID
     * of the query definition that you want to update. You can use <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_DescribeQueryDefinitions.html">DescribeQueryDefinitions</a>
     * to retrieve the IDs of your saved query definitions.</p> <p>If you are creating
     * a query definition, do not specify this parameter. CloudWatch generates a unique
     * ID for the new query definition and include it in the response to this
     * operation.</p>
     */
    inline const Aws::String& GetQueryDefinitionId() const { return m_queryDefinitionId; }
    inline bool QueryDefinitionIdHasBeenSet() const { return m_queryDefinitionIdHasBeenSet; }
    template<typename QueryDefinitionIdT = Aws::String>
    void SetQueryDefinitionId(QueryDefinitionIdT&& value) { m_queryDefinitionIdHasBeenSet = true; m_queryDefinitionId = std::forward<QueryDefinitionIdT>(value); }
    template<typename QueryDefinitionIdT = Aws::String>
    PutQueryDefinitionRequest& WithQueryDefinitionId(QueryDefinitionIdT&& value) { SetQueryDefinitionId(std::forward<QueryDefinitionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to include specific log groups as part of your query
     * definition. If your query uses the OpenSearch Service query language, you
     * specify the log group names inside the <code>querystring</code> instead of
     * here.</p> <p>If you are updating an existing query definition for the Logs
     * Insights QL or OpenSearch Service PPL and you omit this parameter, then the
     * updated definition will contain no log groups.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLogGroupNames() const { return m_logGroupNames; }
    inline bool LogGroupNamesHasBeenSet() const { return m_logGroupNamesHasBeenSet; }
    template<typename LogGroupNamesT = Aws::Vector<Aws::String>>
    void SetLogGroupNames(LogGroupNamesT&& value) { m_logGroupNamesHasBeenSet = true; m_logGroupNames = std::forward<LogGroupNamesT>(value); }
    template<typename LogGroupNamesT = Aws::Vector<Aws::String>>
    PutQueryDefinitionRequest& WithLogGroupNames(LogGroupNamesT&& value) { SetLogGroupNames(std::forward<LogGroupNamesT>(value)); return *this;}
    template<typename LogGroupNamesT = Aws::String>
    PutQueryDefinitionRequest& AddLogGroupNames(LogGroupNamesT&& value) { m_logGroupNamesHasBeenSet = true; m_logGroupNames.emplace_back(std::forward<LogGroupNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The query string to use for this definition. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CWL_QuerySyntax.html">CloudWatch
     * Logs Insights Query Syntax</a>.</p>
     */
    inline const Aws::String& GetQueryString() const { return m_queryString; }
    inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }
    template<typename QueryStringT = Aws::String>
    void SetQueryString(QueryStringT&& value) { m_queryStringHasBeenSet = true; m_queryString = std::forward<QueryStringT>(value); }
    template<typename QueryStringT = Aws::String>
    PutQueryDefinitionRequest& WithQueryString(QueryStringT&& value) { SetQueryString(std::forward<QueryStringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Used as an idempotency token, to avoid returning an exception if the service
     * receives the same request twice because of a network error.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    PutQueryDefinitionRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    QueryLanguage m_queryLanguage{QueryLanguage::NOT_SET};
    bool m_queryLanguageHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_queryDefinitionId;
    bool m_queryDefinitionIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_logGroupNames;
    bool m_logGroupNamesHasBeenSet = false;

    Aws::String m_queryString;
    bool m_queryStringHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
