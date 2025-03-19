/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   */
  class DescribeRetentionConfigurationsRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API DescribeRetentionConfigurationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeRetentionConfigurations"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A list of names of retention configurations for which you want details. If
     * you do not specify a name, Config returns details for all the retention
     * configurations for that account.</p>  <p>Currently, Config supports only
     * one retention configuration per region in your account.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetRetentionConfigurationNames() const { return m_retentionConfigurationNames; }
    inline bool RetentionConfigurationNamesHasBeenSet() const { return m_retentionConfigurationNamesHasBeenSet; }
    template<typename RetentionConfigurationNamesT = Aws::Vector<Aws::String>>
    void SetRetentionConfigurationNames(RetentionConfigurationNamesT&& value) { m_retentionConfigurationNamesHasBeenSet = true; m_retentionConfigurationNames = std::forward<RetentionConfigurationNamesT>(value); }
    template<typename RetentionConfigurationNamesT = Aws::Vector<Aws::String>>
    DescribeRetentionConfigurationsRequest& WithRetentionConfigurationNames(RetentionConfigurationNamesT&& value) { SetRetentionConfigurationNames(std::forward<RetentionConfigurationNamesT>(value)); return *this;}
    template<typename RetentionConfigurationNamesT = Aws::String>
    DescribeRetentionConfigurationsRequest& AddRetentionConfigurationNames(RetentionConfigurationNamesT&& value) { m_retentionConfigurationNamesHasBeenSet = true; m_retentionConfigurationNames.emplace_back(std::forward<RetentionConfigurationNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> string returned on a previous page that you use to
     * get the next page of results in a paginated response. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeRetentionConfigurationsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_retentionConfigurationNames;
    bool m_retentionConfigurationNamesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
