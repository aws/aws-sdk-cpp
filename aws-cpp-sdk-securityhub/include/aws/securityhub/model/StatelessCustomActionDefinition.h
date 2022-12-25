/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/StatelessCustomPublishMetricAction.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>The definition of a custom action that can be used for stateless packet
   * handling.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/StatelessCustomActionDefinition">AWS
   * API Reference</a></p>
   */
  class StatelessCustomActionDefinition
  {
  public:
    AWS_SECURITYHUB_API StatelessCustomActionDefinition();
    AWS_SECURITYHUB_API StatelessCustomActionDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API StatelessCustomActionDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about metrics to publish to CloudWatch.</p>
     */
    inline const StatelessCustomPublishMetricAction& GetPublishMetricAction() const{ return m_publishMetricAction; }

    /**
     * <p>Information about metrics to publish to CloudWatch.</p>
     */
    inline bool PublishMetricActionHasBeenSet() const { return m_publishMetricActionHasBeenSet; }

    /**
     * <p>Information about metrics to publish to CloudWatch.</p>
     */
    inline void SetPublishMetricAction(const StatelessCustomPublishMetricAction& value) { m_publishMetricActionHasBeenSet = true; m_publishMetricAction = value; }

    /**
     * <p>Information about metrics to publish to CloudWatch.</p>
     */
    inline void SetPublishMetricAction(StatelessCustomPublishMetricAction&& value) { m_publishMetricActionHasBeenSet = true; m_publishMetricAction = std::move(value); }

    /**
     * <p>Information about metrics to publish to CloudWatch.</p>
     */
    inline StatelessCustomActionDefinition& WithPublishMetricAction(const StatelessCustomPublishMetricAction& value) { SetPublishMetricAction(value); return *this;}

    /**
     * <p>Information about metrics to publish to CloudWatch.</p>
     */
    inline StatelessCustomActionDefinition& WithPublishMetricAction(StatelessCustomPublishMetricAction&& value) { SetPublishMetricAction(std::move(value)); return *this;}

  private:

    StatelessCustomPublishMetricAction m_publishMetricAction;
    bool m_publishMetricActionHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
