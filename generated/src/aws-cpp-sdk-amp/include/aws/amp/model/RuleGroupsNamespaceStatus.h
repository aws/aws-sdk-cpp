/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/amp/model/RuleGroupsNamespaceStatusCode.h>
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
   * <p>Represents the status of a namespace.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/RuleGroupsNamespaceStatus">AWS
   * API Reference</a></p>
   */
  class RuleGroupsNamespaceStatus
  {
  public:
    AWS_PROMETHEUSSERVICE_API RuleGroupsNamespaceStatus();
    AWS_PROMETHEUSSERVICE_API RuleGroupsNamespaceStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROMETHEUSSERVICE_API RuleGroupsNamespaceStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROMETHEUSSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Status code of this namespace.</p>
     */
    inline const RuleGroupsNamespaceStatusCode& GetStatusCode() const{ return m_statusCode; }

    /**
     * <p>Status code of this namespace.</p>
     */
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }

    /**
     * <p>Status code of this namespace.</p>
     */
    inline void SetStatusCode(const RuleGroupsNamespaceStatusCode& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }

    /**
     * <p>Status code of this namespace.</p>
     */
    inline void SetStatusCode(RuleGroupsNamespaceStatusCode&& value) { m_statusCodeHasBeenSet = true; m_statusCode = std::move(value); }

    /**
     * <p>Status code of this namespace.</p>
     */
    inline RuleGroupsNamespaceStatus& WithStatusCode(const RuleGroupsNamespaceStatusCode& value) { SetStatusCode(value); return *this;}

    /**
     * <p>Status code of this namespace.</p>
     */
    inline RuleGroupsNamespaceStatus& WithStatusCode(RuleGroupsNamespaceStatusCode&& value) { SetStatusCode(std::move(value)); return *this;}


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
    inline RuleGroupsNamespaceStatus& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p>The reason for failure if any.</p>
     */
    inline RuleGroupsNamespaceStatus& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

    /**
     * <p>The reason for failure if any.</p>
     */
    inline RuleGroupsNamespaceStatus& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}

  private:

    RuleGroupsNamespaceStatusCode m_statusCode;
    bool m_statusCodeHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
