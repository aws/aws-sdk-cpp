/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/AssociationEdgeType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/SortAssociationsBy.h>
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
  class ListAssociationsRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API ListAssociationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAssociations"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A filter that returns only associations with the specified source ARN.</p>
     */
    inline const Aws::String& GetSourceArn() const{ return m_sourceArn; }

    /**
     * <p>A filter that returns only associations with the specified source ARN.</p>
     */
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }

    /**
     * <p>A filter that returns only associations with the specified source ARN.</p>
     */
    inline void SetSourceArn(const Aws::String& value) { m_sourceArnHasBeenSet = true; m_sourceArn = value; }

    /**
     * <p>A filter that returns only associations with the specified source ARN.</p>
     */
    inline void SetSourceArn(Aws::String&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::move(value); }

    /**
     * <p>A filter that returns only associations with the specified source ARN.</p>
     */
    inline void SetSourceArn(const char* value) { m_sourceArnHasBeenSet = true; m_sourceArn.assign(value); }

    /**
     * <p>A filter that returns only associations with the specified source ARN.</p>
     */
    inline ListAssociationsRequest& WithSourceArn(const Aws::String& value) { SetSourceArn(value); return *this;}

    /**
     * <p>A filter that returns only associations with the specified source ARN.</p>
     */
    inline ListAssociationsRequest& WithSourceArn(Aws::String&& value) { SetSourceArn(std::move(value)); return *this;}

    /**
     * <p>A filter that returns only associations with the specified source ARN.</p>
     */
    inline ListAssociationsRequest& WithSourceArn(const char* value) { SetSourceArn(value); return *this;}


    /**
     * <p>A filter that returns only associations with the specified destination Amazon
     * Resource Name (ARN).</p>
     */
    inline const Aws::String& GetDestinationArn() const{ return m_destinationArn; }

    /**
     * <p>A filter that returns only associations with the specified destination Amazon
     * Resource Name (ARN).</p>
     */
    inline bool DestinationArnHasBeenSet() const { return m_destinationArnHasBeenSet; }

    /**
     * <p>A filter that returns only associations with the specified destination Amazon
     * Resource Name (ARN).</p>
     */
    inline void SetDestinationArn(const Aws::String& value) { m_destinationArnHasBeenSet = true; m_destinationArn = value; }

    /**
     * <p>A filter that returns only associations with the specified destination Amazon
     * Resource Name (ARN).</p>
     */
    inline void SetDestinationArn(Aws::String&& value) { m_destinationArnHasBeenSet = true; m_destinationArn = std::move(value); }

    /**
     * <p>A filter that returns only associations with the specified destination Amazon
     * Resource Name (ARN).</p>
     */
    inline void SetDestinationArn(const char* value) { m_destinationArnHasBeenSet = true; m_destinationArn.assign(value); }

    /**
     * <p>A filter that returns only associations with the specified destination Amazon
     * Resource Name (ARN).</p>
     */
    inline ListAssociationsRequest& WithDestinationArn(const Aws::String& value) { SetDestinationArn(value); return *this;}

    /**
     * <p>A filter that returns only associations with the specified destination Amazon
     * Resource Name (ARN).</p>
     */
    inline ListAssociationsRequest& WithDestinationArn(Aws::String&& value) { SetDestinationArn(std::move(value)); return *this;}

    /**
     * <p>A filter that returns only associations with the specified destination Amazon
     * Resource Name (ARN).</p>
     */
    inline ListAssociationsRequest& WithDestinationArn(const char* value) { SetDestinationArn(value); return *this;}


    /**
     * <p>A filter that returns only associations with the specified source type.</p>
     */
    inline const Aws::String& GetSourceType() const{ return m_sourceType; }

    /**
     * <p>A filter that returns only associations with the specified source type.</p>
     */
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }

    /**
     * <p>A filter that returns only associations with the specified source type.</p>
     */
    inline void SetSourceType(const Aws::String& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }

    /**
     * <p>A filter that returns only associations with the specified source type.</p>
     */
    inline void SetSourceType(Aws::String&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::move(value); }

    /**
     * <p>A filter that returns only associations with the specified source type.</p>
     */
    inline void SetSourceType(const char* value) { m_sourceTypeHasBeenSet = true; m_sourceType.assign(value); }

    /**
     * <p>A filter that returns only associations with the specified source type.</p>
     */
    inline ListAssociationsRequest& WithSourceType(const Aws::String& value) { SetSourceType(value); return *this;}

    /**
     * <p>A filter that returns only associations with the specified source type.</p>
     */
    inline ListAssociationsRequest& WithSourceType(Aws::String&& value) { SetSourceType(std::move(value)); return *this;}

    /**
     * <p>A filter that returns only associations with the specified source type.</p>
     */
    inline ListAssociationsRequest& WithSourceType(const char* value) { SetSourceType(value); return *this;}


    /**
     * <p>A filter that returns only associations with the specified destination
     * type.</p>
     */
    inline const Aws::String& GetDestinationType() const{ return m_destinationType; }

    /**
     * <p>A filter that returns only associations with the specified destination
     * type.</p>
     */
    inline bool DestinationTypeHasBeenSet() const { return m_destinationTypeHasBeenSet; }

    /**
     * <p>A filter that returns only associations with the specified destination
     * type.</p>
     */
    inline void SetDestinationType(const Aws::String& value) { m_destinationTypeHasBeenSet = true; m_destinationType = value; }

    /**
     * <p>A filter that returns only associations with the specified destination
     * type.</p>
     */
    inline void SetDestinationType(Aws::String&& value) { m_destinationTypeHasBeenSet = true; m_destinationType = std::move(value); }

    /**
     * <p>A filter that returns only associations with the specified destination
     * type.</p>
     */
    inline void SetDestinationType(const char* value) { m_destinationTypeHasBeenSet = true; m_destinationType.assign(value); }

    /**
     * <p>A filter that returns only associations with the specified destination
     * type.</p>
     */
    inline ListAssociationsRequest& WithDestinationType(const Aws::String& value) { SetDestinationType(value); return *this;}

    /**
     * <p>A filter that returns only associations with the specified destination
     * type.</p>
     */
    inline ListAssociationsRequest& WithDestinationType(Aws::String&& value) { SetDestinationType(std::move(value)); return *this;}

    /**
     * <p>A filter that returns only associations with the specified destination
     * type.</p>
     */
    inline ListAssociationsRequest& WithDestinationType(const char* value) { SetDestinationType(value); return *this;}


    /**
     * <p>A filter that returns only associations of the specified type.</p>
     */
    inline const AssociationEdgeType& GetAssociationType() const{ return m_associationType; }

    /**
     * <p>A filter that returns only associations of the specified type.</p>
     */
    inline bool AssociationTypeHasBeenSet() const { return m_associationTypeHasBeenSet; }

    /**
     * <p>A filter that returns only associations of the specified type.</p>
     */
    inline void SetAssociationType(const AssociationEdgeType& value) { m_associationTypeHasBeenSet = true; m_associationType = value; }

    /**
     * <p>A filter that returns only associations of the specified type.</p>
     */
    inline void SetAssociationType(AssociationEdgeType&& value) { m_associationTypeHasBeenSet = true; m_associationType = std::move(value); }

    /**
     * <p>A filter that returns only associations of the specified type.</p>
     */
    inline ListAssociationsRequest& WithAssociationType(const AssociationEdgeType& value) { SetAssociationType(value); return *this;}

    /**
     * <p>A filter that returns only associations of the specified type.</p>
     */
    inline ListAssociationsRequest& WithAssociationType(AssociationEdgeType&& value) { SetAssociationType(std::move(value)); return *this;}


    /**
     * <p>A filter that returns only associations created on or after the specified
     * time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAfter() const{ return m_createdAfter; }

    /**
     * <p>A filter that returns only associations created on or after the specified
     * time.</p>
     */
    inline bool CreatedAfterHasBeenSet() const { return m_createdAfterHasBeenSet; }

    /**
     * <p>A filter that returns only associations created on or after the specified
     * time.</p>
     */
    inline void SetCreatedAfter(const Aws::Utils::DateTime& value) { m_createdAfterHasBeenSet = true; m_createdAfter = value; }

    /**
     * <p>A filter that returns only associations created on or after the specified
     * time.</p>
     */
    inline void SetCreatedAfter(Aws::Utils::DateTime&& value) { m_createdAfterHasBeenSet = true; m_createdAfter = std::move(value); }

    /**
     * <p>A filter that returns only associations created on or after the specified
     * time.</p>
     */
    inline ListAssociationsRequest& WithCreatedAfter(const Aws::Utils::DateTime& value) { SetCreatedAfter(value); return *this;}

    /**
     * <p>A filter that returns only associations created on or after the specified
     * time.</p>
     */
    inline ListAssociationsRequest& WithCreatedAfter(Aws::Utils::DateTime&& value) { SetCreatedAfter(std::move(value)); return *this;}


    /**
     * <p>A filter that returns only associations created on or before the specified
     * time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedBefore() const{ return m_createdBefore; }

    /**
     * <p>A filter that returns only associations created on or before the specified
     * time.</p>
     */
    inline bool CreatedBeforeHasBeenSet() const { return m_createdBeforeHasBeenSet; }

    /**
     * <p>A filter that returns only associations created on or before the specified
     * time.</p>
     */
    inline void SetCreatedBefore(const Aws::Utils::DateTime& value) { m_createdBeforeHasBeenSet = true; m_createdBefore = value; }

    /**
     * <p>A filter that returns only associations created on or before the specified
     * time.</p>
     */
    inline void SetCreatedBefore(Aws::Utils::DateTime&& value) { m_createdBeforeHasBeenSet = true; m_createdBefore = std::move(value); }

    /**
     * <p>A filter that returns only associations created on or before the specified
     * time.</p>
     */
    inline ListAssociationsRequest& WithCreatedBefore(const Aws::Utils::DateTime& value) { SetCreatedBefore(value); return *this;}

    /**
     * <p>A filter that returns only associations created on or before the specified
     * time.</p>
     */
    inline ListAssociationsRequest& WithCreatedBefore(Aws::Utils::DateTime&& value) { SetCreatedBefore(std::move(value)); return *this;}


    /**
     * <p>The property used to sort results. The default value is
     * <code>CreationTime</code>.</p>
     */
    inline const SortAssociationsBy& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>The property used to sort results. The default value is
     * <code>CreationTime</code>.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>The property used to sort results. The default value is
     * <code>CreationTime</code>.</p>
     */
    inline void SetSortBy(const SortAssociationsBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>The property used to sort results. The default value is
     * <code>CreationTime</code>.</p>
     */
    inline void SetSortBy(SortAssociationsBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>The property used to sort results. The default value is
     * <code>CreationTime</code>.</p>
     */
    inline ListAssociationsRequest& WithSortBy(const SortAssociationsBy& value) { SetSortBy(value); return *this;}

    /**
     * <p>The property used to sort results. The default value is
     * <code>CreationTime</code>.</p>
     */
    inline ListAssociationsRequest& WithSortBy(SortAssociationsBy&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p>The sort order. The default value is <code>Descending</code>.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>The sort order. The default value is <code>Descending</code>.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>The sort order. The default value is <code>Descending</code>.</p>
     */
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>The sort order. The default value is <code>Descending</code>.</p>
     */
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>The sort order. The default value is <code>Descending</code>.</p>
     */
    inline ListAssociationsRequest& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>The sort order. The default value is <code>Descending</code>.</p>
     */
    inline ListAssociationsRequest& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}


    /**
     * <p>If the previous call to <code>ListAssociations</code> didn't return the full
     * set of associations, the call returns a token for getting the next set of
     * associations.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the previous call to <code>ListAssociations</code> didn't return the full
     * set of associations, the call returns a token for getting the next set of
     * associations.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the previous call to <code>ListAssociations</code> didn't return the full
     * set of associations, the call returns a token for getting the next set of
     * associations.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the previous call to <code>ListAssociations</code> didn't return the full
     * set of associations, the call returns a token for getting the next set of
     * associations.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the previous call to <code>ListAssociations</code> didn't return the full
     * set of associations, the call returns a token for getting the next set of
     * associations.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the previous call to <code>ListAssociations</code> didn't return the full
     * set of associations, the call returns a token for getting the next set of
     * associations.</p>
     */
    inline ListAssociationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the previous call to <code>ListAssociations</code> didn't return the full
     * set of associations, the call returns a token for getting the next set of
     * associations.</p>
     */
    inline ListAssociationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the previous call to <code>ListAssociations</code> didn't return the full
     * set of associations, the call returns a token for getting the next set of
     * associations.</p>
     */
    inline ListAssociationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of associations to return in the response. The default
     * value is 10.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of associations to return in the response. The default
     * value is 10.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of associations to return in the response. The default
     * value is 10.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of associations to return in the response. The default
     * value is 10.</p>
     */
    inline ListAssociationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_sourceArn;
    bool m_sourceArnHasBeenSet = false;

    Aws::String m_destinationArn;
    bool m_destinationArnHasBeenSet = false;

    Aws::String m_sourceType;
    bool m_sourceTypeHasBeenSet = false;

    Aws::String m_destinationType;
    bool m_destinationTypeHasBeenSet = false;

    AssociationEdgeType m_associationType;
    bool m_associationTypeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAfter;
    bool m_createdAfterHasBeenSet = false;

    Aws::Utils::DateTime m_createdBefore;
    bool m_createdBeforeHasBeenSet = false;

    SortAssociationsBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
