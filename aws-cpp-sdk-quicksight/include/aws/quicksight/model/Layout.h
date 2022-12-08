/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/LayoutConfiguration.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>A <code>Layout</code> defines the placement of elements within a sheet.</p>
   * <p>For more information, see <a
   * href="https://docs.aws.amazon.com/quicksight/latest/user/types-of-layout.html">Types
   * of layout</a> in the <i>Amazon QuickSight User Guide</i>.</p> <p>This is a union
   * type structure. For this structure to be valid, only one of the attributes can
   * be defined.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/Layout">AWS
   * API Reference</a></p>
   */
  class Layout
  {
  public:
    AWS_QUICKSIGHT_API Layout();
    AWS_QUICKSIGHT_API Layout(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Layout& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The configuration that determines what the type of layout for a sheet.</p>
     */
    inline const LayoutConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>The configuration that determines what the type of layout for a sheet.</p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>The configuration that determines what the type of layout for a sheet.</p>
     */
    inline void SetConfiguration(const LayoutConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>The configuration that determines what the type of layout for a sheet.</p>
     */
    inline void SetConfiguration(LayoutConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>The configuration that determines what the type of layout for a sheet.</p>
     */
    inline Layout& WithConfiguration(const LayoutConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>The configuration that determines what the type of layout for a sheet.</p>
     */
    inline Layout& WithConfiguration(LayoutConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}

  private:

    LayoutConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
