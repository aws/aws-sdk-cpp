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
   * <p>A load balancer attribute.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsElbv2LoadBalancerAttribute">AWS
   * API Reference</a></p>
   */
  class AwsElbv2LoadBalancerAttribute
  {
  public:
    AWS_SECURITYHUB_API AwsElbv2LoadBalancerAttribute();
    AWS_SECURITYHUB_API AwsElbv2LoadBalancerAttribute(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsElbv2LoadBalancerAttribute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the load balancer attribute.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The name of the load balancer attribute.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The name of the load balancer attribute.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The name of the load balancer attribute.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The name of the load balancer attribute.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The name of the load balancer attribute.</p>
     */
    inline AwsElbv2LoadBalancerAttribute& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The name of the load balancer attribute.</p>
     */
    inline AwsElbv2LoadBalancerAttribute& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The name of the load balancer attribute.</p>
     */
    inline AwsElbv2LoadBalancerAttribute& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The value of the load balancer attribute.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of the load balancer attribute.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the load balancer attribute.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the load balancer attribute.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of the load balancer attribute.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value of the load balancer attribute.</p>
     */
    inline AwsElbv2LoadBalancerAttribute& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the load balancer attribute.</p>
     */
    inline AwsElbv2LoadBalancerAttribute& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value of the load balancer attribute.</p>
     */
    inline AwsElbv2LoadBalancerAttribute& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
