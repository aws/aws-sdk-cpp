/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/RecoveryOptionNameType.h>
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
   * <p>A map containing a priority as a key, and recovery method name as a
   * value.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/RecoveryOptionType">AWS
   * API Reference</a></p>
   */
  class RecoveryOptionType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API RecoveryOptionType();
    AWS_COGNITOIDENTITYPROVIDER_API RecoveryOptionType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API RecoveryOptionType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A positive integer specifying priority of a method with 1 being the highest
     * priority.</p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>A positive integer specifying priority of a method with 1 being the highest
     * priority.</p>
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p>A positive integer specifying priority of a method with 1 being the highest
     * priority.</p>
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>A positive integer specifying priority of a method with 1 being the highest
     * priority.</p>
     */
    inline RecoveryOptionType& WithPriority(int value) { SetPriority(value); return *this;}


    /**
     * <p>The recovery method for a user.</p>
     */
    inline const RecoveryOptionNameType& GetName() const{ return m_name; }

    /**
     * <p>The recovery method for a user.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The recovery method for a user.</p>
     */
    inline void SetName(const RecoveryOptionNameType& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The recovery method for a user.</p>
     */
    inline void SetName(RecoveryOptionNameType&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The recovery method for a user.</p>
     */
    inline RecoveryOptionType& WithName(const RecoveryOptionNameType& value) { SetName(value); return *this;}

    /**
     * <p>The recovery method for a user.</p>
     */
    inline RecoveryOptionType& WithName(RecoveryOptionNameType&& value) { SetName(std::move(value)); return *this;}

  private:

    int m_priority;
    bool m_priorityHasBeenSet = false;

    RecoveryOptionNameType m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
