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
    AWS_CONNECT_API PropertyValidationException();
    AWS_CONNECT_API PropertyValidationException(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API PropertyValidationException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline PropertyValidationException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline PropertyValidationException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline PropertyValidationException& WithMessage(const char* value) { SetMessage(value); return *this;}


    
    inline const Aws::Vector<PropertyValidationExceptionProperty>& GetPropertyList() const{ return m_propertyList; }

    
    inline bool PropertyListHasBeenSet() const { return m_propertyListHasBeenSet; }

    
    inline void SetPropertyList(const Aws::Vector<PropertyValidationExceptionProperty>& value) { m_propertyListHasBeenSet = true; m_propertyList = value; }

    
    inline void SetPropertyList(Aws::Vector<PropertyValidationExceptionProperty>&& value) { m_propertyListHasBeenSet = true; m_propertyList = std::move(value); }

    
    inline PropertyValidationException& WithPropertyList(const Aws::Vector<PropertyValidationExceptionProperty>& value) { SetPropertyList(value); return *this;}

    
    inline PropertyValidationException& WithPropertyList(Aws::Vector<PropertyValidationExceptionProperty>&& value) { SetPropertyList(std::move(value)); return *this;}

    
    inline PropertyValidationException& AddPropertyList(const PropertyValidationExceptionProperty& value) { m_propertyListHasBeenSet = true; m_propertyList.push_back(value); return *this; }

    
    inline PropertyValidationException& AddPropertyList(PropertyValidationExceptionProperty&& value) { m_propertyListHasBeenSet = true; m_propertyList.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Vector<PropertyValidationExceptionProperty> m_propertyList;
    bool m_propertyListHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
