/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Information about the state of the load balancer.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/LoadBalancerState">AWS
   * API Reference</a></p>
   */
  class LoadBalancerState
  {
  public:
    AWS_SECURITYHUB_API LoadBalancerState();
    AWS_SECURITYHUB_API LoadBalancerState(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API LoadBalancerState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The state code. The initial state of the load balancer is provisioning.</p>
     * <p>After the load balancer is fully set up and ready to route traffic, its state
     * is active.</p> <p>If the load balancer could not be set up, its state is failed.
     * </p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }

    /**
     * <p>The state code. The initial state of the load balancer is provisioning.</p>
     * <p>After the load balancer is fully set up and ready to route traffic, its state
     * is active.</p> <p>If the load balancer could not be set up, its state is failed.
     * </p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>The state code. The initial state of the load balancer is provisioning.</p>
     * <p>After the load balancer is fully set up and ready to route traffic, its state
     * is active.</p> <p>If the load balancer could not be set up, its state is failed.
     * </p>
     */
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The state code. The initial state of the load balancer is provisioning.</p>
     * <p>After the load balancer is fully set up and ready to route traffic, its state
     * is active.</p> <p>If the load balancer could not be set up, its state is failed.
     * </p>
     */
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The state code. The initial state of the load balancer is provisioning.</p>
     * <p>After the load balancer is fully set up and ready to route traffic, its state
     * is active.</p> <p>If the load balancer could not be set up, its state is failed.
     * </p>
     */
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    /**
     * <p>The state code. The initial state of the load balancer is provisioning.</p>
     * <p>After the load balancer is fully set up and ready to route traffic, its state
     * is active.</p> <p>If the load balancer could not be set up, its state is failed.
     * </p>
     */
    inline LoadBalancerState& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    /**
     * <p>The state code. The initial state of the load balancer is provisioning.</p>
     * <p>After the load balancer is fully set up and ready to route traffic, its state
     * is active.</p> <p>If the load balancer could not be set up, its state is failed.
     * </p>
     */
    inline LoadBalancerState& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    /**
     * <p>The state code. The initial state of the load balancer is provisioning.</p>
     * <p>After the load balancer is fully set up and ready to route traffic, its state
     * is active.</p> <p>If the load balancer could not be set up, its state is failed.
     * </p>
     */
    inline LoadBalancerState& WithCode(const char* value) { SetCode(value); return *this;}


    /**
     * <p>A description of the state.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p>A description of the state.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>A description of the state.</p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>A description of the state.</p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>A description of the state.</p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p>A description of the state.</p>
     */
    inline LoadBalancerState& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p>A description of the state.</p>
     */
    inline LoadBalancerState& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}

    /**
     * <p>A description of the state.</p>
     */
    inline LoadBalancerState& WithReason(const char* value) { SetReason(value); return *this;}

  private:

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
