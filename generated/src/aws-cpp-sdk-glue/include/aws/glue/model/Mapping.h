/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Specifies the mapping of data property keys.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/Mapping">AWS API
   * Reference</a></p>
   */
  class Mapping
  {
  public:
    AWS_GLUE_API Mapping() = default;
    AWS_GLUE_API Mapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Mapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>After the apply mapping, what the name of the column should be. Can be the
     * same as <code>FromPath</code>.</p>
     */
    inline const Aws::String& GetToKey() const { return m_toKey; }
    inline bool ToKeyHasBeenSet() const { return m_toKeyHasBeenSet; }
    template<typename ToKeyT = Aws::String>
    void SetToKey(ToKeyT&& value) { m_toKeyHasBeenSet = true; m_toKey = std::forward<ToKeyT>(value); }
    template<typename ToKeyT = Aws::String>
    Mapping& WithToKey(ToKeyT&& value) { SetToKey(std::forward<ToKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The table or column to be modified.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFromPath() const { return m_fromPath; }
    inline bool FromPathHasBeenSet() const { return m_fromPathHasBeenSet; }
    template<typename FromPathT = Aws::Vector<Aws::String>>
    void SetFromPath(FromPathT&& value) { m_fromPathHasBeenSet = true; m_fromPath = std::forward<FromPathT>(value); }
    template<typename FromPathT = Aws::Vector<Aws::String>>
    Mapping& WithFromPath(FromPathT&& value) { SetFromPath(std::forward<FromPathT>(value)); return *this;}
    template<typename FromPathT = Aws::String>
    Mapping& AddFromPath(FromPathT&& value) { m_fromPathHasBeenSet = true; m_fromPath.emplace_back(std::forward<FromPathT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of the data to be modified.</p>
     */
    inline const Aws::String& GetFromType() const { return m_fromType; }
    inline bool FromTypeHasBeenSet() const { return m_fromTypeHasBeenSet; }
    template<typename FromTypeT = Aws::String>
    void SetFromType(FromTypeT&& value) { m_fromTypeHasBeenSet = true; m_fromType = std::forward<FromTypeT>(value); }
    template<typename FromTypeT = Aws::String>
    Mapping& WithFromType(FromTypeT&& value) { SetFromType(std::forward<FromTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data type that the data is to be modified to.</p>
     */
    inline const Aws::String& GetToType() const { return m_toType; }
    inline bool ToTypeHasBeenSet() const { return m_toTypeHasBeenSet; }
    template<typename ToTypeT = Aws::String>
    void SetToType(ToTypeT&& value) { m_toTypeHasBeenSet = true; m_toType = std::forward<ToTypeT>(value); }
    template<typename ToTypeT = Aws::String>
    Mapping& WithToType(ToTypeT&& value) { SetToType(std::forward<ToTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If true, then the column is removed.</p>
     */
    inline bool GetDropped() const { return m_dropped; }
    inline bool DroppedHasBeenSet() const { return m_droppedHasBeenSet; }
    inline void SetDropped(bool value) { m_droppedHasBeenSet = true; m_dropped = value; }
    inline Mapping& WithDropped(bool value) { SetDropped(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Only applicable to nested data structures. If you want to change the parent
     * structure, but also one of its children, you can fill out this data strucutre.
     * It is also <code>Mapping</code>, but its <code>FromPath</code> will be the
     * parent's <code>FromPath</code> plus the <code>FromPath</code> from this
     * structure.</p> <p>For the children part, suppose you have the structure:</p> <p>
     * <code>{ "FromPath": "OuterStructure", "ToKey": "OuterStructure", "ToType":
     * "Struct", "Dropped": false, "Chidlren": [{ "FromPath": "inner", "ToKey":
     * "inner", "ToType": "Double", "Dropped": false, }] }</code> </p> <p>You can
     * specify a <code>Mapping</code> that looks like:</p> <p> <code>{ "FromPath":
     * "OuterStructure", "ToKey": "OuterStructure", "ToType": "Struct", "Dropped":
     * false, "Chidlren": [{ "FromPath": "inner", "ToKey": "inner", "ToType": "Double",
     * "Dropped": false, }] }</code> </p>
     */
    inline const Aws::Vector<Mapping>& GetChildren() const { return m_children; }
    inline bool ChildrenHasBeenSet() const { return m_childrenHasBeenSet; }
    template<typename ChildrenT = Aws::Vector<Mapping>>
    void SetChildren(ChildrenT&& value) { m_childrenHasBeenSet = true; m_children = std::forward<ChildrenT>(value); }
    template<typename ChildrenT = Aws::Vector<Mapping>>
    Mapping& WithChildren(ChildrenT&& value) { SetChildren(std::forward<ChildrenT>(value)); return *this;}
    template<typename ChildrenT = Mapping>
    Mapping& AddChildren(ChildrenT&& value) { m_childrenHasBeenSet = true; m_children.emplace_back(std::forward<ChildrenT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_toKey;
    bool m_toKeyHasBeenSet = false;

    Aws::Vector<Aws::String> m_fromPath;
    bool m_fromPathHasBeenSet = false;

    Aws::String m_fromType;
    bool m_fromTypeHasBeenSet = false;

    Aws::String m_toType;
    bool m_toTypeHasBeenSet = false;

    bool m_dropped{false};
    bool m_droppedHasBeenSet = false;

    Aws::Vector<Mapping> m_children;
    bool m_childrenHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
