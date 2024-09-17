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
    AWS_GUARDDUTY_API Threat();
    AWS_GUARDDUTY_API Threat(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Threat& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the detected threat that caused GuardDuty to generate this
     * finding.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Threat& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Threat& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Threat& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source of the threat that generated this finding.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }
    inline Threat& WithSource(const Aws::String& value) { SetSource(value); return *this;}
    inline Threat& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}
    inline Threat& WithSource(const char* value) { SetSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the nested item path and hash of the protected
     * resource.</p>
     */
    inline const Aws::Vector<ItemPath>& GetItemPaths() const{ return m_itemPaths; }
    inline bool ItemPathsHasBeenSet() const { return m_itemPathsHasBeenSet; }
    inline void SetItemPaths(const Aws::Vector<ItemPath>& value) { m_itemPathsHasBeenSet = true; m_itemPaths = value; }
    inline void SetItemPaths(Aws::Vector<ItemPath>&& value) { m_itemPathsHasBeenSet = true; m_itemPaths = std::move(value); }
    inline Threat& WithItemPaths(const Aws::Vector<ItemPath>& value) { SetItemPaths(value); return *this;}
    inline Threat& WithItemPaths(Aws::Vector<ItemPath>&& value) { SetItemPaths(std::move(value)); return *this;}
    inline Threat& AddItemPaths(const ItemPath& value) { m_itemPathsHasBeenSet = true; m_itemPaths.push_back(value); return *this; }
    inline Threat& AddItemPaths(ItemPath&& value) { m_itemPathsHasBeenSet = true; m_itemPaths.push_back(std::move(value)); return *this; }
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
