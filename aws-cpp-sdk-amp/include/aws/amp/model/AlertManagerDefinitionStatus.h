/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/amp/model/AlertManagerDefinitionStatusCode.h>
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
namespace PrometheusService
{
namespace Model
{

  /**
   * <p>Represents the status of a definition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/AlertManagerDefinitionStatus">AWS
   * API Reference</a></p>
   */
  class AlertManagerDefinitionStatus
  {
  public:
    AWS_PROMETHEUSSERVICE_API AlertManagerDefinitionStatus();
    AWS_PROMETHEUSSERVICE_API AlertManagerDefinitionStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROMETHEUSSERVICE_API AlertManagerDefinitionStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROMETHEUSSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Status code of this definition.</p>
     */
    inline const AlertManagerDefinitionStatusCode& GetStatusCode() const{ return m_statusCode; }

    /**
     * <p>Status code of this definition.</p>
     */
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }

    /**
     * <p>Status code of this definition.</p>
     */
    inline void SetStatusCode(const AlertManagerDefinitionStatusCode& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }

    /**
     * <p>Status code of this definition.</p>
     */
    inline void SetStatusCode(AlertManagerDefinitionStatusCode&& value) { m_statusCodeHasBeenSet = true; m_statusCode = std::move(value); }

    /**
     * <p>Status code of this definition.</p>
     */
    inline AlertManagerDefinitionStatus& WithStatusCode(const AlertManagerDefinitionStatusCode& value) { SetStatusCode(value); return *this;}

    /**
     * <p>Status code of this definition.</p>
     */
    inline AlertManagerDefinitionStatus& WithStatusCode(AlertManagerDefinitionStatusCode&& value) { SetStatusCode(std::move(value)); return *this;}


    /**
     * <p>The reason for failure if any.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>The reason for failure if any.</p>
     */
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }

    /**
     * <p>The reason for failure if any.</p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }

    /**
     * <p>The reason for failure if any.</p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }

    /**
     * <p>The reason for failure if any.</p>
     */
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }

    /**
     * <p>The reason for failure if any.</p>
     */
    inline AlertManagerDefinitionStatus& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p>The reason for failure if any.</p>
     */
    inline AlertManagerDefinitionStatus& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

    /**
     * <p>The reason for failure if any.</p>
     */
    inline AlertManagerDefinitionStatus& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}

  private:

    AlertManagerDefinitionStatusCode m_statusCode;
    bool m_statusCodeHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
