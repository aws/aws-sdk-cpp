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
    AWS_CODECATALYST_API Ide();
    AWS_CODECATALYST_API Ide(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API Ide& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A link to the IDE runtime image.</p>
     */
    inline const Aws::String& GetRuntime() const{ return m_runtime; }

    /**
     * <p>A link to the IDE runtime image.</p>
     */
    inline bool RuntimeHasBeenSet() const { return m_runtimeHasBeenSet; }

    /**
     * <p>A link to the IDE runtime image.</p>
     */
    inline void SetRuntime(const Aws::String& value) { m_runtimeHasBeenSet = true; m_runtime = value; }

    /**
     * <p>A link to the IDE runtime image.</p>
     */
    inline void SetRuntime(Aws::String&& value) { m_runtimeHasBeenSet = true; m_runtime = std::move(value); }

    /**
     * <p>A link to the IDE runtime image.</p>
     */
    inline void SetRuntime(const char* value) { m_runtimeHasBeenSet = true; m_runtime.assign(value); }

    /**
     * <p>A link to the IDE runtime image.</p>
     */
    inline Ide& WithRuntime(const Aws::String& value) { SetRuntime(value); return *this;}

    /**
     * <p>A link to the IDE runtime image.</p>
     */
    inline Ide& WithRuntime(Aws::String&& value) { SetRuntime(std::move(value)); return *this;}

    /**
     * <p>A link to the IDE runtime image.</p>
     */
    inline Ide& WithRuntime(const char* value) { SetRuntime(value); return *this;}


    /**
     * <p>The name of the IDE.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the IDE.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the IDE.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the IDE.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the IDE.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the IDE.</p>
     */
    inline Ide& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the IDE.</p>
     */
    inline Ide& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the IDE.</p>
     */
    inline Ide& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_runtime;
    bool m_runtimeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
