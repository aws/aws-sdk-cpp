/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/elasticbeanstalk/ElasticBeanstalkRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{

  /**
   * <p>Request to describe one or more applications.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DescribeApplicationsMessage">AWS
   * API Reference</a></p>
   */
  class DescribeApplicationsRequest : public ElasticBeanstalkRequest
  {
  public:
    AWS_ELASTICBEANSTALK_API DescribeApplicationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeApplications"; }

    AWS_ELASTICBEANSTALK_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICBEANSTALK_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>If specified, AWS Elastic Beanstalk restricts the returned descriptions to
     * only include those with the specified names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetApplicationNames() const { return m_applicationNames; }
    inline bool ApplicationNamesHasBeenSet() const { return m_applicationNamesHasBeenSet; }
    template<typename ApplicationNamesT = Aws::Vector<Aws::String>>
    void SetApplicationNames(ApplicationNamesT&& value) { m_applicationNamesHasBeenSet = true; m_applicationNames = std::forward<ApplicationNamesT>(value); }
    template<typename ApplicationNamesT = Aws::Vector<Aws::String>>
    DescribeApplicationsRequest& WithApplicationNames(ApplicationNamesT&& value) { SetApplicationNames(std::forward<ApplicationNamesT>(value)); return *this;}
    template<typename ApplicationNamesT = Aws::String>
    DescribeApplicationsRequest& AddApplicationNames(ApplicationNamesT&& value) { m_applicationNamesHasBeenSet = true; m_applicationNames.emplace_back(std::forward<ApplicationNamesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_applicationNames;
    bool m_applicationNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
