/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/resource-groups/model/QueryType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ResourceGroups
{
namespace Model
{

  /**
   * <p>The query that is used to define a resource group or a search for resources.
   * A query specifies both a query type and a query string as a JSON object. See the
   * examples section for example JSON strings.</p> <p>The examples that follow are
   * shown as standard JSON strings. If you include such a string as a parameter to
   * the AWS CLI or an SDK API, you might need to 'escape' the string into a single
   * line. For example, see the <a
   * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-parameters-quoting-strings.html">Quoting
   * strings</a> in the <i>AWS CLI User Guide</i>.</p> <p> <b>Example 1</b> </p>
   * <p>The following generic example shows a resource query JSON string that
   * includes only resources that meet the following criteria:</p> <ul> <li> <p>The
   * resource type must be either <code>resource_type1</code> or
   * <code>resource_type2</code>.</p> </li> <li> <p>The resource must have a tag
   * <code>Key1</code> with a value of either <code>ValueA</code> or
   * <code>ValueB</code>.</p> </li> <li> <p>The resource must have a tag
   * <code>Key2</code> with a value of either <code>ValueC</code> or
   * <code>ValueD</code>.</p> </li> </ul> <p> <code>{ "Type": "TAG_FILTERS_1_0",
   * "Query": { "ResourceTypeFilters": [ "resource_type1", "resource_type2"],
   * "TagFilters": [ { "Key": "Key1", "Values": ["ValueA","ValueB"] }, {
   * "Key":"Key2", "Values":["ValueC","ValueD"] } ] } }</code> </p> <p>This has the
   * equivalent "shortcut" syntax of the following:</p> <p> <code>{ "Type":
   * "TAG_FILTERS_1_0", "Query": { "ResourceTypeFilters": [ "resource_type1",
   * "resource_type2"], "TagFilters": [ { "Key1": ["ValueA","ValueB"] }, { "Key2":
   * ["ValueC","ValueD"] } ] } }</code> </p> <p> <b>Example 2</b> </p> <p>The
   * following example shows a resource query JSON string that includes only Amazon
   * EC2 instances that are tagged <code>Stage</code> with a value of
   * <code>Test</code>.</p> <p> <code>{ "Type": "TAG_FILTERS_1_0", "Query": "{
   * "ResourceTypeFilters": "AWS::EC2::Instance", "TagFilters": { "Stage": "Test" } }
   * }</code> </p> <p> <b>Example 3</b> </p> <p>The following example shows a
   * resource query JSON string that includes resource of any supported type as long
   * as it is tagged <code>Stage</code> with a value of <code>Prod</code>.</p> <p>
   * <code>{ "Type": "TAG_FILTERS_1_0", "Query": { "ResourceTypeFilters":
   * "AWS::AllSupported", "TagFilters": { "Stage": "Prod" } } }</code> </p> <p>
   * <b>Example 4</b> </p> <p>The following example shows a resource query JSON
   * string that includes only Amazon EC2 instances and Amazon S3 buckets that are
   * part of the specified AWS CloudFormation stack.</p> <p> <code>{ "Type":
   * "CLOUDFORMATION_STACK_1_0", "Query": { "ResourceTypeFilters": [
   * "AWS::EC2::Instance", "AWS::S3::Bucket" ], "StackIdentifier":
   * "arn:aws:cloudformation:us-west-2:123456789012:stack/AWStestuseraccount/fb0d5000-aba8-00e8-aa9e-50d5cEXAMPLE"
   * } }</code> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/ResourceQuery">AWS
   * API Reference</a></p>
   */
  class ResourceQuery
  {
  public:
    AWS_RESOURCEGROUPS_API ResourceQuery();
    AWS_RESOURCEGROUPS_API ResourceQuery(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEGROUPS_API ResourceQuery& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEGROUPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of the query. You can use the following values:</p> <ul> <li> <p>
     * <i> <code>CLOUDFORMATION_STACK_1_0:</code> </i>Specifies that the
     * <code>Query</code> contains an ARN for a CloudFormation stack.</p> </li> <li>
     * <p> <i> <code>TAG_FILTERS_1_0:</code> </i>Specifies that the <code>Query</code>
     * parameter contains a JSON string that represents a collection of simple tag
     * filters for resource types and tags. The JSON string uses a syntax similar to
     * the <code> <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/API_GetResources.html">GetResources</a>
     * </code> operation, but uses only the <code> <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/API_GetResources.html#resourcegrouptagging-GetResources-request-ResourceTypeFilters">
     * ResourceTypeFilters</a> </code> and <code> <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/API_GetResources.html#resourcegrouptagging-GetResources-request-TagFiltersTagFilters">TagFilters</a>
     * </code> fields. If you specify more than one tag key, only resources that match
     * all tag keys, and at least one value of each specified tag key, are returned in
     * your query. If you specify more than one value for a tag key, a resource matches
     * the filter if it has a tag key value that matches <i>any</i> of the specified
     * values.</p> <p>For example, consider the following sample query for resources
     * that have two tags, <code>Stage</code> and <code>Version</code>, with two values
     * each:</p> <p> <code>[{"Stage":["Test","Deploy"]},{"Version":["1","2"]}]</code>
     * </p> <p>The results of this query could include the following.</p> <ul> <li>
     * <p>An EC2 instance that has the following two tags:
     * <code>{"Stage":"Deploy"}</code>, and <code>{"Version":"2"}</code> </p> </li>
     * <li> <p>An S3 bucket that has the following two tags:
     * <code>{"Stage":"Test"}</code>, and <code>{"Version":"1"}</code> </p> </li> </ul>
     * <p>The query would not include the following items in the results, however. </p>
     * <ul> <li> <p>An EC2 instance that has only the following tag:
     * <code>{"Stage":"Deploy"}</code>.</p> <p>The instance does not have <b>all</b> of
     * the tag keys specified in the filter, so it is excluded from the results.</p>
     * </li> <li> <p>An RDS database that has the following two tags:
     * <code>{"Stage":"Archived"}</code> and <code>{"Version":"4"}</code> </p> <p>The
     * database has all of the tag keys, but none of those keys has an associated value
     * that matches at least one of the specified values in the filter.</p> </li> </ul>
     * </li> </ul>
     */
    inline const QueryType& GetType() const{ return m_type; }

    /**
     * <p>The type of the query. You can use the following values:</p> <ul> <li> <p>
     * <i> <code>CLOUDFORMATION_STACK_1_0:</code> </i>Specifies that the
     * <code>Query</code> contains an ARN for a CloudFormation stack.</p> </li> <li>
     * <p> <i> <code>TAG_FILTERS_1_0:</code> </i>Specifies that the <code>Query</code>
     * parameter contains a JSON string that represents a collection of simple tag
     * filters for resource types and tags. The JSON string uses a syntax similar to
     * the <code> <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/API_GetResources.html">GetResources</a>
     * </code> operation, but uses only the <code> <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/API_GetResources.html#resourcegrouptagging-GetResources-request-ResourceTypeFilters">
     * ResourceTypeFilters</a> </code> and <code> <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/API_GetResources.html#resourcegrouptagging-GetResources-request-TagFiltersTagFilters">TagFilters</a>
     * </code> fields. If you specify more than one tag key, only resources that match
     * all tag keys, and at least one value of each specified tag key, are returned in
     * your query. If you specify more than one value for a tag key, a resource matches
     * the filter if it has a tag key value that matches <i>any</i> of the specified
     * values.</p> <p>For example, consider the following sample query for resources
     * that have two tags, <code>Stage</code> and <code>Version</code>, with two values
     * each:</p> <p> <code>[{"Stage":["Test","Deploy"]},{"Version":["1","2"]}]</code>
     * </p> <p>The results of this query could include the following.</p> <ul> <li>
     * <p>An EC2 instance that has the following two tags:
     * <code>{"Stage":"Deploy"}</code>, and <code>{"Version":"2"}</code> </p> </li>
     * <li> <p>An S3 bucket that has the following two tags:
     * <code>{"Stage":"Test"}</code>, and <code>{"Version":"1"}</code> </p> </li> </ul>
     * <p>The query would not include the following items in the results, however. </p>
     * <ul> <li> <p>An EC2 instance that has only the following tag:
     * <code>{"Stage":"Deploy"}</code>.</p> <p>The instance does not have <b>all</b> of
     * the tag keys specified in the filter, so it is excluded from the results.</p>
     * </li> <li> <p>An RDS database that has the following two tags:
     * <code>{"Stage":"Archived"}</code> and <code>{"Version":"4"}</code> </p> <p>The
     * database has all of the tag keys, but none of those keys has an associated value
     * that matches at least one of the specified values in the filter.</p> </li> </ul>
     * </li> </ul>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the query. You can use the following values:</p> <ul> <li> <p>
     * <i> <code>CLOUDFORMATION_STACK_1_0:</code> </i>Specifies that the
     * <code>Query</code> contains an ARN for a CloudFormation stack.</p> </li> <li>
     * <p> <i> <code>TAG_FILTERS_1_0:</code> </i>Specifies that the <code>Query</code>
     * parameter contains a JSON string that represents a collection of simple tag
     * filters for resource types and tags. The JSON string uses a syntax similar to
     * the <code> <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/API_GetResources.html">GetResources</a>
     * </code> operation, but uses only the <code> <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/API_GetResources.html#resourcegrouptagging-GetResources-request-ResourceTypeFilters">
     * ResourceTypeFilters</a> </code> and <code> <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/API_GetResources.html#resourcegrouptagging-GetResources-request-TagFiltersTagFilters">TagFilters</a>
     * </code> fields. If you specify more than one tag key, only resources that match
     * all tag keys, and at least one value of each specified tag key, are returned in
     * your query. If you specify more than one value for a tag key, a resource matches
     * the filter if it has a tag key value that matches <i>any</i> of the specified
     * values.</p> <p>For example, consider the following sample query for resources
     * that have two tags, <code>Stage</code> and <code>Version</code>, with two values
     * each:</p> <p> <code>[{"Stage":["Test","Deploy"]},{"Version":["1","2"]}]</code>
     * </p> <p>The results of this query could include the following.</p> <ul> <li>
     * <p>An EC2 instance that has the following two tags:
     * <code>{"Stage":"Deploy"}</code>, and <code>{"Version":"2"}</code> </p> </li>
     * <li> <p>An S3 bucket that has the following two tags:
     * <code>{"Stage":"Test"}</code>, and <code>{"Version":"1"}</code> </p> </li> </ul>
     * <p>The query would not include the following items in the results, however. </p>
     * <ul> <li> <p>An EC2 instance that has only the following tag:
     * <code>{"Stage":"Deploy"}</code>.</p> <p>The instance does not have <b>all</b> of
     * the tag keys specified in the filter, so it is excluded from the results.</p>
     * </li> <li> <p>An RDS database that has the following two tags:
     * <code>{"Stage":"Archived"}</code> and <code>{"Version":"4"}</code> </p> <p>The
     * database has all of the tag keys, but none of those keys has an associated value
     * that matches at least one of the specified values in the filter.</p> </li> </ul>
     * </li> </ul>
     */
    inline void SetType(const QueryType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the query. You can use the following values:</p> <ul> <li> <p>
     * <i> <code>CLOUDFORMATION_STACK_1_0:</code> </i>Specifies that the
     * <code>Query</code> contains an ARN for a CloudFormation stack.</p> </li> <li>
     * <p> <i> <code>TAG_FILTERS_1_0:</code> </i>Specifies that the <code>Query</code>
     * parameter contains a JSON string that represents a collection of simple tag
     * filters for resource types and tags. The JSON string uses a syntax similar to
     * the <code> <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/API_GetResources.html">GetResources</a>
     * </code> operation, but uses only the <code> <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/API_GetResources.html#resourcegrouptagging-GetResources-request-ResourceTypeFilters">
     * ResourceTypeFilters</a> </code> and <code> <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/API_GetResources.html#resourcegrouptagging-GetResources-request-TagFiltersTagFilters">TagFilters</a>
     * </code> fields. If you specify more than one tag key, only resources that match
     * all tag keys, and at least one value of each specified tag key, are returned in
     * your query. If you specify more than one value for a tag key, a resource matches
     * the filter if it has a tag key value that matches <i>any</i> of the specified
     * values.</p> <p>For example, consider the following sample query for resources
     * that have two tags, <code>Stage</code> and <code>Version</code>, with two values
     * each:</p> <p> <code>[{"Stage":["Test","Deploy"]},{"Version":["1","2"]}]</code>
     * </p> <p>The results of this query could include the following.</p> <ul> <li>
     * <p>An EC2 instance that has the following two tags:
     * <code>{"Stage":"Deploy"}</code>, and <code>{"Version":"2"}</code> </p> </li>
     * <li> <p>An S3 bucket that has the following two tags:
     * <code>{"Stage":"Test"}</code>, and <code>{"Version":"1"}</code> </p> </li> </ul>
     * <p>The query would not include the following items in the results, however. </p>
     * <ul> <li> <p>An EC2 instance that has only the following tag:
     * <code>{"Stage":"Deploy"}</code>.</p> <p>The instance does not have <b>all</b> of
     * the tag keys specified in the filter, so it is excluded from the results.</p>
     * </li> <li> <p>An RDS database that has the following two tags:
     * <code>{"Stage":"Archived"}</code> and <code>{"Version":"4"}</code> </p> <p>The
     * database has all of the tag keys, but none of those keys has an associated value
     * that matches at least one of the specified values in the filter.</p> </li> </ul>
     * </li> </ul>
     */
    inline void SetType(QueryType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the query. You can use the following values:</p> <ul> <li> <p>
     * <i> <code>CLOUDFORMATION_STACK_1_0:</code> </i>Specifies that the
     * <code>Query</code> contains an ARN for a CloudFormation stack.</p> </li> <li>
     * <p> <i> <code>TAG_FILTERS_1_0:</code> </i>Specifies that the <code>Query</code>
     * parameter contains a JSON string that represents a collection of simple tag
     * filters for resource types and tags. The JSON string uses a syntax similar to
     * the <code> <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/API_GetResources.html">GetResources</a>
     * </code> operation, but uses only the <code> <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/API_GetResources.html#resourcegrouptagging-GetResources-request-ResourceTypeFilters">
     * ResourceTypeFilters</a> </code> and <code> <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/API_GetResources.html#resourcegrouptagging-GetResources-request-TagFiltersTagFilters">TagFilters</a>
     * </code> fields. If you specify more than one tag key, only resources that match
     * all tag keys, and at least one value of each specified tag key, are returned in
     * your query. If you specify more than one value for a tag key, a resource matches
     * the filter if it has a tag key value that matches <i>any</i> of the specified
     * values.</p> <p>For example, consider the following sample query for resources
     * that have two tags, <code>Stage</code> and <code>Version</code>, with two values
     * each:</p> <p> <code>[{"Stage":["Test","Deploy"]},{"Version":["1","2"]}]</code>
     * </p> <p>The results of this query could include the following.</p> <ul> <li>
     * <p>An EC2 instance that has the following two tags:
     * <code>{"Stage":"Deploy"}</code>, and <code>{"Version":"2"}</code> </p> </li>
     * <li> <p>An S3 bucket that has the following two tags:
     * <code>{"Stage":"Test"}</code>, and <code>{"Version":"1"}</code> </p> </li> </ul>
     * <p>The query would not include the following items in the results, however. </p>
     * <ul> <li> <p>An EC2 instance that has only the following tag:
     * <code>{"Stage":"Deploy"}</code>.</p> <p>The instance does not have <b>all</b> of
     * the tag keys specified in the filter, so it is excluded from the results.</p>
     * </li> <li> <p>An RDS database that has the following two tags:
     * <code>{"Stage":"Archived"}</code> and <code>{"Version":"4"}</code> </p> <p>The
     * database has all of the tag keys, but none of those keys has an associated value
     * that matches at least one of the specified values in the filter.</p> </li> </ul>
     * </li> </ul>
     */
    inline ResourceQuery& WithType(const QueryType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the query. You can use the following values:</p> <ul> <li> <p>
     * <i> <code>CLOUDFORMATION_STACK_1_0:</code> </i>Specifies that the
     * <code>Query</code> contains an ARN for a CloudFormation stack.</p> </li> <li>
     * <p> <i> <code>TAG_FILTERS_1_0:</code> </i>Specifies that the <code>Query</code>
     * parameter contains a JSON string that represents a collection of simple tag
     * filters for resource types and tags. The JSON string uses a syntax similar to
     * the <code> <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/API_GetResources.html">GetResources</a>
     * </code> operation, but uses only the <code> <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/API_GetResources.html#resourcegrouptagging-GetResources-request-ResourceTypeFilters">
     * ResourceTypeFilters</a> </code> and <code> <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/API_GetResources.html#resourcegrouptagging-GetResources-request-TagFiltersTagFilters">TagFilters</a>
     * </code> fields. If you specify more than one tag key, only resources that match
     * all tag keys, and at least one value of each specified tag key, are returned in
     * your query. If you specify more than one value for a tag key, a resource matches
     * the filter if it has a tag key value that matches <i>any</i> of the specified
     * values.</p> <p>For example, consider the following sample query for resources
     * that have two tags, <code>Stage</code> and <code>Version</code>, with two values
     * each:</p> <p> <code>[{"Stage":["Test","Deploy"]},{"Version":["1","2"]}]</code>
     * </p> <p>The results of this query could include the following.</p> <ul> <li>
     * <p>An EC2 instance that has the following two tags:
     * <code>{"Stage":"Deploy"}</code>, and <code>{"Version":"2"}</code> </p> </li>
     * <li> <p>An S3 bucket that has the following two tags:
     * <code>{"Stage":"Test"}</code>, and <code>{"Version":"1"}</code> </p> </li> </ul>
     * <p>The query would not include the following items in the results, however. </p>
     * <ul> <li> <p>An EC2 instance that has only the following tag:
     * <code>{"Stage":"Deploy"}</code>.</p> <p>The instance does not have <b>all</b> of
     * the tag keys specified in the filter, so it is excluded from the results.</p>
     * </li> <li> <p>An RDS database that has the following two tags:
     * <code>{"Stage":"Archived"}</code> and <code>{"Version":"4"}</code> </p> <p>The
     * database has all of the tag keys, but none of those keys has an associated value
     * that matches at least one of the specified values in the filter.</p> </li> </ul>
     * </li> </ul>
     */
    inline ResourceQuery& WithType(QueryType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The query that defines a group or a search.</p>
     */
    inline const Aws::String& GetQuery() const{ return m_query; }

    /**
     * <p>The query that defines a group or a search.</p>
     */
    inline bool QueryHasBeenSet() const { return m_queryHasBeenSet; }

    /**
     * <p>The query that defines a group or a search.</p>
     */
    inline void SetQuery(const Aws::String& value) { m_queryHasBeenSet = true; m_query = value; }

    /**
     * <p>The query that defines a group or a search.</p>
     */
    inline void SetQuery(Aws::String&& value) { m_queryHasBeenSet = true; m_query = std::move(value); }

    /**
     * <p>The query that defines a group or a search.</p>
     */
    inline void SetQuery(const char* value) { m_queryHasBeenSet = true; m_query.assign(value); }

    /**
     * <p>The query that defines a group or a search.</p>
     */
    inline ResourceQuery& WithQuery(const Aws::String& value) { SetQuery(value); return *this;}

    /**
     * <p>The query that defines a group or a search.</p>
     */
    inline ResourceQuery& WithQuery(Aws::String&& value) { SetQuery(std::move(value)); return *this;}

    /**
     * <p>The query that defines a group or a search.</p>
     */
    inline ResourceQuery& WithQuery(const char* value) { SetQuery(value); return *this;}

  private:

    QueryType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_query;
    bool m_queryHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
