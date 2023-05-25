/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CloudWatchLogs
{
namespace Model
{

  /**
   * <p>This structure contains details about a saved CloudWatch Logs Insights query
   * definition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/QueryDefinition">AWS
   * API Reference</a></p>
   */
  class QueryDefinition
  {
  public:
    AWS_CLOUDWATCHLOGS_API QueryDefinition();
    AWS_CLOUDWATCHLOGS_API QueryDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API QueryDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique ID of the query definition.</p>
     */
    inline const Aws::String& GetQueryDefinitionId() const{ return m_queryDefinitionId; }

    /**
     * <p>The unique ID of the query definition.</p>
     */
    inline bool QueryDefinitionIdHasBeenSet() const { return m_queryDefinitionIdHasBeenSet; }

    /**
     * <p>The unique ID of the query definition.</p>
     */
    inline void SetQueryDefinitionId(const Aws::String& value) { m_queryDefinitionIdHasBeenSet = true; m_queryDefinitionId = value; }

    /**
     * <p>The unique ID of the query definition.</p>
     */
    inline void SetQueryDefinitionId(Aws::String&& value) { m_queryDefinitionIdHasBeenSet = true; m_queryDefinitionId = std::move(value); }

    /**
     * <p>The unique ID of the query definition.</p>
     */
    inline void SetQueryDefinitionId(const char* value) { m_queryDefinitionIdHasBeenSet = true; m_queryDefinitionId.assign(value); }

    /**
     * <p>The unique ID of the query definition.</p>
     */
    inline QueryDefinition& WithQueryDefinitionId(const Aws::String& value) { SetQueryDefinitionId(value); return *this;}

    /**
     * <p>The unique ID of the query definition.</p>
     */
    inline QueryDefinition& WithQueryDefinitionId(Aws::String&& value) { SetQueryDefinitionId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the query definition.</p>
     */
    inline QueryDefinition& WithQueryDefinitionId(const char* value) { SetQueryDefinitionId(value); return *this;}


    /**
     * <p>The name of the query definition.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the query definition.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the query definition.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the query definition.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the query definition.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the query definition.</p>
     */
    inline QueryDefinition& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the query definition.</p>
     */
    inline QueryDefinition& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the query definition.</p>
     */
    inline QueryDefinition& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The query string to use for this definition. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CWL_QuerySyntax.html">CloudWatch
     * Logs Insights Query Syntax</a>.</p>
     */
    inline const Aws::String& GetQueryString() const{ return m_queryString; }

    /**
     * <p>The query string to use for this definition. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CWL_QuerySyntax.html">CloudWatch
     * Logs Insights Query Syntax</a>.</p>
     */
    inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }

    /**
     * <p>The query string to use for this definition. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CWL_QuerySyntax.html">CloudWatch
     * Logs Insights Query Syntax</a>.</p>
     */
    inline void SetQueryString(const Aws::String& value) { m_queryStringHasBeenSet = true; m_queryString = value; }

    /**
     * <p>The query string to use for this definition. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CWL_QuerySyntax.html">CloudWatch
     * Logs Insights Query Syntax</a>.</p>
     */
    inline void SetQueryString(Aws::String&& value) { m_queryStringHasBeenSet = true; m_queryString = std::move(value); }

    /**
     * <p>The query string to use for this definition. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CWL_QuerySyntax.html">CloudWatch
     * Logs Insights Query Syntax</a>.</p>
     */
    inline void SetQueryString(const char* value) { m_queryStringHasBeenSet = true; m_queryString.assign(value); }

    /**
     * <p>The query string to use for this definition. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CWL_QuerySyntax.html">CloudWatch
     * Logs Insights Query Syntax</a>.</p>
     */
    inline QueryDefinition& WithQueryString(const Aws::String& value) { SetQueryString(value); return *this;}

    /**
     * <p>The query string to use for this definition. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CWL_QuerySyntax.html">CloudWatch
     * Logs Insights Query Syntax</a>.</p>
     */
    inline QueryDefinition& WithQueryString(Aws::String&& value) { SetQueryString(std::move(value)); return *this;}

    /**
     * <p>The query string to use for this definition. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CWL_QuerySyntax.html">CloudWatch
     * Logs Insights Query Syntax</a>.</p>
     */
    inline QueryDefinition& WithQueryString(const char* value) { SetQueryString(value); return *this;}


    /**
     * <p>The date that the query definition was most recently modified.</p>
     */
    inline long long GetLastModified() const{ return m_lastModified; }

    /**
     * <p>The date that the query definition was most recently modified.</p>
     */
    inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }

    /**
     * <p>The date that the query definition was most recently modified.</p>
     */
    inline void SetLastModified(long long value) { m_lastModifiedHasBeenSet = true; m_lastModified = value; }

    /**
     * <p>The date that the query definition was most recently modified.</p>
     */
    inline QueryDefinition& WithLastModified(long long value) { SetLastModified(value); return *this;}


    /**
     * <p>If this query definition contains a list of log groups that it is limited to,
     * that list appears here.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLogGroupNames() const{ return m_logGroupNames; }

    /**
     * <p>If this query definition contains a list of log groups that it is limited to,
     * that list appears here.</p>
     */
    inline bool LogGroupNamesHasBeenSet() const { return m_logGroupNamesHasBeenSet; }

    /**
     * <p>If this query definition contains a list of log groups that it is limited to,
     * that list appears here.</p>
     */
    inline void SetLogGroupNames(const Aws::Vector<Aws::String>& value) { m_logGroupNamesHasBeenSet = true; m_logGroupNames = value; }

    /**
     * <p>If this query definition contains a list of log groups that it is limited to,
     * that list appears here.</p>
     */
    inline void SetLogGroupNames(Aws::Vector<Aws::String>&& value) { m_logGroupNamesHasBeenSet = true; m_logGroupNames = std::move(value); }

    /**
     * <p>If this query definition contains a list of log groups that it is limited to,
     * that list appears here.</p>
     */
    inline QueryDefinition& WithLogGroupNames(const Aws::Vector<Aws::String>& value) { SetLogGroupNames(value); return *this;}

    /**
     * <p>If this query definition contains a list of log groups that it is limited to,
     * that list appears here.</p>
     */
    inline QueryDefinition& WithLogGroupNames(Aws::Vector<Aws::String>&& value) { SetLogGroupNames(std::move(value)); return *this;}

    /**
     * <p>If this query definition contains a list of log groups that it is limited to,
     * that list appears here.</p>
     */
    inline QueryDefinition& AddLogGroupNames(const Aws::String& value) { m_logGroupNamesHasBeenSet = true; m_logGroupNames.push_back(value); return *this; }

    /**
     * <p>If this query definition contains a list of log groups that it is limited to,
     * that list appears here.</p>
     */
    inline QueryDefinition& AddLogGroupNames(Aws::String&& value) { m_logGroupNamesHasBeenSet = true; m_logGroupNames.push_back(std::move(value)); return *this; }

    /**
     * <p>If this query definition contains a list of log groups that it is limited to,
     * that list appears here.</p>
     */
    inline QueryDefinition& AddLogGroupNames(const char* value) { m_logGroupNamesHasBeenSet = true; m_logGroupNames.push_back(value); return *this; }

  private:

    Aws::String m_queryDefinitionId;
    bool m_queryDefinitionIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_queryString;
    bool m_queryStringHasBeenSet = false;

    long long m_lastModified;
    bool m_lastModifiedHasBeenSet = false;

    Aws::Vector<Aws::String> m_logGroupNames;
    bool m_logGroupNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
