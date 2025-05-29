/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/amplify/model/BuildComputeType.h>
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
namespace Amplify
{
namespace Model
{

  /**
   * <p>Describes the configuration details that apply to the jobs for an Amplify
   * app.</p> <p>Use <code>JobConfig</code> to apply configuration to jobs, such as
   * customizing the build instance size when you create or update an Amplify app.
   * For more information about customizable build instances, see <a
   * href="https://docs.aws.amazon.com/amplify/latest/userguide/custom-build-instance.html">Custom
   * build instances</a> in the <i>Amplify User Guide</i>.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/JobConfig">AWS
   * API Reference</a></p>
   */
  class JobConfig
  {
  public:
    AWS_AMPLIFY_API JobConfig() = default;
    AWS_AMPLIFY_API JobConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFY_API JobConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the size of the build instance. Amplify supports three instance
     * sizes: <code>STANDARD_8GB</code>, <code>LARGE_16GB</code>, and
     * <code>XLARGE_72GB</code>. If you don't specify a value, Amplify uses the
     * <code>STANDARD_8GB</code> default.</p> <p>The following list describes the CPU,
     * memory, and storage capacity for each build instance type:</p> <dl>
     * <dt>STANDARD_8GB</dt> <dd> <ul> <li> <p>vCPUs: 4</p> </li> <li> <p>Memory: 8
     * GiB</p> </li> <li> <p>Disk space: 128 GB</p> </li> </ul> </dd>
     * <dt>LARGE_16GB</dt> <dd> <ul> <li> <p>vCPUs: 8</p> </li> <li> <p>Memory: 16
     * GiB</p> </li> <li> <p>Disk space: 128 GB</p> </li> </ul> </dd>
     * <dt>XLARGE_72GB</dt> <dd> <ul> <li> <p>vCPUs: 36</p> </li> <li> <p>Memory: 72
     * GiB</p> </li> <li> <p>Disk space: 256 GB</p> </li> </ul> </dd> </dl>
     */
    inline BuildComputeType GetBuildComputeType() const { return m_buildComputeType; }
    inline bool BuildComputeTypeHasBeenSet() const { return m_buildComputeTypeHasBeenSet; }
    inline void SetBuildComputeType(BuildComputeType value) { m_buildComputeTypeHasBeenSet = true; m_buildComputeType = value; }
    inline JobConfig& WithBuildComputeType(BuildComputeType value) { SetBuildComputeType(value); return *this;}
    ///@}
  private:

    BuildComputeType m_buildComputeType{BuildComputeType::NOT_SET};
    bool m_buildComputeTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
