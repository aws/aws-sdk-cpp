/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/ChimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime/model/SipMediaApplicationLoggingConfiguration.h>
#include <utility>

namespace Aws
{
namespace Chime
{
namespace Model
{

  /**
   */
  class AWS_CHIME_API PutSipMediaApplicationLoggingConfigurationRequest : public ChimeRequest
  {
  public:
    PutSipMediaApplicationLoggingConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutSipMediaApplicationLoggingConfiguration"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the specified SIP media application</p>
     */
    inline const Aws::String& GetSipMediaApplicationId() const{ return m_sipMediaApplicationId; }

    /**
     * <p>The ID of the specified SIP media application</p>
     */
    inline bool SipMediaApplicationIdHasBeenSet() const { return m_sipMediaApplicationIdHasBeenSet; }

    /**
     * <p>The ID of the specified SIP media application</p>
     */
    inline void SetSipMediaApplicationId(const Aws::String& value) { m_sipMediaApplicationIdHasBeenSet = true; m_sipMediaApplicationId = value; }

    /**
     * <p>The ID of the specified SIP media application</p>
     */
    inline void SetSipMediaApplicationId(Aws::String&& value) { m_sipMediaApplicationIdHasBeenSet = true; m_sipMediaApplicationId = std::move(value); }

    /**
     * <p>The ID of the specified SIP media application</p>
     */
    inline void SetSipMediaApplicationId(const char* value) { m_sipMediaApplicationIdHasBeenSet = true; m_sipMediaApplicationId.assign(value); }

    /**
     * <p>The ID of the specified SIP media application</p>
     */
    inline PutSipMediaApplicationLoggingConfigurationRequest& WithSipMediaApplicationId(const Aws::String& value) { SetSipMediaApplicationId(value); return *this;}

    /**
     * <p>The ID of the specified SIP media application</p>
     */
    inline PutSipMediaApplicationLoggingConfigurationRequest& WithSipMediaApplicationId(Aws::String&& value) { SetSipMediaApplicationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the specified SIP media application</p>
     */
    inline PutSipMediaApplicationLoggingConfigurationRequest& WithSipMediaApplicationId(const char* value) { SetSipMediaApplicationId(value); return *this;}


    /**
     * <p>The actual logging configuration.</p>
     */
    inline const SipMediaApplicationLoggingConfiguration& GetSipMediaApplicationLoggingConfiguration() const{ return m_sipMediaApplicationLoggingConfiguration; }

    /**
     * <p>The actual logging configuration.</p>
     */
    inline bool SipMediaApplicationLoggingConfigurationHasBeenSet() const { return m_sipMediaApplicationLoggingConfigurationHasBeenSet; }

    /**
     * <p>The actual logging configuration.</p>
     */
    inline void SetSipMediaApplicationLoggingConfiguration(const SipMediaApplicationLoggingConfiguration& value) { m_sipMediaApplicationLoggingConfigurationHasBeenSet = true; m_sipMediaApplicationLoggingConfiguration = value; }

    /**
     * <p>The actual logging configuration.</p>
     */
    inline void SetSipMediaApplicationLoggingConfiguration(SipMediaApplicationLoggingConfiguration&& value) { m_sipMediaApplicationLoggingConfigurationHasBeenSet = true; m_sipMediaApplicationLoggingConfiguration = std::move(value); }

    /**
     * <p>The actual logging configuration.</p>
     */
    inline PutSipMediaApplicationLoggingConfigurationRequest& WithSipMediaApplicationLoggingConfiguration(const SipMediaApplicationLoggingConfiguration& value) { SetSipMediaApplicationLoggingConfiguration(value); return *this;}

    /**
     * <p>The actual logging configuration.</p>
     */
    inline PutSipMediaApplicationLoggingConfigurationRequest& WithSipMediaApplicationLoggingConfiguration(SipMediaApplicationLoggingConfiguration&& value) { SetSipMediaApplicationLoggingConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_sipMediaApplicationId;
    bool m_sipMediaApplicationIdHasBeenSet;

    SipMediaApplicationLoggingConfiguration m_sipMediaApplicationLoggingConfiguration;
    bool m_sipMediaApplicationLoggingConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
