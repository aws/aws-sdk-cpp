/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ModelApprovalStatus.h>
#include <aws/sagemaker/model/ModelPackageType.h>
#include <aws/sagemaker/model/ModelPackageSortBy.h>
#include <aws/sagemaker/model/SortOrder.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class ListModelPackagesRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API ListModelPackagesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListModelPackages"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A filter that returns only model packages created after the specified time
     * (timestamp).</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeAfter() const{ return m_creationTimeAfter; }

    /**
     * <p>A filter that returns only model packages created after the specified time
     * (timestamp).</p>
     */
    inline bool CreationTimeAfterHasBeenSet() const { return m_creationTimeAfterHasBeenSet; }

    /**
     * <p>A filter that returns only model packages created after the specified time
     * (timestamp).</p>
     */
    inline void SetCreationTimeAfter(const Aws::Utils::DateTime& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = value; }

    /**
     * <p>A filter that returns only model packages created after the specified time
     * (timestamp).</p>
     */
    inline void SetCreationTimeAfter(Aws::Utils::DateTime&& value) { m_creationTimeAfterHasBeenSet = true; m_creationTimeAfter = std::move(value); }

    /**
     * <p>A filter that returns only model packages created after the specified time
     * (timestamp).</p>
     */
    inline ListModelPackagesRequest& WithCreationTimeAfter(const Aws::Utils::DateTime& value) { SetCreationTimeAfter(value); return *this;}

    /**
     * <p>A filter that returns only model packages created after the specified time
     * (timestamp).</p>
     */
    inline ListModelPackagesRequest& WithCreationTimeAfter(Aws::Utils::DateTime&& value) { SetCreationTimeAfter(std::move(value)); return *this;}


    /**
     * <p>A filter that returns only model packages created before the specified time
     * (timestamp).</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimeBefore() const{ return m_creationTimeBefore; }

    /**
     * <p>A filter that returns only model packages created before the specified time
     * (timestamp).</p>
     */
    inline bool CreationTimeBeforeHasBeenSet() const { return m_creationTimeBeforeHasBeenSet; }

    /**
     * <p>A filter that returns only model packages created before the specified time
     * (timestamp).</p>
     */
    inline void SetCreationTimeBefore(const Aws::Utils::DateTime& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = value; }

    /**
     * <p>A filter that returns only model packages created before the specified time
     * (timestamp).</p>
     */
    inline void SetCreationTimeBefore(Aws::Utils::DateTime&& value) { m_creationTimeBeforeHasBeenSet = true; m_creationTimeBefore = std::move(value); }

    /**
     * <p>A filter that returns only model packages created before the specified time
     * (timestamp).</p>
     */
    inline ListModelPackagesRequest& WithCreationTimeBefore(const Aws::Utils::DateTime& value) { SetCreationTimeBefore(value); return *this;}

    /**
     * <p>A filter that returns only model packages created before the specified time
     * (timestamp).</p>
     */
    inline ListModelPackagesRequest& WithCreationTimeBefore(Aws::Utils::DateTime&& value) { SetCreationTimeBefore(std::move(value)); return *this;}


    /**
     * <p>The maximum number of model packages to return in the response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of model packages to return in the response.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of model packages to return in the response.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of model packages to return in the response.</p>
     */
    inline ListModelPackagesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>A string in the model package name. This filter returns only model packages
     * whose name contains the specified string.</p>
     */
    inline const Aws::String& GetNameContains() const{ return m_nameContains; }

    /**
     * <p>A string in the model package name. This filter returns only model packages
     * whose name contains the specified string.</p>
     */
    inline bool NameContainsHasBeenSet() const { return m_nameContainsHasBeenSet; }

    /**
     * <p>A string in the model package name. This filter returns only model packages
     * whose name contains the specified string.</p>
     */
    inline void SetNameContains(const Aws::String& value) { m_nameContainsHasBeenSet = true; m_nameContains = value; }

    /**
     * <p>A string in the model package name. This filter returns only model packages
     * whose name contains the specified string.</p>
     */
    inline void SetNameContains(Aws::String&& value) { m_nameContainsHasBeenSet = true; m_nameContains = std::move(value); }

    /**
     * <p>A string in the model package name. This filter returns only model packages
     * whose name contains the specified string.</p>
     */
    inline void SetNameContains(const char* value) { m_nameContainsHasBeenSet = true; m_nameContains.assign(value); }

    /**
     * <p>A string in the model package name. This filter returns only model packages
     * whose name contains the specified string.</p>
     */
    inline ListModelPackagesRequest& WithNameContains(const Aws::String& value) { SetNameContains(value); return *this;}

    /**
     * <p>A string in the model package name. This filter returns only model packages
     * whose name contains the specified string.</p>
     */
    inline ListModelPackagesRequest& WithNameContains(Aws::String&& value) { SetNameContains(std::move(value)); return *this;}

    /**
     * <p>A string in the model package name. This filter returns only model packages
     * whose name contains the specified string.</p>
     */
    inline ListModelPackagesRequest& WithNameContains(const char* value) { SetNameContains(value); return *this;}


    /**
     * <p>A filter that returns only the model packages with the specified approval
     * status.</p>
     */
    inline const ModelApprovalStatus& GetModelApprovalStatus() const{ return m_modelApprovalStatus; }

    /**
     * <p>A filter that returns only the model packages with the specified approval
     * status.</p>
     */
    inline bool ModelApprovalStatusHasBeenSet() const { return m_modelApprovalStatusHasBeenSet; }

    /**
     * <p>A filter that returns only the model packages with the specified approval
     * status.</p>
     */
    inline void SetModelApprovalStatus(const ModelApprovalStatus& value) { m_modelApprovalStatusHasBeenSet = true; m_modelApprovalStatus = value; }

    /**
     * <p>A filter that returns only the model packages with the specified approval
     * status.</p>
     */
    inline void SetModelApprovalStatus(ModelApprovalStatus&& value) { m_modelApprovalStatusHasBeenSet = true; m_modelApprovalStatus = std::move(value); }

    /**
     * <p>A filter that returns only the model packages with the specified approval
     * status.</p>
     */
    inline ListModelPackagesRequest& WithModelApprovalStatus(const ModelApprovalStatus& value) { SetModelApprovalStatus(value); return *this;}

    /**
     * <p>A filter that returns only the model packages with the specified approval
     * status.</p>
     */
    inline ListModelPackagesRequest& WithModelApprovalStatus(ModelApprovalStatus&& value) { SetModelApprovalStatus(std::move(value)); return *this;}


    /**
     * <p>A filter that returns only model versions that belong to the specified model
     * group.</p>
     */
    inline const Aws::String& GetModelPackageGroupName() const{ return m_modelPackageGroupName; }

    /**
     * <p>A filter that returns only model versions that belong to the specified model
     * group.</p>
     */
    inline bool ModelPackageGroupNameHasBeenSet() const { return m_modelPackageGroupNameHasBeenSet; }

    /**
     * <p>A filter that returns only model versions that belong to the specified model
     * group.</p>
     */
    inline void SetModelPackageGroupName(const Aws::String& value) { m_modelPackageGroupNameHasBeenSet = true; m_modelPackageGroupName = value; }

    /**
     * <p>A filter that returns only model versions that belong to the specified model
     * group.</p>
     */
    inline void SetModelPackageGroupName(Aws::String&& value) { m_modelPackageGroupNameHasBeenSet = true; m_modelPackageGroupName = std::move(value); }

    /**
     * <p>A filter that returns only model versions that belong to the specified model
     * group.</p>
     */
    inline void SetModelPackageGroupName(const char* value) { m_modelPackageGroupNameHasBeenSet = true; m_modelPackageGroupName.assign(value); }

    /**
     * <p>A filter that returns only model versions that belong to the specified model
     * group.</p>
     */
    inline ListModelPackagesRequest& WithModelPackageGroupName(const Aws::String& value) { SetModelPackageGroupName(value); return *this;}

    /**
     * <p>A filter that returns only model versions that belong to the specified model
     * group.</p>
     */
    inline ListModelPackagesRequest& WithModelPackageGroupName(Aws::String&& value) { SetModelPackageGroupName(std::move(value)); return *this;}

    /**
     * <p>A filter that returns only model versions that belong to the specified model
     * group.</p>
     */
    inline ListModelPackagesRequest& WithModelPackageGroupName(const char* value) { SetModelPackageGroupName(value); return *this;}


    /**
     * <p>A filter that returns only the model packages of the specified type. This can
     * be one of the following values.</p> <ul> <li> <p> <code>UNVERSIONED</code> -
     * List only unversioined models. This is the default value if no
     * <code>ModelPackageType</code> is specified.</p> </li> <li> <p>
     * <code>VERSIONED</code> - List only versioned models.</p> </li> <li> <p>
     * <code>BOTH</code> - List both versioned and unversioned models.</p> </li> </ul>
     */
    inline const ModelPackageType& GetModelPackageType() const{ return m_modelPackageType; }

    /**
     * <p>A filter that returns only the model packages of the specified type. This can
     * be one of the following values.</p> <ul> <li> <p> <code>UNVERSIONED</code> -
     * List only unversioined models. This is the default value if no
     * <code>ModelPackageType</code> is specified.</p> </li> <li> <p>
     * <code>VERSIONED</code> - List only versioned models.</p> </li> <li> <p>
     * <code>BOTH</code> - List both versioned and unversioned models.</p> </li> </ul>
     */
    inline bool ModelPackageTypeHasBeenSet() const { return m_modelPackageTypeHasBeenSet; }

    /**
     * <p>A filter that returns only the model packages of the specified type. This can
     * be one of the following values.</p> <ul> <li> <p> <code>UNVERSIONED</code> -
     * List only unversioined models. This is the default value if no
     * <code>ModelPackageType</code> is specified.</p> </li> <li> <p>
     * <code>VERSIONED</code> - List only versioned models.</p> </li> <li> <p>
     * <code>BOTH</code> - List both versioned and unversioned models.</p> </li> </ul>
     */
    inline void SetModelPackageType(const ModelPackageType& value) { m_modelPackageTypeHasBeenSet = true; m_modelPackageType = value; }

    /**
     * <p>A filter that returns only the model packages of the specified type. This can
     * be one of the following values.</p> <ul> <li> <p> <code>UNVERSIONED</code> -
     * List only unversioined models. This is the default value if no
     * <code>ModelPackageType</code> is specified.</p> </li> <li> <p>
     * <code>VERSIONED</code> - List only versioned models.</p> </li> <li> <p>
     * <code>BOTH</code> - List both versioned and unversioned models.</p> </li> </ul>
     */
    inline void SetModelPackageType(ModelPackageType&& value) { m_modelPackageTypeHasBeenSet = true; m_modelPackageType = std::move(value); }

    /**
     * <p>A filter that returns only the model packages of the specified type. This can
     * be one of the following values.</p> <ul> <li> <p> <code>UNVERSIONED</code> -
     * List only unversioined models. This is the default value if no
     * <code>ModelPackageType</code> is specified.</p> </li> <li> <p>
     * <code>VERSIONED</code> - List only versioned models.</p> </li> <li> <p>
     * <code>BOTH</code> - List both versioned and unversioned models.</p> </li> </ul>
     */
    inline ListModelPackagesRequest& WithModelPackageType(const ModelPackageType& value) { SetModelPackageType(value); return *this;}

    /**
     * <p>A filter that returns only the model packages of the specified type. This can
     * be one of the following values.</p> <ul> <li> <p> <code>UNVERSIONED</code> -
     * List only unversioined models. This is the default value if no
     * <code>ModelPackageType</code> is specified.</p> </li> <li> <p>
     * <code>VERSIONED</code> - List only versioned models.</p> </li> <li> <p>
     * <code>BOTH</code> - List both versioned and unversioned models.</p> </li> </ul>
     */
    inline ListModelPackagesRequest& WithModelPackageType(ModelPackageType&& value) { SetModelPackageType(std::move(value)); return *this;}


    /**
     * <p>If the response to a previous <code>ListModelPackages</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of model packages, use the token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response to a previous <code>ListModelPackages</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of model packages, use the token in the next request.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the response to a previous <code>ListModelPackages</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of model packages, use the token in the next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the response to a previous <code>ListModelPackages</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of model packages, use the token in the next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the response to a previous <code>ListModelPackages</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of model packages, use the token in the next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the response to a previous <code>ListModelPackages</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of model packages, use the token in the next request.</p>
     */
    inline ListModelPackagesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response to a previous <code>ListModelPackages</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of model packages, use the token in the next request.</p>
     */
    inline ListModelPackagesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response to a previous <code>ListModelPackages</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of model packages, use the token in the next request.</p>
     */
    inline ListModelPackagesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The parameter by which to sort the results. The default is
     * <code>CreationTime</code>.</p>
     */
    inline const ModelPackageSortBy& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>The parameter by which to sort the results. The default is
     * <code>CreationTime</code>.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>The parameter by which to sort the results. The default is
     * <code>CreationTime</code>.</p>
     */
    inline void SetSortBy(const ModelPackageSortBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>The parameter by which to sort the results. The default is
     * <code>CreationTime</code>.</p>
     */
    inline void SetSortBy(ModelPackageSortBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>The parameter by which to sort the results. The default is
     * <code>CreationTime</code>.</p>
     */
    inline ListModelPackagesRequest& WithSortBy(const ModelPackageSortBy& value) { SetSortBy(value); return *this;}

    /**
     * <p>The parameter by which to sort the results. The default is
     * <code>CreationTime</code>.</p>
     */
    inline ListModelPackagesRequest& WithSortBy(ModelPackageSortBy&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p>The sort order for the results. The default is <code>Ascending</code>.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>The sort order for the results. The default is <code>Ascending</code>.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>The sort order for the results. The default is <code>Ascending</code>.</p>
     */
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>The sort order for the results. The default is <code>Ascending</code>.</p>
     */
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>The sort order for the results. The default is <code>Ascending</code>.</p>
     */
    inline ListModelPackagesRequest& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>The sort order for the results. The default is <code>Ascending</code>.</p>
     */
    inline ListModelPackagesRequest& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_creationTimeAfter;
    bool m_creationTimeAfterHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimeBefore;
    bool m_creationTimeBeforeHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nameContains;
    bool m_nameContainsHasBeenSet = false;

    ModelApprovalStatus m_modelApprovalStatus;
    bool m_modelApprovalStatusHasBeenSet = false;

    Aws::String m_modelPackageGroupName;
    bool m_modelPackageGroupNameHasBeenSet = false;

    ModelPackageType m_modelPackageType;
    bool m_modelPackageTypeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ModelPackageSortBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
