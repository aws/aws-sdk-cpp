/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/healthlake/model/PreloadDataType.h>
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
namespace HealthLake
{
namespace Model
{

  /**
   * <p>The input properties for the preloaded (Synthea) data store.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/PreloadDataConfig">AWS
   * API Reference</a></p>
   */
  class PreloadDataConfig
  {
  public:
    AWS_HEALTHLAKE_API PreloadDataConfig() = default;
    AWS_HEALTHLAKE_API PreloadDataConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTHLAKE_API PreloadDataConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTHLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of preloaded data. Only Synthea preloaded data is supported.</p>
     */
    inline PreloadDataType GetPreloadDataType() const { return m_preloadDataType; }
    inline bool PreloadDataTypeHasBeenSet() const { return m_preloadDataTypeHasBeenSet; }
    inline void SetPreloadDataType(PreloadDataType value) { m_preloadDataTypeHasBeenSet = true; m_preloadDataType = value; }
    inline PreloadDataConfig& WithPreloadDataType(PreloadDataType value) { SetPreloadDataType(value); return *this;}
    ///@}
  private:

    PreloadDataType m_preloadDataType{PreloadDataType::NOT_SET};
    bool m_preloadDataTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace HealthLake
} // namespace Aws
