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
   * Summary of ReadinessCheck status, paginated in GetRecoveryGroupReadinessSummary
   * and GetCellReadinessSummary<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/ReadinessCheckSummary">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53RECOVERYREADINESS_API ReadinessCheckSummary
  {
  public:
    ReadinessCheckSummary();
    ReadinessCheckSummary(Aws::Utils::Json::JsonView jsonValue);
    ReadinessCheckSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The readiness of this ReadinessCheck
     */
    inline const Readiness& GetReadiness() const{ return m_readiness; }

    /**
     * The readiness of this ReadinessCheck
     */
    inline bool ReadinessHasBeenSet() const { return m_readinessHasBeenSet; }

    /**
     * The readiness of this ReadinessCheck
     */
    inline void SetReadiness(const Readiness& value) { m_readinessHasBeenSet = true; m_readiness = value; }

    /**
     * The readiness of this ReadinessCheck
     */
    inline void SetReadiness(Readiness&& value) { m_readinessHasBeenSet = true; m_readiness = std::move(value); }

    /**
     * The readiness of this ReadinessCheck
     */
    inline ReadinessCheckSummary& WithReadiness(const Readiness& value) { SetReadiness(value); return *this;}

    /**
     * The readiness of this ReadinessCheck
     */
    inline ReadinessCheckSummary& WithReadiness(Readiness&& value) { SetReadiness(std::move(value)); return *this;}


    /**
     * The name of a ReadinessCheck which is part of the given RecoveryGroup or Cell
     */
    inline const Aws::String& GetReadinessCheckName() const{ return m_readinessCheckName; }

    /**
     * The name of a ReadinessCheck which is part of the given RecoveryGroup or Cell
     */
    inline bool ReadinessCheckNameHasBeenSet() const { return m_readinessCheckNameHasBeenSet; }

    /**
     * The name of a ReadinessCheck which is part of the given RecoveryGroup or Cell
     */
    inline void SetReadinessCheckName(const Aws::String& value) { m_readinessCheckNameHasBeenSet = true; m_readinessCheckName = value; }

    /**
     * The name of a ReadinessCheck which is part of the given RecoveryGroup or Cell
     */
    inline void SetReadinessCheckName(Aws::String&& value) { m_readinessCheckNameHasBeenSet = true; m_readinessCheckName = std::move(value); }

    /**
     * The name of a ReadinessCheck which is part of the given RecoveryGroup or Cell
     */
    inline void SetReadinessCheckName(const char* value) { m_readinessCheckNameHasBeenSet = true; m_readinessCheckName.assign(value); }

    /**
     * The name of a ReadinessCheck which is part of the given RecoveryGroup or Cell
     */
    inline ReadinessCheckSummary& WithReadinessCheckName(const Aws::String& value) { SetReadinessCheckName(value); return *this;}

    /**
     * The name of a ReadinessCheck which is part of the given RecoveryGroup or Cell
     */
    inline ReadinessCheckSummary& WithReadinessCheckName(Aws::String&& value) { SetReadinessCheckName(std::move(value)); return *this;}

    /**
     * The name of a ReadinessCheck which is part of the given RecoveryGroup or Cell
     */
    inline ReadinessCheckSummary& WithReadinessCheckName(const char* value) { SetReadinessCheckName(value); return *this;}

  private:

    Readiness m_readiness;
    bool m_readinessHasBeenSet;

    Aws::String m_readinessCheckName;
    bool m_readinessCheckNameHasBeenSet;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
