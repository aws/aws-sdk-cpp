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
   * <p> The input properties for the preloaded data store. Only data preloaded from
   * Synthea is supported.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/PreloadDataConfig">AWS
   * API Reference</a></p>
   */
  class PreloadDataConfig
  {
  public:
    AWS_HEALTHLAKE_API PreloadDataConfig();
    AWS_HEALTHLAKE_API PreloadDataConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTHLAKE_API PreloadDataConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTHLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of preloaded data. Only Synthea preloaded data is supported.</p>
     */
    inline const PreloadDataType& GetPreloadDataType() const{ return m_preloadDataType; }
    inline bool PreloadDataTypeHasBeenSet() const { return m_preloadDataTypeHasBeenSet; }
    inline void SetPreloadDataType(const PreloadDataType& value) { m_preloadDataTypeHasBeenSet = true; m_preloadDataType = value; }
    inline void SetPreloadDataType(PreloadDataType&& value) { m_preloadDataTypeHasBeenSet = true; m_preloadDataType = std::move(value); }
    inline PreloadDataConfig& WithPreloadDataType(const PreloadDataType& value) { SetPreloadDataType(value); return *this;}
    inline PreloadDataConfig& WithPreloadDataType(PreloadDataType&& value) { SetPreloadDataType(std::move(value)); return *this;}
    ///@}
  private:

    PreloadDataType m_preloadDataType;
    bool m_preloadDataTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace HealthLake
} // namespace Aws
