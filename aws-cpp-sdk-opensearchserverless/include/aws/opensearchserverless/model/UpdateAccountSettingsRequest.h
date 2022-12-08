/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/OpenSearchServerlessRequest.h>
#include <aws/opensearchserverless/model/CapacityLimits.h>
#include <utility>

namespace Aws
{
namespace OpenSearchServerless
{
namespace Model
{

  /**
   */
  class UpdateAccountSettingsRequest : public OpenSearchServerlessRequest
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API UpdateAccountSettingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAccountSettings"; }

    AWS_OPENSEARCHSERVERLESS_API Aws::String SerializePayload() const override;

    AWS_OPENSEARCHSERVERLESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const CapacityLimits& GetCapacityLimits() const{ return m_capacityLimits; }

    
    inline bool CapacityLimitsHasBeenSet() const { return m_capacityLimitsHasBeenSet; }

    
    inline void SetCapacityLimits(const CapacityLimits& value) { m_capacityLimitsHasBeenSet = true; m_capacityLimits = value; }

    
    inline void SetCapacityLimits(CapacityLimits&& value) { m_capacityLimitsHasBeenSet = true; m_capacityLimits = std::move(value); }

    
    inline UpdateAccountSettingsRequest& WithCapacityLimits(const CapacityLimits& value) { SetCapacityLimits(value); return *this;}

    
    inline UpdateAccountSettingsRequest& WithCapacityLimits(CapacityLimits&& value) { SetCapacityLimits(std::move(value)); return *this;}

  private:

    CapacityLimits m_capacityLimits;
    bool m_capacityLimitsHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
