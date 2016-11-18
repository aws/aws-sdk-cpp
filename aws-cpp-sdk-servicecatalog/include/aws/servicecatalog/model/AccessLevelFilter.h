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
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/AccessLevelFilterKey.h>
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
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>The access level to limit results.</p>
   */
  class AWS_SERVICECATALOG_API AccessLevelFilter
  {
  public:
    AccessLevelFilter();
    AccessLevelFilter(const Aws::Utils::Json::JsonValue& jsonValue);
    AccessLevelFilter& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Specifies the access level.</p> <p> <code>Account</code> allows results at
     * the account level. </p> <p> <code>Role</code> allows results based on the
     * federated role of the specified user.</p> <p> <code>User</code> allows results
     * limited to the specified user. </p>
     */
    inline const AccessLevelFilterKey& GetKey() const{ return m_key; }

    /**
     * <p>Specifies the access level.</p> <p> <code>Account</code> allows results at
     * the account level. </p> <p> <code>Role</code> allows results based on the
     * federated role of the specified user.</p> <p> <code>User</code> allows results
     * limited to the specified user. </p>
     */
    inline void SetKey(const AccessLevelFilterKey& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>Specifies the access level.</p> <p> <code>Account</code> allows results at
     * the account level. </p> <p> <code>Role</code> allows results based on the
     * federated role of the specified user.</p> <p> <code>User</code> allows results
     * limited to the specified user. </p>
     */
    inline void SetKey(AccessLevelFilterKey&& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>Specifies the access level.</p> <p> <code>Account</code> allows results at
     * the account level. </p> <p> <code>Role</code> allows results based on the
     * federated role of the specified user.</p> <p> <code>User</code> allows results
     * limited to the specified user. </p>
     */
    inline AccessLevelFilter& WithKey(const AccessLevelFilterKey& value) { SetKey(value); return *this;}

    /**
     * <p>Specifies the access level.</p> <p> <code>Account</code> allows results at
     * the account level. </p> <p> <code>Role</code> allows results based on the
     * federated role of the specified user.</p> <p> <code>User</code> allows results
     * limited to the specified user. </p>
     */
    inline AccessLevelFilter& WithKey(AccessLevelFilterKey&& value) { SetKey(value); return *this;}

    /**
     * <p>Specifies the user to which the access level applies. A value of
     * <code>Self</code> is currently supported.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>Specifies the user to which the access level applies. A value of
     * <code>Self</code> is currently supported.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>Specifies the user to which the access level applies. A value of
     * <code>Self</code> is currently supported.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>Specifies the user to which the access level applies. A value of
     * <code>Self</code> is currently supported.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>Specifies the user to which the access level applies. A value of
     * <code>Self</code> is currently supported.</p>
     */
    inline AccessLevelFilter& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>Specifies the user to which the access level applies. A value of
     * <code>Self</code> is currently supported.</p>
     */
    inline AccessLevelFilter& WithValue(Aws::String&& value) { SetValue(value); return *this;}

    /**
     * <p>Specifies the user to which the access level applies. A value of
     * <code>Self</code> is currently supported.</p>
     */
    inline AccessLevelFilter& WithValue(const char* value) { SetValue(value); return *this;}

  private:
    AccessLevelFilterKey m_key;
    bool m_keyHasBeenSet;
    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
