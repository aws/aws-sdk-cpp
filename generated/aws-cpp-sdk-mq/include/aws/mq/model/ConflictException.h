﻿/**
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
   * <p>Returns information about an error.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/ConflictException">AWS
   * API Reference</a></p>
   */
  class AWS_MQ_API ConflictException
  {
  public:
    ConflictException();
    ConflictException(Aws::Utils::Json::JsonView jsonValue);
    ConflictException& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The attribute which caused the error.</p>
     */
    inline const Aws::String& GetErrorAttribute() const{ return m_errorAttribute; }

    /**
     * <p>The attribute which caused the error.</p>
     */
    inline bool ErrorAttributeHasBeenSet() const { return m_errorAttributeHasBeenSet; }

    /**
     * <p>The attribute which caused the error.</p>
     */
    inline void SetErrorAttribute(const Aws::String& value) { m_errorAttributeHasBeenSet = true; m_errorAttribute = value; }

    /**
     * <p>The attribute which caused the error.</p>
     */
    inline void SetErrorAttribute(Aws::String&& value) { m_errorAttributeHasBeenSet = true; m_errorAttribute = std::move(value); }

    /**
     * <p>The attribute which caused the error.</p>
     */
    inline void SetErrorAttribute(const char* value) { m_errorAttributeHasBeenSet = true; m_errorAttribute.assign(value); }

    /**
     * <p>The attribute which caused the error.</p>
     */
    inline ConflictException& WithErrorAttribute(const Aws::String& value) { SetErrorAttribute(value); return *this;}

    /**
     * <p>The attribute which caused the error.</p>
     */
    inline ConflictException& WithErrorAttribute(Aws::String&& value) { SetErrorAttribute(std::move(value)); return *this;}

    /**
     * <p>The attribute which caused the error.</p>
     */
    inline ConflictException& WithErrorAttribute(const char* value) { SetErrorAttribute(value); return *this;}


    /**
     * <p>The explanation of the error.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The explanation of the error.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The explanation of the error.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The explanation of the error.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The explanation of the error.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The explanation of the error.</p>
     */
    inline ConflictException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The explanation of the error.</p>
     */
    inline ConflictException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The explanation of the error.</p>
     */
    inline ConflictException& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_errorAttribute;
    bool m_errorAttributeHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
