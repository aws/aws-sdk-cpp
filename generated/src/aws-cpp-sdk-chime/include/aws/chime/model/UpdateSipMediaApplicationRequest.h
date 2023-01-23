/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/ChimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime/model/SipMediaApplicationEndpoint.h>
#include <utility>

namespace Aws
{
namespace Chime
{
namespace Model
{

  /**
   */
  class UpdateSipMediaApplicationRequest : public ChimeRequest
  {
  public:
    AWS_CHIME_API UpdateSipMediaApplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSipMediaApplication"; }

    AWS_CHIME_API Aws::String SerializePayload() const override;


    /**
     * <p>The SIP media application ID.</p>
     */
    inline const Aws::String& GetSipMediaApplicationId() const{ return m_sipMediaApplicationId; }

    /**
     * <p>The SIP media application ID.</p>
     */
    inline bool SipMediaApplicationIdHasBeenSet() const { return m_sipMediaApplicationIdHasBeenSet; }

    /**
     * <p>The SIP media application ID.</p>
     */
    inline void SetSipMediaApplicationId(const Aws::String& value) { m_sipMediaApplicationIdHasBeenSet = true; m_sipMediaApplicationId = value; }

    /**
     * <p>The SIP media application ID.</p>
     */
    inline void SetSipMediaApplicationId(Aws::String&& value) { m_sipMediaApplicationIdHasBeenSet = true; m_sipMediaApplicationId = std::move(value); }

    /**
     * <p>The SIP media application ID.</p>
     */
    inline void SetSipMediaApplicationId(const char* value) { m_sipMediaApplicationIdHasBeenSet = true; m_sipMediaApplicationId.assign(value); }

    /**
     * <p>The SIP media application ID.</p>
     */
    inline UpdateSipMediaApplicationRequest& WithSipMediaApplicationId(const Aws::String& value) { SetSipMediaApplicationId(value); return *this;}

    /**
     * <p>The SIP media application ID.</p>
     */
    inline UpdateSipMediaApplicationRequest& WithSipMediaApplicationId(Aws::String&& value) { SetSipMediaApplicationId(std::move(value)); return *this;}

    /**
     * <p>The SIP media application ID.</p>
     */
    inline UpdateSipMediaApplicationRequest& WithSipMediaApplicationId(const char* value) { SetSipMediaApplicationId(value); return *this;}


    /**
     * <p>The new name for the specified SIP media application.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The new name for the specified SIP media application.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The new name for the specified SIP media application.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The new name for the specified SIP media application.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The new name for the specified SIP media application.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The new name for the specified SIP media application.</p>
     */
    inline UpdateSipMediaApplicationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The new name for the specified SIP media application.</p>
     */
    inline UpdateSipMediaApplicationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The new name for the specified SIP media application.</p>
     */
    inline UpdateSipMediaApplicationRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The new set of endpoints for the specified SIP media application.</p>
     */
    inline const Aws::Vector<SipMediaApplicationEndpoint>& GetEndpoints() const{ return m_endpoints; }

    /**
     * <p>The new set of endpoints for the specified SIP media application.</p>
     */
    inline bool EndpointsHasBeenSet() const { return m_endpointsHasBeenSet; }

    /**
     * <p>The new set of endpoints for the specified SIP media application.</p>
     */
    inline void SetEndpoints(const Aws::Vector<SipMediaApplicationEndpoint>& value) { m_endpointsHasBeenSet = true; m_endpoints = value; }

    /**
     * <p>The new set of endpoints for the specified SIP media application.</p>
     */
    inline void SetEndpoints(Aws::Vector<SipMediaApplicationEndpoint>&& value) { m_endpointsHasBeenSet = true; m_endpoints = std::move(value); }

    /**
     * <p>The new set of endpoints for the specified SIP media application.</p>
     */
    inline UpdateSipMediaApplicationRequest& WithEndpoints(const Aws::Vector<SipMediaApplicationEndpoint>& value) { SetEndpoints(value); return *this;}

    /**
     * <p>The new set of endpoints for the specified SIP media application.</p>
     */
    inline UpdateSipMediaApplicationRequest& WithEndpoints(Aws::Vector<SipMediaApplicationEndpoint>&& value) { SetEndpoints(std::move(value)); return *this;}

    /**
     * <p>The new set of endpoints for the specified SIP media application.</p>
     */
    inline UpdateSipMediaApplicationRequest& AddEndpoints(const SipMediaApplicationEndpoint& value) { m_endpointsHasBeenSet = true; m_endpoints.push_back(value); return *this; }

    /**
     * <p>The new set of endpoints for the specified SIP media application.</p>
     */
    inline UpdateSipMediaApplicationRequest& AddEndpoints(SipMediaApplicationEndpoint&& value) { m_endpointsHasBeenSet = true; m_endpoints.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_sipMediaApplicationId;
    bool m_sipMediaApplicationIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<SipMediaApplicationEndpoint> m_endpoints;
    bool m_endpointsHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
