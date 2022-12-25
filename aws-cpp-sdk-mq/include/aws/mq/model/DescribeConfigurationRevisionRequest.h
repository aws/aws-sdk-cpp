/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/mq/MQRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MQ
{
namespace Model
{

  /**
   */
  class DescribeConfigurationRevisionRequest : public MQRequest
  {
  public:
    AWS_MQ_API DescribeConfigurationRevisionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeConfigurationRevision"; }

    AWS_MQ_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique ID that Amazon MQ generates for the configuration.</p>
     */
    inline const Aws::String& GetConfigurationId() const{ return m_configurationId; }

    /**
     * <p>The unique ID that Amazon MQ generates for the configuration.</p>
     */
    inline bool ConfigurationIdHasBeenSet() const { return m_configurationIdHasBeenSet; }

    /**
     * <p>The unique ID that Amazon MQ generates for the configuration.</p>
     */
    inline void SetConfigurationId(const Aws::String& value) { m_configurationIdHasBeenSet = true; m_configurationId = value; }

    /**
     * <p>The unique ID that Amazon MQ generates for the configuration.</p>
     */
    inline void SetConfigurationId(Aws::String&& value) { m_configurationIdHasBeenSet = true; m_configurationId = std::move(value); }

    /**
     * <p>The unique ID that Amazon MQ generates for the configuration.</p>
     */
    inline void SetConfigurationId(const char* value) { m_configurationIdHasBeenSet = true; m_configurationId.assign(value); }

    /**
     * <p>The unique ID that Amazon MQ generates for the configuration.</p>
     */
    inline DescribeConfigurationRevisionRequest& WithConfigurationId(const Aws::String& value) { SetConfigurationId(value); return *this;}

    /**
     * <p>The unique ID that Amazon MQ generates for the configuration.</p>
     */
    inline DescribeConfigurationRevisionRequest& WithConfigurationId(Aws::String&& value) { SetConfigurationId(std::move(value)); return *this;}

    /**
     * <p>The unique ID that Amazon MQ generates for the configuration.</p>
     */
    inline DescribeConfigurationRevisionRequest& WithConfigurationId(const char* value) { SetConfigurationId(value); return *this;}


    /**
     * <p>The revision of the configuration.</p>
     */
    inline const Aws::String& GetConfigurationRevision() const{ return m_configurationRevision; }

    /**
     * <p>The revision of the configuration.</p>
     */
    inline bool ConfigurationRevisionHasBeenSet() const { return m_configurationRevisionHasBeenSet; }

    /**
     * <p>The revision of the configuration.</p>
     */
    inline void SetConfigurationRevision(const Aws::String& value) { m_configurationRevisionHasBeenSet = true; m_configurationRevision = value; }

    /**
     * <p>The revision of the configuration.</p>
     */
    inline void SetConfigurationRevision(Aws::String&& value) { m_configurationRevisionHasBeenSet = true; m_configurationRevision = std::move(value); }

    /**
     * <p>The revision of the configuration.</p>
     */
    inline void SetConfigurationRevision(const char* value) { m_configurationRevisionHasBeenSet = true; m_configurationRevision.assign(value); }

    /**
     * <p>The revision of the configuration.</p>
     */
    inline DescribeConfigurationRevisionRequest& WithConfigurationRevision(const Aws::String& value) { SetConfigurationRevision(value); return *this;}

    /**
     * <p>The revision of the configuration.</p>
     */
    inline DescribeConfigurationRevisionRequest& WithConfigurationRevision(Aws::String&& value) { SetConfigurationRevision(std::move(value)); return *this;}

    /**
     * <p>The revision of the configuration.</p>
     */
    inline DescribeConfigurationRevisionRequest& WithConfigurationRevision(const char* value) { SetConfigurationRevision(value); return *this;}

  private:

    Aws::String m_configurationId;
    bool m_configurationIdHasBeenSet = false;

    Aws::String m_configurationRevision;
    bool m_configurationRevisionHasBeenSet = false;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
