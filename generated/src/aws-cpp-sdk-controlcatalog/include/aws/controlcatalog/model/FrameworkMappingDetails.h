/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controlcatalog/ControlCatalog_EXPORTS.h>
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
namespace ControlCatalog
{
namespace Model
{

  /**
   * <p>A structure that contains details about a framework mapping, including the
   * framework name and specific item within the framework that the control maps
   * to.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/controlcatalog-2018-05-10/FrameworkMappingDetails">AWS
   * API Reference</a></p>
   */
  class FrameworkMappingDetails
  {
  public:
    AWS_CONTROLCATALOG_API FrameworkMappingDetails() = default;
    AWS_CONTROLCATALOG_API FrameworkMappingDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLCATALOG_API FrameworkMappingDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLCATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the compliance framework that the control maps to.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    FrameworkMappingDetails& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specific item or requirement within the framework that the control maps
     * to.</p>
     */
    inline const Aws::String& GetItem() const { return m_item; }
    inline bool ItemHasBeenSet() const { return m_itemHasBeenSet; }
    template<typename ItemT = Aws::String>
    void SetItem(ItemT&& value) { m_itemHasBeenSet = true; m_item = std::forward<ItemT>(value); }
    template<typename ItemT = Aws::String>
    FrameworkMappingDetails& WithItem(ItemT&& value) { SetItem(std::forward<ItemT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_item;
    bool m_itemHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlCatalog
} // namespace Aws
