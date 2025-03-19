/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/model/ItemPath.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Information about the detected threats associated with the generated
   * finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/Threat">AWS
   * API Reference</a></p>
   */
  class Threat
  {
  public:
    AWS_GUARDDUTY_API Threat() = default;
    AWS_GUARDDUTY_API Threat(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Threat& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the detected threat that caused GuardDuty to generate this
     * finding.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Threat& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source of the threat that generated this finding.</p>
     */
    inline const Aws::String& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = Aws::String>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = Aws::String>
    Threat& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the nested item path and hash of the protected
     * resource.</p>
     */
    inline const Aws::Vector<ItemPath>& GetItemPaths() const { return m_itemPaths; }
    inline bool ItemPathsHasBeenSet() const { return m_itemPathsHasBeenSet; }
    template<typename ItemPathsT = Aws::Vector<ItemPath>>
    void SetItemPaths(ItemPathsT&& value) { m_itemPathsHasBeenSet = true; m_itemPaths = std::forward<ItemPathsT>(value); }
    template<typename ItemPathsT = Aws::Vector<ItemPath>>
    Threat& WithItemPaths(ItemPathsT&& value) { SetItemPaths(std::forward<ItemPathsT>(value)); return *this;}
    template<typename ItemPathsT = ItemPath>
    Threat& AddItemPaths(ItemPathsT&& value) { m_itemPathsHasBeenSet = true; m_itemPaths.emplace_back(std::forward<ItemPathsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Aws::Vector<ItemPath> m_itemPaths;
    bool m_itemPathsHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
