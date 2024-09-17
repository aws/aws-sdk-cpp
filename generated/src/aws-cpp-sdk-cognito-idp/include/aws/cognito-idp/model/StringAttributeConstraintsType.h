/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
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
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>The constraints associated with a string attribute.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/StringAttributeConstraintsType">AWS
   * API Reference</a></p>
   */
  class StringAttributeConstraintsType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API StringAttributeConstraintsType();
    AWS_COGNITOIDENTITYPROVIDER_API StringAttributeConstraintsType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API StringAttributeConstraintsType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The minimum length.</p>
     */
    inline const Aws::String& GetMinLength() const{ return m_minLength; }
    inline bool MinLengthHasBeenSet() const { return m_minLengthHasBeenSet; }
    inline void SetMinLength(const Aws::String& value) { m_minLengthHasBeenSet = true; m_minLength = value; }
    inline void SetMinLength(Aws::String&& value) { m_minLengthHasBeenSet = true; m_minLength = std::move(value); }
    inline void SetMinLength(const char* value) { m_minLengthHasBeenSet = true; m_minLength.assign(value); }
    inline StringAttributeConstraintsType& WithMinLength(const Aws::String& value) { SetMinLength(value); return *this;}
    inline StringAttributeConstraintsType& WithMinLength(Aws::String&& value) { SetMinLength(std::move(value)); return *this;}
    inline StringAttributeConstraintsType& WithMinLength(const char* value) { SetMinLength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum length of a string attribute value. Must be a number less than or
     * equal to <code>2^1023</code>, represented as a string with a length of 131072
     * characters or fewer.</p>
     */
    inline const Aws::String& GetMaxLength() const{ return m_maxLength; }
    inline bool MaxLengthHasBeenSet() const { return m_maxLengthHasBeenSet; }
    inline void SetMaxLength(const Aws::String& value) { m_maxLengthHasBeenSet = true; m_maxLength = value; }
    inline void SetMaxLength(Aws::String&& value) { m_maxLengthHasBeenSet = true; m_maxLength = std::move(value); }
    inline void SetMaxLength(const char* value) { m_maxLengthHasBeenSet = true; m_maxLength.assign(value); }
    inline StringAttributeConstraintsType& WithMaxLength(const Aws::String& value) { SetMaxLength(value); return *this;}
    inline StringAttributeConstraintsType& WithMaxLength(Aws::String&& value) { SetMaxLength(std::move(value)); return *this;}
    inline StringAttributeConstraintsType& WithMaxLength(const char* value) { SetMaxLength(value); return *this;}
    ///@}
  private:

    Aws::String m_minLength;
    bool m_minLengthHasBeenSet = false;

    Aws::String m_maxLength;
    bool m_maxLengthHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
