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
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   */
  class AWS_KINESISANALYTICSV2_API ListApplicationSnapshotsRequest : public KinesisAnalyticsV2Request
  {
  public:
    ListApplicationSnapshotsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListApplicationSnapshots"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of an existing application.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The name of an existing application.</p>
     */
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }

    /**
     * <p>The name of an existing application.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The name of an existing application.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }

    /**
     * <p>The name of an existing application.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>The name of an existing application.</p>
     */
    inline ListApplicationSnapshotsRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of an existing application.</p>
     */
    inline ListApplicationSnapshotsRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}

    /**
     * <p>The name of an existing application.</p>
     */
    inline ListApplicationSnapshotsRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}


    /**
     * <p>The maximum number of application snapshots to list.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of application snapshots to list.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of application snapshots to list.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of application snapshots to list.</p>
     */
    inline ListApplicationSnapshotsRequest& WithLimit(int value) { SetLimit(value); return *this;}


    /**
     * <p>Use this parameter if you receive a <code>NextToken</code> response in a
     * previous request that indicates that there is more output available. Set it to
     * the value of the previous call's <code>NextToken</code> response to indicate
     * where the output should continue from. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Use this parameter if you receive a <code>NextToken</code> response in a
     * previous request that indicates that there is more output available. Set it to
     * the value of the previous call's <code>NextToken</code> response to indicate
     * where the output should continue from. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Use this parameter if you receive a <code>NextToken</code> response in a
     * previous request that indicates that there is more output available. Set it to
     * the value of the previous call's <code>NextToken</code> response to indicate
     * where the output should continue from. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Use this parameter if you receive a <code>NextToken</code> response in a
     * previous request that indicates that there is more output available. Set it to
     * the value of the previous call's <code>NextToken</code> response to indicate
     * where the output should continue from. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Use this parameter if you receive a <code>NextToken</code> response in a
     * previous request that indicates that there is more output available. Set it to
     * the value of the previous call's <code>NextToken</code> response to indicate
     * where the output should continue from. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Use this parameter if you receive a <code>NextToken</code> response in a
     * previous request that indicates that there is more output available. Set it to
     * the value of the previous call's <code>NextToken</code> response to indicate
     * where the output should continue from. </p>
     */
    inline ListApplicationSnapshotsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Use this parameter if you receive a <code>NextToken</code> response in a
     * previous request that indicates that there is more output available. Set it to
     * the value of the previous call's <code>NextToken</code> response to indicate
     * where the output should continue from. </p>
     */
    inline ListApplicationSnapshotsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Use this parameter if you receive a <code>NextToken</code> response in a
     * previous request that indicates that there is more output available. Set it to
     * the value of the previous call's <code>NextToken</code> response to indicate
     * where the output should continue from. </p>
     */
    inline ListApplicationSnapshotsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet;

    int m_limit;
    bool m_limitHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
