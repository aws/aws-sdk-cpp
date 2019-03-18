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
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Shield
{
namespace Model
{

  /**
   * <p>A contributor to the attack and their contribution.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/Contributor">AWS
   * API Reference</a></p>
   */
  class AWS_SHIELD_API Contributor
  {
  public:
    Contributor();
    Contributor(Aws::Utils::Json::JsonView jsonValue);
    Contributor& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the contributor. This is dependent on the
     * <code>AttackPropertyIdentifier</code>. For example, if the
     * <code>AttackPropertyIdentifier</code> is <code>SOURCE_COUNTRY</code>, the
     * <code>Name</code> could be <code>United States</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the contributor. This is dependent on the
     * <code>AttackPropertyIdentifier</code>. For example, if the
     * <code>AttackPropertyIdentifier</code> is <code>SOURCE_COUNTRY</code>, the
     * <code>Name</code> could be <code>United States</code>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the contributor. This is dependent on the
     * <code>AttackPropertyIdentifier</code>. For example, if the
     * <code>AttackPropertyIdentifier</code> is <code>SOURCE_COUNTRY</code>, the
     * <code>Name</code> could be <code>United States</code>.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the contributor. This is dependent on the
     * <code>AttackPropertyIdentifier</code>. For example, if the
     * <code>AttackPropertyIdentifier</code> is <code>SOURCE_COUNTRY</code>, the
     * <code>Name</code> could be <code>United States</code>.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the contributor. This is dependent on the
     * <code>AttackPropertyIdentifier</code>. For example, if the
     * <code>AttackPropertyIdentifier</code> is <code>SOURCE_COUNTRY</code>, the
     * <code>Name</code> could be <code>United States</code>.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the contributor. This is dependent on the
     * <code>AttackPropertyIdentifier</code>. For example, if the
     * <code>AttackPropertyIdentifier</code> is <code>SOURCE_COUNTRY</code>, the
     * <code>Name</code> could be <code>United States</code>.</p>
     */
    inline Contributor& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the contributor. This is dependent on the
     * <code>AttackPropertyIdentifier</code>. For example, if the
     * <code>AttackPropertyIdentifier</code> is <code>SOURCE_COUNTRY</code>, the
     * <code>Name</code> could be <code>United States</code>.</p>
     */
    inline Contributor& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the contributor. This is dependent on the
     * <code>AttackPropertyIdentifier</code>. For example, if the
     * <code>AttackPropertyIdentifier</code> is <code>SOURCE_COUNTRY</code>, the
     * <code>Name</code> could be <code>United States</code>.</p>
     */
    inline Contributor& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The contribution of this contributor expressed in <a>Protection</a> units.
     * For example <code>10,000</code>.</p>
     */
    inline long long GetValue() const{ return m_value; }

    /**
     * <p>The contribution of this contributor expressed in <a>Protection</a> units.
     * For example <code>10,000</code>.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The contribution of this contributor expressed in <a>Protection</a> units.
     * For example <code>10,000</code>.</p>
     */
    inline void SetValue(long long value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The contribution of this contributor expressed in <a>Protection</a> units.
     * For example <code>10,000</code>.</p>
     */
    inline Contributor& WithValue(long long value) { SetValue(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    long long m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
