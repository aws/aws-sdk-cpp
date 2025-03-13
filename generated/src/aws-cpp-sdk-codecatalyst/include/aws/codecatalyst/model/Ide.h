/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
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
namespace CodeCatalyst
{
namespace Model
{

  /**
   * <p>Information about an integrated development environment (IDE) used in a Dev
   * Environment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/Ide">AWS
   * API Reference</a></p>
   */
  class Ide
  {
  public:
    AWS_CODECATALYST_API Ide() = default;
    AWS_CODECATALYST_API Ide(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API Ide& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A link to the IDE runtime image.</p>
     */
    inline const Aws::String& GetRuntime() const { return m_runtime; }
    inline bool RuntimeHasBeenSet() const { return m_runtimeHasBeenSet; }
    template<typename RuntimeT = Aws::String>
    void SetRuntime(RuntimeT&& value) { m_runtimeHasBeenSet = true; m_runtime = std::forward<RuntimeT>(value); }
    template<typename RuntimeT = Aws::String>
    Ide& WithRuntime(RuntimeT&& value) { SetRuntime(std::forward<RuntimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the IDE.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Ide& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_runtime;
    bool m_runtimeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
