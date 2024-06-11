﻿/**
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
   * <p>Information about the configuration of an integrated development environment
   * (IDE) for a Dev Environment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/IdeConfiguration">AWS
   * API Reference</a></p>
   */
  class IdeConfiguration
  {
  public:
    AWS_CODECATALYST_API IdeConfiguration();
    AWS_CODECATALYST_API IdeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API IdeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A link to the IDE runtime image. </p>  <p>This parameter is not
     * required for <code>VSCode</code>.</p> 
     */
    inline const Aws::String& GetRuntime() const{ return m_runtime; }
    inline bool RuntimeHasBeenSet() const { return m_runtimeHasBeenSet; }
    inline void SetRuntime(const Aws::String& value) { m_runtimeHasBeenSet = true; m_runtime = value; }
    inline void SetRuntime(Aws::String&& value) { m_runtimeHasBeenSet = true; m_runtime = std::move(value); }
    inline void SetRuntime(const char* value) { m_runtimeHasBeenSet = true; m_runtime.assign(value); }
    inline IdeConfiguration& WithRuntime(const Aws::String& value) { SetRuntime(value); return *this;}
    inline IdeConfiguration& WithRuntime(Aws::String&& value) { SetRuntime(std::move(value)); return *this;}
    inline IdeConfiguration& WithRuntime(const char* value) { SetRuntime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the IDE. Valid values include <code>Cloud9</code>,
     * <code>IntelliJ</code>, <code>PyCharm</code>, <code>GoLand</code>, and
     * <code>VSCode</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline IdeConfiguration& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline IdeConfiguration& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline IdeConfiguration& WithName(const char* value) { SetName(value); return *this;}
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
