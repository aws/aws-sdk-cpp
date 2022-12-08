/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/pipes/model/MQBrokerAccessCredentials.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Pipes
{
namespace Model
{

  /**
   * <p>The parameters for using an Active MQ broker as a source.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/UpdatePipeSourceActiveMQBrokerParameters">AWS
   * API Reference</a></p>
   */
  class UpdatePipeSourceActiveMQBrokerParameters
  {
  public:
    AWS_PIPES_API UpdatePipeSourceActiveMQBrokerParameters();
    AWS_PIPES_API UpdatePipeSourceActiveMQBrokerParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API UpdatePipeSourceActiveMQBrokerParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The maximum number of records to include in each batch.</p>
     */
    inline int GetBatchSize() const{ return m_batchSize; }

    /**
     * <p>The maximum number of records to include in each batch.</p>
     */
    inline bool BatchSizeHasBeenSet() const { return m_batchSizeHasBeenSet; }

    /**
     * <p>The maximum number of records to include in each batch.</p>
     */
    inline void SetBatchSize(int value) { m_batchSizeHasBeenSet = true; m_batchSize = value; }

    /**
     * <p>The maximum number of records to include in each batch.</p>
     */
    inline UpdatePipeSourceActiveMQBrokerParameters& WithBatchSize(int value) { SetBatchSize(value); return *this;}


    /**
     * <p>The credentials needed to access the resource.</p>
     */
    inline const MQBrokerAccessCredentials& GetCredentials() const{ return m_credentials; }

    /**
     * <p>The credentials needed to access the resource.</p>
     */
    inline bool CredentialsHasBeenSet() const { return m_credentialsHasBeenSet; }

    /**
     * <p>The credentials needed to access the resource.</p>
     */
    inline void SetCredentials(const MQBrokerAccessCredentials& value) { m_credentialsHasBeenSet = true; m_credentials = value; }

    /**
     * <p>The credentials needed to access the resource.</p>
     */
    inline void SetCredentials(MQBrokerAccessCredentials&& value) { m_credentialsHasBeenSet = true; m_credentials = std::move(value); }

    /**
     * <p>The credentials needed to access the resource.</p>
     */
    inline UpdatePipeSourceActiveMQBrokerParameters& WithCredentials(const MQBrokerAccessCredentials& value) { SetCredentials(value); return *this;}

    /**
     * <p>The credentials needed to access the resource.</p>
     */
    inline UpdatePipeSourceActiveMQBrokerParameters& WithCredentials(MQBrokerAccessCredentials&& value) { SetCredentials(std::move(value)); return *this;}


    /**
     * <p>The maximum length of a time to wait for events.</p>
     */
    inline int GetMaximumBatchingWindowInSeconds() const{ return m_maximumBatchingWindowInSeconds; }

    /**
     * <p>The maximum length of a time to wait for events.</p>
     */
    inline bool MaximumBatchingWindowInSecondsHasBeenSet() const { return m_maximumBatchingWindowInSecondsHasBeenSet; }

    /**
     * <p>The maximum length of a time to wait for events.</p>
     */
    inline void SetMaximumBatchingWindowInSeconds(int value) { m_maximumBatchingWindowInSecondsHasBeenSet = true; m_maximumBatchingWindowInSeconds = value; }

    /**
     * <p>The maximum length of a time to wait for events.</p>
     */
    inline UpdatePipeSourceActiveMQBrokerParameters& WithMaximumBatchingWindowInSeconds(int value) { SetMaximumBatchingWindowInSeconds(value); return *this;}

  private:

    int m_batchSize;
    bool m_batchSizeHasBeenSet = false;

    MQBrokerAccessCredentials m_credentials;
    bool m_credentialsHasBeenSet = false;

    int m_maximumBatchingWindowInSeconds;
    bool m_maximumBatchingWindowInSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
