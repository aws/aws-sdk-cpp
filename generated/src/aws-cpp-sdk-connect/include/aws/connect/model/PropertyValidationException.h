/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/PropertyValidationExceptionProperty.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>The property is not valid.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/PropertyValidationException">AWS
   * API Reference</a></p>
   */
  class PropertyValidationException
  {
  public:
    AWS_CONNECT_API PropertyValidationException() = default;
    AWS_CONNECT_API PropertyValidationException(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API PropertyValidationException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    PropertyValidationException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<PropertyValidationExceptionProperty>& GetPropertyList() const { return m_propertyList; }
    inline bool PropertyListHasBeenSet() const { return m_propertyListHasBeenSet; }
    template<typename PropertyListT = Aws::Vector<PropertyValidationExceptionProperty>>
    void SetPropertyList(PropertyListT&& value) { m_propertyListHasBeenSet = true; m_propertyList = std::forward<PropertyListT>(value); }
    template<typename PropertyListT = Aws::Vector<PropertyValidationExceptionProperty>>
    PropertyValidationException& WithPropertyList(PropertyListT&& value) { SetPropertyList(std::forward<PropertyListT>(value)); return *this;}
    template<typename PropertyListT = PropertyValidationExceptionProperty>
    PropertyValidationException& AddPropertyList(PropertyListT&& value) { m_propertyListHasBeenSet = true; m_propertyList.emplace_back(std::forward<PropertyListT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Vector<PropertyValidationExceptionProperty> m_propertyList;
    bool m_propertyListHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
