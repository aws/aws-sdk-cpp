/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   */
  class GetDiscoveredResourceCountsRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API GetDiscoveredResourceCountsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDiscoveredResourceCounts"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The comma-separated list that specifies the resource types that you want
     * Config to return (for example, <code>"AWS::EC2::Instance"</code>,
     * <code>"AWS::IAM::User"</code>).</p> <p>If a value for <code>resourceTypes</code>
     * is not specified, Config returns all resource types that Config is recording in
     * the region for your account.</p>  <p>If the configuration recorder is
     * turned off, Config returns an empty list of <a>ResourceCount</a> objects. If the
     * configuration recorder is not recording a specific resource type (for example,
     * S3 buckets), that resource type is not returned in the list of
     * <a>ResourceCount</a> objects.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetResourceTypes() const{ return m_resourceTypes; }

    /**
     * <p>The comma-separated list that specifies the resource types that you want
     * Config to return (for example, <code>"AWS::EC2::Instance"</code>,
     * <code>"AWS::IAM::User"</code>).</p> <p>If a value for <code>resourceTypes</code>
     * is not specified, Config returns all resource types that Config is recording in
     * the region for your account.</p>  <p>If the configuration recorder is
     * turned off, Config returns an empty list of <a>ResourceCount</a> objects. If the
     * configuration recorder is not recording a specific resource type (for example,
     * S3 buckets), that resource type is not returned in the list of
     * <a>ResourceCount</a> objects.</p> 
     */
    inline bool ResourceTypesHasBeenSet() const { return m_resourceTypesHasBeenSet; }

    /**
     * <p>The comma-separated list that specifies the resource types that you want
     * Config to return (for example, <code>"AWS::EC2::Instance"</code>,
     * <code>"AWS::IAM::User"</code>).</p> <p>If a value for <code>resourceTypes</code>
     * is not specified, Config returns all resource types that Config is recording in
     * the region for your account.</p>  <p>If the configuration recorder is
     * turned off, Config returns an empty list of <a>ResourceCount</a> objects. If the
     * configuration recorder is not recording a specific resource type (for example,
     * S3 buckets), that resource type is not returned in the list of
     * <a>ResourceCount</a> objects.</p> 
     */
    inline void SetResourceTypes(const Aws::Vector<Aws::String>& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = value; }

    /**
     * <p>The comma-separated list that specifies the resource types that you want
     * Config to return (for example, <code>"AWS::EC2::Instance"</code>,
     * <code>"AWS::IAM::User"</code>).</p> <p>If a value for <code>resourceTypes</code>
     * is not specified, Config returns all resource types that Config is recording in
     * the region for your account.</p>  <p>If the configuration recorder is
     * turned off, Config returns an empty list of <a>ResourceCount</a> objects. If the
     * configuration recorder is not recording a specific resource type (for example,
     * S3 buckets), that resource type is not returned in the list of
     * <a>ResourceCount</a> objects.</p> 
     */
    inline void SetResourceTypes(Aws::Vector<Aws::String>&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = std::move(value); }

    /**
     * <p>The comma-separated list that specifies the resource types that you want
     * Config to return (for example, <code>"AWS::EC2::Instance"</code>,
     * <code>"AWS::IAM::User"</code>).</p> <p>If a value for <code>resourceTypes</code>
     * is not specified, Config returns all resource types that Config is recording in
     * the region for your account.</p>  <p>If the configuration recorder is
     * turned off, Config returns an empty list of <a>ResourceCount</a> objects. If the
     * configuration recorder is not recording a specific resource type (for example,
     * S3 buckets), that resource type is not returned in the list of
     * <a>ResourceCount</a> objects.</p> 
     */
    inline GetDiscoveredResourceCountsRequest& WithResourceTypes(const Aws::Vector<Aws::String>& value) { SetResourceTypes(value); return *this;}

    /**
     * <p>The comma-separated list that specifies the resource types that you want
     * Config to return (for example, <code>"AWS::EC2::Instance"</code>,
     * <code>"AWS::IAM::User"</code>).</p> <p>If a value for <code>resourceTypes</code>
     * is not specified, Config returns all resource types that Config is recording in
     * the region for your account.</p>  <p>If the configuration recorder is
     * turned off, Config returns an empty list of <a>ResourceCount</a> objects. If the
     * configuration recorder is not recording a specific resource type (for example,
     * S3 buckets), that resource type is not returned in the list of
     * <a>ResourceCount</a> objects.</p> 
     */
    inline GetDiscoveredResourceCountsRequest& WithResourceTypes(Aws::Vector<Aws::String>&& value) { SetResourceTypes(std::move(value)); return *this;}

    /**
     * <p>The comma-separated list that specifies the resource types that you want
     * Config to return (for example, <code>"AWS::EC2::Instance"</code>,
     * <code>"AWS::IAM::User"</code>).</p> <p>If a value for <code>resourceTypes</code>
     * is not specified, Config returns all resource types that Config is recording in
     * the region for your account.</p>  <p>If the configuration recorder is
     * turned off, Config returns an empty list of <a>ResourceCount</a> objects. If the
     * configuration recorder is not recording a specific resource type (for example,
     * S3 buckets), that resource type is not returned in the list of
     * <a>ResourceCount</a> objects.</p> 
     */
    inline GetDiscoveredResourceCountsRequest& AddResourceTypes(const Aws::String& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(value); return *this; }

    /**
     * <p>The comma-separated list that specifies the resource types that you want
     * Config to return (for example, <code>"AWS::EC2::Instance"</code>,
     * <code>"AWS::IAM::User"</code>).</p> <p>If a value for <code>resourceTypes</code>
     * is not specified, Config returns all resource types that Config is recording in
     * the region for your account.</p>  <p>If the configuration recorder is
     * turned off, Config returns an empty list of <a>ResourceCount</a> objects. If the
     * configuration recorder is not recording a specific resource type (for example,
     * S3 buckets), that resource type is not returned in the list of
     * <a>ResourceCount</a> objects.</p> 
     */
    inline GetDiscoveredResourceCountsRequest& AddResourceTypes(Aws::String&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>The comma-separated list that specifies the resource types that you want
     * Config to return (for example, <code>"AWS::EC2::Instance"</code>,
     * <code>"AWS::IAM::User"</code>).</p> <p>If a value for <code>resourceTypes</code>
     * is not specified, Config returns all resource types that Config is recording in
     * the region for your account.</p>  <p>If the configuration recorder is
     * turned off, Config returns an empty list of <a>ResourceCount</a> objects. If the
     * configuration recorder is not recording a specific resource type (for example,
     * S3 buckets), that resource type is not returned in the list of
     * <a>ResourceCount</a> objects.</p> 
     */
    inline GetDiscoveredResourceCountsRequest& AddResourceTypes(const char* value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(value); return *this; }


    /**
     * <p>The maximum number of <a>ResourceCount</a> objects returned on each page. The
     * default is 100. You cannot specify a number greater than 100. If you specify 0,
     * Config uses the default.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of <a>ResourceCount</a> objects returned on each page. The
     * default is 100. You cannot specify a number greater than 100. If you specify 0,
     * Config uses the default.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of <a>ResourceCount</a> objects returned on each page. The
     * default is 100. You cannot specify a number greater than 100. If you specify 0,
     * Config uses the default.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of <a>ResourceCount</a> objects returned on each page. The
     * default is 100. You cannot specify a number greater than 100. If you specify 0,
     * Config uses the default.</p>
     */
    inline GetDiscoveredResourceCountsRequest& WithLimit(int value) { SetLimit(value); return *this;}


    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline GetDiscoveredResourceCountsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline GetDiscoveredResourceCountsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response.</p>
     */
    inline GetDiscoveredResourceCountsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_resourceTypes;
    bool m_resourceTypesHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
