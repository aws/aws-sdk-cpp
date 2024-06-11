﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/email/SESRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SES
{
namespace Model
{

  /**
   * <p>Represents a request to delete a configuration set event destination.
   * Configuration set event destinations are associated with configuration sets,
   * which enable you to publish email sending events. For information about using
   * configuration sets, see the <a
   * href="https://docs.aws.amazon.com/ses/latest/dg/monitor-sending-activity.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DeleteConfigurationSetEventDestinationRequest">AWS
   * API Reference</a></p>
   */
  class DeleteConfigurationSetEventDestinationRequest : public SESRequest
  {
  public:
    AWS_SES_API DeleteConfigurationSetEventDestinationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteConfigurationSetEventDestination"; }

    AWS_SES_API Aws::String SerializePayload() const override;

  protected:
    AWS_SES_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the configuration set from which to delete the event
     * destination.</p>
     */
    inline const Aws::String& GetConfigurationSetName() const{ return m_configurationSetName; }
    inline bool ConfigurationSetNameHasBeenSet() const { return m_configurationSetNameHasBeenSet; }
    inline void SetConfigurationSetName(const Aws::String& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = value; }
    inline void SetConfigurationSetName(Aws::String&& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = std::move(value); }
    inline void SetConfigurationSetName(const char* value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName.assign(value); }
    inline DeleteConfigurationSetEventDestinationRequest& WithConfigurationSetName(const Aws::String& value) { SetConfigurationSetName(value); return *this;}
    inline DeleteConfigurationSetEventDestinationRequest& WithConfigurationSetName(Aws::String&& value) { SetConfigurationSetName(std::move(value)); return *this;}
    inline DeleteConfigurationSetEventDestinationRequest& WithConfigurationSetName(const char* value) { SetConfigurationSetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the event destination to delete.</p>
     */
    inline const Aws::String& GetEventDestinationName() const{ return m_eventDestinationName; }
    inline bool EventDestinationNameHasBeenSet() const { return m_eventDestinationNameHasBeenSet; }
    inline void SetEventDestinationName(const Aws::String& value) { m_eventDestinationNameHasBeenSet = true; m_eventDestinationName = value; }
    inline void SetEventDestinationName(Aws::String&& value) { m_eventDestinationNameHasBeenSet = true; m_eventDestinationName = std::move(value); }
    inline void SetEventDestinationName(const char* value) { m_eventDestinationNameHasBeenSet = true; m_eventDestinationName.assign(value); }
    inline DeleteConfigurationSetEventDestinationRequest& WithEventDestinationName(const Aws::String& value) { SetEventDestinationName(value); return *this;}
    inline DeleteConfigurationSetEventDestinationRequest& WithEventDestinationName(Aws::String&& value) { SetEventDestinationName(std::move(value)); return *this;}
    inline DeleteConfigurationSetEventDestinationRequest& WithEventDestinationName(const char* value) { SetEventDestinationName(value); return *this;}
    ///@}
  private:

    Aws::String m_configurationSetName;
    bool m_configurationSetNameHasBeenSet = false;

    Aws::String m_eventDestinationName;
    bool m_eventDestinationNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
