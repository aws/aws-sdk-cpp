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
#include <aws/states/SFN_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SFN
{
namespace Model
{

  class AWS_SFN_API StateMachineListItem
  {
  public:
    StateMachineListItem();
    StateMachineListItem(const Aws::Utils::Json::JsonValue& jsonValue);
    StateMachineListItem& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the state machine.</p>
     */
    inline const Aws::String& GetStateMachineArn() const{ return m_stateMachineArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the state machine.</p>
     */
    inline void SetStateMachineArn(const Aws::String& value) { m_stateMachineArnHasBeenSet = true; m_stateMachineArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the state machine.</p>
     */
    inline void SetStateMachineArn(Aws::String&& value) { m_stateMachineArnHasBeenSet = true; m_stateMachineArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the state machine.</p>
     */
    inline void SetStateMachineArn(const char* value) { m_stateMachineArnHasBeenSet = true; m_stateMachineArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the state machine.</p>
     */
    inline StateMachineListItem& WithStateMachineArn(const Aws::String& value) { SetStateMachineArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the state machine.</p>
     */
    inline StateMachineListItem& WithStateMachineArn(Aws::String&& value) { SetStateMachineArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the state machine.</p>
     */
    inline StateMachineListItem& WithStateMachineArn(const char* value) { SetStateMachineArn(value); return *this;}

    /**
     * <p>The name of the state machine.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the state machine.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the state machine.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the state machine.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the state machine.</p>
     */
    inline StateMachineListItem& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the state machine.</p>
     */
    inline StateMachineListItem& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the state machine.</p>
     */
    inline StateMachineListItem& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The date the state machine was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date the state machine was created.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The date the state machine was created.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The date the state machine was created.</p>
     */
    inline StateMachineListItem& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date the state machine was created.</p>
     */
    inline StateMachineListItem& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}

  private:
    Aws::String m_stateMachineArn;
    bool m_stateMachineArnHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
