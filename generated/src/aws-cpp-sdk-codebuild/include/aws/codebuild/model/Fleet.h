/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/codebuild/model/FleetStatus.h>
#include <aws/codebuild/model/EnvironmentType.h>
#include <aws/codebuild/model/ComputeType.h>
#include <aws/codebuild/model/ScalingConfigurationOutput.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codebuild/model/Tag.h>
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
namespace CodeBuild
{
namespace Model
{

  /**
   * <p>A set of dedicated instances for your build environment.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/Fleet">AWS API
   * Reference</a></p>
   */
  class Fleet
  {
  public:
    AWS_CODEBUILD_API Fleet();
    AWS_CODEBUILD_API Fleet(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Fleet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the compute fleet.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the compute fleet.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the compute fleet.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the compute fleet.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the compute fleet.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the compute fleet.</p>
     */
    inline Fleet& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the compute fleet.</p>
     */
    inline Fleet& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the compute fleet.</p>
     */
    inline Fleet& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the compute fleet.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the compute fleet.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the compute fleet.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the compute fleet.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the compute fleet.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the compute fleet.</p>
     */
    inline Fleet& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the compute fleet.</p>
     */
    inline Fleet& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the compute fleet.</p>
     */
    inline Fleet& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ID of the compute fleet.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the compute fleet.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the compute fleet.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the compute fleet.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the compute fleet.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the compute fleet.</p>
     */
    inline Fleet& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the compute fleet.</p>
     */
    inline Fleet& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the compute fleet.</p>
     */
    inline Fleet& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The time at which the compute fleet was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const{ return m_created; }

    /**
     * <p>The time at which the compute fleet was created.</p>
     */
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }

    /**
     * <p>The time at which the compute fleet was created.</p>
     */
    inline void SetCreated(const Aws::Utils::DateTime& value) { m_createdHasBeenSet = true; m_created = value; }

    /**
     * <p>The time at which the compute fleet was created.</p>
     */
    inline void SetCreated(Aws::Utils::DateTime&& value) { m_createdHasBeenSet = true; m_created = std::move(value); }

    /**
     * <p>The time at which the compute fleet was created.</p>
     */
    inline Fleet& WithCreated(const Aws::Utils::DateTime& value) { SetCreated(value); return *this;}

    /**
     * <p>The time at which the compute fleet was created.</p>
     */
    inline Fleet& WithCreated(Aws::Utils::DateTime&& value) { SetCreated(std::move(value)); return *this;}


    /**
     * <p>The time at which the compute fleet was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModified() const{ return m_lastModified; }

    /**
     * <p>The time at which the compute fleet was last modified.</p>
     */
    inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }

    /**
     * <p>The time at which the compute fleet was last modified.</p>
     */
    inline void SetLastModified(const Aws::Utils::DateTime& value) { m_lastModifiedHasBeenSet = true; m_lastModified = value; }

    /**
     * <p>The time at which the compute fleet was last modified.</p>
     */
    inline void SetLastModified(Aws::Utils::DateTime&& value) { m_lastModifiedHasBeenSet = true; m_lastModified = std::move(value); }

    /**
     * <p>The time at which the compute fleet was last modified.</p>
     */
    inline Fleet& WithLastModified(const Aws::Utils::DateTime& value) { SetLastModified(value); return *this;}

    /**
     * <p>The time at which the compute fleet was last modified.</p>
     */
    inline Fleet& WithLastModified(Aws::Utils::DateTime&& value) { SetLastModified(std::move(value)); return *this;}


