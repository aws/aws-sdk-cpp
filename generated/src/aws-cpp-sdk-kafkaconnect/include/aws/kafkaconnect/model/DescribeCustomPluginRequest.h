/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/kafkaconnect/KafkaConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace KafkaConnect
{
namespace Model
{

  /**
   */
  class DescribeCustomPluginRequest : public KafkaConnectRequest
  {
  public:
    AWS_KAFKACONNECT_API DescribeCustomPluginRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeCustomPlugin"; }

    AWS_KAFKACONNECT_API Aws::String SerializePayload() const override;


    /**
     * <p>Returns information about a custom plugin.</p>
     */
    inline const Aws::String& GetCustomPluginArn() const{ return m_customPluginArn; }

    /**
     * <p>Returns information about a custom plugin.</p>
     */
    inline bool CustomPluginArnHasBeenSet() const { return m_customPluginArnHasBeenSet; }

    /**
     * <p>Returns information about a custom plugin.</p>
     */
    inline void SetCustomPluginArn(const Aws::String& value) { m_customPluginArnHasBeenSet = true; m_customPluginArn = value; }

    /**
     * <p>Returns information about a custom plugin.</p>
     */
    inline void SetCustomPluginArn(Aws::String&& value) { m_customPluginArnHasBeenSet = true; m_customPluginArn = std::move(value); }

    /**
     * <p>Returns information about a custom plugin.</p>
     */
    inline void SetCustomPluginArn(const char* value) { m_customPluginArnHasBeenSet = true; m_customPluginArn.assign(value); }

    /**
     * <p>Returns information about a custom plugin.</p>
     */
    inline DescribeCustomPluginRequest& WithCustomPluginArn(const Aws::String& value) { SetCustomPluginArn(value); return *this;}

    /**
     * <p>Returns information about a custom plugin.</p>
     */
    inline DescribeCustomPluginRequest& WithCustomPluginArn(Aws::String&& value) { SetCustomPluginArn(std::move(value)); return *this;}

    /**
     * <p>Returns information about a custom plugin.</p>
     */
    inline DescribeCustomPluginRequest& WithCustomPluginArn(const char* value) { SetCustomPluginArn(value); return *this;}

  private:

    Aws::String m_customPluginArn;
    bool m_customPluginArnHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
