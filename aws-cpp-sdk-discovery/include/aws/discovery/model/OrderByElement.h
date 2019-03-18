/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/discovery/model/OrderString.h>
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
namespace ApplicationDiscoveryService
{
namespace Model
{

  /**
   * <p>A field and direction for ordered output.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/OrderByElement">AWS
   * API Reference</a></p>
   */
  class AWS_APPLICATIONDISCOVERYSERVICE_API OrderByElement
  {
  public:
    OrderByElement();
    OrderByElement(Aws::Utils::Json::JsonView jsonValue);
    OrderByElement& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The field on which to order.</p>
     */
    inline const Aws::String& GetFieldName() const{ return m_fieldName; }

    /**
     * <p>The field on which to order.</p>
     */
    inline bool FieldNameHasBeenSet() const { return m_fieldNameHasBeenSet; }

    /**
     * <p>The field on which to order.</p>
     */
    inline void SetFieldName(const Aws::String& value) { m_fieldNameHasBeenSet = true; m_fieldName = value; }

    /**
     * <p>The field on which to order.</p>
     */
    inline void SetFieldName(Aws::String&& value) { m_fieldNameHasBeenSet = true; m_fieldName = std::move(value); }

    /**
     * <p>The field on which to order.</p>
     */
    inline void SetFieldName(const char* value) { m_fieldNameHasBeenSet = true; m_fieldName.assign(value); }

    /**
     * <p>The field on which to order.</p>
     */
    inline OrderByElement& WithFieldName(const Aws::String& value) { SetFieldName(value); return *this;}

    /**
     * <p>The field on which to order.</p>
     */
    inline OrderByElement& WithFieldName(Aws::String&& value) { SetFieldName(std::move(value)); return *this;}

    /**
     * <p>The field on which to order.</p>
     */
    inline OrderByElement& WithFieldName(const char* value) { SetFieldName(value); return *this;}


    /**
     * <p>Ordering direction.</p>
     */
    inline const OrderString& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>Ordering direction.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>Ordering direction.</p>
     */
    inline void SetSortOrder(const OrderString& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>Ordering direction.</p>
     */
    inline void SetSortOrder(OrderString&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>Ordering direction.</p>
     */
    inline OrderByElement& WithSortOrder(const OrderString& value) { SetSortOrder(value); return *this;}

    /**
     * <p>Ordering direction.</p>
     */
    inline OrderByElement& WithSortOrder(OrderString&& value) { SetSortOrder(std::move(value)); return *this;}

  private:

    Aws::String m_fieldName;
    bool m_fieldNameHasBeenSet;

    OrderString m_sortOrder;
    bool m_sortOrderHasBeenSet;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
