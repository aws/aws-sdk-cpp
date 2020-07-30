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
   * <p>The query that is used to define a resource group or a search for
   * resources.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/ResourceQuery">AWS
   * API Reference</a></p>
   */
  class AWS_RESOURCEGROUPS_API ResourceQuery
  {
  public:
    ResourceQuery();
    ResourceQuery(Aws::Utils::Json::JsonView jsonValue);
    ResourceQuery& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of the query. You can use the following values:</p> <ul> <li> <p>
     * <i> <code>CLOUDFORMATION_STACK_1_0:</code> </i> A JSON syntax that lets you
     * specify a CloudFormation stack ARN.</p> </li> <li> <p> <i>
     * <code>TAG_FILTERS_1_0:</code> </i> A JSON syntax that lets you specify a
     * collection of simple tag filters for resource types and tags, as supported by
     * the AWS Tagging API <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/API_GetResources.html#resourcegrouptagging-GetResources-request-ResourceTypeFilters">
     * <code>ResourceTypeFilters</code> parameter of the
     * <code>tagging:GetResources</code> </a> operation. If you specify more than one
     * tag key, only resources that match all tag keys, and at least one value of each
     * specified tag key, are returned in your query. If you specify more than one
     * value for a tag key, a resource matches the filter if it has a tag key value
     * that matches <i>any</i> of the specified values.</p> <p>For example, consider
     * the following sample query for resources that have two tags, <code>Stage</code>
     * and <code>Version</code>, with two values each:</p> <p>
     * <code>[{"Key":"Stage","Values":["Test","Deploy"]},{"Key":"Version","Values":["1","2"]}]</code>
     * </p> <p>The results of this query could include the following.</p> <ul> <li>
     * <p>An EC2 instance that has the following two tags:
     * <code>{"Key":"Stage","Value":"Deploy"}</code>, and
     * <code>{"Key":"Version","Value":"2"}</code> </p> </li> <li> <p>An S3 bucket that
     * has the following two tags: <code>{"Key":"Stage","Value":"Test"}</code>, and
     * <code>{"Key":"Version","Value":"1"}</code> </p> </li> </ul> <p>The query would
     * not include the following items in the results, however. </p> <ul> <li> <p>An
     * EC2 instance that has only the following tag:
     * <code>{"Key":"Stage","Value":"Deploy"}</code>.</p> <p>The instance does not have
     * <b>all</b> of the tag keys specified in the filter, so it is excluded from the
     * results.</p> </li> <li> <p>An RDS database that has the following two tags:
     * <code>{"Key":"Stage","Value":"Archived"}</code>, and
     * <code>{"Key":"Version","Value":"4"}</code> </p> <p>The database has all of the
     * tag keys, but none of those keys has an associated value that matches at least
     * one of the specified values in the filter.</p> </li> </ul> </li> </ul>
     */
    inline const QueryType& GetType() const{ return m_type; }

    /**
     * <p>The type of the query. You can use the following values:</p> <ul> <li> <p>
     * <i> <code>CLOUDFORMATION_STACK_1_0:</code> </i> A JSON syntax that lets you
     * specify a CloudFormation stack ARN.</p> </li> <li> <p> <i>
     * <code>TAG_FILTERS_1_0:</code> </i> A JSON syntax that lets you specify a
     * collection of simple tag filters for resource types and tags, as supported by
     * the AWS Tagging API <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/API_GetResources.html#resourcegrouptagging-GetResources-request-ResourceTypeFilters">
     * <code>ResourceTypeFilters</code> parameter of the
     * <code>tagging:GetResources</code> </a> operation. If you specify more than one
     * tag key, only resources that match all tag keys, and at least one value of each
     * specified tag key, are returned in your query. If you specify more than one
     * value for a tag key, a resource matches the filter if it has a tag key value
     * that matches <i>any</i> of the specified values.</p> <p>For example, consider
     * the following sample query for resources that have two tags, <code>Stage</code>
     * and <code>Version</code>, with two values each:</p> <p>
     * <code>[{"Key":"Stage","Values":["Test","Deploy"]},{"Key":"Version","Values":["1","2"]}]</code>
     * </p> <p>The results of this query could include the following.</p> <ul> <li>
     * <p>An EC2 instance that has the following two tags:
     * <code>{"Key":"Stage","Value":"Deploy"}</code>, and
     * <code>{"Key":"Version","Value":"2"}</code> </p> </li> <li> <p>An S3 bucket that
     * has the following two tags: <code>{"Key":"Stage","Value":"Test"}</code>, and
     * <code>{"Key":"Version","Value":"1"}</code> </p> </li> </ul> <p>The query would
     * not include the following items in the results, however. </p> <ul> <li> <p>An
     * EC2 instance that has only the following tag:
     * <code>{"Key":"Stage","Value":"Deploy"}</code>.</p> <p>The instance does not have
     * <b>all</b> of the tag keys specified in the filter, so it is excluded from the
     * results.</p> </li> <li> <p>An RDS database that has the following two tags:
     * <code>{"Key":"Stage","Value":"Archived"}</code>, and
     * <code>{"Key":"Version","Value":"4"}</code> </p> <p>The database has all of the
     * tag keys, but none of those keys has an associated value that matches at least
     * one of the specified values in the filter.</p> </li> </ul> </li> </ul>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the query. You can use the following values:</p> <ul> <li> <p>
     * <i> <code>CLOUDFORMATION_STACK_1_0:</code> </i> A JSON syntax that lets you
     * specify a CloudFormation stack ARN.</p> </li> <li> <p> <i>
     * <code>TAG_FILTERS_1_0:</code> </i> A JSON syntax that lets you specify a
     * collection of simple tag filters for resource types and tags, as supported by
     * the AWS Tagging API <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/API_GetResources.html#resourcegrouptagging-GetResources-request-ResourceTypeFilters">
     * <code>ResourceTypeFilters</code> parameter of the
     * <code>tagging:GetResources</code> </a> operation. If you specify more than one
     * tag key, only resources that match all tag keys, and at least one value of each
     * specified tag key, are returned in your query. If you specify more than one
     * value for a tag key, a resource matches the filter if it has a tag key value
     * that matches <i>any</i> of the specified values.</p> <p>For example, consider
     * the following sample query for resources that have two tags, <code>Stage</code>
     * and <code>Version</code>, with two values each:</p> <p>
     * <code>[{"Key":"Stage","Values":["Test","Deploy"]},{"Key":"Version","Values":["1","2"]}]</code>
     * </p> <p>The results of this query could include the following.</p> <ul> <li>
     * <p>An EC2 instance that has the following two tags:
     * <code>{"Key":"Stage","Value":"Deploy"}</code>, and
     * <code>{"Key":"Version","Value":"2"}</code> </p> </li> <li> <p>An S3 bucket that
     * has the following two tags: <code>{"Key":"Stage","Value":"Test"}</code>, and
     * <code>{"Key":"Version","Value":"1"}</code> </p> </li> </ul> <p>The query would
     * not include the following items in the results, however. </p> <ul> <li> <p>An
     * EC2 instance that has only the following tag:
     * <code>{"Key":"Stage","Value":"Deploy"}</code>.</p> <p>The instance does not have
     * <b>all</b> of the tag keys specified in the filter, so it is excluded from the
     * results.</p> </li> <li> <p>An RDS database that has the following two tags:
     * <code>{"Key":"Stage","Value":"Archived"}</code>, and
     * <code>{"Key":"Version","Value":"4"}</code> </p> <p>The database has all of the
     * tag keys, but none of those keys has an associated value that matches at least
     * one of the specified values in the filter.</p> </li> </ul> </li> </ul>
     */
    inline void SetType(const QueryType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the query. You can use the following values:</p> <ul> <li> <p>
     * <i> <code>CLOUDFORMATION_STACK_1_0:</code> </i> A JSON syntax that lets you
     * specify a CloudFormation stack ARN.</p> </li> <li> <p> <i>
     * <code>TAG_FILTERS_1_0:</code> </i> A JSON syntax that lets you specify a
     * collection of simple tag filters for resource types and tags, as supported by
     * the AWS Tagging API <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/API_GetResources.html#resourcegrouptagging-GetResources-request-ResourceTypeFilters">
     * <code>ResourceTypeFilters</code> parameter of the
     * <code>tagging:GetResources</code> </a> operation. If you specify more than one
     * tag key, only resources that match all tag keys, and at least one value of each
     * specified tag key, are returned in your query. If you specify more than one
     * value for a tag key, a resource matches the filter if it has a tag key value
     * that matches <i>any</i> of the specified values.</p> <p>For example, consider
     * the following sample query for resources that have two tags, <code>Stage</code>
     * and <code>Version</code>, with two values each:</p> <p>
     * <code>[{"Key":"Stage","Values":["Test","Deploy"]},{"Key":"Version","Values":["1","2"]}]</code>
     * </p> <p>The results of this query could include the following.</p> <ul> <li>
     * <p>An EC2 instance that has the following two tags:
     * <code>{"Key":"Stage","Value":"Deploy"}</code>, and
     * <code>{"Key":"Version","Value":"2"}</code> </p> </li> <li> <p>An S3 bucket that
     * has the following two tags: <code>{"Key":"Stage","Value":"Test"}</code>, and
     * <code>{"Key":"Version","Value":"1"}</code> </p> </li> </ul> <p>The query would
     * not include the following items in the results, however. </p> <ul> <li> <p>An
     * EC2 instance that has only the following tag:
     * <code>{"Key":"Stage","Value":"Deploy"}</code>.</p> <p>The instance does not have
     * <b>all</b> of the tag keys specified in the filter, so it is excluded from the
     * results.</p> </li> <li> <p>An RDS database that has the following two tags:
     * <code>{"Key":"Stage","Value":"Archived"}</code>, and
     * <code>{"Key":"Version","Value":"4"}</code> </p> <p>The database has all of the
     * tag keys, but none of those keys has an associated value that matches at least
     * one of the specified values in the filter.</p> </li> </ul> </li> </ul>
     */
    inline void SetType(QueryType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the query. You can use the following values:</p> <ul> <li> <p>
     * <i> <code>CLOUDFORMATION_STACK_1_0:</code> </i> A JSON syntax that lets you
     * specify a CloudFormation stack ARN.</p> </li> <li> <p> <i>
     * <code>TAG_FILTERS_1_0:</code> </i> A JSON syntax that lets you specify a
     * collection of simple tag filters for resource types and tags, as supported by
     * the AWS Tagging API <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/API_GetResources.html#resourcegrouptagging-GetResources-request-ResourceTypeFilters">
     * <code>ResourceTypeFilters</code> parameter of the
     * <code>tagging:GetResources</code> </a> operation. If you specify more than one
     * tag key, only resources that match all tag keys, and at least one value of each
     * specified tag key, are returned in your query. If you specify more than one
     * value for a tag key, a resource matches the filter if it has a tag key value
     * that matches <i>any</i> of the specified values.</p> <p>For example, consider
     * the following sample query for resources that have two tags, <code>Stage</code>
     * and <code>Version</code>, with two values each:</p> <p>
     * <code>[{"Key":"Stage","Values":["Test","Deploy"]},{"Key":"Version","Values":["1","2"]}]</code>
     * </p> <p>The results of this query could include the following.</p> <ul> <li>
     * <p>An EC2 instance that has the following two tags:
     * <code>{"Key":"Stage","Value":"Deploy"}</code>, and
     * <code>{"Key":"Version","Value":"2"}</code> </p> </li> <li> <p>An S3 bucket that
     * has the following two tags: <code>{"Key":"Stage","Value":"Test"}</code>, and
     * <code>{"Key":"Version","Value":"1"}</code> </p> </li> </ul> <p>The query would
     * not include the following items in the results, however. </p> <ul> <li> <p>An
     * EC2 instance that has only the following tag:
     * <code>{"Key":"Stage","Value":"Deploy"}</code>.</p> <p>The instance does not have
     * <b>all</b> of the tag keys specified in the filter, so it is excluded from the
     * results.</p> </li> <li> <p>An RDS database that has the following two tags:
     * <code>{"Key":"Stage","Value":"Archived"}</code>, and
     * <code>{"Key":"Version","Value":"4"}</code> </p> <p>The database has all of the
     * tag keys, but none of those keys has an associated value that matches at least
     * one of the specified values in the filter.</p> </li> </ul> </li> </ul>
     */
    inline ResourceQuery& WithType(const QueryType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the query. You can use the following values:</p> <ul> <li> <p>
     * <i> <code>CLOUDFORMATION_STACK_1_0:</code> </i> A JSON syntax that lets you
     * specify a CloudFormation stack ARN.</p> </li> <li> <p> <i>
     * <code>TAG_FILTERS_1_0:</code> </i> A JSON syntax that lets you specify a
     * collection of simple tag filters for resource types and tags, as supported by
     * the AWS Tagging API <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/API_GetResources.html#resourcegrouptagging-GetResources-request-ResourceTypeFilters">
     * <code>ResourceTypeFilters</code> parameter of the
     * <code>tagging:GetResources</code> </a> operation. If you specify more than one
     * tag key, only resources that match all tag keys, and at least one value of each
     * specified tag key, are returned in your query. If you specify more than one
     * value for a tag key, a resource matches the filter if it has a tag key value
     * that matches <i>any</i> of the specified values.</p> <p>For example, consider
     * the following sample query for resources that have two tags, <code>Stage</code>
     * and <code>Version</code>, with two values each:</p> <p>
     * <code>[{"Key":"Stage","Values":["Test","Deploy"]},{"Key":"Version","Values":["1","2"]}]</code>
     * </p> <p>The results of this query could include the following.</p> <ul> <li>
     * <p>An EC2 instance that has the following two tags:
     * <code>{"Key":"Stage","Value":"Deploy"}</code>, and
     * <code>{"Key":"Version","Value":"2"}</code> </p> </li> <li> <p>An S3 bucket that
     * has the following two tags: <code>{"Key":"Stage","Value":"Test"}</code>, and
     * <code>{"Key":"Version","Value":"1"}</code> </p> </li> </ul> <p>The query would
     * not include the following items in the results, however. </p> <ul> <li> <p>An
     * EC2 instance that has only the following tag:
     * <code>{"Key":"Stage","Value":"Deploy"}</code>.</p> <p>The instance does not have
     * <b>all</b> of the tag keys specified in the filter, so it is excluded from the
     * results.</p> </li> <li> <p>An RDS database that has the following two tags:
     * <code>{"Key":"Stage","Value":"Archived"}</code>, and
     * <code>{"Key":"Version","Value":"4"}</code> </p> <p>The database has all of the
     * tag keys, but none of those keys has an associated value that matches at least
     * one of the specified values in the filter.</p> </li> </ul> </li> </ul>
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
    bool m_typeHasBeenSet;

    Aws::String m_query;
    bool m_queryHasBeenSet;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
