/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/entityresolution/model/IncrementalRunType.h>
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
namespace EntityResolution
{
namespace Model
{

  /**
   * <p>Optional. An object that defines the incremental run type. This object
   * contains only the <code>incrementalRunType</code> field, which appears as
   * "Automatic" in the console. </p>  <p>For workflows where
   * <code>resolutionType</code> is <code>ML_MATCHING</code> or
   * <code>PROVIDER</code>, incremental processing is not supported. </p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/entityresolution-2018-05-10/IncrementalRunConfig">AWS
   * API Reference</a></p>
   */
  class IncrementalRunConfig
  {
  public:
    AWS_ENTITYRESOLUTION_API IncrementalRunConfig() = default;
    AWS_ENTITYRESOLUTION_API IncrementalRunConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API IncrementalRunConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of incremental run. The only valid value is <code>IMMEDIATE</code>.
     * This appears as "Automatic" in the console.</p>  <p>For workflows
     * where <code>resolutionType</code> is <code>ML_MATCHING</code> or
     * <code>PROVIDER</code>, incremental processing is not supported. </p>
     * 
     */
    inline IncrementalRunType GetIncrementalRunType() const { return m_incrementalRunType; }
    inline bool IncrementalRunTypeHasBeenSet() const { return m_incrementalRunTypeHasBeenSet; }
    inline void SetIncrementalRunType(IncrementalRunType value) { m_incrementalRunTypeHasBeenSet = true; m_incrementalRunType = value; }
    inline IncrementalRunConfig& WithIncrementalRunType(IncrementalRunType value) { SetIncrementalRunType(value); return *this;}
    ///@}
  private:

    IncrementalRunType m_incrementalRunType{IncrementalRunType::NOT_SET};
    bool m_incrementalRunTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
