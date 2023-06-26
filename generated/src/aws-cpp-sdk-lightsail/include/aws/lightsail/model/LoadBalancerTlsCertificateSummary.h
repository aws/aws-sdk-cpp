/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Provides a summary of SSL/TLS certificate metadata.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/LoadBalancerTlsCertificateSummary">AWS
   * API Reference</a></p>
   */
  class LoadBalancerTlsCertificateSummary
  {
  public:
    AWS_LIGHTSAIL_API LoadBalancerTlsCertificateSummary();
    AWS_LIGHTSAIL_API LoadBalancerTlsCertificateSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API LoadBalancerTlsCertificateSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the SSL/TLS certificate.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the SSL/TLS certificate.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the SSL/TLS certificate.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the SSL/TLS certificate.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the SSL/TLS certificate.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the SSL/TLS certificate.</p>
     */
    inline LoadBalancerTlsCertificateSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the SSL/TLS certificate.</p>
     */
    inline LoadBalancerTlsCertificateSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the SSL/TLS certificate.</p>
     */
    inline LoadBalancerTlsCertificateSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>When <code>true</code>, the SSL/TLS certificate is attached to the Lightsail
     * load balancer.</p>
     */
    inline bool GetIsAttached() const{ return m_isAttached; }

    /**
     * <p>When <code>true</code>, the SSL/TLS certificate is attached to the Lightsail
     * load balancer.</p>
     */
    inline bool IsAttachedHasBeenSet() const { return m_isAttachedHasBeenSet; }

    /**
     * <p>When <code>true</code>, the SSL/TLS certificate is attached to the Lightsail
     * load balancer.</p>
     */
    inline void SetIsAttached(bool value) { m_isAttachedHasBeenSet = true; m_isAttached = value; }

    /**
     * <p>When <code>true</code>, the SSL/TLS certificate is attached to the Lightsail
     * load balancer.</p>
     */
    inline LoadBalancerTlsCertificateSummary& WithIsAttached(bool value) { SetIsAttached(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    bool m_isAttached;
    bool m_isAttachedHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
