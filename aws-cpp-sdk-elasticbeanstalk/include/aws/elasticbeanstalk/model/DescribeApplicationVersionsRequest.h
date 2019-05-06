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
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/elasticbeanstalk/ElasticBeanstalkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{

  /**
   * <p>Request to describe application versions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribeApplicationVersionsMessage">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICBEANSTALK_API DescribeApplicationVersionsRequest : public ElasticBeanstalkRequest
  {
  public:
    DescribeApplicationVersionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeApplicationVersions"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>Specify an application name to show only application versions for that
     * application.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>Specify an application name to show only application versions for that
     * application.</p>
     */
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }

    /**
     * <p>Specify an application name to show only application versions for that
     * application.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>Specify an application name to show only application versions for that
     * application.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }

    /**
     * <p>Specify an application name to show only application versions for that
     * application.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>Specify an application name to show only application versions for that
     * application.</p>
     */
    inline DescribeApplicationVersionsRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>Specify an application name to show only application versions for that
     * application.</p>
     */
    inline DescribeApplicationVersionsRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}

    /**
     * <p>Specify an application name to show only application versions for that
     * application.</p>
     */
    inline DescribeApplicationVersionsRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}


    /**
     * <p>Specify a version label to show a specific application version.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVersionLabels() const{ return m_versionLabels; }

    /**
     * <p>Specify a version label to show a specific application version.</p>
     */
    inline bool VersionLabelsHasBeenSet() const { return m_versionLabelsHasBeenSet; }

    /**
     * <p>Specify a version label to show a specific application version.</p>
     */
    inline void SetVersionLabels(const Aws::Vector<Aws::String>& value) { m_versionLabelsHasBeenSet = true; m_versionLabels = value; }

    /**
     * <p>Specify a version label to show a specific application version.</p>
     */
    inline void SetVersionLabels(Aws::Vector<Aws::String>&& value) { m_versionLabelsHasBeenSet = true; m_versionLabels = std::move(value); }

    /**
     * <p>Specify a version label to show a specific application version.</p>
     */
    inline DescribeApplicationVersionsRequest& WithVersionLabels(const Aws::Vector<Aws::String>& value) { SetVersionLabels(value); return *this;}

    /**
     * <p>Specify a version label to show a specific application version.</p>
     */
    inline DescribeApplicationVersionsRequest& WithVersionLabels(Aws::Vector<Aws::String>&& value) { SetVersionLabels(std::move(value)); return *this;}

    /**
     * <p>Specify a version label to show a specific application version.</p>
     */
    inline DescribeApplicationVersionsRequest& AddVersionLabels(const Aws::String& value) { m_versionLabelsHasBeenSet = true; m_versionLabels.push_back(value); return *this; }

    /**
     * <p>Specify a version label to show a specific application version.</p>
     */
    inline DescribeApplicationVersionsRequest& AddVersionLabels(Aws::String&& value) { m_versionLabelsHasBeenSet = true; m_versionLabels.push_back(std::move(value)); return *this; }

    /**
     * <p>Specify a version label to show a specific application version.</p>
     */
    inline DescribeApplicationVersionsRequest& AddVersionLabels(const char* value) { m_versionLabelsHasBeenSet = true; m_versionLabels.push_back(value); return *this; }


    /**
     * <p>For a paginated request. Specify a maximum number of application versions to
     * include in each response.</p> <p>If no <code>MaxRecords</code> is specified, all
     * available application versions are retrieved in a single response.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p>For a paginated request. Specify a maximum number of application versions to
     * include in each response.</p> <p>If no <code>MaxRecords</code> is specified, all
     * available application versions are retrieved in a single response.</p>
     */
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }

    /**
     * <p>For a paginated request. Specify a maximum number of application versions to
     * include in each response.</p> <p>If no <code>MaxRecords</code> is specified, all
     * available application versions are retrieved in a single response.</p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p>For a paginated request. Specify a maximum number of application versions to
     * include in each response.</p> <p>If no <code>MaxRecords</code> is specified, all
     * available application versions are retrieved in a single response.</p>
     */
    inline DescribeApplicationVersionsRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}


    /**
     * <p>For a paginated request. Specify a token from a previous response page to
     * retrieve the next response page. All other parameter values must be identical to
     * the ones specified in the initial request.</p> <p>If no <code>NextToken</code>
     * is specified, the first page is retrieved.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>For a paginated request. Specify a token from a previous response page to
     * retrieve the next response page. All other parameter values must be identical to
     * the ones specified in the initial request.</p> <p>If no <code>NextToken</code>
     * is specified, the first page is retrieved.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>For a paginated request. Specify a token from a previous response page to
     * retrieve the next response page. All other parameter values must be identical to
     * the ones specified in the initial request.</p> <p>If no <code>NextToken</code>
     * is specified, the first page is retrieved.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>For a paginated request. Specify a token from a previous response page to
     * retrieve the next response page. All other parameter values must be identical to
     * the ones specified in the initial request.</p> <p>If no <code>NextToken</code>
     * is specified, the first page is retrieved.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>For a paginated request. Specify a token from a previous response page to
     * retrieve the next response page. All other parameter values must be identical to
     * the ones specified in the initial request.</p> <p>If no <code>NextToken</code>
     * is specified, the first page is retrieved.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>For a paginated request. Specify a token from a previous response page to
     * retrieve the next response page. All other parameter values must be identical to
     * the ones specified in the initial request.</p> <p>If no <code>NextToken</code>
     * is specified, the first page is retrieved.</p>
     */
    inline DescribeApplicationVersionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>For a paginated request. Specify a token from a previous response page to
     * retrieve the next response page. All other parameter values must be identical to
     * the ones specified in the initial request.</p> <p>If no <code>NextToken</code>
     * is specified, the first page is retrieved.</p>
     */
    inline DescribeApplicationVersionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>For a paginated request. Specify a token from a previous response page to
     * retrieve the next response page. All other parameter values must be identical to
     * the ones specified in the initial request.</p> <p>If no <code>NextToken</code>
     * is specified, the first page is retrieved.</p>
     */
    inline DescribeApplicationVersionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet;

    Aws::Vector<Aws::String> m_versionLabels;
    bool m_versionLabelsHasBeenSet;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
