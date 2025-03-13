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
    AWS_CONNECT_API PropertyValidationExceptionProperty() = default;
    AWS_CONNECT_API PropertyValidationExceptionProperty(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API PropertyValidationExceptionProperty& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The full property path.</p>
     */
    inline const Aws::String& GetPropertyPath() const { return m_propertyPath; }
    inline bool PropertyPathHasBeenSet() const { return m_propertyPathHasBeenSet; }
    template<typename PropertyPathT = Aws::String>
    void SetPropertyPath(PropertyPathT&& value) { m_propertyPathHasBeenSet = true; m_propertyPath = std::forward<PropertyPathT>(value); }
    template<typename PropertyPathT = Aws::String>
    PropertyValidationExceptionProperty& WithPropertyPath(PropertyPathT&& value) { SetPropertyPath(std::forward<PropertyPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Why the property is not valid.</p>
     */
    inline PropertyValidationExceptionReason GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(PropertyValidationExceptionReason value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline PropertyValidationExceptionProperty& WithReason(PropertyValidationExceptionReason value) { SetReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message describing why the property is not valid.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    PropertyValidationExceptionProperty& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_propertyPath;
    bool m_propertyPathHasBeenSet = false;

    PropertyValidationExceptionReason m_reason{PropertyValidationExceptionReason::NOT_SET};
    bool m_reasonHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
