/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace LicenseManagerUserSubscriptions
{
namespace Model
{

  /**
   * <p>Describes an EC2 instance providing user-based subscriptions.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-user-subscriptions-2018-05-10/InstanceSummary">AWS
   * API Reference</a></p>
   */
  class InstanceSummary
  {
  public:
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API InstanceSummary();
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API InstanceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API InstanceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the EC2 instance, which provides user-based subscriptions.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the EC2 instance, which provides user-based subscriptions.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The ID of the EC2 instance, which provides user-based subscriptions.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the EC2 instance, which provides user-based subscriptions.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The ID of the EC2 instance, which provides user-based subscriptions.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The ID of the EC2 instance, which provides user-based subscriptions.</p>
     */
    inline InstanceSummary& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the EC2 instance, which provides user-based subscriptions.</p>
     */
    inline InstanceSummary& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the EC2 instance, which provides user-based subscriptions.</p>
     */
    inline InstanceSummary& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The date of the last status check.</p>
     */
    inline const Aws::String& GetLastStatusCheckDate() const{ return m_lastStatusCheckDate; }

    /**
     * <p>The date of the last status check.</p>
     */
    inline bool LastStatusCheckDateHasBeenSet() const { return m_lastStatusCheckDateHasBeenSet; }

    /**
     * <p>The date of the last status check.</p>
     */
    inline void SetLastStatusCheckDate(const Aws::String& value) { m_lastStatusCheckDateHasBeenSet = true; m_lastStatusCheckDate = value; }

    /**
     * <p>The date of the last status check.</p>
     */
    inline void SetLastStatusCheckDate(Aws::String&& value) { m_lastStatusCheckDateHasBeenSet = true; m_lastStatusCheckDate = std::move(value); }

    /**
     * <p>The date of the last status check.</p>
     */
    inline void SetLastStatusCheckDate(const char* value) { m_lastStatusCheckDateHasBeenSet = true; m_lastStatusCheckDate.assign(value); }

    /**
     * <p>The date of the last status check.</p>
     */
    inline InstanceSummary& WithLastStatusCheckDate(const Aws::String& value) { SetLastStatusCheckDate(value); return *this;}

    /**
     * <p>The date of the last status check.</p>
     */
    inline InstanceSummary& WithLastStatusCheckDate(Aws::String&& value) { SetLastStatusCheckDate(std::move(value)); return *this;}

    /**
     * <p>The date of the last status check.</p>
     */
    inline InstanceSummary& WithLastStatusCheckDate(const char* value) { SetLastStatusCheckDate(value); return *this;}


    /**
     * <p>A list of provided user-based subscription products.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProducts() const{ return m_products; }

    /**
     * <p>A list of provided user-based subscription products.</p>
     */
    inline bool ProductsHasBeenSet() const { return m_productsHasBeenSet; }

    /**
     * <p>A list of provided user-based subscription products.</p>
     */
    inline void SetProducts(const Aws::Vector<Aws::String>& value) { m_productsHasBeenSet = true; m_products = value; }

    /**
     * <p>A list of provided user-based subscription products.</p>
     */
    inline void SetProducts(Aws::Vector<Aws::String>&& value) { m_productsHasBeenSet = true; m_products = std::move(value); }

    /**
     * <p>A list of provided user-based subscription products.</p>
     */
    inline InstanceSummary& WithProducts(const Aws::Vector<Aws::String>& value) { SetProducts(value); return *this;}

    /**
     * <p>A list of provided user-based subscription products.</p>
     */
    inline InstanceSummary& WithProducts(Aws::Vector<Aws::String>&& value) { SetProducts(std::move(value)); return *this;}

    /**
     * <p>A list of provided user-based subscription products.</p>
     */
    inline InstanceSummary& AddProducts(const Aws::String& value) { m_productsHasBeenSet = true; m_products.push_back(value); return *this; }

    /**
     * <p>A list of provided user-based subscription products.</p>
     */
    inline InstanceSummary& AddProducts(Aws::String&& value) { m_productsHasBeenSet = true; m_products.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of provided user-based subscription products.</p>
     */
    inline InstanceSummary& AddProducts(const char* value) { m_productsHasBeenSet = true; m_products.push_back(value); return *this; }


    /**
     * <p>The status of an EC2 instance resource.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of an EC2 instance resource.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of an EC2 instance resource.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of an EC2 instance resource.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of an EC2 instance resource.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of an EC2 instance resource.</p>
     */
    inline InstanceSummary& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of an EC2 instance resource.</p>
     */
    inline InstanceSummary& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of an EC2 instance resource.</p>
     */
    inline InstanceSummary& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The status message for an EC2 instance.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>The status message for an EC2 instance.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>The status message for an EC2 instance.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>The status message for an EC2 instance.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>The status message for an EC2 instance.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>The status message for an EC2 instance.</p>
     */
    inline InstanceSummary& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>The status message for an EC2 instance.</p>
     */
    inline InstanceSummary& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>The status message for an EC2 instance.</p>
     */
    inline InstanceSummary& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_lastStatusCheckDate;
    bool m_lastStatusCheckDateHasBeenSet = false;

    Aws::Vector<Aws::String> m_products;
    bool m_productsHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
