/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/discovery/ApplicationDiscoveryServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ApplicationDiscoveryService
{
namespace Model
{

  /**
   */
  class AWS_APPLICATIONDISCOVERYSERVICE_API DescribeContinuousExportsRequest : public ApplicationDiscoveryServiceRequest
  {
  public:
    DescribeContinuousExportsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeContinuousExports"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique IDs assigned to the exports.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExportIds() const{ return m_exportIds; }

    /**
     * <p>The unique IDs assigned to the exports.</p>
     */
    inline bool ExportIdsHasBeenSet() const { return m_exportIdsHasBeenSet; }

    /**
     * <p>The unique IDs assigned to the exports.</p>
     */
    inline void SetExportIds(const Aws::Vector<Aws::String>& value) { m_exportIdsHasBeenSet = true; m_exportIds = value; }

    /**
     * <p>The unique IDs assigned to the exports.</p>
     */
    inline void SetExportIds(Aws::Vector<Aws::String>&& value) { m_exportIdsHasBeenSet = true; m_exportIds = std::move(value); }

    /**
     * <p>The unique IDs assigned to the exports.</p>
     */
    inline DescribeContinuousExportsRequest& WithExportIds(const Aws::Vector<Aws::String>& value) { SetExportIds(value); return *this;}

    /**
     * <p>The unique IDs assigned to the exports.</p>
     */
    inline DescribeContinuousExportsRequest& WithExportIds(Aws::Vector<Aws::String>&& value) { SetExportIds(std::move(value)); return *this;}

    /**
     * <p>The unique IDs assigned to the exports.</p>
     */
    inline DescribeContinuousExportsRequest& AddExportIds(const Aws::String& value) { m_exportIdsHasBeenSet = true; m_exportIds.push_back(value); return *this; }

    /**
     * <p>The unique IDs assigned to the exports.</p>
     */
    inline DescribeContinuousExportsRequest& AddExportIds(Aws::String&& value) { m_exportIdsHasBeenSet = true; m_exportIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The unique IDs assigned to the exports.</p>
     */
    inline DescribeContinuousExportsRequest& AddExportIds(const char* value) { m_exportIdsHasBeenSet = true; m_exportIds.push_back(value); return *this; }


    /**
     * <p>A number between 1 and 100 specifying the maximum number of continuous export
     * descriptions returned.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>A number between 1 and 100 specifying the maximum number of continuous export
     * descriptions returned.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>A number between 1 and 100 specifying the maximum number of continuous export
     * descriptions returned.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>A number between 1 and 100 specifying the maximum number of continuous export
     * descriptions returned.</p>
     */
    inline DescribeContinuousExportsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token from the previous call to <code>DescribeExportTasks</code>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token from the previous call to <code>DescribeExportTasks</code>.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token from the previous call to <code>DescribeExportTasks</code>.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token from the previous call to <code>DescribeExportTasks</code>.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token from the previous call to <code>DescribeExportTasks</code>.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token from the previous call to <code>DescribeExportTasks</code>.</p>
     */
    inline DescribeContinuousExportsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token from the previous call to <code>DescribeExportTasks</code>.</p>
     */
    inline DescribeContinuousExportsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token from the previous call to <code>DescribeExportTasks</code>.</p>
     */
    inline DescribeContinuousExportsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_exportIds;
    bool m_exportIdsHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
