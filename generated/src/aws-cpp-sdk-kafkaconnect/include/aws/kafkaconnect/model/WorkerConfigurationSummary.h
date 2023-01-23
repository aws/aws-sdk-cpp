/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafkaconnect/model/WorkerConfigurationRevisionSummary.h>
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
   * <p>The summary of a worker configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/WorkerConfigurationSummary">AWS
   * API Reference</a></p>
   */
  class WorkerConfigurationSummary
  {
  public:
    AWS_KAFKACONNECT_API WorkerConfigurationSummary();
    AWS_KAFKACONNECT_API WorkerConfigurationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API WorkerConfigurationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The time that a worker configuration was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time that a worker configuration was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The time that a worker configuration was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time that a worker configuration was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time that a worker configuration was created.</p>
     */
    inline WorkerConfigurationSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time that a worker configuration was created.</p>
     */
    inline WorkerConfigurationSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The description of a worker configuration.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of a worker configuration.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of a worker configuration.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of a worker configuration.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of a worker configuration.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of a worker configuration.</p>
     */
    inline WorkerConfigurationSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of a worker configuration.</p>
     */
    inline WorkerConfigurationSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of a worker configuration.</p>
     */
    inline WorkerConfigurationSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The latest revision of a worker configuration.</p>
     */
    inline const WorkerConfigurationRevisionSummary& GetLatestRevision() const{ return m_latestRevision; }

    /**
     * <p>The latest revision of a worker configuration.</p>
     */
    inline bool LatestRevisionHasBeenSet() const { return m_latestRevisionHasBeenSet; }

    /**
     * <p>The latest revision of a worker configuration.</p>
     */
    inline void SetLatestRevision(const WorkerConfigurationRevisionSummary& value) { m_latestRevisionHasBeenSet = true; m_latestRevision = value; }

    /**
     * <p>The latest revision of a worker configuration.</p>
     */
    inline void SetLatestRevision(WorkerConfigurationRevisionSummary&& value) { m_latestRevisionHasBeenSet = true; m_latestRevision = std::move(value); }

    /**
     * <p>The latest revision of a worker configuration.</p>
     */
    inline WorkerConfigurationSummary& WithLatestRevision(const WorkerConfigurationRevisionSummary& value) { SetLatestRevision(value); return *this;}

    /**
     * <p>The latest revision of a worker configuration.</p>
     */
    inline WorkerConfigurationSummary& WithLatestRevision(WorkerConfigurationRevisionSummary&& value) { SetLatestRevision(std::move(value)); return *this;}


    /**
     * <p>The name of the worker configuration.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the worker configuration.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the worker configuration.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the worker configuration.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the worker configuration.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the worker configuration.</p>
     */
    inline WorkerConfigurationSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the worker configuration.</p>
     */
    inline WorkerConfigurationSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the worker configuration.</p>
     */
    inline WorkerConfigurationSummary& WithName(const char* value) { SetName(value); return *this;}


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
    inline WorkerConfigurationSummary& WithWorkerConfigurationArn(const Aws::String& value) { SetWorkerConfigurationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the worker configuration.</p>
     */
    inline WorkerConfigurationSummary& WithWorkerConfigurationArn(Aws::String&& value) { SetWorkerConfigurationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the worker configuration.</p>
     */
    inline WorkerConfigurationSummary& WithWorkerConfigurationArn(const char* value) { SetWorkerConfigurationArn(value); return *this;}

  private:

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    WorkerConfigurationRevisionSummary m_latestRevision;
    bool m_latestRevisionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_workerConfigurationArn;
    bool m_workerConfigurationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
