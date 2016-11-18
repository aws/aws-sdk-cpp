﻿/*
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
#include <aws/inspector/Inspector_EXPORTS.h>
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
namespace Inspector
{
namespace Model
{

  /**
   * <p>This data type is used in the <a>LocalizedText</a> data type.</p>
   */
  class AWS_INSPECTOR_API LocalizedTextKey
  {
  public:
    LocalizedTextKey();
    LocalizedTextKey(const Aws::Utils::Json::JsonValue& jsonValue);
    LocalizedTextKey& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The module response source of the text.</p>
     */
    inline const Aws::String& GetFacility() const{ return m_facility; }

    /**
     * <p>The module response source of the text.</p>
     */
    inline void SetFacility(const Aws::String& value) { m_facilityHasBeenSet = true; m_facility = value; }

    /**
     * <p>The module response source of the text.</p>
     */
    inline void SetFacility(Aws::String&& value) { m_facilityHasBeenSet = true; m_facility = value; }

    /**
     * <p>The module response source of the text.</p>
     */
    inline void SetFacility(const char* value) { m_facilityHasBeenSet = true; m_facility.assign(value); }

    /**
     * <p>The module response source of the text.</p>
     */
    inline LocalizedTextKey& WithFacility(const Aws::String& value) { SetFacility(value); return *this;}

    /**
     * <p>The module response source of the text.</p>
     */
    inline LocalizedTextKey& WithFacility(Aws::String&& value) { SetFacility(value); return *this;}

    /**
     * <p>The module response source of the text.</p>
     */
    inline LocalizedTextKey& WithFacility(const char* value) { SetFacility(value); return *this;}

    /**
     * <p>Part of the module response source of the text.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>Part of the module response source of the text.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>Part of the module response source of the text.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>Part of the module response source of the text.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>Part of the module response source of the text.</p>
     */
    inline LocalizedTextKey& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>Part of the module response source of the text.</p>
     */
    inline LocalizedTextKey& WithId(Aws::String&& value) { SetId(value); return *this;}

    /**
     * <p>Part of the module response source of the text.</p>
     */
    inline LocalizedTextKey& WithId(const char* value) { SetId(value); return *this;}

  private:
    Aws::String m_facility;
    bool m_facilityHasBeenSet;
    Aws::String m_id;
    bool m_idHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
