/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/DevOpsGuruRequest.h>
#include <aws/devops-guru/model/ResourceCollectionType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace DevOpsGuru
{
namespace Model
{

  /**
   */
  class AWS_DEVOPSGURU_API DescribeResourceCollectionHealthRequest : public DevOpsGuruRequest
  {
  public:
    DescribeResourceCollectionHealthRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeResourceCollectionHealth"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p> An AWS resource collection type. This type specifies how analyzed AWS
     * resources are defined. The one type of AWS resource collection supported is AWS
     * CloudFormation stacks. DevOps Guru can be configured to analyze only the AWS
     * resources that are defined in the stacks. </p>
     */
    inline const ResourceCollectionType& GetResourceCollectionType() const{ return m_resourceCollectionType; }

    /**
     * <p> An AWS resource collection type. This type specifies how analyzed AWS
     * resources are defined. The one type of AWS resource collection supported is AWS
     * CloudFormation stacks. DevOps Guru can be configured to analyze only the AWS
     * resources that are defined in the stacks. </p>
     */
    inline bool ResourceCollectionTypeHasBeenSet() const { return m_resourceCollectionTypeHasBeenSet; }

    /**
     * <p> An AWS resource collection type. This type specifies how analyzed AWS
     * resources are defined. The one type of AWS resource collection supported is AWS
     * CloudFormation stacks. DevOps Guru can be configured to analyze only the AWS
     * resources that are defined in the stacks. </p>
     */
    inline void SetResourceCollectionType(const ResourceCollectionType& value) { m_resourceCollectionTypeHasBeenSet = true; m_resourceCollectionType = value; }

    /**
     * <p> An AWS resource collection type. This type specifies how analyzed AWS
     * resources are defined. The one type of AWS resource collection supported is AWS
     * CloudFormation stacks. DevOps Guru can be configured to analyze only the AWS
     * resources that are defined in the stacks. </p>
     */
    inline void SetResourceCollectionType(ResourceCollectionType&& value) { m_resourceCollectionTypeHasBeenSet = true; m_resourceCollectionType = std::move(value); }

    /**
     * <p> An AWS resource collection type. This type specifies how analyzed AWS
     * resources are defined. The one type of AWS resource collection supported is AWS
     * CloudFormation stacks. DevOps Guru can be configured to analyze only the AWS
     * resources that are defined in the stacks. </p>
     */
    inline DescribeResourceCollectionHealthRequest& WithResourceCollectionType(const ResourceCollectionType& value) { SetResourceCollectionType(value); return *this;}

    /**
     * <p> An AWS resource collection type. This type specifies how analyzed AWS
     * resources are defined. The one type of AWS resource collection supported is AWS
     * CloudFormation stacks. DevOps Guru can be configured to analyze only the AWS
     * resources that are defined in the stacks. </p>
     */
    inline DescribeResourceCollectionHealthRequest& WithResourceCollectionType(ResourceCollectionType&& value) { SetResourceCollectionType(std::move(value)); return *this;}


    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline DescribeResourceCollectionHealthRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline DescribeResourceCollectionHealthRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline DescribeResourceCollectionHealthRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    ResourceCollectionType m_resourceCollectionType;
    bool m_resourceCollectionTypeHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
