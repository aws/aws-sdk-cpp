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
  class DescribeResourceCollectionHealthRequest : public DevOpsGuruRequest
  {
  public:
    AWS_DEVOPSGURU_API DescribeResourceCollectionHealthRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeResourceCollectionHealth"; }

    AWS_DEVOPSGURU_API Aws::String SerializePayload() const override;

    AWS_DEVOPSGURU_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p> An Amazon Web Services resource collection type. This type specifies how
     * analyzed Amazon Web Services resources are defined. The two types of Amazon Web
     * Services resource collections supported are Amazon Web Services CloudFormation
     * stacks and Amazon Web Services resources that contain the same Amazon Web
     * Services tag. DevOps Guru can be configured to analyze the Amazon Web Services
     * resources that are defined in the stacks or that are tagged using the same tag
     * <i>key</i>. You can specify up to 500 Amazon Web Services CloudFormation stacks.
     * </p>
     */
    inline const ResourceCollectionType& GetResourceCollectionType() const{ return m_resourceCollectionType; }

    /**
     * <p> An Amazon Web Services resource collection type. This type specifies how
     * analyzed Amazon Web Services resources are defined. The two types of Amazon Web
     * Services resource collections supported are Amazon Web Services CloudFormation
     * stacks and Amazon Web Services resources that contain the same Amazon Web
     * Services tag. DevOps Guru can be configured to analyze the Amazon Web Services
     * resources that are defined in the stacks or that are tagged using the same tag
     * <i>key</i>. You can specify up to 500 Amazon Web Services CloudFormation stacks.
     * </p>
     */
    inline bool ResourceCollectionTypeHasBeenSet() const { return m_resourceCollectionTypeHasBeenSet; }

    /**
     * <p> An Amazon Web Services resource collection type. This type specifies how
     * analyzed Amazon Web Services resources are defined. The two types of Amazon Web
     * Services resource collections supported are Amazon Web Services CloudFormation
     * stacks and Amazon Web Services resources that contain the same Amazon Web
     * Services tag. DevOps Guru can be configured to analyze the Amazon Web Services
     * resources that are defined in the stacks or that are tagged using the same tag
     * <i>key</i>. You can specify up to 500 Amazon Web Services CloudFormation stacks.
     * </p>
     */
    inline void SetResourceCollectionType(const ResourceCollectionType& value) { m_resourceCollectionTypeHasBeenSet = true; m_resourceCollectionType = value; }

    /**
     * <p> An Amazon Web Services resource collection type. This type specifies how
     * analyzed Amazon Web Services resources are defined. The two types of Amazon Web
     * Services resource collections supported are Amazon Web Services CloudFormation
     * stacks and Amazon Web Services resources that contain the same Amazon Web
     * Services tag. DevOps Guru can be configured to analyze the Amazon Web Services
     * resources that are defined in the stacks or that are tagged using the same tag
     * <i>key</i>. You can specify up to 500 Amazon Web Services CloudFormation stacks.
     * </p>
     */
    inline void SetResourceCollectionType(ResourceCollectionType&& value) { m_resourceCollectionTypeHasBeenSet = true; m_resourceCollectionType = std::move(value); }

    /**
     * <p> An Amazon Web Services resource collection type. This type specifies how
     * analyzed Amazon Web Services resources are defined. The two types of Amazon Web
     * Services resource collections supported are Amazon Web Services CloudFormation
     * stacks and Amazon Web Services resources that contain the same Amazon Web
     * Services tag. DevOps Guru can be configured to analyze the Amazon Web Services
     * resources that are defined in the stacks or that are tagged using the same tag
     * <i>key</i>. You can specify up to 500 Amazon Web Services CloudFormation stacks.
     * </p>
     */
    inline DescribeResourceCollectionHealthRequest& WithResourceCollectionType(const ResourceCollectionType& value) { SetResourceCollectionType(value); return *this;}

    /**
     * <p> An Amazon Web Services resource collection type. This type specifies how
     * analyzed Amazon Web Services resources are defined. The two types of Amazon Web
     * Services resource collections supported are Amazon Web Services CloudFormation
     * stacks and Amazon Web Services resources that contain the same Amazon Web
     * Services tag. DevOps Guru can be configured to analyze the Amazon Web Services
     * resources that are defined in the stacks or that are tagged using the same tag
     * <i>key</i>. You can specify up to 500 Amazon Web Services CloudFormation stacks.
     * </p>
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
    bool m_resourceCollectionTypeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
