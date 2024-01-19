/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/CodeBuildRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codebuild/model/EnvironmentType.h>
#include <aws/codebuild/model/ComputeType.h>
#include <aws/codebuild/model/ScalingConfigurationInput.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codebuild/model/Tag.h>
#include <utility>

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

  /**
   */
  class CreateFleetRequest : public CodeBuildRequest
  {
  public:
    AWS_CODEBUILD_API CreateFleetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFleet"; }

    AWS_CODEBUILD_API Aws::String SerializePayload() const override;

    AWS_CODEBUILD_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline CreateFleetRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the compute fleet.</p>
     */
    inline CreateFleetRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the compute fleet.</p>
     */
    inline CreateFleetRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The initial number of machines allocated to the ﬂeet, which deﬁnes the number
     * of builds that can run in parallel.</p>
     */
    inline int GetBaseCapacity() const{ return m_baseCapacity; }

    /**
     * <p>The initial number of machines allocated to the ﬂeet, which deﬁnes the number
     * of builds that can run in parallel.</p>
     */
    inline bool BaseCapacityHasBeenSet() const { return m_baseCapacityHasBeenSet; }

    /**
     * <p>The initial number of machines allocated to the ﬂeet, which deﬁnes the number
     * of builds that can run in parallel.</p>
     */
    inline void SetBaseCapacity(int value) { m_baseCapacityHasBeenSet = true; m_baseCapacity = value; }

    /**
     * <p>The initial number of machines allocated to the ﬂeet, which deﬁnes the number
     * of builds that can run in parallel.</p>
     */
    inline CreateFleetRequest& WithBaseCapacity(int value) { SetBaseCapacity(value); return *this;}


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
    inline CreateFleetRequest& WithEnvironmentType(const EnvironmentType& value) { SetEnvironmentType(value); return *this;}

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
    inline CreateFleetRequest& WithEnvironmentType(EnvironmentType&& value) { SetEnvironmentType(std::move(value)); return *this;}


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
    inline CreateFleetRequest& WithComputeType(const ComputeType& value) { SetComputeType(value); return *this;}

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
    inline CreateFleetRequest& WithComputeType(ComputeType&& value) { SetComputeType(std::move(value)); return *this;}


    /**
     * <p>The scaling configuration of the compute fleet.</p>
     */
    inline const ScalingConfigurationInput& GetScalingConfiguration() const{ return m_scalingConfiguration; }

    /**
     * <p>The scaling configuration of the compute fleet.</p>
     */
    inline bool ScalingConfigurationHasBeenSet() const { return m_scalingConfigurationHasBeenSet; }

    /**
     * <p>The scaling configuration of the compute fleet.</p>
     */
    inline void SetScalingConfiguration(const ScalingConfigurationInput& value) { m_scalingConfigurationHasBeenSet = true; m_scalingConfiguration = value; }

    /**
     * <p>The scaling configuration of the compute fleet.</p>
     */
    inline void SetScalingConfiguration(ScalingConfigurationInput&& value) { m_scalingConfigurationHasBeenSet = true; m_scalingConfiguration = std::move(value); }

    /**
     * <p>The scaling configuration of the compute fleet.</p>
     */
    inline CreateFleetRequest& WithScalingConfiguration(const ScalingConfigurationInput& value) { SetScalingConfiguration(value); return *this;}

    /**
     * <p>The scaling configuration of the compute fleet.</p>
     */
    inline CreateFleetRequest& WithScalingConfiguration(ScalingConfigurationInput&& value) { SetScalingConfiguration(std::move(value)); return *this;}


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
    inline CreateFleetRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tag key and value pairs associated with this compute fleet.</p>
     * <p>These tags are available for use by Amazon Web Services services that support
     * CodeBuild build project tags.</p>
     */
    inline CreateFleetRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tag key and value pairs associated with this compute fleet.</p>
     * <p>These tags are available for use by Amazon Web Services services that support
     * CodeBuild build project tags.</p>
     */
    inline CreateFleetRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of tag key and value pairs associated with this compute fleet.</p>
     * <p>These tags are available for use by Amazon Web Services services that support
     * CodeBuild build project tags.</p>
     */
    inline CreateFleetRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_baseCapacity;
    bool m_baseCapacityHasBeenSet = false;

    EnvironmentType m_environmentType;
    bool m_environmentTypeHasBeenSet = false;

    ComputeType m_computeType;
    bool m_computeTypeHasBeenSet = false;

    ScalingConfigurationInput m_scalingConfiguration;
    bool m_scalingConfigurationHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
