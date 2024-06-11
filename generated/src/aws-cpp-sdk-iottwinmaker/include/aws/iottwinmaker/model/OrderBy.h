/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/iottwinmaker/model/Order.h>
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
namespace IoTTwinMaker
{
namespace Model
{

  /**
   * <p>Filter criteria that orders the return output. It can be sorted in ascending
   * or descending order.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/OrderBy">AWS
   * API Reference</a></p>
   */
  class OrderBy
  {
  public:
    AWS_IOTTWINMAKER_API OrderBy();
    AWS_IOTTWINMAKER_API OrderBy(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API OrderBy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The set order that filters results.</p>
     */
    inline const Order& GetOrder() const{ return m_order; }
    inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }
    inline void SetOrder(const Order& value) { m_orderHasBeenSet = true; m_order = value; }
    inline void SetOrder(Order&& value) { m_orderHasBeenSet = true; m_order = std::move(value); }
    inline OrderBy& WithOrder(const Order& value) { SetOrder(value); return *this;}
    inline OrderBy& WithOrder(Order&& value) { SetOrder(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The property name.</p>
     */
    inline const Aws::String& GetPropertyName() const{ return m_propertyName; }
    inline bool PropertyNameHasBeenSet() const { return m_propertyNameHasBeenSet; }
    inline void SetPropertyName(const Aws::String& value) { m_propertyNameHasBeenSet = true; m_propertyName = value; }
    inline void SetPropertyName(Aws::String&& value) { m_propertyNameHasBeenSet = true; m_propertyName = std::move(value); }
    inline void SetPropertyName(const char* value) { m_propertyNameHasBeenSet = true; m_propertyName.assign(value); }
    inline OrderBy& WithPropertyName(const Aws::String& value) { SetPropertyName(value); return *this;}
    inline OrderBy& WithPropertyName(Aws::String&& value) { SetPropertyName(std::move(value)); return *this;}
    inline OrderBy& WithPropertyName(const char* value) { SetPropertyName(value); return *this;}
    ///@}
  private:

    Order m_order;
    bool m_orderHasBeenSet = false;

    Aws::String m_propertyName;
    bool m_propertyNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
