﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/route53-recovery-readiness/model/Readiness.h>
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
namespace Route53RecoveryReadiness
{
namespace Model
{

  /**
   * Result with status for an individual resource.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/ResourceResult">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53RECOVERYREADINESS_API ResourceResult
  {
  public:
    ResourceResult();
    ResourceResult(Aws::Utils::Json::JsonView jsonValue);
    ResourceResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The component id of the resource
     */
    inline const Aws::String& GetComponentId() const{ return m_componentId; }

    /**
     * The component id of the resource
     */
    inline bool ComponentIdHasBeenSet() const { return m_componentIdHasBeenSet; }

    /**
     * The component id of the resource
     */
    inline void SetComponentId(const Aws::String& value) { m_componentIdHasBeenSet = true; m_componentId = value; }

    /**
     * The component id of the resource
     */
    inline void SetComponentId(Aws::String&& value) { m_componentIdHasBeenSet = true; m_componentId = std::move(value); }

    /**
     * The component id of the resource
     */
    inline void SetComponentId(const char* value) { m_componentIdHasBeenSet = true; m_componentId.assign(value); }

    /**
     * The component id of the resource
     */
    inline ResourceResult& WithComponentId(const Aws::String& value) { SetComponentId(value); return *this;}

    /**
     * The component id of the resource
     */
    inline ResourceResult& WithComponentId(Aws::String&& value) { SetComponentId(std::move(value)); return *this;}

    /**
     * The component id of the resource
     */
    inline ResourceResult& WithComponentId(const char* value) { SetComponentId(value); return *this;}


    /**
     * The time the resource was last checked for readiness, in ISO-8601 format, UTC.
     */
    inline const Aws::Utils::DateTime& GetLastCheckedTimestamp() const{ return m_lastCheckedTimestamp; }

    /**
     * The time the resource was last checked for readiness, in ISO-8601 format, UTC.
     */
    inline bool LastCheckedTimestampHasBeenSet() const { return m_lastCheckedTimestampHasBeenSet; }

    /**
     * The time the resource was last checked for readiness, in ISO-8601 format, UTC.
     */
    inline void SetLastCheckedTimestamp(const Aws::Utils::DateTime& value) { m_lastCheckedTimestampHasBeenSet = true; m_lastCheckedTimestamp = value; }

    /**
     * The time the resource was last checked for readiness, in ISO-8601 format, UTC.
     */
    inline void SetLastCheckedTimestamp(Aws::Utils::DateTime&& value) { m_lastCheckedTimestampHasBeenSet = true; m_lastCheckedTimestamp = std::move(value); }

    /**
     * The time the resource was last checked for readiness, in ISO-8601 format, UTC.
     */
    inline ResourceResult& WithLastCheckedTimestamp(const Aws::Utils::DateTime& value) { SetLastCheckedTimestamp(value); return *this;}

    /**
     * The time the resource was last checked for readiness, in ISO-8601 format, UTC.
     */
    inline ResourceResult& WithLastCheckedTimestamp(Aws::Utils::DateTime&& value) { SetLastCheckedTimestamp(std::move(value)); return *this;}


    /**
     * The readiness of the resource.
     */
    inline const Readiness& GetReadiness() const{ return m_readiness; }

    /**
     * The readiness of the resource.
     */
    inline bool ReadinessHasBeenSet() const { return m_readinessHasBeenSet; }

    /**
     * The readiness of the resource.
     */
    inline void SetReadiness(const Readiness& value) { m_readinessHasBeenSet = true; m_readiness = value; }

    /**
     * The readiness of the resource.
     */
    inline void SetReadiness(Readiness&& value) { m_readinessHasBeenSet = true; m_readiness = std::move(value); }

    /**
     * The readiness of the resource.
     */
    inline ResourceResult& WithReadiness(const Readiness& value) { SetReadiness(value); return *this;}

    /**
     * The readiness of the resource.
     */
    inline ResourceResult& WithReadiness(Readiness&& value) { SetReadiness(std::move(value)); return *this;}


    /**
     * The ARN of the resource
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * The ARN of the resource
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * The ARN of the resource
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * The ARN of the resource
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * The ARN of the resource
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * The ARN of the resource
     */
    inline ResourceResult& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * The ARN of the resource
     */
    inline ResourceResult& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * The ARN of the resource
     */
    inline ResourceResult& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}

  private:

    Aws::String m_componentId;
    bool m_componentIdHasBeenSet;

    Aws::Utils::DateTime m_lastCheckedTimestamp;
    bool m_lastCheckedTimestampHasBeenSet;

    Readiness m_readiness;
    bool m_readinessHasBeenSet;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
