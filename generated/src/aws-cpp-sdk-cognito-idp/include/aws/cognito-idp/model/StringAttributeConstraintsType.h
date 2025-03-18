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
   * <p>The minimum and maximum length values of an attribute that is of the string
   * type, for example <code>custom:department</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/StringAttributeConstraintsType">AWS
   * API Reference</a></p>
   */
  class StringAttributeConstraintsType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API StringAttributeConstraintsType() = default;
    AWS_COGNITOIDENTITYPROVIDER_API StringAttributeConstraintsType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API StringAttributeConstraintsType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The minimum length of a string attribute value.</p>
     */
    inline const Aws::String& GetMinLength() const { return m_minLength; }
    inline bool MinLengthHasBeenSet() const { return m_minLengthHasBeenSet; }
    template<typename MinLengthT = Aws::String>
    void SetMinLength(MinLengthT&& value) { m_minLengthHasBeenSet = true; m_minLength = std::forward<MinLengthT>(value); }
    template<typename MinLengthT = Aws::String>
    StringAttributeConstraintsType& WithMinLength(MinLengthT&& value) { SetMinLength(std::forward<MinLengthT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum length of a string attribute value. Must be a number less than or
     * equal to <code>2^1023</code>, represented as a string with a length of 131072
     * characters or fewer.</p>
     */
    inline const Aws::String& GetMaxLength() const { return m_maxLength; }
    inline bool MaxLengthHasBeenSet() const { return m_maxLengthHasBeenSet; }
    template<typename MaxLengthT = Aws::String>
    void SetMaxLength(MaxLengthT&& value) { m_maxLengthHasBeenSet = true; m_maxLength = std::forward<MaxLengthT>(value); }
    template<typename MaxLengthT = Aws::String>
    StringAttributeConstraintsType& WithMaxLength(MaxLengthT&& value) { SetMaxLength(std::forward<MaxLengthT>(value)); return *this;}
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
