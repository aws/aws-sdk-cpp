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
   * <p>The network configuration for jobs running on Fargate resources. Jobs running
   * on EC2 resources must not specify this parameter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/NetworkConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_BATCH_API NetworkConfiguration
  {
  public:
    NetworkConfiguration();
    NetworkConfiguration(Aws::Utils::Json::JsonView jsonValue);
    NetworkConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates whether the job should have a public IP address. For a job running
     * on Fargate resources in a private subnet to send outbound traffic to the
     * internet (for example, in order to pull container images), the private subnet
     * requires a NAT gateway be attached to route requests to the internet. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-networking.html">Amazon
     * ECS task networking</a>. The default value is "DISABLED".</p>
     */
    inline const AssignPublicIp& GetAssignPublicIp() const{ return m_assignPublicIp; }

    /**
     * <p>Indicates whether the job should have a public IP address. For a job running
     * on Fargate resources in a private subnet to send outbound traffic to the
     * internet (for example, in order to pull container images), the private subnet
     * requires a NAT gateway be attached to route requests to the internet. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-networking.html">Amazon
     * ECS task networking</a>. The default value is "DISABLED".</p>
     */
    inline bool AssignPublicIpHasBeenSet() const { return m_assignPublicIpHasBeenSet; }

    /**
     * <p>Indicates whether the job should have a public IP address. For a job running
     * on Fargate resources in a private subnet to send outbound traffic to the
     * internet (for example, in order to pull container images), the private subnet
     * requires a NAT gateway be attached to route requests to the internet. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-networking.html">Amazon
     * ECS task networking</a>. The default value is "DISABLED".</p>
     */
    inline void SetAssignPublicIp(const AssignPublicIp& value) { m_assignPublicIpHasBeenSet = true; m_assignPublicIp = value; }

    /**
     * <p>Indicates whether the job should have a public IP address. For a job running
     * on Fargate resources in a private subnet to send outbound traffic to the
     * internet (for example, in order to pull container images), the private subnet
     * requires a NAT gateway be attached to route requests to the internet. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-networking.html">Amazon
     * ECS task networking</a>. The default value is "DISABLED".</p>
     */
    inline void SetAssignPublicIp(AssignPublicIp&& value) { m_assignPublicIpHasBeenSet = true; m_assignPublicIp = std::move(value); }

    /**
     * <p>Indicates whether the job should have a public IP address. For a job running
     * on Fargate resources in a private subnet to send outbound traffic to the
     * internet (for example, in order to pull container images), the private subnet
     * requires a NAT gateway be attached to route requests to the internet. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-networking.html">Amazon
     * ECS task networking</a>. The default value is "DISABLED".</p>
     */
    inline NetworkConfiguration& WithAssignPublicIp(const AssignPublicIp& value) { SetAssignPublicIp(value); return *this;}

    /**
     * <p>Indicates whether the job should have a public IP address. For a job running
     * on Fargate resources in a private subnet to send outbound traffic to the
     * internet (for example, in order to pull container images), the private subnet
     * requires a NAT gateway be attached to route requests to the internet. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-networking.html">Amazon
     * ECS task networking</a>. The default value is "DISABLED".</p>
     */
    inline NetworkConfiguration& WithAssignPublicIp(AssignPublicIp&& value) { SetAssignPublicIp(std::move(value)); return *this;}

  private:

    AssignPublicIp m_assignPublicIp;
    bool m_assignPublicIpHasBeenSet;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
