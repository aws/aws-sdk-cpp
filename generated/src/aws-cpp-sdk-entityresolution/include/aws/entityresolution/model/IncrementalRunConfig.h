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
   * <p>An object which defines an incremental run type and has only
   * <code>incrementalRunType</code> as a field.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/entityresolution-2018-05-10/IncrementalRunConfig">AWS
   * API Reference</a></p>
   */
  class IncrementalRunConfig
  {
  public:
    AWS_ENTITYRESOLUTION_API IncrementalRunConfig();
    AWS_ENTITYRESOLUTION_API IncrementalRunConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API IncrementalRunConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ENTITYRESOLUTION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of incremental run. It takes only one value:
     * <code>IMMEDIATE</code>.</p>
     */
    inline const IncrementalRunType& GetIncrementalRunType() const{ return m_incrementalRunType; }

    /**
     * <p>The type of incremental run. It takes only one value:
     * <code>IMMEDIATE</code>.</p>
     */
    inline bool IncrementalRunTypeHasBeenSet() const { return m_incrementalRunTypeHasBeenSet; }

    /**
     * <p>The type of incremental run. It takes only one value:
     * <code>IMMEDIATE</code>.</p>
     */
    inline void SetIncrementalRunType(const IncrementalRunType& value) { m_incrementalRunTypeHasBeenSet = true; m_incrementalRunType = value; }

    /**
     * <p>The type of incremental run. It takes only one value:
     * <code>IMMEDIATE</code>.</p>
     */
    inline void SetIncrementalRunType(IncrementalRunType&& value) { m_incrementalRunTypeHasBeenSet = true; m_incrementalRunType = std::move(value); }

    /**
     * <p>The type of incremental run. It takes only one value:
     * <code>IMMEDIATE</code>.</p>
     */
    inline IncrementalRunConfig& WithIncrementalRunType(const IncrementalRunType& value) { SetIncrementalRunType(value); return *this;}

    /**
     * <p>The type of incremental run. It takes only one value:
     * <code>IMMEDIATE</code>.</p>
     */
    inline IncrementalRunConfig& WithIncrementalRunType(IncrementalRunType&& value) { SetIncrementalRunType(std::move(value)); return *this;}

  private:

    IncrementalRunType m_incrementalRunType;
    bool m_incrementalRunTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
