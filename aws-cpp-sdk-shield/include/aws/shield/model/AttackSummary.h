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
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/shield/model/AttackVectorDescription.h>
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
namespace Shield
{
namespace Model
{

  /**
   * <p>Summarizes all DDoS attacks for a specified time period.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/AttackSummary">AWS
   * API Reference</a></p>
   */
  class AWS_SHIELD_API AttackSummary
  {
  public:
    AttackSummary();
    AttackSummary(Aws::Utils::Json::JsonView jsonValue);
    AttackSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier (ID) of the attack.</p>
     */
    inline const Aws::String& GetAttackId() const{ return m_attackId; }

    /**
     * <p>The unique identifier (ID) of the attack.</p>
     */
    inline bool AttackIdHasBeenSet() const { return m_attackIdHasBeenSet; }

    /**
     * <p>The unique identifier (ID) of the attack.</p>
     */
    inline void SetAttackId(const Aws::String& value) { m_attackIdHasBeenSet = true; m_attackId = value; }

    /**
     * <p>The unique identifier (ID) of the attack.</p>
     */
    inline void SetAttackId(Aws::String&& value) { m_attackIdHasBeenSet = true; m_attackId = std::move(value); }

    /**
     * <p>The unique identifier (ID) of the attack.</p>
     */
    inline void SetAttackId(const char* value) { m_attackIdHasBeenSet = true; m_attackId.assign(value); }

    /**
     * <p>The unique identifier (ID) of the attack.</p>
     */
    inline AttackSummary& WithAttackId(const Aws::String& value) { SetAttackId(value); return *this;}

    /**
     * <p>The unique identifier (ID) of the attack.</p>
     */
    inline AttackSummary& WithAttackId(Aws::String&& value) { SetAttackId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier (ID) of the attack.</p>
     */
    inline AttackSummary& WithAttackId(const char* value) { SetAttackId(value); return *this;}


    /**
     * <p>The ARN (Amazon Resource Name) of the resource that was attacked.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The ARN (Amazon Resource Name) of the resource that was attacked.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The ARN (Amazon Resource Name) of the resource that was attacked.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The ARN (Amazon Resource Name) of the resource that was attacked.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The ARN (Amazon Resource Name) of the resource that was attacked.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The ARN (Amazon Resource Name) of the resource that was attacked.</p>
     */
    inline AttackSummary& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The ARN (Amazon Resource Name) of the resource that was attacked.</p>
     */
    inline AttackSummary& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN (Amazon Resource Name) of the resource that was attacked.</p>
     */
    inline AttackSummary& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The start time of the attack, in Unix time in seconds. For more information
     * see <a
     * href="http://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#parameter-types">timestamp</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The start time of the attack, in Unix time in seconds. For more information
     * see <a
     * href="http://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#parameter-types">timestamp</a>.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The start time of the attack, in Unix time in seconds. For more information
     * see <a
     * href="http://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#parameter-types">timestamp</a>.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The start time of the attack, in Unix time in seconds. For more information
     * see <a
     * href="http://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#parameter-types">timestamp</a>.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The start time of the attack, in Unix time in seconds. For more information
     * see <a
     * href="http://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#parameter-types">timestamp</a>.</p>
     */
    inline AttackSummary& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The start time of the attack, in Unix time in seconds. For more information
     * see <a
     * href="http://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#parameter-types">timestamp</a>.</p>
     */
    inline AttackSummary& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The end time of the attack, in Unix time in seconds. For more information see
     * <a
     * href="http://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#parameter-types">timestamp</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The end time of the attack, in Unix time in seconds. For more information see
     * <a
     * href="http://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#parameter-types">timestamp</a>.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The end time of the attack, in Unix time in seconds. For more information see
     * <a
     * href="http://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#parameter-types">timestamp</a>.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The end time of the attack, in Unix time in seconds. For more information see
     * <a
     * href="http://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#parameter-types">timestamp</a>.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The end time of the attack, in Unix time in seconds. For more information see
     * <a
     * href="http://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#parameter-types">timestamp</a>.</p>
     */
    inline AttackSummary& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The end time of the attack, in Unix time in seconds. For more information see
     * <a
     * href="http://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#parameter-types">timestamp</a>.</p>
     */
    inline AttackSummary& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The list of attacks for a specified time period.</p>
     */
    inline const Aws::Vector<AttackVectorDescription>& GetAttackVectors() const{ return m_attackVectors; }

    /**
     * <p>The list of attacks for a specified time period.</p>
     */
    inline bool AttackVectorsHasBeenSet() const { return m_attackVectorsHasBeenSet; }

    /**
     * <p>The list of attacks for a specified time period.</p>
     */
    inline void SetAttackVectors(const Aws::Vector<AttackVectorDescription>& value) { m_attackVectorsHasBeenSet = true; m_attackVectors = value; }

    /**
     * <p>The list of attacks for a specified time period.</p>
     */
    inline void SetAttackVectors(Aws::Vector<AttackVectorDescription>&& value) { m_attackVectorsHasBeenSet = true; m_attackVectors = std::move(value); }

    /**
     * <p>The list of attacks for a specified time period.</p>
     */
    inline AttackSummary& WithAttackVectors(const Aws::Vector<AttackVectorDescription>& value) { SetAttackVectors(value); return *this;}

    /**
     * <p>The list of attacks for a specified time period.</p>
     */
    inline AttackSummary& WithAttackVectors(Aws::Vector<AttackVectorDescription>&& value) { SetAttackVectors(std::move(value)); return *this;}

    /**
     * <p>The list of attacks for a specified time period.</p>
     */
    inline AttackSummary& AddAttackVectors(const AttackVectorDescription& value) { m_attackVectorsHasBeenSet = true; m_attackVectors.push_back(value); return *this; }

    /**
     * <p>The list of attacks for a specified time period.</p>
     */
    inline AttackSummary& AddAttackVectors(AttackVectorDescription&& value) { m_attackVectorsHasBeenSet = true; m_attackVectors.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_attackId;
    bool m_attackIdHasBeenSet;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet;

    Aws::Vector<AttackVectorDescription> m_attackVectors;
    bool m_attackVectorsHasBeenSet;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
