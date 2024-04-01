/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/MetadataGenerationRunStatus.h>
#include <aws/datazone/model/MetadataGenerationRunType.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace DataZone
{
namespace Model
{

  /**
   */
  class ListMetadataGenerationRunsRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API ListMetadataGenerationRunsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListMetadataGenerationRuns"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;

    AWS_DATAZONE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The ID of the Amazon DataZone domain where you want to list metadata
     * generation runs.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }

    /**
     * <p>The ID of the Amazon DataZone domain where you want to list metadata
     * generation runs.</p>
     */
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }

    /**
     * <p>The ID of the Amazon DataZone domain where you want to list metadata
     * generation runs.</p>
     */
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }

    /**
     * <p>The ID of the Amazon DataZone domain where you want to list metadata
     * generation runs.</p>
     */
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }

    /**
     * <p>The ID of the Amazon DataZone domain where you want to list metadata
     * generation runs.</p>
     */
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }

    /**
     * <p>The ID of the Amazon DataZone domain where you want to list metadata
     * generation runs.</p>
     */
    inline ListMetadataGenerationRunsRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain where you want to list metadata
     * generation runs.</p>
     */
    inline ListMetadataGenerationRunsRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain where you want to list metadata
     * generation runs.</p>
     */
    inline ListMetadataGenerationRunsRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}


    /**
     * <p>The maximum number of metadata generation runs to return in a single call to
     * ListMetadataGenerationRuns. When the number of metadata generation runs to be
     * listed is greater than the value of MaxResults, the response contains a
     * NextToken value that you can use in a subsequent call to
     * ListMetadataGenerationRuns to list the next set of revisions.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of metadata generation runs to return in a single call to
     * ListMetadataGenerationRuns. When the number of metadata generation runs to be
     * listed is greater than the value of MaxResults, the response contains a
     * NextToken value that you can use in a subsequent call to
     * ListMetadataGenerationRuns to list the next set of revisions.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of metadata generation runs to return in a single call to
     * ListMetadataGenerationRuns. When the number of metadata generation runs to be
     * listed is greater than the value of MaxResults, the response contains a
     * NextToken value that you can use in a subsequent call to
     * ListMetadataGenerationRuns to list the next set of revisions.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of metadata generation runs to return in a single call to
     * ListMetadataGenerationRuns. When the number of metadata generation runs to be
     * listed is greater than the value of MaxResults, the response contains a
     * NextToken value that you can use in a subsequent call to
     * ListMetadataGenerationRuns to list the next set of revisions.</p>
     */
    inline ListMetadataGenerationRunsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>When the number of metadata generation runs is greater than the default value
     * for the MaxResults parameter, or if you explicitly specify a value for
     * MaxResults that is less than the number of metadata generation runs, the
     * response includes a pagination token named NextToken. You can specify this
     * NextToken value in a subsequent call to ListMetadataGenerationRuns to list the
     * next set of revisions.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>When the number of metadata generation runs is greater than the default value
     * for the MaxResults parameter, or if you explicitly specify a value for
     * MaxResults that is less than the number of metadata generation runs, the
     * response includes a pagination token named NextToken. You can specify this
     * NextToken value in a subsequent call to ListMetadataGenerationRuns to list the
     * next set of revisions.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>When the number of metadata generation runs is greater than the default value
     * for the MaxResults parameter, or if you explicitly specify a value for
     * MaxResults that is less than the number of metadata generation runs, the
     * response includes a pagination token named NextToken. You can specify this
     * NextToken value in a subsequent call to ListMetadataGenerationRuns to list the
     * next set of revisions.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>When the number of metadata generation runs is greater than the default value
     * for the MaxResults parameter, or if you explicitly specify a value for
     * MaxResults that is less than the number of metadata generation runs, the
     * response includes a pagination token named NextToken. You can specify this
     * NextToken value in a subsequent call to ListMetadataGenerationRuns to list the
     * next set of revisions.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>When the number of metadata generation runs is greater than the default value
     * for the MaxResults parameter, or if you explicitly specify a value for
     * MaxResults that is less than the number of metadata generation runs, the
     * response includes a pagination token named NextToken. You can specify this
     * NextToken value in a subsequent call to ListMetadataGenerationRuns to list the
     * next set of revisions.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>When the number of metadata generation runs is greater than the default value
     * for the MaxResults parameter, or if you explicitly specify a value for
     * MaxResults that is less than the number of metadata generation runs, the
     * response includes a pagination token named NextToken. You can specify this
     * NextToken value in a subsequent call to ListMetadataGenerationRuns to list the
     * next set of revisions.</p>
     */
    inline ListMetadataGenerationRunsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>When the number of metadata generation runs is greater than the default value
     * for the MaxResults parameter, or if you explicitly specify a value for
     * MaxResults that is less than the number of metadata generation runs, the
     * response includes a pagination token named NextToken. You can specify this
     * NextToken value in a subsequent call to ListMetadataGenerationRuns to list the
     * next set of revisions.</p>
     */
    inline ListMetadataGenerationRunsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>When the number of metadata generation runs is greater than the default value
     * for the MaxResults parameter, or if you explicitly specify a value for
     * MaxResults that is less than the number of metadata generation runs, the
     * response includes a pagination token named NextToken. You can specify this
     * NextToken value in a subsequent call to ListMetadataGenerationRuns to list the
     * next set of revisions.</p>
     */
    inline ListMetadataGenerationRunsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The status of the metadata generation runs.</p>
     */
    inline const MetadataGenerationRunStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the metadata generation runs.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the metadata generation runs.</p>
     */
    inline void SetStatus(const MetadataGenerationRunStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the metadata generation runs.</p>
     */
    inline void SetStatus(MetadataGenerationRunStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the metadata generation runs.</p>
     */
    inline ListMetadataGenerationRunsRequest& WithStatus(const MetadataGenerationRunStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the metadata generation runs.</p>
     */
    inline ListMetadataGenerationRunsRequest& WithStatus(MetadataGenerationRunStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The type of the metadata generation runs.</p>
     */
    inline const MetadataGenerationRunType& GetType() const{ return m_type; }

    /**
     * <p>The type of the metadata generation runs.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the metadata generation runs.</p>
     */
    inline void SetType(const MetadataGenerationRunType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the metadata generation runs.</p>
     */
    inline void SetType(MetadataGenerationRunType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the metadata generation runs.</p>
     */
    inline ListMetadataGenerationRunsRequest& WithType(const MetadataGenerationRunType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the metadata generation runs.</p>
     */
    inline ListMetadataGenerationRunsRequest& WithType(MetadataGenerationRunType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    MetadataGenerationRunStatus m_status;
    bool m_statusHasBeenSet = false;

    MetadataGenerationRunType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
