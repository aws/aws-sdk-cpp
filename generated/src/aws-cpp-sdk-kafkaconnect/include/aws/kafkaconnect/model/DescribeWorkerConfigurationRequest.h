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
  class DescribeWorkerConfigurationRequest : public KafkaConnectRequest
  {
  public:
    AWS_KAFKACONNECT_API DescribeWorkerConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeWorkerConfiguration"; }

    AWS_KAFKACONNECT_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the worker configuration that you want to
     * get information about.</p>
     */
    inline const Aws::String& GetWorkerConfigurationArn() const{ return m_workerConfigurationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the worker configuration that you want to
     * get information about.</p>
     */
    inline bool WorkerConfigurationArnHasBeenSet() const { return m_workerConfigurationArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the worker configuration that you want to
     * get information about.</p>
     */
    inline void SetWorkerConfigurationArn(const Aws::String& value) { m_workerConfigurationArnHasBeenSet = true; m_workerConfigurationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the worker configuration that you want to
     * get information about.</p>
     */
    inline void SetWorkerConfigurationArn(Aws::String&& value) { m_workerConfigurationArnHasBeenSet = true; m_workerConfigurationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the worker configuration that you want to
     * get information about.</p>
     */
    inline void SetWorkerConfigurationArn(const char* value) { m_workerConfigurationArnHasBeenSet = true; m_workerConfigurationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the worker configuration that you want to
     * get information about.</p>
     */
    inline DescribeWorkerConfigurationRequest& WithWorkerConfigurationArn(const Aws::String& value) { SetWorkerConfigurationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the worker configuration that you want to
     * get information about.</p>
     */
    inline DescribeWorkerConfigurationRequest& WithWorkerConfigurationArn(Aws::String&& value) { SetWorkerConfigurationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the worker configuration that you want to
     * get information about.</p>
     */
    inline DescribeWorkerConfigurationRequest& WithWorkerConfigurationArn(const char* value) { SetWorkerConfigurationArn(value); return *this;}

  private:

    Aws::String m_workerConfigurationArn;
    bool m_workerConfigurationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
