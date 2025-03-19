/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace MainframeModernization
{
namespace Model
{

  /**
   * <p>A subset of information about the engine version for a specific
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/EngineVersionsSummary">AWS
   * API Reference</a></p>
   */
  class EngineVersionsSummary
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API EngineVersionsSummary() = default;
    AWS_MAINFRAMEMODERNIZATION_API EngineVersionsSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API EngineVersionsSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of target platform for the application.</p>
     */
    inline const Aws::String& GetEngineType() const { return m_engineType; }
    inline bool EngineTypeHasBeenSet() const { return m_engineTypeHasBeenSet; }
    template<typename EngineTypeT = Aws::String>
    void SetEngineType(EngineTypeT&& value) { m_engineTypeHasBeenSet = true; m_engineType = std::forward<EngineTypeT>(value); }
    template<typename EngineTypeT = Aws::String>
    EngineVersionsSummary& WithEngineType(EngineTypeT&& value) { SetEngineType(std::forward<EngineTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the engine type used by the application.</p>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    EngineVersionsSummary& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_engineType;
    bool m_engineTypeHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
