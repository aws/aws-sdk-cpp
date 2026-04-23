/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>

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
namespace SecretsManager
{
namespace Model
{

  /**
   * <p>A structure that defines the rotation configuration for the
   * secret.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/RotationRulesType">AWS
   * API Reference</a></p>
   */
  class AWS_SECRETSMANAGER_API RotationRulesType
  {
  public:
    RotationRulesType();
    RotationRulesType(Aws::Utils::Json::JsonView jsonValue);
    RotationRulesType& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the number of days between automatic scheduled rotations of the
     * secret.</p> <p>Secrets Manager schedules the next rotation when the previous one
     * is complete. Secrets Manager schedules the date by adding the rotation interval
     * (number of days) to the actual date of the last rotation. The service chooses
     * the hour within that 24-hour date window randomly. The minute is also chosen
     * somewhat randomly, but weighted towards the top of the hour and influenced by a
     * variety of factors that help distribute load.</p>
     */
    inline long long GetAutomaticallyAfterDays() const{ return m_automaticallyAfterDays; }

    /**
     * <p>Specifies the number of days between automatic scheduled rotations of the
     * secret.</p> <p>Secrets Manager schedules the next rotation when the previous one
     * is complete. Secrets Manager schedules the date by adding the rotation interval
     * (number of days) to the actual date of the last rotation. The service chooses
     * the hour within that 24-hour date window randomly. The minute is also chosen
     * somewhat randomly, but weighted towards the top of the hour and influenced by a
     * variety of factors that help distribute load.</p>
     */
    inline bool AutomaticallyAfterDaysHasBeenSet() const { return m_automaticallyAfterDaysHasBeenSet; }

    /**
     * <p>Specifies the number of days between automatic scheduled rotations of the
     * secret.</p> <p>Secrets Manager schedules the next rotation when the previous one
     * is complete. Secrets Manager schedules the date by adding the rotation interval
     * (number of days) to the actual date of the last rotation. The service chooses
     * the hour within that 24-hour date window randomly. The minute is also chosen
     * somewhat randomly, but weighted towards the top of the hour and influenced by a
     * variety of factors that help distribute load.</p>
     */
    inline void SetAutomaticallyAfterDays(long long value) { m_automaticallyAfterDaysHasBeenSet = true; m_automaticallyAfterDays = value; }

    /**
     * <p>Specifies the number of days between automatic scheduled rotations of the
     * secret.</p> <p>Secrets Manager schedules the next rotation when the previous one
     * is complete. Secrets Manager schedules the date by adding the rotation interval
     * (number of days) to the actual date of the last rotation. The service chooses
     * the hour within that 24-hour date window randomly. The minute is also chosen
     * somewhat randomly, but weighted towards the top of the hour and influenced by a
     * variety of factors that help distribute load.</p>
     */
    inline RotationRulesType& WithAutomaticallyAfterDays(long long value) { SetAutomaticallyAfterDays(value); return *this;}

  private:

    long long m_automaticallyAfterDays;
    bool m_automaticallyAfterDaysHasBeenSet;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
