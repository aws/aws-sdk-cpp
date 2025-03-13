/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/apprunner/model/ServiceStatus.h>
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
namespace AppRunner
{
namespace Model
{

  /**
   * <p>Provides summary information for an App Runner service.</p> <p>This type
   * contains limited information about a service. It doesn't include configuration
   * details. It's returned by the <a
   * href="https://docs.aws.amazon.com/apprunner/latest/api/API_ListServices.html">ListServices</a>
   * action. Complete service information is returned by the <a
   * href="https://docs.aws.amazon.com/apprunner/latest/api/API_CreateService.html">CreateService</a>,
   * <a
   * href="https://docs.aws.amazon.com/apprunner/latest/api/API_DescribeService.html">DescribeService</a>,
   * and <a
   * href="https://docs.aws.amazon.com/apprunner/latest/api/API_DeleteService.html">DeleteService</a>
   * actions using the <a
   * href="https://docs.aws.amazon.com/apprunner/latest/api/API_Service.html">Service</a>
   * type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/ServiceSummary">AWS
   * API Reference</a></p>
   */
  class ServiceSummary
  {
  public:
    AWS_APPRUNNER_API ServiceSummary() = default;
    AWS_APPRUNNER_API ServiceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API ServiceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The customer-provided service name.</p>
     */
    inline const Aws::String& GetServiceName() const { return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    template<typename ServiceNameT = Aws::String>
    void SetServiceName(ServiceNameT&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::forward<ServiceNameT>(value); }
    template<typename ServiceNameT = Aws::String>
    ServiceSummary& WithServiceName(ServiceNameT&& value) { SetServiceName(std::forward<ServiceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ID that App Runner generated for this service. It's unique within the
     * Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetServiceId() const { return m_serviceId; }
    inline bool ServiceIdHasBeenSet() const { return m_serviceIdHasBeenSet; }
    template<typename ServiceIdT = Aws::String>
    void SetServiceId(ServiceIdT&& value) { m_serviceIdHasBeenSet = true; m_serviceId = std::forward<ServiceIdT>(value); }
    template<typename ServiceIdT = Aws::String>
    ServiceSummary& WithServiceId(ServiceIdT&& value) { SetServiceId(std::forward<ServiceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of this service.</p>
     */
    inline const Aws::String& GetServiceArn() const { return m_serviceArn; }
    inline bool ServiceArnHasBeenSet() const { return m_serviceArnHasBeenSet; }
    template<typename ServiceArnT = Aws::String>
    void SetServiceArn(ServiceArnT&& value) { m_serviceArnHasBeenSet = true; m_serviceArn = std::forward<ServiceArnT>(value); }
    template<typename ServiceArnT = Aws::String>
    ServiceSummary& WithServiceArn(ServiceArnT&& value) { SetServiceArn(std::forward<ServiceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A subdomain URL that App Runner generated for this service. You can use this
     * URL to access your service web application.</p>
     */
    inline const Aws::String& GetServiceUrl() const { return m_serviceUrl; }
    inline bool ServiceUrlHasBeenSet() const { return m_serviceUrlHasBeenSet; }
    template<typename ServiceUrlT = Aws::String>
    void SetServiceUrl(ServiceUrlT&& value) { m_serviceUrlHasBeenSet = true; m_serviceUrl = std::forward<ServiceUrlT>(value); }
    template<typename ServiceUrlT = Aws::String>
    ServiceSummary& WithServiceUrl(ServiceUrlT&& value) { SetServiceUrl(std::forward<ServiceUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the App Runner service was created. It's in the Unix time stamp
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    ServiceSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the App Runner service was last updated. It's in theUnix time
     * stamp format.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    ServiceSummary& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the App Runner service. These particular values mean the
     * following.</p> <ul> <li> <p> <code>CREATE_FAILED</code> – The service failed to
     * create. The failed service isn't usable, and still counts towards your service
     * quota. To troubleshoot this failure, read the failure events and logs, change
     * any parameters that need to be fixed, and rebuild your service using
     * <code>UpdateService</code>.</p> </li> <li> <p> <code>DELETE_FAILED</code> – The
     * service failed to delete and can't be successfully recovered. Retry the service
     * deletion call to ensure that all related resources are removed.</p> </li> </ul>
     */
    inline ServiceStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ServiceStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ServiceSummary& WithStatus(ServiceStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;

    Aws::String m_serviceId;
    bool m_serviceIdHasBeenSet = false;

    Aws::String m_serviceArn;
    bool m_serviceArnHasBeenSet = false;

    Aws::String m_serviceUrl;
    bool m_serviceUrlHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    ServiceStatus m_status{ServiceStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
