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
    AWS_DATAZONE_API ListMetadataGenerationRunsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListMetadataGenerationRuns"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;

    AWS_DATAZONE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The ID of the Amazon DataZone domain where you want to list metadata
     * generation runs.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const { return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    template<typename DomainIdentifierT = Aws::String>
    void SetDomainIdentifier(DomainIdentifierT&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::forward<DomainIdentifierT>(value); }
    template<typename DomainIdentifierT = Aws::String>
    ListMetadataGenerationRunsRequest& WithDomainIdentifier(DomainIdentifierT&& value) { SetDomainIdentifier(std::forward<DomainIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of metadata generation runs to return in a single call to
     * ListMetadataGenerationRuns. When the number of metadata generation runs to be
     * listed is greater than the value of MaxResults, the response contains a
     * NextToken value that you can use in a subsequent call to
     * ListMetadataGenerationRuns to list the next set of revisions.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListMetadataGenerationRunsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the number of metadata generation runs is greater than the default value
     * for the MaxResults parameter, or if you explicitly specify a value for
     * MaxResults that is less than the number of metadata generation runs, the
     * response includes a pagination token named NextToken. You can specify this
     * NextToken value in a subsequent call to ListMetadataGenerationRuns to list the
     * next set of revisions.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListMetadataGenerationRunsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the metadata generation runs.</p>
     */
    inline MetadataGenerationRunStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(MetadataGenerationRunStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ListMetadataGenerationRunsRequest& WithStatus(MetadataGenerationRunStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the metadata generation runs.</p>
     */
    inline MetadataGenerationRunType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(MetadataGenerationRunType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ListMetadataGenerationRunsRequest& WithType(MetadataGenerationRunType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    MetadataGenerationRunStatus m_status{MetadataGenerationRunStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    MetadataGenerationRunType m_type{MetadataGenerationRunType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
