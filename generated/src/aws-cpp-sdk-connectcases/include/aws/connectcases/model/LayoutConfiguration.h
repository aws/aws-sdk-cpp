/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
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
namespace ConnectCases
{
namespace Model
{

  /**
   * <p>Object to store configuration of layouts associated to the
   * template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/LayoutConfiguration">AWS
   * API Reference</a></p>
   */
  class LayoutConfiguration
  {
  public:
    AWS_CONNECTCASES_API LayoutConfiguration();
    AWS_CONNECTCASES_API LayoutConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API LayoutConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Unique identifier of a layout. </p>
     */
    inline const Aws::String& GetDefaultLayout() const{ return m_defaultLayout; }

    /**
     * <p> Unique identifier of a layout. </p>
     */
    inline bool DefaultLayoutHasBeenSet() const { return m_defaultLayoutHasBeenSet; }

    /**
     * <p> Unique identifier of a layout. </p>
     */
    inline void SetDefaultLayout(const Aws::String& value) { m_defaultLayoutHasBeenSet = true; m_defaultLayout = value; }

    /**
     * <p> Unique identifier of a layout. </p>
     */
    inline void SetDefaultLayout(Aws::String&& value) { m_defaultLayoutHasBeenSet = true; m_defaultLayout = std::move(value); }

    /**
     * <p> Unique identifier of a layout. </p>
     */
    inline void SetDefaultLayout(const char* value) { m_defaultLayoutHasBeenSet = true; m_defaultLayout.assign(value); }

    /**
     * <p> Unique identifier of a layout. </p>
     */
    inline LayoutConfiguration& WithDefaultLayout(const Aws::String& value) { SetDefaultLayout(value); return *this;}

    /**
     * <p> Unique identifier of a layout. </p>
     */
    inline LayoutConfiguration& WithDefaultLayout(Aws::String&& value) { SetDefaultLayout(std::move(value)); return *this;}

    /**
     * <p> Unique identifier of a layout. </p>
     */
    inline LayoutConfiguration& WithDefaultLayout(const char* value) { SetDefaultLayout(value); return *this;}

  private:

    Aws::String m_defaultLayout;
    bool m_defaultLayoutHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
