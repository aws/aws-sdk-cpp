/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/PropertyValidationExceptionReason.h>
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
   * <p>Contains information about why a property is not valid.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/PropertyValidationExceptionProperty">AWS
   * API Reference</a></p>
   */
  class PropertyValidationExceptionProperty
  {
  public:
    AWS_CONNECT_API PropertyValidationExceptionProperty();
    AWS_CONNECT_API PropertyValidationExceptionProperty(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API PropertyValidationExceptionProperty& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The full property path.</p>
     */
    inline const Aws::String& GetPropertyPath() const{ return m_propertyPath; }
    inline bool PropertyPathHasBeenSet() const { return m_propertyPathHasBeenSet; }
    inline void SetPropertyPath(const Aws::String& value) { m_propertyPathHasBeenSet = true; m_propertyPath = value; }
    inline void SetPropertyPath(Aws::String&& value) { m_propertyPathHasBeenSet = true; m_propertyPath = std::move(value); }
    inline void SetPropertyPath(const char* value) { m_propertyPathHasBeenSet = true; m_propertyPath.assign(value); }
    inline PropertyValidationExceptionProperty& WithPropertyPath(const Aws::String& value) { SetPropertyPath(value); return *this;}
    inline PropertyValidationExceptionProperty& WithPropertyPath(Aws::String&& value) { SetPropertyPath(std::move(value)); return *this;}
    inline PropertyValidationExceptionProperty& WithPropertyPath(const char* value) { SetPropertyPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Why the property is not valid.</p>
     */
    inline const PropertyValidationExceptionReason& GetReason() const{ return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(const PropertyValidationExceptionReason& value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline void SetReason(PropertyValidationExceptionReason&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }
    inline PropertyValidationExceptionProperty& WithReason(const PropertyValidationExceptionReason& value) { SetReason(value); return *this;}
    inline PropertyValidationExceptionProperty& WithReason(PropertyValidationExceptionReason&& value) { SetReason(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message describing why the property is not valid.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline PropertyValidationExceptionProperty& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline PropertyValidationExceptionProperty& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline PropertyValidationExceptionProperty& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}
  private:

    Aws::String m_propertyPath;
    bool m_propertyPathHasBeenSet = false;

    PropertyValidationExceptionReason m_reason;
    bool m_reasonHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
