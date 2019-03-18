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
   * <p>Specifies how many protections of a given type you can create.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/Limit">AWS API
   * Reference</a></p>
   */
  class AWS_SHIELD_API Limit
  {
  public:
    Limit();
    Limit(Aws::Utils::Json::JsonView jsonValue);
    Limit& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of protection.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of protection.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of protection.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of protection.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of protection.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of protection.</p>
     */
    inline Limit& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of protection.</p>
     */
    inline Limit& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of protection.</p>
     */
    inline Limit& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The maximum number of protections that can be created for the specified
     * <code>Type</code>.</p>
     */
    inline long long GetMax() const{ return m_max; }

    /**
     * <p>The maximum number of protections that can be created for the specified
     * <code>Type</code>.</p>
     */
    inline bool MaxHasBeenSet() const { return m_maxHasBeenSet; }

    /**
     * <p>The maximum number of protections that can be created for the specified
     * <code>Type</code>.</p>
     */
    inline void SetMax(long long value) { m_maxHasBeenSet = true; m_max = value; }

    /**
     * <p>The maximum number of protections that can be created for the specified
     * <code>Type</code>.</p>
     */
    inline Limit& WithMax(long long value) { SetMax(value); return *this;}

  private:

    Aws::String m_type;
    bool m_typeHasBeenSet;

    long long m_max;
    bool m_maxHasBeenSet;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
