/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
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
namespace SSMIncidents
{
namespace Model
{

  /**
   * <p>Details about the PagerDuty service where the response plan creates an
   * incident.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/PagerDutyIncidentConfiguration">AWS
   * API Reference</a></p>
   */
  class PagerDutyIncidentConfiguration
  {
  public:
    AWS_SSMINCIDENTS_API PagerDutyIncidentConfiguration();
    AWS_SSMINCIDENTS_API PagerDutyIncidentConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API PagerDutyIncidentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the PagerDuty service that the response plan associates with an
     * incident when it launches.</p>
     */
    inline const Aws::String& GetServiceId() const{ return m_serviceId; }

    /**
     * <p>The ID of the PagerDuty service that the response plan associates with an
     * incident when it launches.</p>
     */
    inline bool ServiceIdHasBeenSet() const { return m_serviceIdHasBeenSet; }

    /**
     * <p>The ID of the PagerDuty service that the response plan associates with an
     * incident when it launches.</p>
     */
    inline void SetServiceId(const Aws::String& value) { m_serviceIdHasBeenSet = true; m_serviceId = value; }

    /**
     * <p>The ID of the PagerDuty service that the response plan associates with an
     * incident when it launches.</p>
     */
    inline void SetServiceId(Aws::String&& value) { m_serviceIdHasBeenSet = true; m_serviceId = std::move(value); }

    /**
     * <p>The ID of the PagerDuty service that the response plan associates with an
     * incident when it launches.</p>
     */
    inline void SetServiceId(const char* value) { m_serviceIdHasBeenSet = true; m_serviceId.assign(value); }

    /**
     * <p>The ID of the PagerDuty service that the response plan associates with an
     * incident when it launches.</p>
     */
    inline PagerDutyIncidentConfiguration& WithServiceId(const Aws::String& value) { SetServiceId(value); return *this;}

    /**
     * <p>The ID of the PagerDuty service that the response plan associates with an
     * incident when it launches.</p>
     */
    inline PagerDutyIncidentConfiguration& WithServiceId(Aws::String&& value) { SetServiceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the PagerDuty service that the response plan associates with an
     * incident when it launches.</p>
     */
    inline PagerDutyIncidentConfiguration& WithServiceId(const char* value) { SetServiceId(value); return *this;}

  private:

    Aws::String m_serviceId;
    bool m_serviceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
