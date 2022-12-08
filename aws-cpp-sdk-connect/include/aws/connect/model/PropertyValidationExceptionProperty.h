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


    /**
     * <p>The full property path.</p>
     */
    inline const Aws::String& GetPropertyPath() const{ return m_propertyPath; }

    /**
     * <p>The full property path.</p>
     */
    inline bool PropertyPathHasBeenSet() const { return m_propertyPathHasBeenSet; }

    /**
     * <p>The full property path.</p>
     */
    inline void SetPropertyPath(const Aws::String& value) { m_propertyPathHasBeenSet = true; m_propertyPath = value; }

    /**
     * <p>The full property path.</p>
     */
    inline void SetPropertyPath(Aws::String&& value) { m_propertyPathHasBeenSet = true; m_propertyPath = std::move(value); }

    /**
     * <p>The full property path.</p>
     */
    inline void SetPropertyPath(const char* value) { m_propertyPathHasBeenSet = true; m_propertyPath.assign(value); }

    /**
     * <p>The full property path.</p>
     */
    inline PropertyValidationExceptionProperty& WithPropertyPath(const Aws::String& value) { SetPropertyPath(value); return *this;}

    /**
     * <p>The full property path.</p>
     */
    inline PropertyValidationExceptionProperty& WithPropertyPath(Aws::String&& value) { SetPropertyPath(std::move(value)); return *this;}

    /**
     * <p>The full property path.</p>
     */
    inline PropertyValidationExceptionProperty& WithPropertyPath(const char* value) { SetPropertyPath(value); return *this;}


    /**
     * <p>Why the property is not valid.</p>
     */
    inline const PropertyValidationExceptionReason& GetReason() const{ return m_reason; }

    /**
     * <p>Why the property is not valid.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>Why the property is not valid.</p>
     */
    inline void SetReason(const PropertyValidationExceptionReason& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>Why the property is not valid.</p>
     */
    inline void SetReason(PropertyValidationExceptionReason&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>Why the property is not valid.</p>
     */
    inline PropertyValidationExceptionProperty& WithReason(const PropertyValidationExceptionReason& value) { SetReason(value); return *this;}

    /**
     * <p>Why the property is not valid.</p>
     */
    inline PropertyValidationExceptionProperty& WithReason(PropertyValidationExceptionReason&& value) { SetReason(std::move(value)); return *this;}


    /**
     * <p>A message describing why the property is not valid.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A message describing why the property is not valid.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>A message describing why the property is not valid.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A message describing why the property is not valid.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>A message describing why the property is not valid.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>A message describing why the property is not valid.</p>
     */
    inline PropertyValidationExceptionProperty& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A message describing why the property is not valid.</p>
     */
    inline PropertyValidationExceptionProperty& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>A message describing why the property is not valid.</p>
     */
    inline PropertyValidationExceptionProperty& WithMessage(const char* value) { SetMessage(value); return *this;}

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
