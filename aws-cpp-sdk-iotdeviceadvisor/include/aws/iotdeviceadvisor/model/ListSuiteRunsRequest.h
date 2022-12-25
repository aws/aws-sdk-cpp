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
    AWS_IOTDEVICEADVISOR_API ListSuiteRunsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSuiteRuns"; }

    AWS_IOTDEVICEADVISOR_API Aws::String SerializePayload() const override;

    AWS_IOTDEVICEADVISOR_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>Lists the test suite runs of the specified test suite based on suite
     * definition ID.</p>
     */
    inline const Aws::String& GetSuiteDefinitionId() const{ return m_suiteDefinitionId; }

    /**
     * <p>Lists the test suite runs of the specified test suite based on suite
     * definition ID.</p>
     */
    inline bool SuiteDefinitionIdHasBeenSet() const { return m_suiteDefinitionIdHasBeenSet; }

    /**
     * <p>Lists the test suite runs of the specified test suite based on suite
     * definition ID.</p>
     */
    inline void SetSuiteDefinitionId(const Aws::String& value) { m_suiteDefinitionIdHasBeenSet = true; m_suiteDefinitionId = value; }

    /**
     * <p>Lists the test suite runs of the specified test suite based on suite
     * definition ID.</p>
     */
    inline void SetSuiteDefinitionId(Aws::String&& value) { m_suiteDefinitionIdHasBeenSet = true; m_suiteDefinitionId = std::move(value); }

    /**
     * <p>Lists the test suite runs of the specified test suite based on suite
     * definition ID.</p>
     */
    inline void SetSuiteDefinitionId(const char* value) { m_suiteDefinitionIdHasBeenSet = true; m_suiteDefinitionId.assign(value); }

    /**
     * <p>Lists the test suite runs of the specified test suite based on suite
     * definition ID.</p>
     */
    inline ListSuiteRunsRequest& WithSuiteDefinitionId(const Aws::String& value) { SetSuiteDefinitionId(value); return *this;}

    /**
     * <p>Lists the test suite runs of the specified test suite based on suite
     * definition ID.</p>
     */
    inline ListSuiteRunsRequest& WithSuiteDefinitionId(Aws::String&& value) { SetSuiteDefinitionId(std::move(value)); return *this;}

    /**
     * <p>Lists the test suite runs of the specified test suite based on suite
     * definition ID.</p>
     */
    inline ListSuiteRunsRequest& WithSuiteDefinitionId(const char* value) { SetSuiteDefinitionId(value); return *this;}


    /**
     * <p>Must be passed along with <code>suiteDefinitionId</code>. Lists the test
     * suite runs of the specified test suite based on suite definition version.</p>
     */
    inline const Aws::String& GetSuiteDefinitionVersion() const{ return m_suiteDefinitionVersion; }

    /**
     * <p>Must be passed along with <code>suiteDefinitionId</code>. Lists the test
     * suite runs of the specified test suite based on suite definition version.</p>
     */
    inline bool SuiteDefinitionVersionHasBeenSet() const { return m_suiteDefinitionVersionHasBeenSet; }

    /**
     * <p>Must be passed along with <code>suiteDefinitionId</code>. Lists the test
     * suite runs of the specified test suite based on suite definition version.</p>
     */
    inline void SetSuiteDefinitionVersion(const Aws::String& value) { m_suiteDefinitionVersionHasBeenSet = true; m_suiteDefinitionVersion = value; }

    /**
     * <p>Must be passed along with <code>suiteDefinitionId</code>. Lists the test
     * suite runs of the specified test suite based on suite definition version.</p>
     */
    inline void SetSuiteDefinitionVersion(Aws::String&& value) { m_suiteDefinitionVersionHasBeenSet = true; m_suiteDefinitionVersion = std::move(value); }

    /**
     * <p>Must be passed along with <code>suiteDefinitionId</code>. Lists the test
     * suite runs of the specified test suite based on suite definition version.</p>
     */
    inline void SetSuiteDefinitionVersion(const char* value) { m_suiteDefinitionVersionHasBeenSet = true; m_suiteDefinitionVersion.assign(value); }

    /**
     * <p>Must be passed along with <code>suiteDefinitionId</code>. Lists the test
     * suite runs of the specified test suite based on suite definition version.</p>
     */
    inline ListSuiteRunsRequest& WithSuiteDefinitionVersion(const Aws::String& value) { SetSuiteDefinitionVersion(value); return *this;}

    /**
     * <p>Must be passed along with <code>suiteDefinitionId</code>. Lists the test
     * suite runs of the specified test suite based on suite definition version.</p>
     */
    inline ListSuiteRunsRequest& WithSuiteDefinitionVersion(Aws::String&& value) { SetSuiteDefinitionVersion(std::move(value)); return *this;}

    /**
     * <p>Must be passed along with <code>suiteDefinitionId</code>. Lists the test
     * suite runs of the specified test suite based on suite definition version.</p>
     */
    inline ListSuiteRunsRequest& WithSuiteDefinitionVersion(const char* value) { SetSuiteDefinitionVersion(value); return *this;}


    /**
     * <p>The maximum number of results to return at once.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return at once.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return at once.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return at once.</p>
     */
    inline ListSuiteRunsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>A token to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token to retrieve the next set of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token to retrieve the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token to retrieve the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token to retrieve the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token to retrieve the next set of results.</p>
     */
    inline ListSuiteRunsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token to retrieve the next set of results.</p>
     */
    inline ListSuiteRunsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token to retrieve the next set of results.</p>
     */
    inline ListSuiteRunsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_suiteDefinitionId;
    bool m_suiteDefinitionIdHasBeenSet = false;

    Aws::String m_suiteDefinitionVersion;
    bool m_suiteDefinitionVersionHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
