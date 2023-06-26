/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/DrsRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace drs
{
namespace Model
{

  /**
   */
  class DescribeLaunchConfigurationTemplatesRequest : public DrsRequest
  {
  public:
    AWS_DRS_API DescribeLaunchConfigurationTemplatesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeLaunchConfigurationTemplates"; }

    AWS_DRS_API Aws::String SerializePayload() const override;


    /**
     * <p>Request to filter Launch Configuration Templates list by Launch Configuration
     * Template ID.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLaunchConfigurationTemplateIDs() const{ return m_launchConfigurationTemplateIDs; }

    /**
     * <p>Request to filter Launch Configuration Templates list by Launch Configuration
     * Template ID.</p>
     */
    inline bool LaunchConfigurationTemplateIDsHasBeenSet() const { return m_launchConfigurationTemplateIDsHasBeenSet; }

    /**
     * <p>Request to filter Launch Configuration Templates list by Launch Configuration
     * Template ID.</p>
     */
    inline void SetLaunchConfigurationTemplateIDs(const Aws::Vector<Aws::String>& value) { m_launchConfigurationTemplateIDsHasBeenSet = true; m_launchConfigurationTemplateIDs = value; }

    /**
     * <p>Request to filter Launch Configuration Templates list by Launch Configuration
     * Template ID.</p>
     */
    inline void SetLaunchConfigurationTemplateIDs(Aws::Vector<Aws::String>&& value) { m_launchConfigurationTemplateIDsHasBeenSet = true; m_launchConfigurationTemplateIDs = std::move(value); }

    /**
     * <p>Request to filter Launch Configuration Templates list by Launch Configuration
     * Template ID.</p>
     */
    inline DescribeLaunchConfigurationTemplatesRequest& WithLaunchConfigurationTemplateIDs(const Aws::Vector<Aws::String>& value) { SetLaunchConfigurationTemplateIDs(value); return *this;}

    /**
     * <p>Request to filter Launch Configuration Templates list by Launch Configuration
     * Template ID.</p>
     */
    inline DescribeLaunchConfigurationTemplatesRequest& WithLaunchConfigurationTemplateIDs(Aws::Vector<Aws::String>&& value) { SetLaunchConfigurationTemplateIDs(std::move(value)); return *this;}

    /**
     * <p>Request to filter Launch Configuration Templates list by Launch Configuration
     * Template ID.</p>
     */
    inline DescribeLaunchConfigurationTemplatesRequest& AddLaunchConfigurationTemplateIDs(const Aws::String& value) { m_launchConfigurationTemplateIDsHasBeenSet = true; m_launchConfigurationTemplateIDs.push_back(value); return *this; }

    /**
     * <p>Request to filter Launch Configuration Templates list by Launch Configuration
     * Template ID.</p>
     */
    inline DescribeLaunchConfigurationTemplatesRequest& AddLaunchConfigurationTemplateIDs(Aws::String&& value) { m_launchConfigurationTemplateIDsHasBeenSet = true; m_launchConfigurationTemplateIDs.push_back(std::move(value)); return *this; }

    /**
     * <p>Request to filter Launch Configuration Templates list by Launch Configuration
     * Template ID.</p>
     */
    inline DescribeLaunchConfigurationTemplatesRequest& AddLaunchConfigurationTemplateIDs(const char* value) { m_launchConfigurationTemplateIDsHasBeenSet = true; m_launchConfigurationTemplateIDs.push_back(value); return *this; }


    /**
     * <p>Maximum results to be returned in DescribeLaunchConfigurationTemplates.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Maximum results to be returned in DescribeLaunchConfigurationTemplates.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Maximum results to be returned in DescribeLaunchConfigurationTemplates.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Maximum results to be returned in DescribeLaunchConfigurationTemplates.</p>
     */
    inline DescribeLaunchConfigurationTemplatesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token of the next Launch Configuration Template to retrieve.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token of the next Launch Configuration Template to retrieve.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token of the next Launch Configuration Template to retrieve.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token of the next Launch Configuration Template to retrieve.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token of the next Launch Configuration Template to retrieve.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token of the next Launch Configuration Template to retrieve.</p>
     */
    inline DescribeLaunchConfigurationTemplatesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token of the next Launch Configuration Template to retrieve.</p>
     */
    inline DescribeLaunchConfigurationTemplatesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token of the next Launch Configuration Template to retrieve.</p>
     */
    inline DescribeLaunchConfigurationTemplatesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_launchConfigurationTemplateIDs;
    bool m_launchConfigurationTemplateIDsHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
