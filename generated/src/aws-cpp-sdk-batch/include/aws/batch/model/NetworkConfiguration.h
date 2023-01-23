/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/model/AssignPublicIp.h>
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
   * <p>The network configuration for jobs that are running on Fargate resources.
   * Jobs that are running on EC2 resources must not specify this
   * parameter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/NetworkConfiguration">AWS
   * API Reference</a></p>
   */
  class NetworkConfiguration
  {
  public:
    AWS_BATCH_API NetworkConfiguration();
    AWS_BATCH_API NetworkConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API NetworkConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates whether the job has a public IP address. For a job that's running
     * on Fargate resources in a private subnet to send outbound traffic to the
     * internet (for example, to pull container images), the private subnet requires a
     * NAT gateway be attached to route requests to the internet. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-networking.html">Amazon
     * ECS task networking</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>. The default value is "<code>DISABLED</code>".</p>
     */
    inline const AssignPublicIp& GetAssignPublicIp() const{ return m_assignPublicIp; }

    /**
     * <p>Indicates whether the job has a public IP address. For a job that's running
     * on Fargate resources in a private subnet to send outbound traffic to the
     * internet (for example, to pull container images), the private subnet requires a
     * NAT gateway be attached to route requests to the internet. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-networking.html">Amazon
     * ECS task networking</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>. The default value is "<code>DISABLED</code>".</p>
     */
    inline bool AssignPublicIpHasBeenSet() const { return m_assignPublicIpHasBeenSet; }

    /**
     * <p>Indicates whether the job has a public IP address. For a job that's running
     * on Fargate resources in a private subnet to send outbound traffic to the
     * internet (for example, to pull container images), the private subnet requires a
     * NAT gateway be attached to route requests to the internet. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-networking.html">Amazon
     * ECS task networking</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>. The default value is "<code>DISABLED</code>".</p>
     */
    inline void SetAssignPublicIp(const AssignPublicIp& value) { m_assignPublicIpHasBeenSet = true; m_assignPublicIp = value; }

    /**
     * <p>Indicates whether the job has a public IP address. For a job that's running
     * on Fargate resources in a private subnet to send outbound traffic to the
     * internet (for example, to pull container images), the private subnet requires a
     * NAT gateway be attached to route requests to the internet. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-networking.html">Amazon
     * ECS task networking</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>. The default value is "<code>DISABLED</code>".</p>
     */
    inline void SetAssignPublicIp(AssignPublicIp&& value) { m_assignPublicIpHasBeenSet = true; m_assignPublicIp = std::move(value); }

    /**
     * <p>Indicates whether the job has a public IP address. For a job that's running
     * on Fargate resources in a private subnet to send outbound traffic to the
     * internet (for example, to pull container images), the private subnet requires a
     * NAT gateway be attached to route requests to the internet. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-networking.html">Amazon
     * ECS task networking</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>. The default value is "<code>DISABLED</code>".</p>
     */
    inline NetworkConfiguration& WithAssignPublicIp(const AssignPublicIp& value) { SetAssignPublicIp(value); return *this;}

    /**
     * <p>Indicates whether the job has a public IP address. For a job that's running
     * on Fargate resources in a private subnet to send outbound traffic to the
     * internet (for example, to pull container images), the private subnet requires a
     * NAT gateway be attached to route requests to the internet. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-networking.html">Amazon
     * ECS task networking</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>. The default value is "<code>DISABLED</code>".</p>
     */
    inline NetworkConfiguration& WithAssignPublicIp(AssignPublicIp&& value) { SetAssignPublicIp(std::move(value)); return *this;}

  private:

    AssignPublicIp m_assignPublicIp;
    bool m_assignPublicIpHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
