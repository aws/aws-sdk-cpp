/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQ_EXPORTS.h>
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
namespace MQ
{
namespace Model
{

  /**
   * Returns information about an error.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/NotFoundException">AWS
   * API Reference</a></p>
   */
  class AWS_MQ_API NotFoundException
  {
  public:
    NotFoundException();
    NotFoundException(Aws::Utils::Json::JsonView jsonValue);
    NotFoundException& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The attribute which caused the error.
     */
    inline const Aws::String& GetErrorAttribute() const{ return m_errorAttribute; }

    /**
     * The attribute which caused the error.
     */
    inline bool ErrorAttributeHasBeenSet() const { return m_errorAttributeHasBeenSet; }

    /**
     * The attribute which caused the error.
     */
    inline void SetErrorAttribute(const Aws::String& value) { m_errorAttributeHasBeenSet = true; m_errorAttribute = value; }

    /**
     * The attribute which caused the error.
     */
    inline void SetErrorAttribute(Aws::String&& value) { m_errorAttributeHasBeenSet = true; m_errorAttribute = std::move(value); }

    /**
     * The attribute which caused the error.
     */
    inline void SetErrorAttribute(const char* value) { m_errorAttributeHasBeenSet = true; m_errorAttribute.assign(value); }

    /**
     * The attribute which caused the error.
     */
    inline NotFoundException& WithErrorAttribute(const Aws::String& value) { SetErrorAttribute(value); return *this;}

    /**
     * The attribute which caused the error.
     */
    inline NotFoundException& WithErrorAttribute(Aws::String&& value) { SetErrorAttribute(std::move(value)); return *this;}

    /**
     * The attribute which caused the error.
     */
    inline NotFoundException& WithErrorAttribute(const char* value) { SetErrorAttribute(value); return *this;}


    /**
     * The explanation of the error.
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * The explanation of the error.
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * The explanation of the error.
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * The explanation of the error.
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * The explanation of the error.
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * The explanation of the error.
     */
    inline NotFoundException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * The explanation of the error.
     */
    inline NotFoundException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * The explanation of the error.
     */
    inline NotFoundException& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_errorAttribute;
    bool m_errorAttributeHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
