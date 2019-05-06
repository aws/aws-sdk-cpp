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
  class AWS_CONFIGSERVICE_API DescribeConfigurationRecorderStatusRequest : public ConfigServiceRequest
  {
  public:
    DescribeConfigurationRecorderStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeConfigurationRecorderStatus"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name(s) of the configuration recorder. If the name is not specified, the
     * action returns the current status of all the configuration recorders associated
     * with the account.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConfigurationRecorderNames() const{ return m_configurationRecorderNames; }

    /**
     * <p>The name(s) of the configuration recorder. If the name is not specified, the
     * action returns the current status of all the configuration recorders associated
     * with the account.</p>
     */
    inline bool ConfigurationRecorderNamesHasBeenSet() const { return m_configurationRecorderNamesHasBeenSet; }

    /**
     * <p>The name(s) of the configuration recorder. If the name is not specified, the
     * action returns the current status of all the configuration recorders associated
     * with the account.</p>
     */
    inline void SetConfigurationRecorderNames(const Aws::Vector<Aws::String>& value) { m_configurationRecorderNamesHasBeenSet = true; m_configurationRecorderNames = value; }

    /**
     * <p>The name(s) of the configuration recorder. If the name is not specified, the
     * action returns the current status of all the configuration recorders associated
     * with the account.</p>
     */
    inline void SetConfigurationRecorderNames(Aws::Vector<Aws::String>&& value) { m_configurationRecorderNamesHasBeenSet = true; m_configurationRecorderNames = std::move(value); }

    /**
     * <p>The name(s) of the configuration recorder. If the name is not specified, the
     * action returns the current status of all the configuration recorders associated
     * with the account.</p>
     */
    inline DescribeConfigurationRecorderStatusRequest& WithConfigurationRecorderNames(const Aws::Vector<Aws::String>& value) { SetConfigurationRecorderNames(value); return *this;}

    /**
     * <p>The name(s) of the configuration recorder. If the name is not specified, the
     * action returns the current status of all the configuration recorders associated
     * with the account.</p>
     */
    inline DescribeConfigurationRecorderStatusRequest& WithConfigurationRecorderNames(Aws::Vector<Aws::String>&& value) { SetConfigurationRecorderNames(std::move(value)); return *this;}

    /**
     * <p>The name(s) of the configuration recorder. If the name is not specified, the
     * action returns the current status of all the configuration recorders associated
     * with the account.</p>
     */
    inline DescribeConfigurationRecorderStatusRequest& AddConfigurationRecorderNames(const Aws::String& value) { m_configurationRecorderNamesHasBeenSet = true; m_configurationRecorderNames.push_back(value); return *this; }

    /**
     * <p>The name(s) of the configuration recorder. If the name is not specified, the
     * action returns the current status of all the configuration recorders associated
     * with the account.</p>
     */
    inline DescribeConfigurationRecorderStatusRequest& AddConfigurationRecorderNames(Aws::String&& value) { m_configurationRecorderNamesHasBeenSet = true; m_configurationRecorderNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The name(s) of the configuration recorder. If the name is not specified, the
     * action returns the current status of all the configuration recorders associated
     * with the account.</p>
     */
    inline DescribeConfigurationRecorderStatusRequest& AddConfigurationRecorderNames(const char* value) { m_configurationRecorderNamesHasBeenSet = true; m_configurationRecorderNames.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_configurationRecorderNames;
    bool m_configurationRecorderNamesHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
