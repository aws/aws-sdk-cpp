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


    /**
     * <p> The type of control, such as a standard control or a custom control. </p>
     */
    inline const ControlType& GetControlType() const{ return m_controlType; }

    /**
     * <p> The type of control, such as a standard control or a custom control. </p>
     */
    inline bool ControlTypeHasBeenSet() const { return m_controlTypeHasBeenSet; }

    /**
     * <p> The type of control, such as a standard control or a custom control. </p>
     */
    inline void SetControlType(const ControlType& value) { m_controlTypeHasBeenSet = true; m_controlType = value; }

    /**
     * <p> The type of control, such as a standard control or a custom control. </p>
     */
    inline void SetControlType(ControlType&& value) { m_controlTypeHasBeenSet = true; m_controlType = std::move(value); }

    /**
     * <p> The type of control, such as a standard control or a custom control. </p>
     */
    inline ListControlsRequest& WithControlType(const ControlType& value) { SetControlType(value); return *this;}

    /**
     * <p> The type of control, such as a standard control or a custom control. </p>
     */
    inline ListControlsRequest& WithControlType(ControlType&& value) { SetControlType(std::move(value)); return *this;}


    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline ListControlsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline ListControlsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline ListControlsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> Represents the maximum number of results on a page or for an API request
     * call. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p> Represents the maximum number of results on a page or for an API request
     * call. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p> Represents the maximum number of results on a page or for an API request
     * call. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p> Represents the maximum number of results on a page or for an API request
     * call. </p>
     */
    inline ListControlsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    ControlType m_controlType;
    bool m_controlTypeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