    /**
     * <p>The status of the compute fleet.</p>
     */
    inline const FleetStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the compute fleet.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the compute fleet.</p>
     */
    inline void SetStatus(const FleetStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the compute fleet.</p>
     */
    inline void SetStatus(FleetStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the compute fleet.</p>
     */
    inline Fleet& WithStatus(const FleetStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the compute fleet.</p>
     */
    inline Fleet& WithStatus(FleetStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The initial number of machines allocated to the compute ﬂeet, which deﬁnes
     * the number of builds that can run in parallel.</p>
     */
    inline int GetBaseCapacity() const{ return m_baseCapacity; }

    /**
     * <p>The initial number of machines allocated to the compute ﬂeet, which deﬁnes
     * the number of builds that can run in parallel.</p>
     */
    inline bool BaseCapacityHasBeenSet() const { return m_baseCapacityHasBeenSet; }

    /**
     * <p>The initial number of machines allocated to the compute ﬂeet, which deﬁnes
     * the number of builds that can run in parallel.</p>
     */
    inline void SetBaseCapacity(int value) { m_baseCapacityHasBeenSet = true; m_baseCapacity = value; }

    /**
     * <p>The initial number of machines allocated to the compute ﬂeet, which deﬁnes
     * the number of builds that can run in parallel.</p>
     */
    inline Fleet& WithBaseCapacity(int value) { SetBaseCapacity(value); return *this;}


    /**
     * <p>The environment type of the compute fleet.</p> <ul> <li> <p>The environment
     * type <code>ARM_CONTAINER</code> is available only in regions US East (N.
     * Virginia), US East (Ohio), US West (Oregon), EU (Ireland), Asia Pacific
     * (Mumbai), Asia Pacific (Tokyo), Asia Pacific (Singapore), Asia Pacific (Sydney),
     * EU (Frankfurt), and South America (São Paulo).</p> </li> <li> <p>The environment
     * type <code>LINUX_CONTAINER</code> is available only in regions US East (N.
     * Virginia), US East (Ohio), US West (Oregon), EU (Ireland), EU (Frankfurt), Asia
     * Pacific (Tokyo), Asia Pacific (Singapore), Asia Pacific (Sydney), South America
     * (São Paulo), and Asia Pacific (Mumbai).</p> </li> <li> <p>The environment type
     * <code>LINUX_GPU_CONTAINER</code> is available only in regions US East (N.
     * Virginia), US East (Ohio), US West (Oregon), EU (Ireland), EU (Frankfurt), Asia
     * Pacific (Tokyo), and Asia Pacific (Sydney).</p> </li> <li> <p>The environment
     * type <code>WINDOWS_SERVER_2019_CONTAINER</code> is available only in regions US
     * East (N. Virginia), US East (Ohio), US West (Oregon), Asia Pacific (Sydney),
     * Asia Pacific (Tokyo), Asia Pacific (Mumbai) and EU (Ireland).</p> </li> <li>
     * <p>The environment type <code>WINDOWS_SERVER_2022_CONTAINER</code> is available
     * only in regions US East (N. Virginia), US East (Ohio), US West (Oregon), EU
     * (Ireland), EU (Frankfurt), Asia Pacific (Sydney), Asia Pacific (Singapore), Asia
     * Pacific (Tokyo), South America (São Paulo) and Asia Pacific (Mumbai).</p> </li>
     * </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/build-env-ref-compute-types.html">Build
     * environment compute types</a> in the <i>CodeBuild user guide</i>.</p>
     */
    inline const EnvironmentType& GetEnvironmentType() const{ return m_environmentType; }

    /**
     * <p>The environment type of the compute fleet.</p> <ul> <li> <p>The environment
     * type <code>ARM_CONTAINER</code> is available only in regions US East (N.
     * Virginia), US East (Ohio), US West (Oregon), EU (Ireland), Asia Pacific
     * (Mumbai), Asia Pacific (Tokyo), Asia Pacific (Singapore), Asia Pacific (Sydney),
     * EU (Frankfurt), and South America (São Paulo).</p> </li> <li> <p>The environment
     * type <code>LINUX_CONTAINER</code> is available only in regions US East (N.
     * Virginia), US East (Ohio), US West (Oregon), EU (Ireland), EU (Frankfurt), Asia
     * Pacific (Tokyo), Asia Pacific (Singapore), Asia Pacific (Sydney), South America
     * (São Paulo), and Asia Pacific (Mumbai).</p> </li> <li> <p>The environment type
     * <code>LINUX_GPU_CONTAINER</code> is available only in regions US East (N.
     * Virginia), US East (Ohio), US West (Oregon), EU (Ireland), EU (Frankfurt), Asia
     * Pacific (Tokyo), and Asia Pacific (Sydney).</p> </li> <li> <p>The environment
     * type <code>WINDOWS_SERVER_2019_CONTAINER</code> is available only in regions US
     * East (N. Virginia), US East (Ohio), US West (Oregon), Asia Pacific (Sydney),
     * Asia Pacific (Tokyo), Asia Pacific (Mumbai) and EU (Ireland).</p> </li> <li>
     * <p>The environment type <code>WINDOWS_SERVER_2022_CONTAINER</code> is available
     * only in regions US East (N. Virginia), US East (Ohio), US West (Oregon), EU
     * (Ireland), EU (Frankfurt), Asia Pacific (Sydney), Asia Pacific (Singapore), Asia
     * Pacific (Tokyo), South America (São Paulo) and Asia Pacific (Mumbai).</p> </li>
     * </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/build-env-ref-compute-types.html">Build
     * environment compute types</a> in the <i>CodeBuild user guide</i>.</p>
     */
    inline bool EnvironmentTypeHasBeenSet() const { return m_environmentTypeHasBeenSet; }

    /**
     * <p>The environment type of the compute fleet.</p> <ul> <li> <p>The environment
     * type <code>ARM_CONTAINER</code> is available only in regions US East (N.
     * Virginia), US East (Ohio), US West (Oregon), EU (Ireland), Asia Pacific
     * (Mumbai), Asia Pacific (Tokyo), Asia Pacific (Singapore), Asia Pacific (Sydney),
     * EU (Frankfurt), and South America (São Paulo).</p> </li> <li> <p>The environment
     * type <code>LINUX_CONTAINER</code> is available only in regions US East (N.
     * Virginia), US East (Ohio), US West (Oregon), EU (Ireland), EU (Frankfurt), Asia
     * Pacific (Tokyo), Asia Pacific (Singapore), Asia Pacific (Sydney), South America
     * (São Paulo), and Asia Pacific (Mumbai).</p> </li> <li> <p>The environment type
     * <code>LINUX_GPU_CONTAINER</code> is available only in regions US East (N.
     * Virginia), US East (Ohio), US West (Oregon), EU (Ireland), EU (Frankfurt), Asia
     * Pacific (Tokyo), and Asia Pacific (Sydney).</p> </li> <li> <p>The environment
     * type <code>WINDOWS_SERVER_2019_CONTAINER</code> is available only in regions US
     * East (N. Virginia), US East (Ohio), US West (Oregon), Asia Pacific (Sydney),
     * Asia Pacific (Tokyo), Asia Pacific (Mumbai) and EU (Ireland).</p> </li> <li>
     * <p>The environment type <code>WINDOWS_SERVER_2022_CONTAINER</code> is available
     * only in regions US East (N. Virginia), US East (Ohio), US West (Oregon), EU
     * (Ireland), EU (Frankfurt), Asia Pacific (Sydney), Asia Pacific (Singapore), Asia
     * Pacific (Tokyo), South America (São Paulo) and Asia Pacific (Mumbai).</p> </li>
     * </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/build-env-ref-compute-types.html">Build
     * environment compute types</a> in the <i>CodeBuild user guide</i>.</p>
     */
    inline void SetEnvironmentType(const EnvironmentType& value) { m_environmentTypeHasBeenSet = true; m_environmentType = value; }

    /**
     * <p>The environment type of the compute fleet.</p> <ul> <li> <p>The environment
     * type <code>ARM_CONTAINER</code> is available only in regions US East (N.
     * Virginia), US East (Ohio), US West (Oregon), EU (Ireland), Asia Pacific
     * (Mumbai), Asia Pacific (Tokyo), Asia Pacific (Singapore), Asia Pacific (Sydney),
     * EU (Frankfurt), and South America (São Paulo).</p> </li> <li> <p>The environment
     * type <code>LINUX_CONTAINER</code> is available only in regions US East (N.
     * Virginia), US East (Ohio), US West (Oregon), EU (Ireland), EU (Frankfurt), Asia
     * Pacific (Tokyo), Asia Pacific (Singapore), Asia Pacific (Sydney), South America
     * (São Paulo), and Asia Pacific (Mumbai).</p> </li> <li> <p>The environment type
     * <code>LINUX_GPU_CONTAINER</code> is available only in regions US East (N.
     * Virginia), US East (Ohio), US West (Oregon), EU (Ireland), EU (Frankfurt), Asia
     * Pacific (Tokyo), and Asia Pacific (Sydney).</p> </li> <li> <p>The environment
     * type <code>WINDOWS_SERVER_2019_CONTAINER</code> is available only in regions US
     * East (N. Virginia), US East (Ohio), US West (Oregon), Asia Pacific (Sydney),
     * Asia Pacific (Tokyo), Asia Pacific (Mumbai) and EU (Ireland).</p> </li> <li>
     * <p>The environment type <code>WINDOWS_SERVER_2022_CONTAINER</code> is available
     * only in regions US East (N. Virginia), US East (Ohio), US West (Oregon), EU
     * (Ireland), EU (Frankfurt), Asia Pacific (Sydney), Asia Pacific (Singapore), Asia
     * Pacific (Tokyo), South America (São Paulo) and Asia Pacific (Mumbai).</p> </li>
     * </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/build-env-ref-compute-types.html">Build
     * environment compute types</a> in the <i>CodeBuild user guide</i>.</p>
     */
    inline void SetEnvironmentType(EnvironmentType&& value) { m_environmentTypeHasBeenSet = true; m_environmentType = std::move(value); }

    /**
     * <p>The environment type of the compute fleet.</p> <ul> <li> <p>The environment
     * type <code>ARM_CONTAINER</code> is available only in regions US East (N.
     * Virginia), US East (Ohio), US West (Oregon), EU (Ireland), Asia Pacific
     * (Mumbai), Asia Pacific (Tokyo), Asia Pacific (Singapore), Asia Pacific (Sydney),
     * EU (Frankfurt), and South America (São Paulo).</p> </li> <li> <p>The environment
     * type <code>LINUX_CONTAINER</code> is available only in regions US East (N.
     * Virginia), US East (Ohio), US West (Oregon), EU (Ireland), EU (Frankfurt), Asia
     * Pacific (Tokyo), Asia Pacific (Singapore), Asia Pacific (Sydney), South America
     * (São Paulo), and Asia Pacific (Mumbai).</p> </li> <li> <p>The environment type
     * <code>LINUX_GPU_CONTAINER</code> is available only in regions US East (N.
     * Virginia), US East (Ohio), US West (Oregon), EU (Ireland), EU (Frankfurt), Asia
     * Pacific (Tokyo), and Asia Pacific (Sydney).</p> </li> <li> <p>The environment
     * type <code>WINDOWS_SERVER_2019_CONTAINER</code> is available only in regions US
     * East (N. Virginia), US East (Ohio), US West (Oregon), Asia Pacific (Sydney),
     * Asia Pacific (Tokyo), Asia Pacific (Mumbai) and EU (Ireland).</p> </li> <li>
     * <p>The environment type <code>WINDOWS_SERVER_2022_CONTAINER</code> is available
     * only in regions US East (N. Virginia), US East (Ohio), US West (Oregon), EU
     * (Ireland), EU (Frankfurt), Asia Pacific (Sydney), Asia Pacific (Singapore), Asia
     * Pacific (Tokyo), South America (São Paulo) and Asia Pacific (Mumbai).</p> </li>
     * </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/build-env-ref-compute-types.html">Build
     * environment compute types</a> in the <i>CodeBuild user guide</i>.</p>
     */
    inline Fleet& WithEnvironmentType(const EnvironmentType& value) { SetEnvironmentType(value); return *this;}

    /**
     * <p>The environment type of the compute fleet.</p> <ul> <li> <p>The environment
     * type <code>ARM_CONTAINER</code> is available only in regions US East (N.
     * Virginia), US East (Ohio), US West (Oregon), EU (Ireland), Asia Pacific
     * (Mumbai), Asia Pacific (Tokyo), Asia Pacific (Singapore), Asia Pacific (Sydney),
     * EU (Frankfurt), and South America (São Paulo).</p> </li> <li> <p>The environment
     * type <code>LINUX_CONTAINER</code> is available only in regions US East (N.
     * Virginia), US East (Ohio), US West (Oregon), EU (Ireland), EU (Frankfurt), Asia
     * Pacific (Tokyo), Asia Pacific (Singapore), Asia Pacific (Sydney), South America
     * (São Paulo), and Asia Pacific (Mumbai).</p> </li> <li> <p>The environment type
     * <code>LINUX_GPU_CONTAINER</code> is available only in regions US East (N.
     * Virginia), US East (Ohio), US West (Oregon), EU (Ireland), EU (Frankfurt), Asia
     * Pacific (Tokyo), and Asia Pacific (Sydney).</p> </li> <li> <p>The environment
     * type <code>WINDOWS_SERVER_2019_CONTAINER</code> is available only in regions US
     * East (N. Virginia), US East (Ohio), US West (Oregon), Asia Pacific (Sydney),
     * Asia Pacific (Tokyo), Asia Pacific (Mumbai) and EU (Ireland).</p> </li> <li>
     * <p>The environment type <code>WINDOWS_SERVER_2022_CONTAINER</code> is available
     * only in regions US East (N. Virginia), US East (Ohio), US West (Oregon), EU
     * (Ireland), EU (Frankfurt), Asia Pacific (Sydney), Asia Pacific (Singapore), Asia
     * Pacific (Tokyo), South America (São Paulo) and Asia Pacific (Mumbai).</p> </li>
     * </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/build-env-ref-compute-types.html">Build
     * environment compute types</a> in the <i>CodeBuild user guide</i>.</p>
     */
    inline Fleet& WithEnvironmentType(EnvironmentType&& value) { SetEnvironmentType(std::move(value)); return *this;}


    /**
     * <p>Information about the compute resources the compute fleet uses. Available
     * values include:</p> <ul> <li> <p> <code>BUILD_GENERAL1_SMALL</code>: Use up to 3
     * GB memory and 2 vCPUs for builds.</p> </li> <li> <p>
     * <code>BUILD_GENERAL1_MEDIUM</code>: Use up to 7 GB memory and 4 vCPUs for
     * builds.</p> </li> <li> <p> <code>BUILD_GENERAL1_LARGE</code>: Use up to 16 GB
     * memory and 8 vCPUs for builds, depending on your environment type.</p> </li>
     * <li> <p> <code>BUILD_GENERAL1_XLARGE</code>: Use up to 70 GB memory and 36 vCPUs
     * for builds, depending on your environment type.</p> </li> <li> <p>
     * <code>BUILD_GENERAL1_2XLARGE</code>: Use up to 145 GB memory, 72 vCPUs, and 824
     * GB of SSD storage for builds. This compute type supports Docker images up to 100
     * GB uncompressed.</p> </li> </ul> <p> If you use
     * <code>BUILD_GENERAL1_SMALL</code>: </p> <ul> <li> <p> For environment type
     * <code>LINUX_CONTAINER</code>, you can use up to 3 GB memory and 2 vCPUs for
     * builds. </p> </li> <li> <p> For environment type
     * <code>LINUX_GPU_CONTAINER</code>, you can use up to 16 GB memory, 4 vCPUs, and 1
     * NVIDIA A10G Tensor Core GPU for builds.</p> </li> <li> <p> For environment type
     * <code>ARM_CONTAINER</code>, you can use up to 4 GB memory and 2 vCPUs on
     * ARM-based processors for builds.</p> </li> </ul> <p> If you use
     * <code>BUILD_GENERAL1_LARGE</code>: </p> <ul> <li> <p> For environment type
     * <code>LINUX_CONTAINER</code>, you can use up to 15 GB memory and 8 vCPUs for
     * builds. </p> </li> <li> <p> For environment type
     * <code>LINUX_GPU_CONTAINER</code>, you can use up to 255 GB memory, 32 vCPUs, and
     * 4 NVIDIA Tesla V100 GPUs for builds.</p> </li> <li> <p> For environment type
     * <code>ARM_CONTAINER</code>, you can use up to 16 GB memory and 8 vCPUs on
     * ARM-based processors for builds.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/build-env-ref-compute-types.html">Build
     * environment compute types</a> in the <i>CodeBuild User Guide.</i> </p>
     */
    inline const ComputeType& GetComputeType() const{ return m_computeType; }

    /**
     * <p>Information about the compute resources the compute fleet uses. Available
     * values include:</p> <ul> <li> <p> <code>BUILD_GENERAL1_SMALL</code>: Use up to 3
     * GB memory and 2 vCPUs for builds.</p> </li> <li> <p>
     * <code>BUILD_GENERAL1_MEDIUM</code>: Use up to 7 GB memory and 4 vCPUs for
     * builds.</p> </li> <li> <p> <code>BUILD_GENERAL1_LARGE</code>: Use up to 16 GB
     * memory and 8 vCPUs for builds, depending on your environment type.</p> </li>
     * <li> <p> <code>BUILD_GENERAL1_XLARGE</code>: Use up to 70 GB memory and 36 vCPUs
     * for builds, depending on your environment type.</p> </li> <li> <p>
     * <code>BUILD_GENERAL1_2XLARGE</code>: Use up to 145 GB memory, 72 vCPUs, and 824
     * GB of SSD storage for builds. This compute type supports Docker images up to 100
     * GB uncompressed.</p> </li> </ul> <p> If you use
     * <code>BUILD_GENERAL1_SMALL</code>: </p> <ul> <li> <p> For environment type
     * <code>LINUX_CONTAINER</code>, you can use up to 3 GB memory and 2 vCPUs for
     * builds. </p> </li> <li> <p> For environment type
     * <code>LINUX_GPU_CONTAINER</code>, you can use up to 16 GB memory, 4 vCPUs, and 1
     * NVIDIA A10G Tensor Core GPU for builds.</p> </li> <li> <p> For environment type
     * <code>ARM_CONTAINER</code>, you can use up to 4 GB memory and 2 vCPUs on
     * ARM-based processors for builds.</p> </li> </ul> <p> If you use
     * <code>BUILD_GENERAL1_LARGE</code>: </p> <ul> <li> <p> For environment type
     * <code>LINUX_CONTAINER</code>, you can use up to 15 GB memory and 8 vCPUs for
     * builds. </p> </li> <li> <p> For environment type
     * <code>LINUX_GPU_CONTAINER</code>, you can use up to 255 GB memory, 32 vCPUs, and
     * 4 NVIDIA Tesla V100 GPUs for builds.</p> </li> <li> <p> For environment type
     * <code>ARM_CONTAINER</code>, you can use up to 16 GB memory and 8 vCPUs on
     * ARM-based processors for builds.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/build-env-ref-compute-types.html">Build
     * environment compute types</a> in the <i>CodeBuild User Guide.</i> </p>
     */
    inline bool ComputeTypeHasBeenSet() const { return m_computeTypeHasBeenSet; }

    /**
     * <p>Information about the compute resources the compute fleet uses. Available
     * values include:</p> <ul> <li> <p> <code>BUILD_GENERAL1_SMALL</code>: Use up to 3
     * GB memory and 2 vCPUs for builds.</p> </li> <li> <p>
     * <code>BUILD_GENERAL1_MEDIUM</code>: Use up to 7 GB memory and 4 vCPUs for
     * builds.</p> </li> <li> <p> <code>BUILD_GENERAL1_LARGE</code>: Use up to 16 GB
     * memory and 8 vCPUs for builds, depending on your environment type.</p> </li>
     * <li> <p> <code>BUILD_GENERAL1_XLARGE</code>: Use up to 70 GB memory and 36 vCPUs
     * for builds, depending on your environment type.</p> </li> <li> <p>
     * <code>BUILD_GENERAL1_2XLARGE</code>: Use up to 145 GB memory, 72 vCPUs, and 824
     * GB of SSD storage for builds. This compute type supports Docker images up to 100
     * GB uncompressed.</p> </li> </ul> <p> If you use
     * <code>BUILD_GENERAL1_SMALL</code>: </p> <ul> <li> <p> For environment type
     * <code>LINUX_CONTAINER</code>, you can use up to 3 GB memory and 2 vCPUs for
     * builds. </p> </li> <li> <p> For environment type
     * <code>LINUX_GPU_CONTAINER</code>, you can use up to 16 GB memory, 4 vCPUs, and 1
     * NVIDIA A10G Tensor Core GPU for builds.</p> </li> <li> <p> For environment type
     * <code>ARM_CONTAINER</code>, you can use up to 4 GB memory and 2 vCPUs on
     * ARM-based processors for builds.</p> </li> </ul> <p> If you use
     * <code>BUILD_GENERAL1_LARGE</code>: </p> <ul> <li> <p> For environment type
     * <code>LINUX_CONTAINER</code>, you can use up to 15 GB memory and 8 vCPUs for
     * builds. </p> </li> <li> <p> For environment type
     * <code>LINUX_GPU_CONTAINER</code>, you can use up to 255 GB memory, 32 vCPUs, and
     * 4 NVIDIA Tesla V100 GPUs for builds.</p> </li> <li> <p> For environment type
     * <code>ARM_CONTAINER</code>, you can use up to 16 GB memory and 8 vCPUs on
     * ARM-based processors for builds.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/build-env-ref-compute-types.html">Build
     * environment compute types</a> in the <i>CodeBuild User Guide.</i> </p>
     */
    inline void SetComputeType(const ComputeType& value) { m_computeTypeHasBeenSet = true; m_computeType = value; }

    /**
     * <p>Information about the compute resources the compute fleet uses. Available
     * values include:</p> <ul> <li> <p> <code>BUILD_GENERAL1_SMALL</code>: Use up to 3
     * GB memory and 2 vCPUs for builds.</p> </li> <li> <p>
     * <code>BUILD_GENERAL1_MEDIUM</code>: Use up to 7 GB memory and 4 vCPUs for
     * builds.</p> </li> <li> <p> <code>BUILD_GENERAL1_LARGE</code>: Use up to 16 GB
     * memory and 8 vCPUs for builds, depending on your environment type.</p> </li>
     * <li> <p> <code>BUILD_GENERAL1_XLARGE</code>: Use up to 70 GB memory and 36 vCPUs
     * for builds, depending on your environment type.</p> </li> <li> <p>
     * <code>BUILD_GENERAL1_2XLARGE</code>: Use up to 145 GB memory, 72 vCPUs, and 824
     * GB of SSD storage for builds. This compute type supports Docker images up to 100
     * GB uncompressed.</p> </li> </ul> <p> If you use
     * <code>BUILD_GENERAL1_SMALL</code>: </p> <ul> <li> <p> For environment type
     * <code>LINUX_CONTAINER</code>, you can use up to 3 GB memory and 2 vCPUs for
     * builds. </p> </li> <li> <p> For environment type
     * <code>LINUX_GPU_CONTAINER</code>, you can use up to 16 GB memory, 4 vCPUs, and 1
     * NVIDIA A10G Tensor Core GPU for builds.</p> </li> <li> <p> For environment type
     * <code>ARM_CONTAINER</code>, you can use up to 4 GB memory and 2 vCPUs on
     * ARM-based processors for builds.</p> </li> </ul> <p> If you use
     * <code>BUILD_GENERAL1_LARGE</code>: </p> <ul> <li> <p> For environment type
     * <code>LINUX_CONTAINER</code>, you can use up to 15 GB memory and 8 vCPUs for
     * builds. </p> </li> <li> <p> For environment type
     * <code>LINUX_GPU_CONTAINER</code>, you can use up to 255 GB memory, 32 vCPUs, and
     * 4 NVIDIA Tesla V100 GPUs for builds.</p> </li> <li> <p> For environment type
     * <code>ARM_CONTAINER</code>, you can use up to 16 GB memory and 8 vCPUs on
     * ARM-based processors for builds.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/build-env-ref-compute-types.html">Build
     * environment compute types</a> in the <i>CodeBuild User Guide.</i> </p>
     */
    inline void SetComputeType(ComputeType&& value) { m_computeTypeHasBeenSet = true; m_computeType = std::move(value); }

    /**
     * <p>Information about the compute resources the compute fleet uses. Available
     * values include:</p> <ul> <li> <p> <code>BUILD_GENERAL1_SMALL</code>: Use up to 3
     * GB memory and 2 vCPUs for builds.</p> </li> <li> <p>
     * <code>BUILD_GENERAL1_MEDIUM</code>: Use up to 7 GB memory and 4 vCPUs for
     * builds.</p> </li> <li> <p> <code>BUILD_GENERAL1_LARGE</code>: Use up to 16 GB
     * memory and 8 vCPUs for builds, depending on your environment type.</p> </li>
     * <li> <p> <code>BUILD_GENERAL1_XLARGE</code>: Use up to 70 GB memory and 36 vCPUs
     * for builds, depending on your environment type.</p> </li> <li> <p>
     * <code>BUILD_GENERAL1_2XLARGE</code>: Use up to 145 GB memory, 72 vCPUs, and 824
     * GB of SSD storage for builds. This compute type supports Docker images up to 100
     * GB uncompressed.</p> </li> </ul> <p> If you use
     * <code>BUILD_GENERAL1_SMALL</code>: </p> <ul> <li> <p> For environment type
     * <code>LINUX_CONTAINER</code>, you can use up to 3 GB memory and 2 vCPUs for
     * builds. </p> </li> <li> <p> For environment type
     * <code>LINUX_GPU_CONTAINER</code>, you can use up to 16 GB memory, 4 vCPUs, and 1
     * NVIDIA A10G Tensor Core GPU for builds.</p> </li> <li> <p> For environment type
     * <code>ARM_CONTAINER</code>, you can use up to 4 GB memory and 2 vCPUs on
     * ARM-based processors for builds.</p> </li> </ul> <p> If you use
     * <code>BUILD_GENERAL1_LARGE</code>: </p> <ul> <li> <p> For environment type
     * <code>LINUX_CONTAINER</code>, you can use up to 15 GB memory and 8 vCPUs for
     * builds. </p> </li> <li> <p> For environment type
     * <code>LINUX_GPU_CONTAINER</code>, you can use up to 255 GB memory, 32 vCPUs, and
     * 4 NVIDIA Tesla V100 GPUs for builds.</p> </li> <li> <p> For environment type
     * <code>ARM_CONTAINER</code>, you can use up to 16 GB memory and 8 vCPUs on
     * ARM-based processors for builds.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/build-env-ref-compute-types.html">Build
     * environment compute types</a> in the <i>CodeBuild User Guide.</i> </p>
     */
    inline Fleet& WithComputeType(const ComputeType& value) { SetComputeType(value); return *this;}

    /**
     * <p>Information about the compute resources the compute fleet uses. Available
     * values include:</p> <ul> <li> <p> <code>BUILD_GENERAL1_SMALL</code>: Use up to 3
     * GB memory and 2 vCPUs for builds.</p> </li> <li> <p>
     * <code>BUILD_GENERAL1_MEDIUM</code>: Use up to 7 GB memory and 4 vCPUs for
     * builds.</p> </li> <li> <p> <code>BUILD_GENERAL1_LARGE</code>: Use up to 16 GB
     * memory and 8 vCPUs for builds, depending on your environment type.</p> </li>
     * <li> <p> <code>BUILD_GENERAL1_XLARGE</code>: Use up to 70 GB memory and 36 vCPUs
     * for builds, depending on your environment type.</p> </li> <li> <p>
     * <code>BUILD_GENERAL1_2XLARGE</code>: Use up to 145 GB memory, 72 vCPUs, and 824
     * GB of SSD storage for builds. This compute type supports Docker images up to 100
     * GB uncompressed.</p> </li> </ul> <p> If you use
     * <code>BUILD_GENERAL1_SMALL</code>: </p> <ul> <li> <p> For environment type
     * <code>LINUX_CONTAINER</code>, you can use up to 3 GB memory and 2 vCPUs for
     * builds. </p> </li> <li> <p> For environment type
     * <code>LINUX_GPU_CONTAINER</code>, you can use up to 16 GB memory, 4 vCPUs, and 1
     * NVIDIA A10G Tensor Core GPU for builds.</p> </li> <li> <p> For environment type
     * <code>ARM_CONTAINER</code>, you can use up to 4 GB memory and 2 vCPUs on
     * ARM-based processors for builds.</p> </li> </ul> <p> If you use
     * <code>BUILD_GENERAL1_LARGE</code>: </p> <ul> <li> <p> For environment type
     * <code>LINUX_CONTAINER</code>, you can use up to 15 GB memory and 8 vCPUs for
     * builds. </p> </li> <li> <p> For environment type
     * <code>LINUX_GPU_CONTAINER</code>, you can use up to 255 GB memory, 32 vCPUs, and
     * 4 NVIDIA Tesla V100 GPUs for builds.</p> </li> <li> <p> For environment type
     * <code>ARM_CONTAINER</code>, you can use up to 16 GB memory and 8 vCPUs on
     * ARM-based processors for builds.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/build-env-ref-compute-types.html">Build
     * environment compute types</a> in the <i>CodeBuild User Guide.</i> </p>
     */
    inline Fleet& WithComputeType(ComputeType&& value) { SetComputeType(std::move(value)); return *this;}


    /**
     * <p>The scaling configuration of the compute fleet.</p>
     */
    inline const ScalingConfigurationOutput& GetScalingConfiguration() const{ return m_scalingConfiguration; }

    /**
     * <p>The scaling configuration of the compute fleet.</p>
     */
    inline bool ScalingConfigurationHasBeenSet() const { return m_scalingConfigurationHasBeenSet; }

    /**
     * <p>The scaling configuration of the compute fleet.</p>
     */
    inline void SetScalingConfiguration(const ScalingConfigurationOutput& value) { m_scalingConfigurationHasBeenSet = true; m_scalingConfiguration = value; }

    /**
     * <p>The scaling configuration of the compute fleet.</p>
     */
    inline void SetScalingConfiguration(ScalingConfigurationOutput&& value) { m_scalingConfigurationHasBeenSet = true; m_scalingConfiguration = std::move(value); }

    /**
     * <p>The scaling configuration of the compute fleet.</p>
     */
    inline Fleet& WithScalingConfiguration(const ScalingConfigurationOutput& value) { SetScalingConfiguration(value); return *this;}

    /**
     * <p>The scaling configuration of the compute fleet.</p>
     */
    inline Fleet& WithScalingConfiguration(ScalingConfigurationOutput&& value) { SetScalingConfiguration(std::move(value)); return *this;}


    /**
     * <p>A list of tag key and value pairs associated with this compute fleet.</p>
     * <p>These tags are available for use by Amazon Web Services services that support
     * CodeBuild build project tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tag key and value pairs associated with this compute fleet.</p>
     * <p>These tags are available for use by Amazon Web Services services that support
     * CodeBuild build project tags.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of tag key and value pairs associated with this compute fleet.</p>
     * <p>These tags are available for use by Amazon Web Services services that support
     * CodeBuild build project tags.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tag key and value pairs associated with this compute fleet.</p>
     * <p>These tags are available for use by Amazon Web Services services that support
     * CodeBuild build project tags.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of tag key and value pairs associated with this compute fleet.</p>
     * <p>These tags are available for use by Amazon Web Services services that support
     * CodeBuild build project tags.</p>
     */
    inline Fleet& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tag key and value pairs associated with this compute fleet.</p>
     * <p>These tags are available for use by Amazon Web Services services that support
     * CodeBuild build project tags.</p>
     */
    inline Fleet& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tag key and value pairs associated with this compute fleet.</p>
     * <p>These tags are available for use by Amazon Web Services services that support
     * CodeBuild build project tags.</p>
     */
    inline Fleet& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of tag key and value pairs associated with this compute fleet.</p>
     * <p>These tags are available for use by Amazon Web Services services that support
     * CodeBuild build project tags.</p>
     */
    inline Fleet& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_created;
    bool m_createdHasBeenSet = false;

    Aws::Utils::DateTime m_lastModified;
    bool m_lastModifiedHasBeenSet = false;

    FleetStatus m_status;
    bool m_statusHasBeenSet = false;

    int m_baseCapacity;
    bool m_baseCapacityHasBeenSet = false;

    EnvironmentType m_environmentType;
    bool m_environmentTypeHasBeenSet = false;

    ComputeType m_computeType;
    bool m_computeTypeHasBeenSet = false;

    ScalingConfigurationOutput m_scalingConfiguration;
    bool m_scalingConfigurationHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
