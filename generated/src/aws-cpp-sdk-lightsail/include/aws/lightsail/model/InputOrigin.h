﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/RegionName.h>
#include <aws/lightsail/model/OriginProtocolPolicyEnum.h>
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
   * <p>Describes the origin resource of an Amazon Lightsail content delivery network
   * (CDN) distribution.</p> <p>An origin can be a Lightsail instance, bucket,
   * container service, or load balancer. A distribution pulls content from an
   * origin, caches it, and serves it to viewers via a worldwide network of edge
   * servers.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/InputOrigin">AWS
   * API Reference</a></p>
   */
  class InputOrigin
  {
  public:
    AWS_LIGHTSAIL_API InputOrigin();
    AWS_LIGHTSAIL_API InputOrigin(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API InputOrigin& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the origin resource.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline InputOrigin& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline InputOrigin& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline InputOrigin& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS Region name of the origin resource.</p>
     */
    inline const RegionName& GetRegionName() const{ return m_regionName; }
    inline bool RegionNameHasBeenSet() const { return m_regionNameHasBeenSet; }
    inline void SetRegionName(const RegionName& value) { m_regionNameHasBeenSet = true; m_regionName = value; }
    inline void SetRegionName(RegionName&& value) { m_regionNameHasBeenSet = true; m_regionName = std::move(value); }
    inline InputOrigin& WithRegionName(const RegionName& value) { SetRegionName(value); return *this;}
    inline InputOrigin& WithRegionName(RegionName&& value) { SetRegionName(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol that your Amazon Lightsail distribution uses when establishing a
     * connection with your origin to pull content.</p>
     */
    inline const OriginProtocolPolicyEnum& GetProtocolPolicy() const{ return m_protocolPolicy; }
    inline bool ProtocolPolicyHasBeenSet() const { return m_protocolPolicyHasBeenSet; }
    inline void SetProtocolPolicy(const OriginProtocolPolicyEnum& value) { m_protocolPolicyHasBeenSet = true; m_protocolPolicy = value; }
    inline void SetProtocolPolicy(OriginProtocolPolicyEnum&& value) { m_protocolPolicyHasBeenSet = true; m_protocolPolicy = std::move(value); }
    inline InputOrigin& WithProtocolPolicy(const OriginProtocolPolicyEnum& value) { SetProtocolPolicy(value); return *this;}
    inline InputOrigin& WithProtocolPolicy(OriginProtocolPolicyEnum&& value) { SetProtocolPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time, in seconds, that the distribution waits for a response
     * after forwarding a request to the origin. The minimum timeout is 1 second, the
     * maximum is 60 seconds, and the default (if you don't specify otherwise) is 30
     * seconds.</p>
     */
    inline int GetResponseTimeout() const{ return m_responseTimeout; }
    inline bool ResponseTimeoutHasBeenSet() const { return m_responseTimeoutHasBeenSet; }
    inline void SetResponseTimeout(int value) { m_responseTimeoutHasBeenSet = true; m_responseTimeout = value; }
    inline InputOrigin& WithResponseTimeout(int value) { SetResponseTimeout(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    RegionName m_regionName;
    bool m_regionNameHasBeenSet = false;

    OriginProtocolPolicyEnum m_protocolPolicy;
    bool m_protocolPolicyHasBeenSet = false;

    int m_responseTimeout;
    bool m_responseTimeoutHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
