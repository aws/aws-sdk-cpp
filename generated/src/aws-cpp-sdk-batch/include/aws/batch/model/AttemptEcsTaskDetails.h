/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/batch/model/AttemptTaskContainerDetails.h>
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
namespace Batch
{
namespace Model
{

  /**
   * <p>An object that represents the details of a task.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/AttemptEcsTaskDetails">AWS
   * API Reference</a></p>
   */
  class AttemptEcsTaskDetails
  {
  public:
    AWS_BATCH_API AttemptEcsTaskDetails();
    AWS_BATCH_API AttemptEcsTaskDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API AttemptEcsTaskDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the container instance that hosts the
     * task.</p>
     */
    inline const Aws::String& GetContainerInstanceArn() const{ return m_containerInstanceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the container instance that hosts the
     * task.</p>
     */
    inline bool ContainerInstanceArnHasBeenSet() const { return m_containerInstanceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the container instance that hosts the
     * task.</p>
     */
    inline void SetContainerInstanceArn(const Aws::String& value) { m_containerInstanceArnHasBeenSet = true; m_containerInstanceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the container instance that hosts the
     * task.</p>
     */
    inline void SetContainerInstanceArn(Aws::String&& value) { m_containerInstanceArnHasBeenSet = true; m_containerInstanceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the container instance that hosts the
     * task.</p>
     */
    inline void SetContainerInstanceArn(const char* value) { m_containerInstanceArnHasBeenSet = true; m_containerInstanceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the container instance that hosts the
     * task.</p>
     */
    inline AttemptEcsTaskDetails& WithContainerInstanceArn(const Aws::String& value) { SetContainerInstanceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the container instance that hosts the
     * task.</p>
     */
    inline AttemptEcsTaskDetails& WithContainerInstanceArn(Aws::String&& value) { SetContainerInstanceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the container instance that hosts the
     * task.</p>
     */
    inline AttemptEcsTaskDetails& WithContainerInstanceArn(const char* value) { SetContainerInstanceArn(value); return *this;}


    /**
     * <p>The ARN of the Amazon ECS task.</p>
     */
    inline const Aws::String& GetTaskArn() const{ return m_taskArn; }

    /**
     * <p>The ARN of the Amazon ECS task.</p>
     */
    inline bool TaskArnHasBeenSet() const { return m_taskArnHasBeenSet; }

    /**
     * <p>The ARN of the Amazon ECS task.</p>
     */
    inline void SetTaskArn(const Aws::String& value) { m_taskArnHasBeenSet = true; m_taskArn = value; }

    /**
     * <p>The ARN of the Amazon ECS task.</p>
     */
    inline void SetTaskArn(Aws::String&& value) { m_taskArnHasBeenSet = true; m_taskArn = std::move(value); }

    /**
     * <p>The ARN of the Amazon ECS task.</p>
     */
    inline void SetTaskArn(const char* value) { m_taskArnHasBeenSet = true; m_taskArn.assign(value); }

    /**
     * <p>The ARN of the Amazon ECS task.</p>
     */
    inline AttemptEcsTaskDetails& WithTaskArn(const Aws::String& value) { SetTaskArn(value); return *this;}

    /**
     * <p>The ARN of the Amazon ECS task.</p>
     */
    inline AttemptEcsTaskDetails& WithTaskArn(Aws::String&& value) { SetTaskArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Amazon ECS task.</p>
     */
    inline AttemptEcsTaskDetails& WithTaskArn(const char* value) { SetTaskArn(value); return *this;}


    /**
     * <p>A list of containers that are included in the <code>taskProperties</code>
     * list.</p>
     */
    inline const Aws::Vector<AttemptTaskContainerDetails>& GetContainers() const{ return m_containers; }

    /**
     * <p>A list of containers that are included in the <code>taskProperties</code>
     * list.</p>
     */
    inline bool ContainersHasBeenSet() const { return m_containersHasBeenSet; }

    /**
     * <p>A list of containers that are included in the <code>taskProperties</code>
     * list.</p>
     */
    inline void SetContainers(const Aws::Vector<AttemptTaskContainerDetails>& value) { m_containersHasBeenSet = true; m_containers = value; }

    /**
     * <p>A list of containers that are included in the <code>taskProperties</code>
     * list.</p>
     */
    inline void SetContainers(Aws::Vector<AttemptTaskContainerDetails>&& value) { m_containersHasBeenSet = true; m_containers = std::move(value); }

    /**
     * <p>A list of containers that are included in the <code>taskProperties</code>
     * list.</p>
     */
    inline AttemptEcsTaskDetails& WithContainers(const Aws::Vector<AttemptTaskContainerDetails>& value) { SetContainers(value); return *this;}

    /**
     * <p>A list of containers that are included in the <code>taskProperties</code>
     * list.</p>
     */
    inline AttemptEcsTaskDetails& WithContainers(Aws::Vector<AttemptTaskContainerDetails>&& value) { SetContainers(std::move(value)); return *this;}

    /**
     * <p>A list of containers that are included in the <code>taskProperties</code>
     * list.</p>
     */
    inline AttemptEcsTaskDetails& AddContainers(const AttemptTaskContainerDetails& value) { m_containersHasBeenSet = true; m_containers.push_back(value); return *this; }

    /**
     * <p>A list of containers that are included in the <code>taskProperties</code>
     * list.</p>
     */
    inline AttemptEcsTaskDetails& AddContainers(AttemptTaskContainerDetails&& value) { m_containersHasBeenSet = true; m_containers.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_containerInstanceArn;
    bool m_containerInstanceArnHasBeenSet = false;

    Aws::String m_taskArn;
    bool m_taskArnHasBeenSet = false;

    Aws::Vector<AttemptTaskContainerDetails> m_containers;
    bool m_containersHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
