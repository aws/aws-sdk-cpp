/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace KafkaConnect
{
namespace Model
{

  /**
   * <p>The description of the worker configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/WorkerConfigurationDescription">AWS
   * API Reference</a></p>
   */
  class WorkerConfigurationDescription
  {
  public:
    AWS_KAFKACONNECT_API WorkerConfigurationDescription();
    AWS_KAFKACONNECT_API WorkerConfigurationDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API WorkerConfigurationDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The revision of the worker configuration.</p>
     */
    inline long long GetRevision() const{ return m_revision; }

    /**
     * <p>The revision of the worker configuration.</p>
     */
    inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }

    /**
     * <p>The revision of the worker configuration.</p>
     */
    inline void SetRevision(long long value) { m_revisionHasBeenSet = true; m_revision = value; }

    /**
     * <p>The revision of the worker configuration.</p>
     */
    inline WorkerConfigurationDescription& WithRevision(long long value) { SetRevision(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the worker configuration.</p>
     */
    inline const Aws::String& GetWorkerConfigurationArn() const{ return m_workerConfigurationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the worker configuration.</p>
     */
    inline bool WorkerConfigurationArnHasBeenSet() const { return m_workerConfigurationArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the worker configuration.</p>
     */
    inline void SetWorkerConfigurationArn(const Aws::String& value) { m_workerConfigurationArnHasBeenSet = true; m_workerConfigurationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the worker configuration.</p>
     */
    inline void SetWorkerConfigurationArn(Aws::String&& value) { m_workerConfigurationArnHasBeenSet = true; m_workerConfigurationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the worker configuration.</p>
     */
    inline void SetWorkerConfigurationArn(const char* value) { m_workerConfigurationArnHasBeenSet = true; m_workerConfigurationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the worker configuration.</p>
     */
    inline WorkerConfigurationDescription& WithWorkerConfigurationArn(const Aws::String& value) { SetWorkerConfigurationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the worker configuration.</p>
     */
    inline WorkerConfigurationDescription& WithWorkerConfigurationArn(Aws::String&& value) { SetWorkerConfigurationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the worker configuration.</p>
     */
    inline WorkerConfigurationDescription& WithWorkerConfigurationArn(const char* value) { SetWorkerConfigurationArn(value); return *this;}

  private:

    long long m_revision;
    bool m_revisionHasBeenSet = false;

    Aws::String m_workerConfigurationArn;
    bool m_workerConfigurationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
