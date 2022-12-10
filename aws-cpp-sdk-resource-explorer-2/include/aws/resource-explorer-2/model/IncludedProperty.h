/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>
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
namespace ResourceExplorer2
{
namespace Model
{

  /**
   * <p>Information about an additional property that describes a resource, that you
   * can optionally include in the view. This lets you view that property in search
   * results, and filter your search results based on the value of the
   * property.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resource-explorer-2-2022-07-28/IncludedProperty">AWS
   * API Reference</a></p>
   */
  class IncludedProperty
  {
  public:
    AWS_RESOURCEEXPLORER2_API IncludedProperty();
    AWS_RESOURCEEXPLORER2_API IncludedProperty(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEEXPLORER2_API IncludedProperty& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEEXPLORER2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the property that is included in this view.</p> <p>You can
     * specify the following property names for this field:</p> <ul> <li> <p>
     * <code>Tags</code> </p> </li> </ul>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the property that is included in this view.</p> <p>You can
     * specify the following property names for this field:</p> <ul> <li> <p>
     * <code>Tags</code> </p> </li> </ul>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the property that is included in this view.</p> <p>You can
     * specify the following property names for this field:</p> <ul> <li> <p>
     * <code>Tags</code> </p> </li> </ul>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the property that is included in this view.</p> <p>You can
     * specify the following property names for this field:</p> <ul> <li> <p>
     * <code>Tags</code> </p> </li> </ul>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the property that is included in this view.</p> <p>You can
     * specify the following property names for this field:</p> <ul> <li> <p>
     * <code>Tags</code> </p> </li> </ul>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the property that is included in this view.</p> <p>You can
     * specify the following property names for this field:</p> <ul> <li> <p>
     * <code>Tags</code> </p> </li> </ul>
     */
    inline IncludedProperty& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the property that is included in this view.</p> <p>You can
     * specify the following property names for this field:</p> <ul> <li> <p>
     * <code>Tags</code> </p> </li> </ul>
     */
    inline IncludedProperty& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the property that is included in this view.</p> <p>You can
     * specify the following property names for this field:</p> <ul> <li> <p>
     * <code>Tags</code> </p> </li> </ul>
     */
    inline IncludedProperty& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
