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
    AWS_CONNECTCASES_API LayoutConfiguration() = default;
    AWS_CONNECTCASES_API LayoutConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API LayoutConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Unique identifier of a layout. </p>
     */
    inline const Aws::String& GetDefaultLayout() const { return m_defaultLayout; }
    inline bool DefaultLayoutHasBeenSet() const { return m_defaultLayoutHasBeenSet; }
    template<typename DefaultLayoutT = Aws::String>
    void SetDefaultLayout(DefaultLayoutT&& value) { m_defaultLayoutHasBeenSet = true; m_defaultLayout = std::forward<DefaultLayoutT>(value); }
    template<typename DefaultLayoutT = Aws::String>
    LayoutConfiguration& WithDefaultLayout(DefaultLayoutT&& value) { SetDefaultLayout(std::forward<DefaultLayoutT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_defaultLayout;
    bool m_defaultLayoutHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
