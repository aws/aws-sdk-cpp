/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeEnvironmentsRequest : public ElasticBeanstalkRequest
  {
  public:
    AWS_ELASTICBEANSTALK_API DescribeEnvironmentsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeEnvironments"; }

    AWS_ELASTICBEANSTALK_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICBEANSTALK_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * include only those that are associated with this application.</p>
     */
    inline const Aws::String& GetApplicationName() const { return m_applicationName; }
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }
    template<typename ApplicationNameT = Aws::String>
    void SetApplicationName(ApplicationNameT&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::forward<ApplicationNameT>(value); }
    template<typename ApplicationNameT = Aws::String>
    DescribeEnvironmentsRequest& WithApplicationName(ApplicationNameT&& value) { SetApplicationName(std::forward<ApplicationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * include only those that are associated with this application version.</p>
     */
    inline const Aws::String& GetVersionLabel() const { return m_versionLabel; }
    inline bool VersionLabelHasBeenSet() const { return m_versionLabelHasBeenSet; }
    template<typename VersionLabelT = Aws::String>
    void SetVersionLabel(VersionLabelT&& value) { m_versionLabelHasBeenSet = true; m_versionLabel = std::forward<VersionLabelT>(value); }
    template<typename VersionLabelT = Aws::String>
    DescribeEnvironmentsRequest& WithVersionLabel(VersionLabelT&& value) { SetVersionLabel(std::forward<VersionLabelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * include only those that have the specified IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEnvironmentIds() const { return m_environmentIds; }
    inline bool EnvironmentIdsHasBeenSet() const { return m_environmentIdsHasBeenSet; }
    template<typename EnvironmentIdsT = Aws::Vector<Aws::String>>
    void SetEnvironmentIds(EnvironmentIdsT&& value) { m_environmentIdsHasBeenSet = true; m_environmentIds = std::forward<EnvironmentIdsT>(value); }
    template<typename EnvironmentIdsT = Aws::Vector<Aws::String>>
    DescribeEnvironmentsRequest& WithEnvironmentIds(EnvironmentIdsT&& value) { SetEnvironmentIds(std::forward<EnvironmentIdsT>(value)); return *this;}
    template<typename EnvironmentIdsT = Aws::String>
    DescribeEnvironmentsRequest& AddEnvironmentIds(EnvironmentIdsT&& value) { m_environmentIdsHasBeenSet = true; m_environmentIds.emplace_back(std::forward<EnvironmentIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * include only those that have the specified names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEnvironmentNames() const { return m_environmentNames; }
    inline bool EnvironmentNamesHasBeenSet() const { return m_environmentNamesHasBeenSet; }
    template<typename EnvironmentNamesT = Aws::Vector<Aws::String>>
    void SetEnvironmentNames(EnvironmentNamesT&& value) { m_environmentNamesHasBeenSet = true; m_environmentNames = std::forward<EnvironmentNamesT>(value); }
    template<typename EnvironmentNamesT = Aws::Vector<Aws::String>>
    DescribeEnvironmentsRequest& WithEnvironmentNames(EnvironmentNamesT&& value) { SetEnvironmentNames(std::forward<EnvironmentNamesT>(value)); return *this;}
    template<typename EnvironmentNamesT = Aws::String>
    DescribeEnvironmentsRequest& AddEnvironmentNames(EnvironmentNamesT&& value) { m_environmentNamesHasBeenSet = true; m_environmentNames.emplace_back(std::forward<EnvironmentNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether to include deleted environments:</p> <p> <code>true</code>:
     * Environments that have been deleted after <code>IncludedDeletedBackTo</code> are
     * displayed.</p> <p> <code>false</code>: Do not include deleted environments.</p>
     */
    inline bool GetIncludeDeleted() const { return m_includeDeleted; }
    inline bool IncludeDeletedHasBeenSet() const { return m_includeDeletedHasBeenSet; }
    inline void SetIncludeDeleted(bool value) { m_includeDeletedHasBeenSet = true; m_includeDeleted = value; }
    inline DescribeEnvironmentsRequest& WithIncludeDeleted(bool value) { SetIncludeDeleted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> If specified when <code>IncludeDeleted</code> is set to <code>true</code>,
     * then environments deleted after this date are displayed. </p>
     */
    inline const Aws::Utils::DateTime& GetIncludedDeletedBackTo() const { return m_includedDeletedBackTo; }
    inline bool IncludedDeletedBackToHasBeenSet() const { return m_includedDeletedBackToHasBeenSet; }
    template<typename IncludedDeletedBackToT = Aws::Utils::DateTime>
    void SetIncludedDeletedBackTo(IncludedDeletedBackToT&& value) { m_includedDeletedBackToHasBeenSet = true; m_includedDeletedBackTo = std::forward<IncludedDeletedBackToT>(value); }
    template<typename IncludedDeletedBackToT = Aws::Utils::DateTime>
    DescribeEnvironmentsRequest& WithIncludedDeletedBackTo(IncludedDeletedBackToT&& value) { SetIncludedDeletedBackTo(std::forward<IncludedDeletedBackToT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For a paginated request. Specify a maximum number of environments to include
     * in each response.</p> <p>If no <code>MaxRecords</code> is specified, all
     * available environments are retrieved in a single response.</p>
     */
    inline int GetMaxRecords() const { return m_maxRecords; }
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }
    inline DescribeEnvironmentsRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For a paginated request. Specify a token from a previous response page to
     * retrieve the next response page. All other parameter values must be identical to
     * the ones specified in the initial request.</p> <p>If no <code>NextToken</code>
     * is specified, the first page is retrieved.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeEnvironmentsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    Aws::String m_versionLabel;
    bool m_versionLabelHasBeenSet = false;

    Aws::Vector<Aws::String> m_environmentIds;
    bool m_environmentIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_environmentNames;
    bool m_environmentNamesHasBeenSet = false;

    bool m_includeDeleted{false};
    bool m_includeDeletedHasBeenSet = false;

    Aws::Utils::DateTime m_includedDeletedBackTo{};
    bool m_includedDeletedBackToHasBeenSet = false;

    int m_maxRecords{0};
    bool m_maxRecordsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
