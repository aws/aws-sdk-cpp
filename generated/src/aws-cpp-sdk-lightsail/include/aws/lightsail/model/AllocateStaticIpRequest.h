/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class AllocateStaticIpRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API AllocateStaticIpRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AllocateStaticIp"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the static IP address.</p>
     */
    inline const Aws::String& GetStaticIpName() const { return m_staticIpName; }
    inline bool StaticIpNameHasBeenSet() const { return m_staticIpNameHasBeenSet; }
    template<typename StaticIpNameT = Aws::String>
    void SetStaticIpName(StaticIpNameT&& value) { m_staticIpNameHasBeenSet = true; m_staticIpName = std::forward<StaticIpNameT>(value); }
    template<typename StaticIpNameT = Aws::String>
    AllocateStaticIpRequest& WithStaticIpName(StaticIpNameT&& value) { SetStaticIpName(std::forward<StaticIpNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_staticIpName;
    bool m_staticIpNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
