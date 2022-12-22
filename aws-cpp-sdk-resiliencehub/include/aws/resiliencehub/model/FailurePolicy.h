/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>

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
namespace ResilienceHub
{
namespace Model
{

  /**
   * <p>Defines a failure policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/FailurePolicy">AWS
   * API Reference</a></p>
   */
  class FailurePolicy
  {
  public:
    AWS_RESILIENCEHUB_API FailurePolicy();
    AWS_RESILIENCEHUB_API FailurePolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API FailurePolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Recovery Point Objective (RPO), in seconds.</p>
     */
    inline int GetRpoInSecs() const{ return m_rpoInSecs; }

    /**
     * <p>The Recovery Point Objective (RPO), in seconds.</p>
     */
    inline bool RpoInSecsHasBeenSet() const { return m_rpoInSecsHasBeenSet; }

    /**
     * <p>The Recovery Point Objective (RPO), in seconds.</p>
     */
    inline void SetRpoInSecs(int value) { m_rpoInSecsHasBeenSet = true; m_rpoInSecs = value; }

    /**
     * <p>The Recovery Point Objective (RPO), in seconds.</p>
     */
    inline FailurePolicy& WithRpoInSecs(int value) { SetRpoInSecs(value); return *this;}


    /**
     * <p>The Recovery Time Objective (RTO), in seconds.</p>
     */
    inline int GetRtoInSecs() const{ return m_rtoInSecs; }

    /**
     * <p>The Recovery Time Objective (RTO), in seconds.</p>
     */
    inline bool RtoInSecsHasBeenSet() const { return m_rtoInSecsHasBeenSet; }

    /**
     * <p>The Recovery Time Objective (RTO), in seconds.</p>
     */
    inline void SetRtoInSecs(int value) { m_rtoInSecsHasBeenSet = true; m_rtoInSecs = value; }

    /**
     * <p>The Recovery Time Objective (RTO), in seconds.</p>
     */
    inline FailurePolicy& WithRtoInSecs(int value) { SetRtoInSecs(value); return *this;}

  private:

    int m_rpoInSecs;
    bool m_rpoInSecsHasBeenSet = false;

    int m_rtoInSecs;
    bool m_rtoInSecsHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
