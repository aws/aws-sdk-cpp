/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
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
namespace Route53Resolver
{
namespace Model
{

  /**
   * <p>One or more parameters in this request are not valid.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/InvalidParameterException">AWS
   * API Reference</a></p>
   */
  class InvalidParameterException
  {
  public:
    AWS_ROUTE53RESOLVER_API InvalidParameterException();
    AWS_ROUTE53RESOLVER_API InvalidParameterException(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API InvalidParameterException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline InvalidParameterException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline InvalidParameterException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline InvalidParameterException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>For an <code>InvalidParameterException</code> error, the name of the
     * parameter that's invalid.</p>
     */
    inline const Aws::String& GetFieldName() const{ return m_fieldName; }

    /**
     * <p>For an <code>InvalidParameterException</code> error, the name of the
     * parameter that's invalid.</p>
     */
    inline bool FieldNameHasBeenSet() const { return m_fieldNameHasBeenSet; }

    /**
     * <p>For an <code>InvalidParameterException</code> error, the name of the
     * parameter that's invalid.</p>
     */
    inline void SetFieldName(const Aws::String& value) { m_fieldNameHasBeenSet = true; m_fieldName = value; }

    /**
     * <p>For an <code>InvalidParameterException</code> error, the name of the
     * parameter that's invalid.</p>
     */
    inline void SetFieldName(Aws::String&& value) { m_fieldNameHasBeenSet = true; m_fieldName = std::move(value); }

    /**
     * <p>For an <code>InvalidParameterException</code> error, the name of the
     * parameter that's invalid.</p>
     */
    inline void SetFieldName(const char* value) { m_fieldNameHasBeenSet = true; m_fieldName.assign(value); }

    /**
     * <p>For an <code>InvalidParameterException</code> error, the name of the
     * parameter that's invalid.</p>
     */
    inline InvalidParameterException& WithFieldName(const Aws::String& value) { SetFieldName(value); return *this;}

    /**
     * <p>For an <code>InvalidParameterException</code> error, the name of the
     * parameter that's invalid.</p>
     */
    inline InvalidParameterException& WithFieldName(Aws::String&& value) { SetFieldName(std::move(value)); return *this;}

    /**
     * <p>For an <code>InvalidParameterException</code> error, the name of the
     * parameter that's invalid.</p>
     */
    inline InvalidParameterException& WithFieldName(const char* value) { SetFieldName(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_fieldName;
    bool m_fieldNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
