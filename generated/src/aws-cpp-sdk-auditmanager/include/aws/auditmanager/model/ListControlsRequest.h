/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/AuditManagerRequest.h>
#include <aws/auditmanager/model/ControlType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace AuditManager
{
namespace Model
{

  /**
   */
  class ListControlsRequest : public AuditManagerRequest
  {
  public:
    AWS_AUDITMANAGER_API ListControlsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListControls"; }

    AWS_AUDITMANAGER_API Aws::String SerializePayload() const override;

    AWS_AUDITMANAGER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>A filter that narrows the list of controls to a specific type. </p>
     */
    inline const ControlType& GetControlType() const{ return m_controlType; }
    inline bool ControlTypeHasBeenSet() const { return m_controlTypeHasBeenSet; }
    inline void SetControlType(const ControlType& value) { m_controlTypeHasBeenSet = true; m_controlType = value; }
    inline void SetControlType(ControlType&& value) { m_controlTypeHasBeenSet = true; m_controlType = std::move(value); }
    inline ListControlsRequest& WithControlType(const ControlType& value) { SetControlType(value); return *this;}
    inline ListControlsRequest& WithControlType(ControlType&& value) { SetControlType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pagination token that's used to fetch the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListControlsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListControlsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListControlsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results on a page or for an API request call. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListControlsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that narrows the list of controls to a specific resource from the
     * Amazon Web Services Control Catalog. </p> <p>To use this parameter, specify the
     * ARN of the Control Catalog resource. You can specify either a control domain, a
     * control objective, or a common control. For information about how to find the
     * ARNs for these resources, see <a
     * href="https://docs.aws.amazon.com/controlcatalog/latest/APIReference/API_ListDomains.html">
     * <code>ListDomains</code> </a>, <a
     * href="https://docs.aws.amazon.com/controlcatalog/latest/APIReference/API_ListObjectives.html">
     * <code>ListObjectives</code> </a>, and <a
     * href="https://docs.aws.amazon.com/controlcatalog/latest/APIReference/API_ListCommonControls.html">
     * <code>ListCommonControls</code> </a>.</p>  <p>You can only filter by one
     * Control Catalog resource at a time. Specifying multiple resource ARNs isn’t
     * currently supported. If you want to filter by more than one ARN, we recommend
     * that you run the <code>ListControls</code> operation separately for each ARN.
     * </p>  <p>Alternatively, specify <code>UNCATEGORIZED</code> to list
     * controls that aren't mapped to a Control Catalog resource. For example, this
     * operation might return a list of custom controls that don't belong to any
     * control domain or control objective.</p>
     */
    inline const Aws::String& GetControlCatalogId() const{ return m_controlCatalogId; }
    inline bool ControlCatalogIdHasBeenSet() const { return m_controlCatalogIdHasBeenSet; }
    inline void SetControlCatalogId(const Aws::String& value) { m_controlCatalogIdHasBeenSet = true; m_controlCatalogId = value; }
    inline void SetControlCatalogId(Aws::String&& value) { m_controlCatalogIdHasBeenSet = true; m_controlCatalogId = std::move(value); }
    inline void SetControlCatalogId(const char* value) { m_controlCatalogIdHasBeenSet = true; m_controlCatalogId.assign(value); }
    inline ListControlsRequest& WithControlCatalogId(const Aws::String& value) { SetControlCatalogId(value); return *this;}
    inline ListControlsRequest& WithControlCatalogId(Aws::String&& value) { SetControlCatalogId(std::move(value)); return *this;}
    inline ListControlsRequest& WithControlCatalogId(const char* value) { SetControlCatalogId(value); return *this;}
    ///@}
  private:

    ControlType m_controlType;
    bool m_controlTypeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_controlCatalogId;
    bool m_controlCatalogIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
