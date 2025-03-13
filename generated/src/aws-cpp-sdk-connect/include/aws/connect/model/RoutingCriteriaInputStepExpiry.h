/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>

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
namespace Connect
{
namespace Model
{

  /**
   * <p>Specify whether this routing criteria step should apply for only a limited
   * amount of time,&#x2028; or if it should never expire.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/RoutingCriteriaInputStepExpiry">AWS
   * API Reference</a></p>
   */
  class RoutingCriteriaInputStepExpiry
  {
  public:
    AWS_CONNECT_API RoutingCriteriaInputStepExpiry() = default;
    AWS_CONNECT_API RoutingCriteriaInputStepExpiry(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API RoutingCriteriaInputStepExpiry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of seconds that the contact will be routed only to agents matching
     * this routing&#x2028; step, if expiry was configured for this routing step.</p>
     */
    inline int GetDurationInSeconds() const { return m_durationInSeconds; }
    inline bool DurationInSecondsHasBeenSet() const { return m_durationInSecondsHasBeenSet; }
    inline void SetDurationInSeconds(int value) { m_durationInSecondsHasBeenSet = true; m_durationInSeconds = value; }
    inline RoutingCriteriaInputStepExpiry& WithDurationInSeconds(int value) { SetDurationInSeconds(value); return *this;}
    ///@}
  private:

    int m_durationInSeconds{0};
    bool m_durationInSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
