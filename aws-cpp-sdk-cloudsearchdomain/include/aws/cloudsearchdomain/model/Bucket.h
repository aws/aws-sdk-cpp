/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cloudsearchdomain/CloudSearchDomain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CloudSearchDomain
{
namespace Model
{

  /**
   * <p>A container for facet information. </p>
   */
  class AWS_CLOUDSEARCHDOMAIN_API Bucket
  {
  public:
    Bucket();
    Bucket(const Aws::Utils::Json::JsonValue& jsonValue);
    Bucket& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The facet value being counted.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The facet value being counted.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The facet value being counted.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The facet value being counted.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The facet value being counted.</p>
     */
    inline Bucket& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The facet value being counted.</p>
     */
    inline Bucket& WithValue(Aws::String&& value) { SetValue(value); return *this;}

    /**
     * <p>The facet value being counted.</p>
     */
    inline Bucket& WithValue(const char* value) { SetValue(value); return *this;}

    /**
     * <p>The number of hits that contain the facet value in the specified facet
     * field.</p>
     */
    inline long long GetCount() const{ return m_count; }

    /**
     * <p>The number of hits that contain the facet value in the specified facet
     * field.</p>
     */
    inline void SetCount(long long value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p>The number of hits that contain the facet value in the specified facet
     * field.</p>
     */
    inline Bucket& WithCount(long long value) { SetCount(value); return *this;}

  private:
    Aws::String m_value;
    bool m_valueHasBeenSet;
    long long m_count;
    bool m_countHasBeenSet;
  };

} // namespace Model
} // namespace CloudSearchDomain
} // namespace Aws
