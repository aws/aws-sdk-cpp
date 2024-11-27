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
   * <p>The input for the <a>DescribeConfigurationRecorderStatus</a>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeConfigurationRecorderStatusRequest">AWS
   * API Reference</a></p>
   */
  class DescribeConfigurationRecorderStatusRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API DescribeConfigurationRecorderStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeConfigurationRecorderStatus"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the configuration recorder. If the name is not specified, the
     * opertation returns the status for the customer managed configuration recorder
     * configured for the account, if applicable.</p>  <p>When making a request
     * to this operation, you can only specify one configuration recorder.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetConfigurationRecorderNames() const{ return m_configurationRecorderNames; }
    inline bool ConfigurationRecorderNamesHasBeenSet() const { return m_configurationRecorderNamesHasBeenSet; }
    inline void SetConfigurationRecorderNames(const Aws::Vector<Aws::String>& value) { m_configurationRecorderNamesHasBeenSet = true; m_configurationRecorderNames = value; }
    inline void SetConfigurationRecorderNames(Aws::Vector<Aws::String>&& value) { m_configurationRecorderNamesHasBeenSet = true; m_configurationRecorderNames = std::move(value); }
    inline DescribeConfigurationRecorderStatusRequest& WithConfigurationRecorderNames(const Aws::Vector<Aws::String>& value) { SetConfigurationRecorderNames(value); return *this;}
    inline DescribeConfigurationRecorderStatusRequest& WithConfigurationRecorderNames(Aws::Vector<Aws::String>&& value) { SetConfigurationRecorderNames(std::move(value)); return *this;}
    inline DescribeConfigurationRecorderStatusRequest& AddConfigurationRecorderNames(const Aws::String& value) { m_configurationRecorderNamesHasBeenSet = true; m_configurationRecorderNames.push_back(value); return *this; }
    inline DescribeConfigurationRecorderStatusRequest& AddConfigurationRecorderNames(Aws::String&& value) { m_configurationRecorderNamesHasBeenSet = true; m_configurationRecorderNames.push_back(std::move(value)); return *this; }
    inline DescribeConfigurationRecorderStatusRequest& AddConfigurationRecorderNames(const char* value) { m_configurationRecorderNamesHasBeenSet = true; m_configurationRecorderNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>For service-linked configuration recorders, you can use the service principal
     * of the linked Amazon Web Services service to specify the configuration
     * recorder.</p>
     */
    inline const Aws::String& GetServicePrincipal() const{ return m_servicePrincipal; }
    inline bool ServicePrincipalHasBeenSet() const { return m_servicePrincipalHasBeenSet; }
    inline void SetServicePrincipal(const Aws::String& value) { m_servicePrincipalHasBeenSet = true; m_servicePrincipal = value; }
    inline void SetServicePrincipal(Aws::String&& value) { m_servicePrincipalHasBeenSet = true; m_servicePrincipal = std::move(value); }
    inline void SetServicePrincipal(const char* value) { m_servicePrincipalHasBeenSet = true; m_servicePrincipal.assign(value); }
    inline DescribeConfigurationRecorderStatusRequest& WithServicePrincipal(const Aws::String& value) { SetServicePrincipal(value); return *this;}
    inline DescribeConfigurationRecorderStatusRequest& WithServicePrincipal(Aws::String&& value) { SetServicePrincipal(std::move(value)); return *this;}
    inline DescribeConfigurationRecorderStatusRequest& WithServicePrincipal(const char* value) { SetServicePrincipal(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the configuration recorder that you want to
     * specify.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline DescribeConfigurationRecorderStatusRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline DescribeConfigurationRecorderStatusRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline DescribeConfigurationRecorderStatusRequest& WithArn(const char* value) { SetArn(value); return *this;}
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
