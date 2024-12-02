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
    AWS_CLOUDWATCHLOGS_API PutQueryDefinitionRequest();

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
    inline const QueryLanguage& GetQueryLanguage() const{ return m_queryLanguage; }
    inline bool QueryLanguageHasBeenSet() const { return m_queryLanguageHasBeenSet; }
    inline void SetQueryLanguage(const QueryLanguage& value) { m_queryLanguageHasBeenSet = true; m_queryLanguage = value; }
    inline void SetQueryLanguage(QueryLanguage&& value) { m_queryLanguageHasBeenSet = true; m_queryLanguage = std::move(value); }
    inline PutQueryDefinitionRequest& WithQueryLanguage(const QueryLanguage& value) { SetQueryLanguage(value); return *this;}
    inline PutQueryDefinitionRequest& WithQueryLanguage(QueryLanguage&& value) { SetQueryLanguage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the query definition. If you are saving numerous query
     * definitions, we recommend that you name them. This way, you can find the ones
     * you want by using the first part of the name as a filter in the
     * <code>queryDefinitionNamePrefix</code> parameter of <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_DescribeQueryDefinitions.html">DescribeQueryDefinitions</a>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline PutQueryDefinitionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline PutQueryDefinitionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline PutQueryDefinitionRequest& WithName(const char* value) { SetName(value); return *this;}
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
    inline const Aws::String& GetQueryDefinitionId() const{ return m_queryDefinitionId; }
    inline bool QueryDefinitionIdHasBeenSet() const { return m_queryDefinitionIdHasBeenSet; }
    inline void SetQueryDefinitionId(const Aws::String& value) { m_queryDefinitionIdHasBeenSet = true; m_queryDefinitionId = value; }
    inline void SetQueryDefinitionId(Aws::String&& value) { m_queryDefinitionIdHasBeenSet = true; m_queryDefinitionId = std::move(value); }
    inline void SetQueryDefinitionId(const char* value) { m_queryDefinitionIdHasBeenSet = true; m_queryDefinitionId.assign(value); }
    inline PutQueryDefinitionRequest& WithQueryDefinitionId(const Aws::String& value) { SetQueryDefinitionId(value); return *this;}
    inline PutQueryDefinitionRequest& WithQueryDefinitionId(Aws::String&& value) { SetQueryDefinitionId(std::move(value)); return *this;}
    inline PutQueryDefinitionRequest& WithQueryDefinitionId(const char* value) { SetQueryDefinitionId(value); return *this;}
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
    inline const Aws::Vector<Aws::String>& GetLogGroupNames() const{ return m_logGroupNames; }
    inline bool LogGroupNamesHasBeenSet() const { return m_logGroupNamesHasBeenSet; }
    inline void SetLogGroupNames(const Aws::Vector<Aws::String>& value) { m_logGroupNamesHasBeenSet = true; m_logGroupNames = value; }
    inline void SetLogGroupNames(Aws::Vector<Aws::String>&& value) { m_logGroupNamesHasBeenSet = true; m_logGroupNames = std::move(value); }
    inline PutQueryDefinitionRequest& WithLogGroupNames(const Aws::Vector<Aws::String>& value) { SetLogGroupNames(value); return *this;}
    inline PutQueryDefinitionRequest& WithLogGroupNames(Aws::Vector<Aws::String>&& value) { SetLogGroupNames(std::move(value)); return *this;}
    inline PutQueryDefinitionRequest& AddLogGroupNames(const Aws::String& value) { m_logGroupNamesHasBeenSet = true; m_logGroupNames.push_back(value); return *this; }
    inline PutQueryDefinitionRequest& AddLogGroupNames(Aws::String&& value) { m_logGroupNamesHasBeenSet = true; m_logGroupNames.push_back(std::move(value)); return *this; }
    inline PutQueryDefinitionRequest& AddLogGroupNames(const char* value) { m_logGroupNamesHasBeenSet = true; m_logGroupNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The query string to use for this definition. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CWL_QuerySyntax.html">CloudWatch
     * Logs Insights Query Syntax</a>.</p>
     */
    inline const Aws::String& GetQueryString() const{ return m_queryString; }
    inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }
    inline void SetQueryString(const Aws::String& value) { m_queryStringHasBeenSet = true; m_queryString = value; }
    inline void SetQueryString(Aws::String&& value) { m_queryStringHasBeenSet = true; m_queryString = std::move(value); }
    inline void SetQueryString(const char* value) { m_queryStringHasBeenSet = true; m_queryString.assign(value); }
    inline PutQueryDefinitionRequest& WithQueryString(const Aws::String& value) { SetQueryString(value); return *this;}
    inline PutQueryDefinitionRequest& WithQueryString(Aws::String&& value) { SetQueryString(std::move(value)); return *this;}
    inline PutQueryDefinitionRequest& WithQueryString(const char* value) { SetQueryString(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Used as an idempotency token, to avoid returning an exception if the service
     * receives the same request twice because of a network error.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline PutQueryDefinitionRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline PutQueryDefinitionRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline PutQueryDefinitionRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}
  private:

    QueryLanguage m_queryLanguage;
    bool m_queryLanguageHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_queryDefinitionId;
    bool m_queryDefinitionIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_logGroupNames;
    bool m_logGroupNamesHasBeenSet = false;

    Aws::String m_queryString;
    bool m_queryStringHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
