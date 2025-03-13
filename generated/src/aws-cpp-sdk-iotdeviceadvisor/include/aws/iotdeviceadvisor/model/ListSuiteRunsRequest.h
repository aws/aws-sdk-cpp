/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotdeviceadvisor/IoTDeviceAdvisor_EXPORTS.h>
#include <aws/iotdeviceadvisor/IoTDeviceAdvisorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoTDeviceAdvisor
{
namespace Model
{

  /**
   */
  class ListSuiteRunsRequest : public IoTDeviceAdvisorRequest
  {
  public:
    AWS_IOTDEVICEADVISOR_API ListSuiteRunsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSuiteRuns"; }

    AWS_IOTDEVICEADVISOR_API Aws::String SerializePayload() const override;

    AWS_IOTDEVICEADVISOR_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>Lists the test suite runs of the specified test suite based on suite
     * definition ID.</p>
     */
    inline const Aws::String& GetSuiteDefinitionId() const { return m_suiteDefinitionId; }
    inline bool SuiteDefinitionIdHasBeenSet() const { return m_suiteDefinitionIdHasBeenSet; }
    template<typename SuiteDefinitionIdT = Aws::String>
    void SetSuiteDefinitionId(SuiteDefinitionIdT&& value) { m_suiteDefinitionIdHasBeenSet = true; m_suiteDefinitionId = std::forward<SuiteDefinitionIdT>(value); }
    template<typename SuiteDefinitionIdT = Aws::String>
    ListSuiteRunsRequest& WithSuiteDefinitionId(SuiteDefinitionIdT&& value) { SetSuiteDefinitionId(std::forward<SuiteDefinitionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Must be passed along with <code>suiteDefinitionId</code>. Lists the test
     * suite runs of the specified test suite based on suite definition version.</p>
     */
    inline const Aws::String& GetSuiteDefinitionVersion() const { return m_suiteDefinitionVersion; }
    inline bool SuiteDefinitionVersionHasBeenSet() const { return m_suiteDefinitionVersionHasBeenSet; }
    template<typename SuiteDefinitionVersionT = Aws::String>
    void SetSuiteDefinitionVersion(SuiteDefinitionVersionT&& value) { m_suiteDefinitionVersionHasBeenSet = true; m_suiteDefinitionVersion = std::forward<SuiteDefinitionVersionT>(value); }
    template<typename SuiteDefinitionVersionT = Aws::String>
    ListSuiteRunsRequest& WithSuiteDefinitionVersion(SuiteDefinitionVersionT&& value) { SetSuiteDefinitionVersion(std::forward<SuiteDefinitionVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return at once.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListSuiteRunsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSuiteRunsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_suiteDefinitionId;
    bool m_suiteDefinitionIdHasBeenSet = false;

    Aws::String m_suiteDefinitionVersion;
    bool m_suiteDefinitionVersionHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
