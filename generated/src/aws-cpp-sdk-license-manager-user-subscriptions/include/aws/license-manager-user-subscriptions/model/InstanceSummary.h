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


    ///@{
    /**
     * <p>The ID of the EC2 instance, which provides user-based subscriptions.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline InstanceSummary& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline InstanceSummary& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline InstanceSummary& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date of the last status check.</p>
     */
    inline const Aws::String& GetLastStatusCheckDate() const{ return m_lastStatusCheckDate; }
    inline bool LastStatusCheckDateHasBeenSet() const { return m_lastStatusCheckDateHasBeenSet; }
    inline void SetLastStatusCheckDate(const Aws::String& value) { m_lastStatusCheckDateHasBeenSet = true; m_lastStatusCheckDate = value; }
    inline void SetLastStatusCheckDate(Aws::String&& value) { m_lastStatusCheckDateHasBeenSet = true; m_lastStatusCheckDate = std::move(value); }
    inline void SetLastStatusCheckDate(const char* value) { m_lastStatusCheckDateHasBeenSet = true; m_lastStatusCheckDate.assign(value); }
    inline InstanceSummary& WithLastStatusCheckDate(const Aws::String& value) { SetLastStatusCheckDate(value); return *this;}
    inline InstanceSummary& WithLastStatusCheckDate(Aws::String&& value) { SetLastStatusCheckDate(std::move(value)); return *this;}
    inline InstanceSummary& WithLastStatusCheckDate(const char* value) { SetLastStatusCheckDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of provided user-based subscription products.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProducts() const{ return m_products; }
    inline bool ProductsHasBeenSet() const { return m_productsHasBeenSet; }
    inline void SetProducts(const Aws::Vector<Aws::String>& value) { m_productsHasBeenSet = true; m_products = value; }
    inline void SetProducts(Aws::Vector<Aws::String>&& value) { m_productsHasBeenSet = true; m_products = std::move(value); }
    inline InstanceSummary& WithProducts(const Aws::Vector<Aws::String>& value) { SetProducts(value); return *this;}
    inline InstanceSummary& WithProducts(Aws::Vector<Aws::String>&& value) { SetProducts(std::move(value)); return *this;}
    inline InstanceSummary& AddProducts(const Aws::String& value) { m_productsHasBeenSet = true; m_products.push_back(value); return *this; }
    inline InstanceSummary& AddProducts(Aws::String&& value) { m_productsHasBeenSet = true; m_products.push_back(std::move(value)); return *this; }
    inline InstanceSummary& AddProducts(const char* value) { m_productsHasBeenSet = true; m_products.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of an EC2 instance resource.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline InstanceSummary& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline InstanceSummary& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline InstanceSummary& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message for an EC2 instance.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline InstanceSummary& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline InstanceSummary& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline InstanceSummary& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}
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
