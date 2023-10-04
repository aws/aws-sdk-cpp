/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The details of the search.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/SearchInItem">AWS
   * API Reference</a></p>
   */
  class SearchInItem
  {
  public:
    AWS_DATAZONE_API SearchInItem();
    AWS_DATAZONE_API SearchInItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API SearchInItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The search attribute.</p>
     */
    inline const Aws::String& GetAttribute() const{ return m_attribute; }

    /**
     * <p>The search attribute.</p>
     */
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }

    /**
     * <p>The search attribute.</p>
     */
    inline void SetAttribute(const Aws::String& value) { m_attributeHasBeenSet = true; m_attribute = value; }

    /**
     * <p>The search attribute.</p>
     */
    inline void SetAttribute(Aws::String&& value) { m_attributeHasBeenSet = true; m_attribute = std::move(value); }

    /**
     * <p>The search attribute.</p>
     */
    inline void SetAttribute(const char* value) { m_attributeHasBeenSet = true; m_attribute.assign(value); }

    /**
     * <p>The search attribute.</p>
     */
    inline SearchInItem& WithAttribute(const Aws::String& value) { SetAttribute(value); return *this;}

    /**
     * <p>The search attribute.</p>
     */
    inline SearchInItem& WithAttribute(Aws::String&& value) { SetAttribute(std::move(value)); return *this;}

    /**
     * <p>The search attribute.</p>
     */
    inline SearchInItem& WithAttribute(const char* value) { SetAttribute(value); return *this;}

  private:

    Aws::String m_attribute;
    bool m_attributeHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
