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
    AWS_APPTEST_API ListTestConfigurationsRequest() = default;

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
    inline const Aws::Vector<Aws::String>& GetTestConfigurationIds() const { return m_testConfigurationIds; }
    inline bool TestConfigurationIdsHasBeenSet() const { return m_testConfigurationIdsHasBeenSet; }
    template<typename TestConfigurationIdsT = Aws::Vector<Aws::String>>
    void SetTestConfigurationIds(TestConfigurationIdsT&& value) { m_testConfigurationIdsHasBeenSet = true; m_testConfigurationIds = std::forward<TestConfigurationIdsT>(value); }
    template<typename TestConfigurationIdsT = Aws::Vector<Aws::String>>
    ListTestConfigurationsRequest& WithTestConfigurationIds(TestConfigurationIdsT&& value) { SetTestConfigurationIds(std::forward<TestConfigurationIdsT>(value)); return *this;}
    template<typename TestConfigurationIdsT = Aws::String>
    ListTestConfigurationsRequest& AddTestConfigurationIds(TestConfigurationIdsT&& value) { m_testConfigurationIdsHasBeenSet = true; m_testConfigurationIds.emplace_back(std::forward<TestConfigurationIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next token for the test configurations.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTestConfigurationsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum results of the test configuration.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListTestConfigurationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_testConfigurationIds;
    bool m_testConfigurationIdsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
