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
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{

  /**
   * <p>Request to describe one or more environments.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribeEnvironmentsMessage">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICBEANSTALK_API DescribeEnvironmentsRequest : public ElasticBeanstalkRequest
  {
  public:
    DescribeEnvironmentsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeEnvironments"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * include only those that are associated with this application.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * include only those that are associated with this application.</p>
     */
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * include only those that are associated with this application.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * include only those that are associated with this application.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * include only those that are associated with this application.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * include only those that are associated with this application.</p>
     */
    inline DescribeEnvironmentsRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * include only those that are associated with this application.</p>
     */
    inline DescribeEnvironmentsRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * include only those that are associated with this application.</p>
     */
    inline DescribeEnvironmentsRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}


    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * include only those that are associated with this application version.</p>
     */
    inline const Aws::String& GetVersionLabel() const{ return m_versionLabel; }

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * include only those that are associated with this application version.</p>
     */
    inline bool VersionLabelHasBeenSet() const { return m_versionLabelHasBeenSet; }

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * include only those that are associated with this application version.</p>
     */
    inline void SetVersionLabel(const Aws::String& value) { m_versionLabelHasBeenSet = true; m_versionLabel = value; }

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * include only those that are associated with this application version.</p>
     */
    inline void SetVersionLabel(Aws::String&& value) { m_versionLabelHasBeenSet = true; m_versionLabel = std::move(value); }

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * include only those that are associated with this application version.</p>
     */
    inline void SetVersionLabel(const char* value) { m_versionLabelHasBeenSet = true; m_versionLabel.assign(value); }

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * include only those that are associated with this application version.</p>
     */
    inline DescribeEnvironmentsRequest& WithVersionLabel(const Aws::String& value) { SetVersionLabel(value); return *this;}

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * include only those that are associated with this application version.</p>
     */
    inline DescribeEnvironmentsRequest& WithVersionLabel(Aws::String&& value) { SetVersionLabel(std::move(value)); return *this;}

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * include only those that are associated with this application version.</p>
     */
    inline DescribeEnvironmentsRequest& WithVersionLabel(const char* value) { SetVersionLabel(value); return *this;}


    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * include only those that have the specified IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEnvironmentIds() const{ return m_environmentIds; }

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * include only those that have the specified IDs.</p>
     */
    inline bool EnvironmentIdsHasBeenSet() const { return m_environmentIdsHasBeenSet; }

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * include only those that have the specified IDs.</p>
     */
    inline void SetEnvironmentIds(const Aws::Vector<Aws::String>& value) { m_environmentIdsHasBeenSet = true; m_environmentIds = value; }

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * include only those that have the specified IDs.</p>
     */
    inline void SetEnvironmentIds(Aws::Vector<Aws::String>&& value) { m_environmentIdsHasBeenSet = true; m_environmentIds = std::move(value); }

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * include only those that have the specified IDs.</p>
     */
    inline DescribeEnvironmentsRequest& WithEnvironmentIds(const Aws::Vector<Aws::String>& value) { SetEnvironmentIds(value); return *this;}

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * include only those that have the specified IDs.</p>
     */
    inline DescribeEnvironmentsRequest& WithEnvironmentIds(Aws::Vector<Aws::String>&& value) { SetEnvironmentIds(std::move(value)); return *this;}

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * include only those that have the specified IDs.</p>
     */
    inline DescribeEnvironmentsRequest& AddEnvironmentIds(const Aws::String& value) { m_environmentIdsHasBeenSet = true; m_environmentIds.push_back(value); return *this; }

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * include only those that have the specified IDs.</p>
     */
    inline DescribeEnvironmentsRequest& AddEnvironmentIds(Aws::String&& value) { m_environmentIdsHasBeenSet = true; m_environmentIds.push_back(std::move(value)); return *this; }

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * include only those that have the specified IDs.</p>
     */
    inline DescribeEnvironmentsRequest& AddEnvironmentIds(const char* value) { m_environmentIdsHasBeenSet = true; m_environmentIds.push_back(value); return *this; }


    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * include only those that have the specified names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEnvironmentNames() const{ return m_environmentNames; }

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * include only those that have the specified names.</p>
     */
    inline bool EnvironmentNamesHasBeenSet() const { return m_environmentNamesHasBeenSet; }

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * include only those that have the specified names.</p>
     */
    inline void SetEnvironmentNames(const Aws::Vector<Aws::String>& value) { m_environmentNamesHasBeenSet = true; m_environmentNames = value; }

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * include only those that have the specified names.</p>
     */
    inline void SetEnvironmentNames(Aws::Vector<Aws::String>&& value) { m_environmentNamesHasBeenSet = true; m_environmentNames = std::move(value); }

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * include only those that have the specified names.</p>
     */
    inline DescribeEnvironmentsRequest& WithEnvironmentNames(const Aws::Vector<Aws::String>& value) { SetEnvironmentNames(value); return *this;}

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * include only those that have the specified names.</p>
     */
    inline DescribeEnvironmentsRequest& WithEnvironmentNames(Aws::Vector<Aws::String>&& value) { SetEnvironmentNames(std::move(value)); return *this;}

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * include only those that have the specified names.</p>
     */
    inline DescribeEnvironmentsRequest& AddEnvironmentNames(const Aws::String& value) { m_environmentNamesHasBeenSet = true; m_environmentNames.push_back(value); return *this; }

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * include only those that have the specified names.</p>
     */
    inline DescribeEnvironmentsRequest& AddEnvironmentNames(Aws::String&& value) { m_environmentNamesHasBeenSet = true; m_environmentNames.push_back(std::move(value)); return *this; }

    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * include only those that have the specified names.</p>
     */
    inline DescribeEnvironmentsRequest& AddEnvironmentNames(const char* value) { m_environmentNamesHasBeenSet = true; m_environmentNames.push_back(value); return *this; }


    /**
     * <p>Indicates whether to include deleted environments:</p> <p> <code>true</code>:
     * Environments that have been deleted after <code>IncludedDeletedBackTo</code> are
     * displayed.</p> <p> <code>false</code>: Do not include deleted environments.</p>
     */
    inline bool GetIncludeDeleted() const{ return m_includeDeleted; }

    /**
     * <p>Indicates whether to include deleted environments:</p> <p> <code>true</code>:
     * Environments that have been deleted after <code>IncludedDeletedBackTo</code> are
     * displayed.</p> <p> <code>false</code>: Do not include deleted environments.</p>
     */
    inline bool IncludeDeletedHasBeenSet() const { return m_includeDeletedHasBeenSet; }

    /**
     * <p>Indicates whether to include deleted environments:</p> <p> <code>true</code>:
     * Environments that have been deleted after <code>IncludedDeletedBackTo</code> are
     * displayed.</p> <p> <code>false</code>: Do not include deleted environments.</p>
     */
    inline void SetIncludeDeleted(bool value) { m_includeDeletedHasBeenSet = true; m_includeDeleted = value; }

    /**
     * <p>Indicates whether to include deleted environments:</p> <p> <code>true</code>:
     * Environments that have been deleted after <code>IncludedDeletedBackTo</code> are
     * displayed.</p> <p> <code>false</code>: Do not include deleted environments.</p>
     */
    inline DescribeEnvironmentsRequest& WithIncludeDeleted(bool value) { SetIncludeDeleted(value); return *this;}


    /**
     * <p> If specified when <code>IncludeDeleted</code> is set to <code>true</code>,
     * then environments deleted after this date are displayed. </p>
     */
    inline const Aws::Utils::DateTime& GetIncludedDeletedBackTo() const{ return m_includedDeletedBackTo; }

    /**
     * <p> If specified when <code>IncludeDeleted</code> is set to <code>true</code>,
     * then environments deleted after this date are displayed. </p>
     */
    inline bool IncludedDeletedBackToHasBeenSet() const { return m_includedDeletedBackToHasBeenSet; }

    /**
     * <p> If specified when <code>IncludeDeleted</code> is set to <code>true</code>,
     * then environments deleted after this date are displayed. </p>
     */
    inline void SetIncludedDeletedBackTo(const Aws::Utils::DateTime& value) { m_includedDeletedBackToHasBeenSet = true; m_includedDeletedBackTo = value; }

    /**
     * <p> If specified when <code>IncludeDeleted</code> is set to <code>true</code>,
     * then environments deleted after this date are displayed. </p>
     */
    inline void SetIncludedDeletedBackTo(Aws::Utils::DateTime&& value) { m_includedDeletedBackToHasBeenSet = true; m_includedDeletedBackTo = std::move(value); }

    /**
     * <p> If specified when <code>IncludeDeleted</code> is set to <code>true</code>,
     * then environments deleted after this date are displayed. </p>
     */
    inline DescribeEnvironmentsRequest& WithIncludedDeletedBackTo(const Aws::Utils::DateTime& value) { SetIncludedDeletedBackTo(value); return *this;}

    /**
     * <p> If specified when <code>IncludeDeleted</code> is set to <code>true</code>,
     * then environments deleted after this date are displayed. </p>
     */
    inline DescribeEnvironmentsRequest& WithIncludedDeletedBackTo(Aws::Utils::DateTime&& value) { SetIncludedDeletedBackTo(std::move(value)); return *this;}


    /**
     * <p>For a paginated request. Specify a maximum number of environments to include
     * in each response.</p> <p>If no <code>MaxRecords</code> is specified, all
     * available environments are retrieved in a single response.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p>For a paginated request. Specify a maximum number of environments to include
     * in each response.</p> <p>If no <code>MaxRecords</code> is specified, all
     * available environments are retrieved in a single response.</p>
     */
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }

    /**
     * <p>For a paginated request. Specify a maximum number of environments to include
     * in each response.</p> <p>If no <code>MaxRecords</code> is specified, all
     * available environments are retrieved in a single response.</p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p>For a paginated request. Specify a maximum number of environments to include
     * in each response.</p> <p>If no <code>MaxRecords</code> is specified, all
     * available environments are retrieved in a single response.</p>
     */
    inline DescribeEnvironmentsRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}


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
    inline DescribeEnvironmentsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>For a paginated request. Specify a token from a previous response page to
     * retrieve the next response page. All other parameter values must be identical to
     * the ones specified in the initial request.</p> <p>If no <code>NextToken</code>
     * is specified, the first page is retrieved.</p>
     */
    inline DescribeEnvironmentsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>For a paginated request. Specify a token from a previous response page to
     * retrieve the next response page. All other parameter values must be identical to
     * the ones specified in the initial request.</p> <p>If no <code>NextToken</code>
     * is specified, the first page is retrieved.</p>
     */
    inline DescribeEnvironmentsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet;

    Aws::String m_versionLabel;
    bool m_versionLabelHasBeenSet;

    Aws::Vector<Aws::String> m_environmentIds;
    bool m_environmentIdsHasBeenSet;

    Aws::Vector<Aws::String> m_environmentNames;
    bool m_environmentNamesHasBeenSet;

    bool m_includeDeleted;
    bool m_includeDeletedHasBeenSet;

    Aws::Utils::DateTime m_includedDeletedBackTo;
    bool m_includedDeletedBackToHasBeenSet;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
