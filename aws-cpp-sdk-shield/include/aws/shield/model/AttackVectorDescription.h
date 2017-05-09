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
namespace Shield
{
namespace Model
{

  /**
   * <p>Describes the attack.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/AttackVectorDescription">AWS
   * API Reference</a></p>
   */
  class AWS_SHIELD_API AttackVectorDescription
  {
  public:
    AttackVectorDescription();
    AttackVectorDescription(const Aws::Utils::Json::JsonValue& jsonValue);
    AttackVectorDescription& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The attack type, for example, SNMP reflection or SYN flood.</p>
     */
    inline const Aws::String& GetVectorType() const{ return m_vectorType; }

    /**
     * <p>The attack type, for example, SNMP reflection or SYN flood.</p>
     */
    inline void SetVectorType(const Aws::String& value) { m_vectorTypeHasBeenSet = true; m_vectorType = value; }

    /**
     * <p>The attack type, for example, SNMP reflection or SYN flood.</p>
     */
    inline void SetVectorType(Aws::String&& value) { m_vectorTypeHasBeenSet = true; m_vectorType = std::move(value); }

    /**
     * <p>The attack type, for example, SNMP reflection or SYN flood.</p>
     */
    inline void SetVectorType(const char* value) { m_vectorTypeHasBeenSet = true; m_vectorType.assign(value); }

    /**
     * <p>The attack type, for example, SNMP reflection or SYN flood.</p>
     */
    inline AttackVectorDescription& WithVectorType(const Aws::String& value) { SetVectorType(value); return *this;}

    /**
     * <p>The attack type, for example, SNMP reflection or SYN flood.</p>
     */
    inline AttackVectorDescription& WithVectorType(Aws::String&& value) { SetVectorType(std::move(value)); return *this;}

    /**
     * <p>The attack type, for example, SNMP reflection or SYN flood.</p>
     */
    inline AttackVectorDescription& WithVectorType(const char* value) { SetVectorType(value); return *this;}

  private:
    Aws::String m_vectorType;
    bool m_vectorTypeHasBeenSet;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
