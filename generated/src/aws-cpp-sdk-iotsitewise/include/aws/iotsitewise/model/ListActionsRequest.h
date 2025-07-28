/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/iotsitewise/model/TargetResourceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/ResolveToResourceType.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoTSiteWise
{
namespace Model
{

  /**
   */
  class ListActionsRequest : public IoTSiteWiseRequest
  {
  public:
    AWS_IOTSITEWISE_API ListActionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListActions"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;

    AWS_IOTSITEWISE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The type of resource.</p>
     */
    inline TargetResourceType GetTargetResourceType() const { return m_targetResourceType; }
    inline bool TargetResourceTypeHasBeenSet() const { return m_targetResourceTypeHasBeenSet; }
    inline void SetTargetResourceType(TargetResourceType value) { m_targetResourceTypeHasBeenSet = true; m_targetResourceType = value; }
    inline ListActionsRequest& WithTargetResourceType(TargetResourceType value) { SetTargetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the target resource.</p>
     */
    inline const Aws::String& GetTargetResourceId() const { return m_targetResourceId; }
    inline bool TargetResourceIdHasBeenSet() const { return m_targetResourceIdHasBeenSet; }
    template<typename TargetResourceIdT = Aws::String>
    void SetTargetResourceId(TargetResourceIdT&& value) { m_targetResourceIdHasBeenSet = true; m_targetResourceId = std::forward<TargetResourceIdT>(value); }
    template<typename TargetResourceIdT = Aws::String>
    ListActionsRequest& WithTargetResourceId(TargetResourceIdT&& value) { SetTargetResourceId(std::forward<TargetResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListActionsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return for each paginated request.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListActionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the resolved resource.</p>
     */
    inline ResolveToResourceType GetResolveToResourceType() const { return m_resolveToResourceType; }
    inline bool ResolveToResourceTypeHasBeenSet() const { return m_resolveToResourceTypeHasBeenSet; }
    inline void SetResolveToResourceType(ResolveToResourceType value) { m_resolveToResourceTypeHasBeenSet = true; m_resolveToResourceType = value; }
    inline ListActionsRequest& WithResolveToResourceType(ResolveToResourceType value) { SetResolveToResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the resolved resource.</p>
     */
    inline const Aws::String& GetResolveToResourceId() const { return m_resolveToResourceId; }
    inline bool ResolveToResourceIdHasBeenSet() const { return m_resolveToResourceIdHasBeenSet; }
    template<typename ResolveToResourceIdT = Aws::String>
    void SetResolveToResourceId(ResolveToResourceIdT&& value) { m_resolveToResourceIdHasBeenSet = true; m_resolveToResourceId = std::forward<ResolveToResourceIdT>(value); }
    template<typename ResolveToResourceIdT = Aws::String>
    ListActionsRequest& WithResolveToResourceId(ResolveToResourceIdT&& value) { SetResolveToResourceId(std::forward<ResolveToResourceIdT>(value)); return *this;}
    ///@}
  private:

    TargetResourceType m_targetResourceType{TargetResourceType::NOT_SET};
    bool m_targetResourceTypeHasBeenSet = false;

    Aws::String m_targetResourceId;
    bool m_targetResourceIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    ResolveToResourceType m_resolveToResourceType{ResolveToResourceType::NOT_SET};
    bool m_resolveToResourceTypeHasBeenSet = false;

    Aws::String m_resolveToResourceId;
    bool m_resolveToResourceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
