/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
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
namespace Comprehend
{
namespace Model
{

  /**
   * <p>Information about an individual item on a list of entity types.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/EntityTypesListItem">AWS
   * API Reference</a></p>
   */
  class AWS_COMPREHEND_API EntityTypesListItem
  {
  public:
    EntityTypesListItem();
    EntityTypesListItem(Aws::Utils::Json::JsonView jsonValue);
    EntityTypesListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Entity type of an item on an entity type list.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>Entity type of an item on an entity type list.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Entity type of an item on an entity type list.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Entity type of an item on an entity type list.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Entity type of an item on an entity type list.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>Entity type of an item on an entity type list.</p>
     */
    inline EntityTypesListItem& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>Entity type of an item on an entity type list.</p>
     */
    inline EntityTypesListItem& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>Entity type of an item on an entity type list.</p>
     */
    inline EntityTypesListItem& WithType(const char* value) { SetType(value); return *this;}

  private:

    Aws::String m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
