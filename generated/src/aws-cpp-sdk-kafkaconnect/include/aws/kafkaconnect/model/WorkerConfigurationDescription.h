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
    AWS_KAFKACONNECT_API WorkerConfigurationDescription() = default;
    AWS_KAFKACONNECT_API WorkerConfigurationDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API WorkerConfigurationDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The revision of the worker configuration.</p>
     */
    inline long long GetRevision() const { return m_revision; }
    inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }
    inline void SetRevision(long long value) { m_revisionHasBeenSet = true; m_revision = value; }
    inline WorkerConfigurationDescription& WithRevision(long long value) { SetRevision(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the worker configuration.</p>
     */
    inline const Aws::String& GetWorkerConfigurationArn() const { return m_workerConfigurationArn; }
    inline bool WorkerConfigurationArnHasBeenSet() const { return m_workerConfigurationArnHasBeenSet; }
    template<typename WorkerConfigurationArnT = Aws::String>
    void SetWorkerConfigurationArn(WorkerConfigurationArnT&& value) { m_workerConfigurationArnHasBeenSet = true; m_workerConfigurationArn = std::forward<WorkerConfigurationArnT>(value); }
    template<typename WorkerConfigurationArnT = Aws::String>
    WorkerConfigurationDescription& WithWorkerConfigurationArn(WorkerConfigurationArnT&& value) { SetWorkerConfigurationArn(std::forward<WorkerConfigurationArnT>(value)); return *this;}
    ///@}
  private:

    long long m_revision{0};
    bool m_revisionHasBeenSet = false;

    Aws::String m_workerConfigurationArn;
    bool m_workerConfigurationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
