/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>

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
namespace AlexaForBusiness
{
namespace Model
{

  class CreateProactiveJoin
  {
  public:
    AWS_ALEXAFORBUSINESS_API CreateProactiveJoin();
    AWS_ALEXAFORBUSINESS_API CreateProactiveJoin(Aws::Utils::Json::JsonView jsonValue);
    AWS_ALEXAFORBUSINESS_API CreateProactiveJoin& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ALEXAFORBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline bool GetEnabledByMotion() const{ return m_enabledByMotion; }

    
    inline bool EnabledByMotionHasBeenSet() const { return m_enabledByMotionHasBeenSet; }

    
    inline void SetEnabledByMotion(bool value) { m_enabledByMotionHasBeenSet = true; m_enabledByMotion = value; }

    
    inline CreateProactiveJoin& WithEnabledByMotion(bool value) { SetEnabledByMotion(value); return *this;}

  private:

    bool m_enabledByMotion;
    bool m_enabledByMotionHasBeenSet = false;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
