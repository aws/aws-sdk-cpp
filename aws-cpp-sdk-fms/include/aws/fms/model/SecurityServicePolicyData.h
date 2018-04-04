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
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/fms/model/SecurityServiceType.h>
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
namespace FMS
{
namespace Model
{

  /**
   * <p>Details about the security service that is being used to protect the
   * resources.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/SecurityServicePolicyData">AWS
   * API Reference</a></p>
   */
  class AWS_FMS_API SecurityServicePolicyData
  {
  public:
    SecurityServicePolicyData();
    SecurityServicePolicyData(const Aws::Utils::Json::JsonValue& jsonValue);
    SecurityServicePolicyData& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The service that the policy is using to protect the resources. This value is
     * <code>WAF</code>.</p>
     */
    inline const SecurityServiceType& GetType() const{ return m_type; }

    /**
     * <p>The service that the policy is using to protect the resources. This value is
     * <code>WAF</code>.</p>
     */
    inline void SetType(const SecurityServiceType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The service that the policy is using to protect the resources. This value is
     * <code>WAF</code>.</p>
     */
    inline void SetType(SecurityServiceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The service that the policy is using to protect the resources. This value is
     * <code>WAF</code>.</p>
     */
    inline SecurityServicePolicyData& WithType(const SecurityServiceType& value) { SetType(value); return *this;}

    /**
     * <p>The service that the policy is using to protect the resources. This value is
     * <code>WAF</code>.</p>
     */
    inline SecurityServicePolicyData& WithType(SecurityServiceType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Details about the service. This contains <code>WAF</code> data in JSON
     * format, as shown in the following example:</p> <p> <code>ManagedServiceData":
     * "{\"type\": \"WAF\", \"ruleGroups\": [{\"id\":
     * \"12345678-1bcd-9012-efga-0987654321ab\", \"overrideAction\" : {\"type\":
     * \"COUNT\"}}], \"defaultAction\": {\"type\": \"BLOCK\"}}</code> </p>
     */
    inline const Aws::String& GetManagedServiceData() const{ return m_managedServiceData; }

    /**
     * <p>Details about the service. This contains <code>WAF</code> data in JSON
     * format, as shown in the following example:</p> <p> <code>ManagedServiceData":
     * "{\"type\": \"WAF\", \"ruleGroups\": [{\"id\":
     * \"12345678-1bcd-9012-efga-0987654321ab\", \"overrideAction\" : {\"type\":
     * \"COUNT\"}}], \"defaultAction\": {\"type\": \"BLOCK\"}}</code> </p>
     */
    inline void SetManagedServiceData(const Aws::String& value) { m_managedServiceDataHasBeenSet = true; m_managedServiceData = value; }

    /**
     * <p>Details about the service. This contains <code>WAF</code> data in JSON
     * format, as shown in the following example:</p> <p> <code>ManagedServiceData":
     * "{\"type\": \"WAF\", \"ruleGroups\": [{\"id\":
     * \"12345678-1bcd-9012-efga-0987654321ab\", \"overrideAction\" : {\"type\":
     * \"COUNT\"}}], \"defaultAction\": {\"type\": \"BLOCK\"}}</code> </p>
     */
    inline void SetManagedServiceData(Aws::String&& value) { m_managedServiceDataHasBeenSet = true; m_managedServiceData = std::move(value); }

    /**
     * <p>Details about the service. This contains <code>WAF</code> data in JSON
     * format, as shown in the following example:</p> <p> <code>ManagedServiceData":
     * "{\"type\": \"WAF\", \"ruleGroups\": [{\"id\":
     * \"12345678-1bcd-9012-efga-0987654321ab\", \"overrideAction\" : {\"type\":
     * \"COUNT\"}}], \"defaultAction\": {\"type\": \"BLOCK\"}}</code> </p>
     */
    inline void SetManagedServiceData(const char* value) { m_managedServiceDataHasBeenSet = true; m_managedServiceData.assign(value); }

    /**
     * <p>Details about the service. This contains <code>WAF</code> data in JSON
     * format, as shown in the following example:</p> <p> <code>ManagedServiceData":
     * "{\"type\": \"WAF\", \"ruleGroups\": [{\"id\":
     * \"12345678-1bcd-9012-efga-0987654321ab\", \"overrideAction\" : {\"type\":
     * \"COUNT\"}}], \"defaultAction\": {\"type\": \"BLOCK\"}}</code> </p>
     */
    inline SecurityServicePolicyData& WithManagedServiceData(const Aws::String& value) { SetManagedServiceData(value); return *this;}

    /**
     * <p>Details about the service. This contains <code>WAF</code> data in JSON
     * format, as shown in the following example:</p> <p> <code>ManagedServiceData":
     * "{\"type\": \"WAF\", \"ruleGroups\": [{\"id\":
     * \"12345678-1bcd-9012-efga-0987654321ab\", \"overrideAction\" : {\"type\":
     * \"COUNT\"}}], \"defaultAction\": {\"type\": \"BLOCK\"}}</code> </p>
     */
    inline SecurityServicePolicyData& WithManagedServiceData(Aws::String&& value) { SetManagedServiceData(std::move(value)); return *this;}

    /**
     * <p>Details about the service. This contains <code>WAF</code> data in JSON
     * format, as shown in the following example:</p> <p> <code>ManagedServiceData":
     * "{\"type\": \"WAF\", \"ruleGroups\": [{\"id\":
     * \"12345678-1bcd-9012-efga-0987654321ab\", \"overrideAction\" : {\"type\":
     * \"COUNT\"}}], \"defaultAction\": {\"type\": \"BLOCK\"}}</code> </p>
     */
    inline SecurityServicePolicyData& WithManagedServiceData(const char* value) { SetManagedServiceData(value); return *this;}

  private:

    SecurityServiceType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_managedServiceData;
    bool m_managedServiceDataHasBeenSet;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
