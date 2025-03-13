/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptions_EXPORTS.h>
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
namespace LicenseManagerUserSubscriptions
{
namespace Model
{

  /**
   * <p>A filter name and value pair that is used to return more specific results
   * from a describe or list operation. You can use filters can be used to match a
   * set of resources by specific criteria, such as tags, attributes, or
   * IDs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-user-subscriptions-2018-05-10/Filter">AWS
   * API Reference</a></p>
   */
  class Filter
  {
  public:
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API Filter() = default;
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API Filter(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API Filter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of an attribute to use as a filter.</p>
     */
    inline const Aws::String& GetAttribute() const { return m_attribute; }
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }
    template<typename AttributeT = Aws::String>
    void SetAttribute(AttributeT&& value) { m_attributeHasBeenSet = true; m_attribute = std::forward<AttributeT>(value); }
    template<typename AttributeT = Aws::String>
    Filter& WithAttribute(AttributeT&& value) { SetAttribute(std::forward<AttributeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of search (For example, eq, geq, leq)</p>
     */
    inline const Aws::String& GetOperation() const { return m_operation; }
    inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }
    template<typename OperationT = Aws::String>
    void SetOperation(OperationT&& value) { m_operationHasBeenSet = true; m_operation = std::forward<OperationT>(value); }
    template<typename OperationT = Aws::String>
    Filter& WithOperation(OperationT&& value) { SetOperation(std::forward<OperationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Value of the filter.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    Filter& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_attribute;
    bool m_attributeHasBeenSet = false;

    Aws::String m_operation;
    bool m_operationHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
