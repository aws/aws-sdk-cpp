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
    AWS_APPRUNNER_API ServiceSummary();
    AWS_APPRUNNER_API ServiceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API ServiceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The customer-provided service name.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }
    inline ServiceSummary& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}
    inline ServiceSummary& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}
    inline ServiceSummary& WithServiceName(const char* value) { SetServiceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ID that App Runner generated for this service. It's unique within the
     * Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetServiceId() const{ return m_serviceId; }
    inline bool ServiceIdHasBeenSet() const { return m_serviceIdHasBeenSet; }
    inline void SetServiceId(const Aws::String& value) { m_serviceIdHasBeenSet = true; m_serviceId = value; }
    inline void SetServiceId(Aws::String&& value) { m_serviceIdHasBeenSet = true; m_serviceId = std::move(value); }
    inline void SetServiceId(const char* value) { m_serviceIdHasBeenSet = true; m_serviceId.assign(value); }
    inline ServiceSummary& WithServiceId(const Aws::String& value) { SetServiceId(value); return *this;}
    inline ServiceSummary& WithServiceId(Aws::String&& value) { SetServiceId(std::move(value)); return *this;}
    inline ServiceSummary& WithServiceId(const char* value) { SetServiceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of this service.</p>
     */
    inline const Aws::String& GetServiceArn() const{ return m_serviceArn; }
    inline bool ServiceArnHasBeenSet() const { return m_serviceArnHasBeenSet; }
    inline void SetServiceArn(const Aws::String& value) { m_serviceArnHasBeenSet = true; m_serviceArn = value; }
    inline void SetServiceArn(Aws::String&& value) { m_serviceArnHasBeenSet = true; m_serviceArn = std::move(value); }
    inline void SetServiceArn(const char* value) { m_serviceArnHasBeenSet = true; m_serviceArn.assign(value); }
    inline ServiceSummary& WithServiceArn(const Aws::String& value) { SetServiceArn(value); return *this;}
    inline ServiceSummary& WithServiceArn(Aws::String&& value) { SetServiceArn(std::move(value)); return *this;}
    inline ServiceSummary& WithServiceArn(const char* value) { SetServiceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A subdomain URL that App Runner generated for this service. You can use this
     * URL to access your service web application.</p>
     */
    inline const Aws::String& GetServiceUrl() const{ return m_serviceUrl; }
    inline bool ServiceUrlHasBeenSet() const { return m_serviceUrlHasBeenSet; }
    inline void SetServiceUrl(const Aws::String& value) { m_serviceUrlHasBeenSet = true; m_serviceUrl = value; }
    inline void SetServiceUrl(Aws::String&& value) { m_serviceUrlHasBeenSet = true; m_serviceUrl = std::move(value); }
    inline void SetServiceUrl(const char* value) { m_serviceUrlHasBeenSet = true; m_serviceUrl.assign(value); }
    inline ServiceSummary& WithServiceUrl(const Aws::String& value) { SetServiceUrl(value); return *this;}
    inline ServiceSummary& WithServiceUrl(Aws::String&& value) { SetServiceUrl(std::move(value)); return *this;}
    inline ServiceSummary& WithServiceUrl(const char* value) { SetServiceUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the App Runner service was created. It's in the Unix time stamp
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline ServiceSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline ServiceSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the App Runner service was last updated. It's in theUnix time
     * stamp format.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline ServiceSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline ServiceSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
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
    inline const ServiceStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ServiceStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ServiceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ServiceSummary& WithStatus(const ServiceStatus& value) { SetStatus(value); return *this;}
    inline ServiceSummary& WithStatus(ServiceStatus&& value) { SetStatus(std::move(value)); return *this;}
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

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    ServiceStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
