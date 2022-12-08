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
    AWS_GLUE_API Mapping();
    AWS_GLUE_API Mapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Mapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>After the apply mapping, what the name of the column should be. Can be the
     * same as <code>FromPath</code>.</p>
     */
    inline const Aws::String& GetToKey() const{ return m_toKey; }

    /**
     * <p>After the apply mapping, what the name of the column should be. Can be the
     * same as <code>FromPath</code>.</p>
     */
    inline bool ToKeyHasBeenSet() const { return m_toKeyHasBeenSet; }

    /**
     * <p>After the apply mapping, what the name of the column should be. Can be the
     * same as <code>FromPath</code>.</p>
     */
    inline void SetToKey(const Aws::String& value) { m_toKeyHasBeenSet = true; m_toKey = value; }

    /**
     * <p>After the apply mapping, what the name of the column should be. Can be the
     * same as <code>FromPath</code>.</p>
     */
    inline void SetToKey(Aws::String&& value) { m_toKeyHasBeenSet = true; m_toKey = std::move(value); }

    /**
     * <p>After the apply mapping, what the name of the column should be. Can be the
     * same as <code>FromPath</code>.</p>
     */
    inline void SetToKey(const char* value) { m_toKeyHasBeenSet = true; m_toKey.assign(value); }

    /**
     * <p>After the apply mapping, what the name of the column should be. Can be the
     * same as <code>FromPath</code>.</p>
     */
    inline Mapping& WithToKey(const Aws::String& value) { SetToKey(value); return *this;}

    /**
     * <p>After the apply mapping, what the name of the column should be. Can be the
     * same as <code>FromPath</code>.</p>
     */
    inline Mapping& WithToKey(Aws::String&& value) { SetToKey(std::move(value)); return *this;}

    /**
     * <p>After the apply mapping, what the name of the column should be. Can be the
     * same as <code>FromPath</code>.</p>
     */
    inline Mapping& WithToKey(const char* value) { SetToKey(value); return *this;}


    /**
     * <p>The table or column to be modified.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFromPath() const{ return m_fromPath; }

    /**
     * <p>The table or column to be modified.</p>
     */
    inline bool FromPathHasBeenSet() const { return m_fromPathHasBeenSet; }

    /**
     * <p>The table or column to be modified.</p>
     */
    inline void SetFromPath(const Aws::Vector<Aws::String>& value) { m_fromPathHasBeenSet = true; m_fromPath = value; }

    /**
     * <p>The table or column to be modified.</p>
     */
    inline void SetFromPath(Aws::Vector<Aws::String>&& value) { m_fromPathHasBeenSet = true; m_fromPath = std::move(value); }

    /**
     * <p>The table or column to be modified.</p>
     */
    inline Mapping& WithFromPath(const Aws::Vector<Aws::String>& value) { SetFromPath(value); return *this;}

    /**
     * <p>The table or column to be modified.</p>
     */
    inline Mapping& WithFromPath(Aws::Vector<Aws::String>&& value) { SetFromPath(std::move(value)); return *this;}

    /**
     * <p>The table or column to be modified.</p>
     */
    inline Mapping& AddFromPath(const Aws::String& value) { m_fromPathHasBeenSet = true; m_fromPath.push_back(value); return *this; }

    /**
     * <p>The table or column to be modified.</p>
     */
    inline Mapping& AddFromPath(Aws::String&& value) { m_fromPathHasBeenSet = true; m_fromPath.push_back(std::move(value)); return *this; }

    /**
     * <p>The table or column to be modified.</p>
     */
    inline Mapping& AddFromPath(const char* value) { m_fromPathHasBeenSet = true; m_fromPath.push_back(value); return *this; }


    /**
     * <p>The type of the data to be modified.</p>
     */
    inline const Aws::String& GetFromType() const{ return m_fromType; }

    /**
     * <p>The type of the data to be modified.</p>
     */
    inline bool FromTypeHasBeenSet() const { return m_fromTypeHasBeenSet; }

    /**
     * <p>The type of the data to be modified.</p>
     */
    inline void SetFromType(const Aws::String& value) { m_fromTypeHasBeenSet = true; m_fromType = value; }

    /**
     * <p>The type of the data to be modified.</p>
     */
    inline void SetFromType(Aws::String&& value) { m_fromTypeHasBeenSet = true; m_fromType = std::move(value); }

    /**
     * <p>The type of the data to be modified.</p>
     */
    inline void SetFromType(const char* value) { m_fromTypeHasBeenSet = true; m_fromType.assign(value); }

    /**
     * <p>The type of the data to be modified.</p>
     */
    inline Mapping& WithFromType(const Aws::String& value) { SetFromType(value); return *this;}

    /**
     * <p>The type of the data to be modified.</p>
     */
    inline Mapping& WithFromType(Aws::String&& value) { SetFromType(std::move(value)); return *this;}

    /**
     * <p>The type of the data to be modified.</p>
     */
    inline Mapping& WithFromType(const char* value) { SetFromType(value); return *this;}


    /**
     * <p>The data type that the data is to be modified to.</p>
     */
    inline const Aws::String& GetToType() const{ return m_toType; }

    /**
     * <p>The data type that the data is to be modified to.</p>
     */
    inline bool ToTypeHasBeenSet() const { return m_toTypeHasBeenSet; }

    /**
     * <p>The data type that the data is to be modified to.</p>
     */
    inline void SetToType(const Aws::String& value) { m_toTypeHasBeenSet = true; m_toType = value; }

    /**
     * <p>The data type that the data is to be modified to.</p>
     */
    inline void SetToType(Aws::String&& value) { m_toTypeHasBeenSet = true; m_toType = std::move(value); }

    /**
     * <p>The data type that the data is to be modified to.</p>
     */
    inline void SetToType(const char* value) { m_toTypeHasBeenSet = true; m_toType.assign(value); }

    /**
     * <p>The data type that the data is to be modified to.</p>
     */
    inline Mapping& WithToType(const Aws::String& value) { SetToType(value); return *this;}

    /**
     * <p>The data type that the data is to be modified to.</p>
     */
    inline Mapping& WithToType(Aws::String&& value) { SetToType(std::move(value)); return *this;}

    /**
     * <p>The data type that the data is to be modified to.</p>
     */
    inline Mapping& WithToType(const char* value) { SetToType(value); return *this;}


    /**
     * <p>If true, then the column is removed.</p>
     */
    inline bool GetDropped() const{ return m_dropped; }

    /**
     * <p>If true, then the column is removed.</p>
     */
    inline bool DroppedHasBeenSet() const { return m_droppedHasBeenSet; }

    /**
     * <p>If true, then the column is removed.</p>
     */
    inline void SetDropped(bool value) { m_droppedHasBeenSet = true; m_dropped = value; }

    /**
     * <p>If true, then the column is removed.</p>
     */
    inline Mapping& WithDropped(bool value) { SetDropped(value); return *this;}


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
    inline const Aws::Vector<Mapping>& GetChildren() const{ return m_children; }

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
    inline bool ChildrenHasBeenSet() const { return m_childrenHasBeenSet; }

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
    inline void SetChildren(const Aws::Vector<Mapping>& value) { m_childrenHasBeenSet = true; m_children = value; }

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
    inline void SetChildren(Aws::Vector<Mapping>&& value) { m_childrenHasBeenSet = true; m_children = std::move(value); }

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
    inline Mapping& WithChildren(const Aws::Vector<Mapping>& value) { SetChildren(value); return *this;}

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
    inline Mapping& WithChildren(Aws::Vector<Mapping>&& value) { SetChildren(std::move(value)); return *this;}

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
    inline Mapping& AddChildren(const Mapping& value) { m_childrenHasBeenSet = true; m_children.push_back(value); return *this; }

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
    inline Mapping& AddChildren(Mapping&& value) { m_childrenHasBeenSet = true; m_children.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_toKey;
    bool m_toKeyHasBeenSet = false;

    Aws::Vector<Aws::String> m_fromPath;
    bool m_fromPathHasBeenSet = false;

    Aws::String m_fromType;
    bool m_fromTypeHasBeenSet = false;

    Aws::String m_toType;
    bool m_toTypeHasBeenSet = false;

    bool m_dropped;
    bool m_droppedHasBeenSet = false;

    Aws::Vector<Mapping> m_children;
    bool m_childrenHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
