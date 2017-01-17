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
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace XRay
{
namespace Model
{

  /**
   * <p></p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/ServiceId">AWS API
   * Reference</a></p>
   */
  class AWS_XRAY_API ServiceId
  {
  public:
    ServiceId();
    ServiceId(const Aws::Utils::Json::JsonValue& jsonValue);
    ServiceId& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p></p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p></p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p></p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p></p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p></p>
     */
    inline ServiceId& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p></p>
     */
    inline ServiceId& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p></p>
     */
    inline ServiceId& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p></p>
     */
    inline const Aws::Vector<Aws::String>& GetNames() const{ return m_names; }

    /**
     * <p></p>
     */
    inline void SetNames(const Aws::Vector<Aws::String>& value) { m_namesHasBeenSet = true; m_names = value; }

    /**
     * <p></p>
     */
    inline void SetNames(Aws::Vector<Aws::String>&& value) { m_namesHasBeenSet = true; m_names = value; }

    /**
     * <p></p>
     */
    inline ServiceId& WithNames(const Aws::Vector<Aws::String>& value) { SetNames(value); return *this;}

    /**
     * <p></p>
     */
    inline ServiceId& WithNames(Aws::Vector<Aws::String>&& value) { SetNames(value); return *this;}

    /**
     * <p></p>
     */
    inline ServiceId& AddNames(const Aws::String& value) { m_namesHasBeenSet = true; m_names.push_back(value); return *this; }

    /**
     * <p></p>
     */
    inline ServiceId& AddNames(Aws::String&& value) { m_namesHasBeenSet = true; m_names.push_back(value); return *this; }

    /**
     * <p></p>
     */
    inline ServiceId& AddNames(const char* value) { m_namesHasBeenSet = true; m_names.push_back(value); return *this; }

    /**
     * <p></p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p></p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p></p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p></p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p></p>
     */
    inline ServiceId& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p></p>
     */
    inline ServiceId& WithAccountId(Aws::String&& value) { SetAccountId(value); return *this;}

    /**
     * <p></p>
     */
    inline ServiceId& WithAccountId(const char* value) { SetAccountId(value); return *this;}

    /**
     * <p></p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p></p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p></p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p></p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p></p>
     */
    inline ServiceId& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p></p>
     */
    inline ServiceId& WithType(Aws::String&& value) { SetType(value); return *this;}

    /**
     * <p></p>
     */
    inline ServiceId& WithType(const char* value) { SetType(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::Vector<Aws::String> m_names;
    bool m_namesHasBeenSet;
    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;
    Aws::String m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
