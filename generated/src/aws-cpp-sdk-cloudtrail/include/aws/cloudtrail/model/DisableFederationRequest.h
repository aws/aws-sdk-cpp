﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/cloudtrail/CloudTrailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

  /**
   */
  class DisableFederationRequest : public CloudTrailRequest
  {
  public:
    AWS_CLOUDTRAIL_API DisableFederationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisableFederation"; }

    AWS_CLOUDTRAIL_API Aws::String SerializePayload() const override;

    AWS_CLOUDTRAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The ARN (or ID suffix of the ARN) of the event data store for which you want
     * to disable Lake query federation. </p>
     */
    inline const Aws::String& GetEventDataStore() const{ return m_eventDataStore; }
    inline bool EventDataStoreHasBeenSet() const { return m_eventDataStoreHasBeenSet; }
    inline void SetEventDataStore(const Aws::String& value) { m_eventDataStoreHasBeenSet = true; m_eventDataStore = value; }
    inline void SetEventDataStore(Aws::String&& value) { m_eventDataStoreHasBeenSet = true; m_eventDataStore = std::move(value); }
    inline void SetEventDataStore(const char* value) { m_eventDataStoreHasBeenSet = true; m_eventDataStore.assign(value); }
    inline DisableFederationRequest& WithEventDataStore(const Aws::String& value) { SetEventDataStore(value); return *this;}
    inline DisableFederationRequest& WithEventDataStore(Aws::String&& value) { SetEventDataStore(std::move(value)); return *this;}
    inline DisableFederationRequest& WithEventDataStore(const char* value) { SetEventDataStore(value); return *this;}
    ///@}
  private:

    Aws::String m_eventDataStore;
    bool m_eventDataStoreHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
