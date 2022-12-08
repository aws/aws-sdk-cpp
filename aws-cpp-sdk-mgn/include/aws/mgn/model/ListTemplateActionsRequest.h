/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/MgnRequest.h>
#include <aws/mgn/model/TemplateActionsRequestFilters.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace mgn
{
namespace Model
{

  /**
   */
  class ListTemplateActionsRequest : public MgnRequest
  {
  public:
    AWS_MGN_API ListTemplateActionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTemplateActions"; }

    AWS_MGN_API Aws::String SerializePayload() const override;


    /**
     * <p>Filters to apply when listing template post migration custom actions.</p>
     */
    inline const TemplateActionsRequestFilters& GetFilters() const{ return m_filters; }

    /**
     * <p>Filters to apply when listing template post migration custom actions.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>Filters to apply when listing template post migration custom actions.</p>
     */
    inline void SetFilters(const TemplateActionsRequestFilters& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>Filters to apply when listing template post migration custom actions.</p>
     */
    inline void SetFilters(TemplateActionsRequestFilters&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>Filters to apply when listing template post migration custom actions.</p>
     */
    inline ListTemplateActionsRequest& WithFilters(const TemplateActionsRequestFilters& value) { SetFilters(value); return *this;}

    /**
     * <p>Filters to apply when listing template post migration custom actions.</p>
     */
    inline ListTemplateActionsRequest& WithFilters(TemplateActionsRequestFilters&& value) { SetFilters(std::move(value)); return *this;}


    /**
     * <p>Launch configuration template ID.</p>
     */
    inline const Aws::String& GetLaunchConfigurationTemplateID() const{ return m_launchConfigurationTemplateID; }

    /**
     * <p>Launch configuration template ID.</p>
     */
    inline bool LaunchConfigurationTemplateIDHasBeenSet() const { return m_launchConfigurationTemplateIDHasBeenSet; }

    /**
     * <p>Launch configuration template ID.</p>
     */
    inline void SetLaunchConfigurationTemplateID(const Aws::String& value) { m_launchConfigurationTemplateIDHasBeenSet = true; m_launchConfigurationTemplateID = value; }

    /**
     * <p>Launch configuration template ID.</p>
     */
    inline void SetLaunchConfigurationTemplateID(Aws::String&& value) { m_launchConfigurationTemplateIDHasBeenSet = true; m_launchConfigurationTemplateID = std::move(value); }

    /**
     * <p>Launch configuration template ID.</p>
     */
    inline void SetLaunchConfigurationTemplateID(const char* value) { m_launchConfigurationTemplateIDHasBeenSet = true; m_launchConfigurationTemplateID.assign(value); }

    /**
     * <p>Launch configuration template ID.</p>
     */
    inline ListTemplateActionsRequest& WithLaunchConfigurationTemplateID(const Aws::String& value) { SetLaunchConfigurationTemplateID(value); return *this;}

    /**
     * <p>Launch configuration template ID.</p>
     */
    inline ListTemplateActionsRequest& WithLaunchConfigurationTemplateID(Aws::String&& value) { SetLaunchConfigurationTemplateID(std::move(value)); return *this;}

    /**
     * <p>Launch configuration template ID.</p>
     */
    inline ListTemplateActionsRequest& WithLaunchConfigurationTemplateID(const char* value) { SetLaunchConfigurationTemplateID(value); return *this;}


    /**
     * <p>Maximum amount of items to return when listing template post migration custom
     * actions.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Maximum amount of items to return when listing template post migration custom
     * actions.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Maximum amount of items to return when listing template post migration custom
     * actions.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Maximum amount of items to return when listing template post migration custom
     * actions.</p>
     */
    inline ListTemplateActionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Next token to use when listing template post migration custom actions.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Next token to use when listing template post migration custom actions.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Next token to use when listing template post migration custom actions.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Next token to use when listing template post migration custom actions.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Next token to use when listing template post migration custom actions.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Next token to use when listing template post migration custom actions.</p>
     */
    inline ListTemplateActionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Next token to use when listing template post migration custom actions.</p>
     */
    inline ListTemplateActionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Next token to use when listing template post migration custom actions.</p>
     */
    inline ListTemplateActionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    TemplateActionsRequestFilters m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_launchConfigurationTemplateID;
    bool m_launchConfigurationTemplateIDHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
