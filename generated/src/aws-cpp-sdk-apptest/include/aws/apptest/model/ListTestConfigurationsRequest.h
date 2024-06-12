/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/apptest/AppTestRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace AppTest
{
namespace Model
{

  /**
   */
  class ListTestConfigurationsRequest : public AppTestRequest
  {
  public:
    AWS_APPTEST_API ListTestConfigurationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTestConfigurations"; }

    AWS_APPTEST_API Aws::String SerializePayload() const override;

    AWS_APPTEST_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The configuration IDs of the test configurations.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTestConfigurationIds() const{ return m_testConfigurationIds; }
    inline bool TestConfigurationIdsHasBeenSet() const { return m_testConfigurationIdsHasBeenSet; }
    inline void SetTestConfigurationIds(const Aws::Vector<Aws::String>& value) { m_testConfigurationIdsHasBeenSet = true; m_testConfigurationIds = value; }
    inline void SetTestConfigurationIds(Aws::Vector<Aws::String>&& value) { m_testConfigurationIdsHasBeenSet = true; m_testConfigurationIds = std::move(value); }
    inline ListTestConfigurationsRequest& WithTestConfigurationIds(const Aws::Vector<Aws::String>& value) { SetTestConfigurationIds(value); return *this;}
    inline ListTestConfigurationsRequest& WithTestConfigurationIds(Aws::Vector<Aws::String>&& value) { SetTestConfigurationIds(std::move(value)); return *this;}
    inline ListTestConfigurationsRequest& AddTestConfigurationIds(const Aws::String& value) { m_testConfigurationIdsHasBeenSet = true; m_testConfigurationIds.push_back(value); return *this; }
    inline ListTestConfigurationsRequest& AddTestConfigurationIds(Aws::String&& value) { m_testConfigurationIdsHasBeenSet = true; m_testConfigurationIds.push_back(std::move(value)); return *this; }
    inline ListTestConfigurationsRequest& AddTestConfigurationIds(const char* value) { m_testConfigurationIdsHasBeenSet = true; m_testConfigurationIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next token for the test configurations.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListTestConfigurationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListTestConfigurationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListTestConfigurationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum results of the test configuration.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListTestConfigurationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_testConfigurationIds;
    bool m_testConfigurationIdsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
