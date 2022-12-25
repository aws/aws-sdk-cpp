/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/route53-recovery-readiness/model/Readiness.h>
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
namespace Route53RecoveryReadiness
{
namespace Model
{

  /**
   * <p>Summary of all readiness check statuses in a recovery group, paginated in
   * GetRecoveryGroupReadinessSummary and GetCellReadinessSummary.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/ReadinessCheckSummary">AWS
   * API Reference</a></p>
   */
  class ReadinessCheckSummary
  {
  public:
    AWS_ROUTE53RECOVERYREADINESS_API ReadinessCheckSummary();
    AWS_ROUTE53RECOVERYREADINESS_API ReadinessCheckSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYREADINESS_API ReadinessCheckSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYREADINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The readiness status of this readiness check.</p>
     */
    inline const Readiness& GetReadiness() const{ return m_readiness; }

    /**
     * <p>The readiness status of this readiness check.</p>
     */
    inline bool ReadinessHasBeenSet() const { return m_readinessHasBeenSet; }

    /**
     * <p>The readiness status of this readiness check.</p>
     */
    inline void SetReadiness(const Readiness& value) { m_readinessHasBeenSet = true; m_readiness = value; }

    /**
     * <p>The readiness status of this readiness check.</p>
     */
    inline void SetReadiness(Readiness&& value) { m_readinessHasBeenSet = true; m_readiness = std::move(value); }

    /**
     * <p>The readiness status of this readiness check.</p>
     */
    inline ReadinessCheckSummary& WithReadiness(const Readiness& value) { SetReadiness(value); return *this;}

    /**
     * <p>The readiness status of this readiness check.</p>
     */
    inline ReadinessCheckSummary& WithReadiness(Readiness&& value) { SetReadiness(std::move(value)); return *this;}


    /**
     * <p>The name of a readiness check.</p>
     */
    inline const Aws::String& GetReadinessCheckName() const{ return m_readinessCheckName; }

    /**
     * <p>The name of a readiness check.</p>
     */
    inline bool ReadinessCheckNameHasBeenSet() const { return m_readinessCheckNameHasBeenSet; }

    /**
     * <p>The name of a readiness check.</p>
     */
    inline void SetReadinessCheckName(const Aws::String& value) { m_readinessCheckNameHasBeenSet = true; m_readinessCheckName = value; }

    /**
     * <p>The name of a readiness check.</p>
     */
    inline void SetReadinessCheckName(Aws::String&& value) { m_readinessCheckNameHasBeenSet = true; m_readinessCheckName = std::move(value); }

    /**
     * <p>The name of a readiness check.</p>
     */
    inline void SetReadinessCheckName(const char* value) { m_readinessCheckNameHasBeenSet = true; m_readinessCheckName.assign(value); }

    /**
     * <p>The name of a readiness check.</p>
     */
    inline ReadinessCheckSummary& WithReadinessCheckName(const Aws::String& value) { SetReadinessCheckName(value); return *this;}

    /**
     * <p>The name of a readiness check.</p>
     */
    inline ReadinessCheckSummary& WithReadinessCheckName(Aws::String&& value) { SetReadinessCheckName(std::move(value)); return *this;}

    /**
     * <p>The name of a readiness check.</p>
     */
    inline ReadinessCheckSummary& WithReadinessCheckName(const char* value) { SetReadinessCheckName(value); return *this;}

  private:

    Readiness m_readiness;
    bool m_readinessHasBeenSet = false;

    Aws::String m_readinessCheckName;
    bool m_readinessCheckNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
