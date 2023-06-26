/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>

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
namespace ApplicationDiscoveryService
{
namespace Model
{

  /**
   * <p> The inventory data for installed Migration Evaluator collectors.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/CustomerMeCollectorInfo">AWS
   * API Reference</a></p>
   */
  class CustomerMeCollectorInfo
  {
  public:
    AWS_APPLICATIONDISCOVERYSERVICE_API CustomerMeCollectorInfo();
    AWS_APPLICATIONDISCOVERYSERVICE_API CustomerMeCollectorInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONDISCOVERYSERVICE_API CustomerMeCollectorInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONDISCOVERYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The number of active Migration Evaluator collectors. </p>
     */
    inline int GetActiveMeCollectors() const{ return m_activeMeCollectors; }

    /**
     * <p> The number of active Migration Evaluator collectors. </p>
     */
    inline bool ActiveMeCollectorsHasBeenSet() const { return m_activeMeCollectorsHasBeenSet; }

    /**
     * <p> The number of active Migration Evaluator collectors. </p>
     */
    inline void SetActiveMeCollectors(int value) { m_activeMeCollectorsHasBeenSet = true; m_activeMeCollectors = value; }

    /**
     * <p> The number of active Migration Evaluator collectors. </p>
     */
    inline CustomerMeCollectorInfo& WithActiveMeCollectors(int value) { SetActiveMeCollectors(value); return *this;}


    /**
     * <p> The number of healthy Migration Evaluator collectors. </p>
     */
    inline int GetHealthyMeCollectors() const{ return m_healthyMeCollectors; }

    /**
     * <p> The number of healthy Migration Evaluator collectors. </p>
     */
    inline bool HealthyMeCollectorsHasBeenSet() const { return m_healthyMeCollectorsHasBeenSet; }

    /**
     * <p> The number of healthy Migration Evaluator collectors. </p>
     */
    inline void SetHealthyMeCollectors(int value) { m_healthyMeCollectorsHasBeenSet = true; m_healthyMeCollectors = value; }

    /**
     * <p> The number of healthy Migration Evaluator collectors. </p>
     */
    inline CustomerMeCollectorInfo& WithHealthyMeCollectors(int value) { SetHealthyMeCollectors(value); return *this;}


    /**
     * <p> The number of deny-listed Migration Evaluator collectors. </p>
     */
    inline int GetDenyListedMeCollectors() const{ return m_denyListedMeCollectors; }

    /**
     * <p> The number of deny-listed Migration Evaluator collectors. </p>
     */
    inline bool DenyListedMeCollectorsHasBeenSet() const { return m_denyListedMeCollectorsHasBeenSet; }

    /**
     * <p> The number of deny-listed Migration Evaluator collectors. </p>
     */
    inline void SetDenyListedMeCollectors(int value) { m_denyListedMeCollectorsHasBeenSet = true; m_denyListedMeCollectors = value; }

    /**
     * <p> The number of deny-listed Migration Evaluator collectors. </p>
     */
    inline CustomerMeCollectorInfo& WithDenyListedMeCollectors(int value) { SetDenyListedMeCollectors(value); return *this;}


    /**
     * <p> The number of Migration Evaluator collectors with <code>SHUTDOWN</code>
     * status. </p>
     */
    inline int GetShutdownMeCollectors() const{ return m_shutdownMeCollectors; }

    /**
     * <p> The number of Migration Evaluator collectors with <code>SHUTDOWN</code>
     * status. </p>
     */
    inline bool ShutdownMeCollectorsHasBeenSet() const { return m_shutdownMeCollectorsHasBeenSet; }

    /**
     * <p> The number of Migration Evaluator collectors with <code>SHUTDOWN</code>
     * status. </p>
     */
    inline void SetShutdownMeCollectors(int value) { m_shutdownMeCollectorsHasBeenSet = true; m_shutdownMeCollectors = value; }

    /**
     * <p> The number of Migration Evaluator collectors with <code>SHUTDOWN</code>
     * status. </p>
     */
    inline CustomerMeCollectorInfo& WithShutdownMeCollectors(int value) { SetShutdownMeCollectors(value); return *this;}


    /**
     * <p> The number of unhealthy Migration Evaluator collectors. </p>
     */
    inline int GetUnhealthyMeCollectors() const{ return m_unhealthyMeCollectors; }

    /**
     * <p> The number of unhealthy Migration Evaluator collectors. </p>
     */
    inline bool UnhealthyMeCollectorsHasBeenSet() const { return m_unhealthyMeCollectorsHasBeenSet; }

    /**
     * <p> The number of unhealthy Migration Evaluator collectors. </p>
     */
    inline void SetUnhealthyMeCollectors(int value) { m_unhealthyMeCollectorsHasBeenSet = true; m_unhealthyMeCollectors = value; }

    /**
     * <p> The number of unhealthy Migration Evaluator collectors. </p>
     */
    inline CustomerMeCollectorInfo& WithUnhealthyMeCollectors(int value) { SetUnhealthyMeCollectors(value); return *this;}


    /**
     * <p> The total number of Migration Evaluator collectors. </p>
     */
    inline int GetTotalMeCollectors() const{ return m_totalMeCollectors; }

    /**
     * <p> The total number of Migration Evaluator collectors. </p>
     */
    inline bool TotalMeCollectorsHasBeenSet() const { return m_totalMeCollectorsHasBeenSet; }

    /**
     * <p> The total number of Migration Evaluator collectors. </p>
     */
    inline void SetTotalMeCollectors(int value) { m_totalMeCollectorsHasBeenSet = true; m_totalMeCollectors = value; }

    /**
     * <p> The total number of Migration Evaluator collectors. </p>
     */
    inline CustomerMeCollectorInfo& WithTotalMeCollectors(int value) { SetTotalMeCollectors(value); return *this;}


    /**
     * <p> The number of unknown Migration Evaluator collectors. </p>
     */
    inline int GetUnknownMeCollectors() const{ return m_unknownMeCollectors; }

    /**
     * <p> The number of unknown Migration Evaluator collectors. </p>
     */
    inline bool UnknownMeCollectorsHasBeenSet() const { return m_unknownMeCollectorsHasBeenSet; }

    /**
     * <p> The number of unknown Migration Evaluator collectors. </p>
     */
    inline void SetUnknownMeCollectors(int value) { m_unknownMeCollectorsHasBeenSet = true; m_unknownMeCollectors = value; }

    /**
     * <p> The number of unknown Migration Evaluator collectors. </p>
     */
    inline CustomerMeCollectorInfo& WithUnknownMeCollectors(int value) { SetUnknownMeCollectors(value); return *this;}

  private:

    int m_activeMeCollectors;
    bool m_activeMeCollectorsHasBeenSet = false;

    int m_healthyMeCollectors;
    bool m_healthyMeCollectorsHasBeenSet = false;

    int m_denyListedMeCollectors;
    bool m_denyListedMeCollectorsHasBeenSet = false;

    int m_shutdownMeCollectors;
    bool m_shutdownMeCollectorsHasBeenSet = false;

    int m_unhealthyMeCollectors;
    bool m_unhealthyMeCollectorsHasBeenSet = false;

    int m_totalMeCollectors;
    bool m_totalMeCollectorsHasBeenSet = false;

    int m_unknownMeCollectors;
    bool m_unknownMeCollectorsHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
