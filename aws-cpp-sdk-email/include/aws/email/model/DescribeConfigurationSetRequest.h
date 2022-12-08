/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/email/SESRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/email/model/ConfigurationSetAttribute.h>
#include <utility>

namespace Aws
{
namespace SES
{
namespace Model
{

  /**
   * <p>Represents a request to return the details of a configuration set.
   * Configuration sets enable you to publish email sending events. For information
   * about using configuration sets, see the <a
   * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/monitor-sending-activity.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DescribeConfigurationSetRequest">AWS
   * API Reference</a></p>
   */
  class DescribeConfigurationSetRequest : public SESRequest
  {
  public:
    AWS_SES_API DescribeConfigurationSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeConfigurationSet"; }

    AWS_SES_API Aws::String SerializePayload() const override;

  protected:
    AWS_SES_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the configuration set to describe.</p>
     */
    inline const Aws::String& GetConfigurationSetName() const{ return m_configurationSetName; }

    /**
     * <p>The name of the configuration set to describe.</p>
     */
    inline bool ConfigurationSetNameHasBeenSet() const { return m_configurationSetNameHasBeenSet; }

    /**
     * <p>The name of the configuration set to describe.</p>
     */
    inline void SetConfigurationSetName(const Aws::String& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = value; }

    /**
     * <p>The name of the configuration set to describe.</p>
     */
    inline void SetConfigurationSetName(Aws::String&& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = std::move(value); }

    /**
     * <p>The name of the configuration set to describe.</p>
     */
    inline void SetConfigurationSetName(const char* value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName.assign(value); }

    /**
     * <p>The name of the configuration set to describe.</p>
     */
    inline DescribeConfigurationSetRequest& WithConfigurationSetName(const Aws::String& value) { SetConfigurationSetName(value); return *this;}

    /**
     * <p>The name of the configuration set to describe.</p>
     */
    inline DescribeConfigurationSetRequest& WithConfigurationSetName(Aws::String&& value) { SetConfigurationSetName(std::move(value)); return *this;}

    /**
     * <p>The name of the configuration set to describe.</p>
     */
    inline DescribeConfigurationSetRequest& WithConfigurationSetName(const char* value) { SetConfigurationSetName(value); return *this;}


    /**
     * <p>A list of configuration set attributes to return.</p>
     */
    inline const Aws::Vector<ConfigurationSetAttribute>& GetConfigurationSetAttributeNames() const{ return m_configurationSetAttributeNames; }

    /**
     * <p>A list of configuration set attributes to return.</p>
     */
    inline bool ConfigurationSetAttributeNamesHasBeenSet() const { return m_configurationSetAttributeNamesHasBeenSet; }

    /**
     * <p>A list of configuration set attributes to return.</p>
     */
    inline void SetConfigurationSetAttributeNames(const Aws::Vector<ConfigurationSetAttribute>& value) { m_configurationSetAttributeNamesHasBeenSet = true; m_configurationSetAttributeNames = value; }

    /**
     * <p>A list of configuration set attributes to return.</p>
     */
    inline void SetConfigurationSetAttributeNames(Aws::Vector<ConfigurationSetAttribute>&& value) { m_configurationSetAttributeNamesHasBeenSet = true; m_configurationSetAttributeNames = std::move(value); }

    /**
     * <p>A list of configuration set attributes to return.</p>
     */
    inline DescribeConfigurationSetRequest& WithConfigurationSetAttributeNames(const Aws::Vector<ConfigurationSetAttribute>& value) { SetConfigurationSetAttributeNames(value); return *this;}

    /**
     * <p>A list of configuration set attributes to return.</p>
     */
    inline DescribeConfigurationSetRequest& WithConfigurationSetAttributeNames(Aws::Vector<ConfigurationSetAttribute>&& value) { SetConfigurationSetAttributeNames(std::move(value)); return *this;}

    /**
     * <p>A list of configuration set attributes to return.</p>
     */
    inline DescribeConfigurationSetRequest& AddConfigurationSetAttributeNames(const ConfigurationSetAttribute& value) { m_configurationSetAttributeNamesHasBeenSet = true; m_configurationSetAttributeNames.push_back(value); return *this; }

    /**
     * <p>A list of configuration set attributes to return.</p>
     */
    inline DescribeConfigurationSetRequest& AddConfigurationSetAttributeNames(ConfigurationSetAttribute&& value) { m_configurationSetAttributeNamesHasBeenSet = true; m_configurationSetAttributeNames.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_configurationSetName;
    bool m_configurationSetNameHasBeenSet = false;

    Aws::Vector<ConfigurationSetAttribute> m_configurationSetAttributeNames;
    bool m_configurationSetAttributeNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
