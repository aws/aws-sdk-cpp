/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sso-admin/model/AccessControlAttribute.h>
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
namespace SSOAdmin
{
namespace Model
{

  /**
   * <p>Specifies the attributes to add to your attribute-based access control (ABAC)
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/InstanceAccessControlAttributeConfiguration">AWS
   * API Reference</a></p>
   */
  class InstanceAccessControlAttributeConfiguration
  {
  public:
    AWS_SSOADMIN_API InstanceAccessControlAttributeConfiguration();
    AWS_SSOADMIN_API InstanceAccessControlAttributeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API InstanceAccessControlAttributeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Lists the attributes that are configured for ABAC in the specified IAM
     * Identity Center instance.</p>
     */
    inline const Aws::Vector<AccessControlAttribute>& GetAccessControlAttributes() const{ return m_accessControlAttributes; }

    /**
     * <p>Lists the attributes that are configured for ABAC in the specified IAM
     * Identity Center instance.</p>
     */
    inline bool AccessControlAttributesHasBeenSet() const { return m_accessControlAttributesHasBeenSet; }

    /**
     * <p>Lists the attributes that are configured for ABAC in the specified IAM
     * Identity Center instance.</p>
     */
    inline void SetAccessControlAttributes(const Aws::Vector<AccessControlAttribute>& value) { m_accessControlAttributesHasBeenSet = true; m_accessControlAttributes = value; }

    /**
     * <p>Lists the attributes that are configured for ABAC in the specified IAM
     * Identity Center instance.</p>
     */
    inline void SetAccessControlAttributes(Aws::Vector<AccessControlAttribute>&& value) { m_accessControlAttributesHasBeenSet = true; m_accessControlAttributes = std::move(value); }

    /**
     * <p>Lists the attributes that are configured for ABAC in the specified IAM
     * Identity Center instance.</p>
     */
    inline InstanceAccessControlAttributeConfiguration& WithAccessControlAttributes(const Aws::Vector<AccessControlAttribute>& value) { SetAccessControlAttributes(value); return *this;}

    /**
     * <p>Lists the attributes that are configured for ABAC in the specified IAM
     * Identity Center instance.</p>
     */
    inline InstanceAccessControlAttributeConfiguration& WithAccessControlAttributes(Aws::Vector<AccessControlAttribute>&& value) { SetAccessControlAttributes(std::move(value)); return *this;}

    /**
     * <p>Lists the attributes that are configured for ABAC in the specified IAM
     * Identity Center instance.</p>
     */
    inline InstanceAccessControlAttributeConfiguration& AddAccessControlAttributes(const AccessControlAttribute& value) { m_accessControlAttributesHasBeenSet = true; m_accessControlAttributes.push_back(value); return *this; }

    /**
     * <p>Lists the attributes that are configured for ABAC in the specified IAM
     * Identity Center instance.</p>
     */
    inline InstanceAccessControlAttributeConfiguration& AddAccessControlAttributes(AccessControlAttribute&& value) { m_accessControlAttributesHasBeenSet = true; m_accessControlAttributes.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<AccessControlAttribute> m_accessControlAttributes;
    bool m_accessControlAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
