/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-linux-subscriptions/LicenseManagerLinuxSubscriptions_EXPORTS.h>
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
namespace LicenseManagerLinuxSubscriptions
{
namespace Model
{

  /**
   * <p>An object which details a discovered Linux subscription.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-linux-subscriptions-2018-05-10/Subscription">AWS
   * API Reference</a></p>
   */
  class Subscription
  {
  public:
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API Subscription();
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API Subscription(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API Subscription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The total amount of running instances using this subscription.</p>
     */
    inline long long GetInstanceCount() const{ return m_instanceCount; }

    /**
     * <p>The total amount of running instances using this subscription.</p>
     */
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }

    /**
     * <p>The total amount of running instances using this subscription.</p>
     */
    inline void SetInstanceCount(long long value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }

    /**
     * <p>The total amount of running instances using this subscription.</p>
     */
    inline Subscription& WithInstanceCount(long long value) { SetInstanceCount(value); return *this;}


    /**
     * <p>The name of the subscription.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the subscription.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the subscription.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the subscription.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the subscription.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the subscription.</p>
     */
    inline Subscription& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the subscription.</p>
     */
    inline Subscription& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the subscription.</p>
     */
    inline Subscription& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The type of subscription. The type can be subscription-included with Amazon
     * EC2, Bring Your Own Subscription model (BYOS), or from the Amazon Web Services
     * Marketplace. Certain subscriptions may use licensing from the Amazon Web
     * Services Marketplace as well as OS licensing from Amazon EC2 or BYOS.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of subscription. The type can be subscription-included with Amazon
     * EC2, Bring Your Own Subscription model (BYOS), or from the Amazon Web Services
     * Marketplace. Certain subscriptions may use licensing from the Amazon Web
     * Services Marketplace as well as OS licensing from Amazon EC2 or BYOS.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of subscription. The type can be subscription-included with Amazon
     * EC2, Bring Your Own Subscription model (BYOS), or from the Amazon Web Services
     * Marketplace. Certain subscriptions may use licensing from the Amazon Web
     * Services Marketplace as well as OS licensing from Amazon EC2 or BYOS.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of subscription. The type can be subscription-included with Amazon
     * EC2, Bring Your Own Subscription model (BYOS), or from the Amazon Web Services
     * Marketplace. Certain subscriptions may use licensing from the Amazon Web
     * Services Marketplace as well as OS licensing from Amazon EC2 or BYOS.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of subscription. The type can be subscription-included with Amazon
     * EC2, Bring Your Own Subscription model (BYOS), or from the Amazon Web Services
     * Marketplace. Certain subscriptions may use licensing from the Amazon Web
     * Services Marketplace as well as OS licensing from Amazon EC2 or BYOS.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of subscription. The type can be subscription-included with Amazon
     * EC2, Bring Your Own Subscription model (BYOS), or from the Amazon Web Services
     * Marketplace. Certain subscriptions may use licensing from the Amazon Web
     * Services Marketplace as well as OS licensing from Amazon EC2 or BYOS.</p>
     */
    inline Subscription& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of subscription. The type can be subscription-included with Amazon
     * EC2, Bring Your Own Subscription model (BYOS), or from the Amazon Web Services
     * Marketplace. Certain subscriptions may use licensing from the Amazon Web
     * Services Marketplace as well as OS licensing from Amazon EC2 or BYOS.</p>
     */
    inline Subscription& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of subscription. The type can be subscription-included with Amazon
     * EC2, Bring Your Own Subscription model (BYOS), or from the Amazon Web Services
     * Marketplace. Certain subscriptions may use licensing from the Amazon Web
     * Services Marketplace as well as OS licensing from Amazon EC2 or BYOS.</p>
     */
    inline Subscription& WithType(const char* value) { SetType(value); return *this;}

  private:

    long long m_instanceCount;
    bool m_instanceCountHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManagerLinuxSubscriptions
} // namespace Aws
