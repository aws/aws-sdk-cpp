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
     * <p>The type of the query. The valid values in this release are
     * <code>TAG_FILTERS_1_0</code> and <code>CLOUDFORMATION_STACK_1_0</code>.</p> <p>
     * <i> <code>TAG_FILTERS_1_0:</code> </i> A JSON syntax that lets you specify a
     * collection of simple tag filters for resource types and tags, as supported by
     * the AWS Tagging API <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/API_GetResources.html">GetResources</a>
     * operation. If you specify more than one tag key, only resources that match all
     * tag keys, and at least one value of each specified tag key, are returned in your
     * query. If you specify more than one value for a tag key, a resource matches the
     * filter if it has a tag key value that matches <i>any</i> of the specified
     * values.</p> <p>For example, consider the following sample query for resources
     * that have two tags, <code>Stage</code> and <code>Version</code>, with two values
     * each.
     * (<code>[{"Key":"Stage","Values":["Test","Deploy"]},{"Key":"Version","Values":["1","2"]}]</code>)
     * The results of this query might include the following.</p> <ul> <li> <p>An EC2
     * instance that has the following two tags:
     * <code>{"Key":"Stage","Value":"Deploy"}</code>, and
     * <code>{"Key":"Version","Value":"2"}</code> </p> </li> <li> <p>An S3 bucket that
     * has the following two tags: {"Key":"Stage","Value":"Test"}, and
     * {"Key":"Version","Value":"1"}</p> </li> </ul> <p>The query would not return the
     * following results, however. The following EC2 instance does not have all tag
     * keys specified in the filter, so it is rejected. The RDS database has all of the
     * tag keys, but no values that match at least one of the specified tag key values
     * in the filter.</p> <ul> <li> <p>An EC2 instance that has only the following tag:
     * <code>{"Key":"Stage","Value":"Deploy"}</code>.</p> </li> <li> <p>An RDS database
     * that has the following two tags:
     * <code>{"Key":"Stage","Value":"Archived"}</code>, and
     * <code>{"Key":"Version","Value":"4"}</code> </p> </li> </ul> <p> <i>
     * <code>CLOUDFORMATION_STACK_1_0:</code> </i> A JSON syntax that lets you specify
     * a CloudFormation stack ARN.</p>
     */
    inline const QueryType& GetType() const{ return m_type; }

    /**
     * <p>The type of the query. The valid values in this release are
     * <code>TAG_FILTERS_1_0</code> and <code>CLOUDFORMATION_STACK_1_0</code>.</p> <p>
     * <i> <code>TAG_FILTERS_1_0:</code> </i> A JSON syntax that lets you specify a
     * collection of simple tag filters for resource types and tags, as supported by
     * the AWS Tagging API <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/API_GetResources.html">GetResources</a>
     * operation. If you specify more than one tag key, only resources that match all
     * tag keys, and at least one value of each specified tag key, are returned in your
     * query. If you specify more than one value for a tag key, a resource matches the
     * filter if it has a tag key value that matches <i>any</i> of the specified
     * values.</p> <p>For example, consider the following sample query for resources
     * that have two tags, <code>Stage</code> and <code>Version</code>, with two values
     * each.
     * (<code>[{"Key":"Stage","Values":["Test","Deploy"]},{"Key":"Version","Values":["1","2"]}]</code>)
     * The results of this query might include the following.</p> <ul> <li> <p>An EC2
     * instance that has the following two tags:
     * <code>{"Key":"Stage","Value":"Deploy"}</code>, and
     * <code>{"Key":"Version","Value":"2"}</code> </p> </li> <li> <p>An S3 bucket that
     * has the following two tags: {"Key":"Stage","Value":"Test"}, and
     * {"Key":"Version","Value":"1"}</p> </li> </ul> <p>The query would not return the
     * following results, however. The following EC2 instance does not have all tag
     * keys specified in the filter, so it is rejected. The RDS database has all of the
     * tag keys, but no values that match at least one of the specified tag key values
     * in the filter.</p> <ul> <li> <p>An EC2 instance that has only the following tag:
     * <code>{"Key":"Stage","Value":"Deploy"}</code>.</p> </li> <li> <p>An RDS database
     * that has the following two tags:
     * <code>{"Key":"Stage","Value":"Archived"}</code>, and
     * <code>{"Key":"Version","Value":"4"}</code> </p> </li> </ul> <p> <i>
     * <code>CLOUDFORMATION_STACK_1_0:</code> </i> A JSON syntax that lets you specify
     * a CloudFormation stack ARN.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the query. The valid values in this release are
     * <code>TAG_FILTERS_1_0</code> and <code>CLOUDFORMATION_STACK_1_0</code>.</p> <p>
     * <i> <code>TAG_FILTERS_1_0:</code> </i> A JSON syntax that lets you specify a
     * collection of simple tag filters for resource types and tags, as supported by
     * the AWS Tagging API <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/API_GetResources.html">GetResources</a>
     * operation. If you specify more than one tag key, only resources that match all
     * tag keys, and at least one value of each specified tag key, are returned in your
     * query. If you specify more than one value for a tag key, a resource matches the
     * filter if it has a tag key value that matches <i>any</i> of the specified
     * values.</p> <p>For example, consider the following sample query for resources
     * that have two tags, <code>Stage</code> and <code>Version</code>, with two values
     * each.
     * (<code>[{"Key":"Stage","Values":["Test","Deploy"]},{"Key":"Version","Values":["1","2"]}]</code>)
     * The results of this query might include the following.</p> <ul> <li> <p>An EC2
     * instance that has the following two tags:
     * <code>{"Key":"Stage","Value":"Deploy"}</code>, and
     * <code>{"Key":"Version","Value":"2"}</code> </p> </li> <li> <p>An S3 bucket that
     * has the following two tags: {"Key":"Stage","Value":"Test"}, and
     * {"Key":"Version","Value":"1"}</p> </li> </ul> <p>The query would not return the
     * following results, however. The following EC2 instance does not have all tag
     * keys specified in the filter, so it is rejected. The RDS database has all of the
     * tag keys, but no values that match at least one of the specified tag key values
     * in the filter.</p> <ul> <li> <p>An EC2 instance that has only the following tag:
     * <code>{"Key":"Stage","Value":"Deploy"}</code>.</p> </li> <li> <p>An RDS database
     * that has the following two tags:
     * <code>{"Key":"Stage","Value":"Archived"}</code>, and
     * <code>{"Key":"Version","Value":"4"}</code> </p> </li> </ul> <p> <i>
     * <code>CLOUDFORMATION_STACK_1_0:</code> </i> A JSON syntax that lets you specify
     * a CloudFormation stack ARN.</p>
     */
    inline void SetType(const QueryType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the query. The valid values in this release are
     * <code>TAG_FILTERS_1_0</code> and <code>CLOUDFORMATION_STACK_1_0</code>.</p> <p>
     * <i> <code>TAG_FILTERS_1_0:</code> </i> A JSON syntax that lets you specify a
     * collection of simple tag filters for resource types and tags, as supported by
     * the AWS Tagging API <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/API_GetResources.html">GetResources</a>
     * operation. If you specify more than one tag key, only resources that match all
     * tag keys, and at least one value of each specified tag key, are returned in your
     * query. If you specify more than one value for a tag key, a resource matches the
     * filter if it has a tag key value that matches <i>any</i> of the specified
     * values.</p> <p>For example, consider the following sample query for resources
     * that have two tags, <code>Stage</code> and <code>Version</code>, with two values
     * each.
     * (<code>[{"Key":"Stage","Values":["Test","Deploy"]},{"Key":"Version","Values":["1","2"]}]</code>)
     * The results of this query might include the following.</p> <ul> <li> <p>An EC2
     * instance that has the following two tags:
     * <code>{"Key":"Stage","Value":"Deploy"}</code>, and
     * <code>{"Key":"Version","Value":"2"}</code> </p> </li> <li> <p>An S3 bucket that
     * has the following two tags: {"Key":"Stage","Value":"Test"}, and
     * {"Key":"Version","Value":"1"}</p> </li> </ul> <p>The query would not return the
     * following results, however. The following EC2 instance does not have all tag
     * keys specified in the filter, so it is rejected. The RDS database has all of the
     * tag keys, but no values that match at least one of the specified tag key values
     * in the filter.</p> <ul> <li> <p>An EC2 instance that has only the following tag:
     * <code>{"Key":"Stage","Value":"Deploy"}</code>.</p> </li> <li> <p>An RDS database
     * that has the following two tags:
     * <code>{"Key":"Stage","Value":"Archived"}</code>, and
     * <code>{"Key":"Version","Value":"4"}</code> </p> </li> </ul> <p> <i>
     * <code>CLOUDFORMATION_STACK_1_0:</code> </i> A JSON syntax that lets you specify
     * a CloudFormation stack ARN.</p>
     */
    inline void SetType(QueryType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the query. The valid values in this release are
     * <code>TAG_FILTERS_1_0</code> and <code>CLOUDFORMATION_STACK_1_0</code>.</p> <p>
     * <i> <code>TAG_FILTERS_1_0:</code> </i> A JSON syntax that lets you specify a
     * collection of simple tag filters for resource types and tags, as supported by
     * the AWS Tagging API <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/API_GetResources.html">GetResources</a>
     * operation. If you specify more than one tag key, only resources that match all
     * tag keys, and at least one value of each specified tag key, are returned in your
     * query. If you specify more than one value for a tag key, a resource matches the
     * filter if it has a tag key value that matches <i>any</i> of the specified
     * values.</p> <p>For example, consider the following sample query for resources
     * that have two tags, <code>Stage</code> and <code>Version</code>, with two values
     * each.
     * (<code>[{"Key":"Stage","Values":["Test","Deploy"]},{"Key":"Version","Values":["1","2"]}]</code>)
     * The results of this query might include the following.</p> <ul> <li> <p>An EC2
     * instance that has the following two tags:
     * <code>{"Key":"Stage","Value":"Deploy"}</code>, and
     * <code>{"Key":"Version","Value":"2"}</code> </p> </li> <li> <p>An S3 bucket that
     * has the following two tags: {"Key":"Stage","Value":"Test"}, and
     * {"Key":"Version","Value":"1"}</p> </li> </ul> <p>The query would not return the
     * following results, however. The following EC2 instance does not have all tag
     * keys specified in the filter, so it is rejected. The RDS database has all of the
     * tag keys, but no values that match at least one of the specified tag key values
     * in the filter.</p> <ul> <li> <p>An EC2 instance that has only the following tag:
     * <code>{"Key":"Stage","Value":"Deploy"}</code>.</p> </li> <li> <p>An RDS database
     * that has the following two tags:
     * <code>{"Key":"Stage","Value":"Archived"}</code>, and
     * <code>{"Key":"Version","Value":"4"}</code> </p> </li> </ul> <p> <i>
     * <code>CLOUDFORMATION_STACK_1_0:</code> </i> A JSON syntax that lets you specify
     * a CloudFormation stack ARN.</p>
     */
    inline ResourceQuery& WithType(const QueryType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the query. The valid values in this release are
     * <code>TAG_FILTERS_1_0</code> and <code>CLOUDFORMATION_STACK_1_0</code>.</p> <p>
     * <i> <code>TAG_FILTERS_1_0:</code> </i> A JSON syntax that lets you specify a
     * collection of simple tag filters for resource types and tags, as supported by
     * the AWS Tagging API <a
     * href="https://docs.aws.amazon.com/resourcegroupstagging/latest/APIReference/API_GetResources.html">GetResources</a>
     * operation. If you specify more than one tag key, only resources that match all
     * tag keys, and at least one value of each specified tag key, are returned in your
     * query. If you specify more than one value for a tag key, a resource matches the
     * filter if it has a tag key value that matches <i>any</i> of the specified
     * values.</p> <p>For example, consider the following sample query for resources
     * that have two tags, <code>Stage</code> and <code>Version</code>, with two values
     * each.
     * (<code>[{"Key":"Stage","Values":["Test","Deploy"]},{"Key":"Version","Values":["1","2"]}]</code>)
     * The results of this query might include the following.</p> <ul> <li> <p>An EC2
     * instance that has the following two tags:
     * <code>{"Key":"Stage","Value":"Deploy"}</code>, and
     * <code>{"Key":"Version","Value":"2"}</code> </p> </li> <li> <p>An S3 bucket that
     * has the following two tags: {"Key":"Stage","Value":"Test"}, and
     * {"Key":"Version","Value":"1"}</p> </li> </ul> <p>The query would not return the
     * following results, however. The following EC2 instance does not have all tag
     * keys specified in the filter, so it is rejected. The RDS database has all of the
     * tag keys, but no values that match at least one of the specified tag key values
     * in the filter.</p> <ul> <li> <p>An EC2 instance that has only the following tag:
     * <code>{"Key":"Stage","Value":"Deploy"}</code>.</p> </li> <li> <p>An RDS database
     * that has the following two tags:
     * <code>{"Key":"Stage","Value":"Archived"}</code>, and
     * <code>{"Key":"Version","Value":"4"}</code> </p> </li> </ul> <p> <i>
     * <code>CLOUDFORMATION_STACK_1_0:</code> </i> A JSON syntax that lets you specify
     * a CloudFormation stack ARN.</p>
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
