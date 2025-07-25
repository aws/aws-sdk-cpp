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
   * <p>The input for the <a>DescribeConfigurationRecorders</a> action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeConfigurationRecordersRequest">AWS
   * API Reference</a></p>
   */
  class DescribeConfigurationRecordersRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API DescribeConfigurationRecordersRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeConfigurationRecorders"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A list of names of the configuration recorders that you want to specify.</p>
     *  <p>When making a request to this operation, you can only specify one
     * configuration recorder.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetConfigurationRecorderNames() const { return m_configurationRecorderNames; }
    inline bool ConfigurationRecorderNamesHasBeenSet() const { return m_configurationRecorderNamesHasBeenSet; }
    template<typename ConfigurationRecorderNamesT = Aws::Vector<Aws::String>>
    void SetConfigurationRecorderNames(ConfigurationRecorderNamesT&& value) { m_configurationRecorderNamesHasBeenSet = true; m_configurationRecorderNames = std::forward<ConfigurationRecorderNamesT>(value); }
    template<typename ConfigurationRecorderNamesT = Aws::Vector<Aws::String>>
    DescribeConfigurationRecordersRequest& WithConfigurationRecorderNames(ConfigurationRecorderNamesT&& value) { SetConfigurationRecorderNames(std::forward<ConfigurationRecorderNamesT>(value)); return *this;}
    template<typename ConfigurationRecorderNamesT = Aws::String>
    DescribeConfigurationRecordersRequest& AddConfigurationRecorderNames(ConfigurationRecorderNamesT&& value) { m_configurationRecorderNamesHasBeenSet = true; m_configurationRecorderNames.emplace_back(std::forward<ConfigurationRecorderNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>For service-linked configuration recorders, you can use the service principal
     * of the linked Amazon Web Services service to specify the configuration
     * recorder.</p>
     */
    inline const Aws::String& GetServicePrincipal() const { return m_servicePrincipal; }
    inline bool ServicePrincipalHasBeenSet() const { return m_servicePrincipalHasBeenSet; }
    template<typename ServicePrincipalT = Aws::String>
    void SetServicePrincipal(ServicePrincipalT&& value) { m_servicePrincipalHasBeenSet = true; m_servicePrincipal = std::forward<ServicePrincipalT>(value); }
    template<typename ServicePrincipalT = Aws::String>
    DescribeConfigurationRecordersRequest& WithServicePrincipal(ServicePrincipalT&& value) { SetServicePrincipal(std::forward<ServicePrincipalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the configuration recorder that you want to
     * specify.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    DescribeConfigurationRecordersRequest& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_configurationRecorderNames;
    bool m_configurationRecorderNamesHasBeenSet = false;

    Aws::String m_servicePrincipal;
    bool m_servicePrincipalHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
