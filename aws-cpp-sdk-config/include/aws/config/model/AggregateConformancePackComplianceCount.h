/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>

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
namespace ConfigService
{
namespace Model
{

  /**
   * <p>The number of conformance packs that are compliant and
   * noncompliant.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/AggregateConformancePackComplianceCount">AWS
   * API Reference</a></p>
   */
  class AggregateConformancePackComplianceCount
  {
  public:
    AWS_CONFIGSERVICE_API AggregateConformancePackComplianceCount();
    AWS_CONFIGSERVICE_API AggregateConformancePackComplianceCount(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API AggregateConformancePackComplianceCount& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Number of compliant conformance packs.</p>
     */
    inline int GetCompliantConformancePackCount() const{ return m_compliantConformancePackCount; }

    /**
     * <p>Number of compliant conformance packs.</p>
     */
    inline bool CompliantConformancePackCountHasBeenSet() const { return m_compliantConformancePackCountHasBeenSet; }

    /**
     * <p>Number of compliant conformance packs.</p>
     */
    inline void SetCompliantConformancePackCount(int value) { m_compliantConformancePackCountHasBeenSet = true; m_compliantConformancePackCount = value; }

    /**
     * <p>Number of compliant conformance packs.</p>
     */
    inline AggregateConformancePackComplianceCount& WithCompliantConformancePackCount(int value) { SetCompliantConformancePackCount(value); return *this;}


    /**
     * <p>Number of noncompliant conformance packs.</p>
     */
    inline int GetNonCompliantConformancePackCount() const{ return m_nonCompliantConformancePackCount; }

    /**
     * <p>Number of noncompliant conformance packs.</p>
     */
    inline bool NonCompliantConformancePackCountHasBeenSet() const { return m_nonCompliantConformancePackCountHasBeenSet; }

    /**
     * <p>Number of noncompliant conformance packs.</p>
     */
    inline void SetNonCompliantConformancePackCount(int value) { m_nonCompliantConformancePackCountHasBeenSet = true; m_nonCompliantConformancePackCount = value; }

    /**
     * <p>Number of noncompliant conformance packs.</p>
     */
    inline AggregateConformancePackComplianceCount& WithNonCompliantConformancePackCount(int value) { SetNonCompliantConformancePackCount(value); return *this;}

  private:

    int m_compliantConformancePackCount;
    bool m_compliantConformancePackCountHasBeenSet = false;

    int m_nonCompliantConformancePackCount;
    bool m_nonCompliantConformancePackCountHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
