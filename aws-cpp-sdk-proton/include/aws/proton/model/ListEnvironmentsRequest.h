/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/ProtonRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/proton/model/EnvironmentTemplateFilter.h>
#include <utility>

namespace Aws
{
namespace Proton
{
namespace Model
{

  /**
   */
  class ListEnvironmentsRequest : public ProtonRequest
  {
  public:
    AWS_PROTON_API ListEnvironmentsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListEnvironments"; }

    AWS_PROTON_API Aws::String SerializePayload() const override;

    AWS_PROTON_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>An array of the versions of the environment template.</p>
     */
    inline const Aws::Vector<EnvironmentTemplateFilter>& GetEnvironmentTemplates() const{ return m_environmentTemplates; }

    /**
     * <p>An array of the versions of the environment template.</p>
     */
    inline bool EnvironmentTemplatesHasBeenSet() const { return m_environmentTemplatesHasBeenSet; }

    /**
     * <p>An array of the versions of the environment template.</p>
     */
    inline void SetEnvironmentTemplates(const Aws::Vector<EnvironmentTemplateFilter>& value) { m_environmentTemplatesHasBeenSet = true; m_environmentTemplates = value; }

    /**
     * <p>An array of the versions of the environment template.</p>
     */
    inline void SetEnvironmentTemplates(Aws::Vector<EnvironmentTemplateFilter>&& value) { m_environmentTemplatesHasBeenSet = true; m_environmentTemplates = std::move(value); }

    /**
     * <p>An array of the versions of the environment template.</p>
     */
    inline ListEnvironmentsRequest& WithEnvironmentTemplates(const Aws::Vector<EnvironmentTemplateFilter>& value) { SetEnvironmentTemplates(value); return *this;}

    /**
     * <p>An array of the versions of the environment template.</p>
     */
    inline ListEnvironmentsRequest& WithEnvironmentTemplates(Aws::Vector<EnvironmentTemplateFilter>&& value) { SetEnvironmentTemplates(std::move(value)); return *this;}

    /**
     * <p>An array of the versions of the environment template.</p>
     */
    inline ListEnvironmentsRequest& AddEnvironmentTemplates(const EnvironmentTemplateFilter& value) { m_environmentTemplatesHasBeenSet = true; m_environmentTemplates.push_back(value); return *this; }

    /**
     * <p>An array of the versions of the environment template.</p>
     */
    inline ListEnvironmentsRequest& AddEnvironmentTemplates(EnvironmentTemplateFilter&& value) { m_environmentTemplatesHasBeenSet = true; m_environmentTemplates.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of environments to list.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of environments to list.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of environments to list.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of environments to list.</p>
     */
    inline ListEnvironmentsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>A token that indicates the location of the next environment in the array of
     * environments, after the list of environments that was previously requested.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates the location of the next environment in the array of
     * environments, after the list of environments that was previously requested.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token that indicates the location of the next environment in the array of
     * environments, after the list of environments that was previously requested.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token that indicates the location of the next environment in the array of
     * environments, after the list of environments that was previously requested.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates the location of the next environment in the array of
     * environments, after the list of environments that was previously requested.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token that indicates the location of the next environment in the array of
     * environments, after the list of environments that was previously requested.</p>
     */
    inline ListEnvironmentsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates the location of the next environment in the array of
     * environments, after the list of environments that was previously requested.</p>
     */
    inline ListEnvironmentsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates the location of the next environment in the array of
     * environments, after the list of environments that was previously requested.</p>
     */
    inline ListEnvironmentsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<EnvironmentTemplateFilter> m_environmentTemplates;
    bool m_environmentTemplatesHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
