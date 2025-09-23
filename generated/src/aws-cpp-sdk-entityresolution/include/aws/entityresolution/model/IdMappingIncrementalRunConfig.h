/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/entityresolution/model/IdMappingIncrementalRunType.h>
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
   * <p> Incremental run configuration for an ID mapping workflow.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/entityresolution-2018-05-10/IdMappingIncrementalRunConfig">AWS
   * API Reference</a></p>
   */
  class IdMappingIncrementalRunConfig
  {
  public:
    AWS_ENTITYRESOLUTION_API IdMappingIncrementalRunConfig() = default;
    AWS_ENTITYRESOLUTION_API IdMappingIncrementalRunConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API IdMappingIncrementalRunConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The incremental run type for an ID mapping workflow.</p> <p>It takes only
     * one value: <code>ON_DEMAND</code>. This setting runs the ID mapping workflow
     * when it's manually triggered through the <code>StartIdMappingJob</code> API.</p>
     */
    inline IdMappingIncrementalRunType GetIncrementalRunType() const { return m_incrementalRunType; }
    inline bool IncrementalRunTypeHasBeenSet() const { return m_incrementalRunTypeHasBeenSet; }
    inline void SetIncrementalRunType(IdMappingIncrementalRunType value) { m_incrementalRunTypeHasBeenSet = true; m_incrementalRunType = value; }
    inline IdMappingIncrementalRunConfig& WithIncrementalRunType(IdMappingIncrementalRunType value) { SetIncrementalRunType(value); return *this;}
    ///@}
  private:

    IdMappingIncrementalRunType m_incrementalRunType{IdMappingIncrementalRunType::NOT_SET};
    bool m_incrementalRunTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
