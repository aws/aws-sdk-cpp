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
    AWS_MAINFRAMEMODERNIZATION_API EngineVersionsSummary();
    AWS_MAINFRAMEMODERNIZATION_API EngineVersionsSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API EngineVersionsSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of target platform for the application.</p>
     */
    inline const Aws::String& GetEngineType() const{ return m_engineType; }
    inline bool EngineTypeHasBeenSet() const { return m_engineTypeHasBeenSet; }
    inline void SetEngineType(const Aws::String& value) { m_engineTypeHasBeenSet = true; m_engineType = value; }
    inline void SetEngineType(Aws::String&& value) { m_engineTypeHasBeenSet = true; m_engineType = std::move(value); }
    inline void SetEngineType(const char* value) { m_engineTypeHasBeenSet = true; m_engineType.assign(value); }
    inline EngineVersionsSummary& WithEngineType(const Aws::String& value) { SetEngineType(value); return *this;}
    inline EngineVersionsSummary& WithEngineType(Aws::String&& value) { SetEngineType(std::move(value)); return *this;}
    inline EngineVersionsSummary& WithEngineType(const char* value) { SetEngineType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the engine type used by the application.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }
    inline EngineVersionsSummary& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}
    inline EngineVersionsSummary& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}
    inline EngineVersionsSummary& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}
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
