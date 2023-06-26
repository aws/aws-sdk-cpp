/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
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
namespace AuditManager
{
namespace Model
{

  /**
   * <p> An Amazon Web Service such as Amazon S3 or CloudTrail. </p> <p>For an
   * example of how to find an Amazon Web Service name and how to define it in your
   * assessment scope, see the following:</p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/API_GetServicesInScope.html#API_GetServicesInScope_Example_2">Finding
   * an Amazon Web Service name to use in your assessment scope</a> </p> </li> <li>
   * <p> <a
   * href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/API_GetServicesInScope.html#API_GetServicesInScope_Example_3">Defining
   * an Amazon Web Service name in your assessment scope</a> </p> </li>
   * </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/AWSService">AWS
   * API Reference</a></p>
   */
  class AWSService
  {
  public:
    AWS_AUDITMANAGER_API AWSService();
    AWS_AUDITMANAGER_API AWSService(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API AWSService& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The name of the Amazon Web Service. </p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }

    /**
     * <p> The name of the Amazon Web Service. </p>
     */
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }

    /**
     * <p> The name of the Amazon Web Service. </p>
     */
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }

    /**
     * <p> The name of the Amazon Web Service. </p>
     */
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }

    /**
     * <p> The name of the Amazon Web Service. </p>
     */
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }

    /**
     * <p> The name of the Amazon Web Service. </p>
     */
    inline AWSService& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /**
     * <p> The name of the Amazon Web Service. </p>
     */
    inline AWSService& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}

    /**
     * <p> The name of the Amazon Web Service. </p>
     */
    inline AWSService& WithServiceName(const char* value) { SetServiceName(value); return *this;}

  private:

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
