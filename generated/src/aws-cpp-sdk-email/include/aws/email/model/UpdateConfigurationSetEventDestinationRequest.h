/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/email/SESRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/email/model/EventDestination.h>
#include <utility>

namespace Aws
{
namespace SES
{
namespace Model
{

  /**
   * <p>Represents a request to update the event destination of a configuration set.
   * Configuration sets enable you to publish email sending events. For information
   * about using configuration sets, see the <a
   * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/monitor-sending-activity.html">Amazon
   * SES Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/UpdateConfigurationSetEventDestinationRequest">AWS
   * API Reference</a></p>
   */
  class UpdateConfigurationSetEventDestinationRequest : public SESRequest
  {
  public:
    AWS_SES_API UpdateConfigurationSetEventDestinationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateConfigurationSetEventDestination"; }

    AWS_SES_API Aws::String SerializePayload() const override;

  protected:
    AWS_SES_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the configuration set that contains the event destination that
     * you want to update.</p>
     */
    inline const Aws::String& GetConfigurationSetName() const{ return m_configurationSetName; }

    /**
     * <p>The name of the configuration set that contains the event destination that
     * you want to update.</p>
     */
    inline bool ConfigurationSetNameHasBeenSet() const { return m_configurationSetNameHasBeenSet; }

    /**
     * <p>The name of the configuration set that contains the event destination that
     * you want to update.</p>
     */
    inline void SetConfigurationSetName(const Aws::String& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = value; }

    /**
     * <p>The name of the configuration set that contains the event destination that
     * you want to update.</p>
     */
    inline void SetConfigurationSetName(Aws::String&& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = std::move(value); }

    /**
     * <p>The name of the configuration set that contains the event destination that
     * you want to update.</p>
     */
    inline void SetConfigurationSetName(const char* value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName.assign(value); }

    /**
     * <p>The name of the configuration set that contains the event destination that
     * you want to update.</p>
     */
    inline UpdateConfigurationSetEventDestinationRequest& WithConfigurationSetName(const Aws::String& value) { SetConfigurationSetName(value); return *this;}

    /**
     * <p>The name of the configuration set that contains the event destination that
     * you want to update.</p>
     */
    inline UpdateConfigurationSetEventDestinationRequest& WithConfigurationSetName(Aws::String&& value) { SetConfigurationSetName(std::move(value)); return *this;}

    /**
     * <p>The name of the configuration set that contains the event destination that
     * you want to update.</p>
     */
    inline UpdateConfigurationSetEventDestinationRequest& WithConfigurationSetName(const char* value) { SetConfigurationSetName(value); return *this;}


    /**
     * <p>The event destination object that you want to apply to the specified
     * configuration set.</p>
     */
    inline const EventDestination& GetEventDestination() const{ return m_eventDestination; }

    /**
     * <p>The event destination object that you want to apply to the specified
     * configuration set.</p>
     */
    inline bool EventDestinationHasBeenSet() const { return m_eventDestinationHasBeenSet; }

    /**
     * <p>The event destination object that you want to apply to the specified
     * configuration set.</p>
     */
    inline void SetEventDestination(const EventDestination& value) { m_eventDestinationHasBeenSet = true; m_eventDestination = value; }

    /**
     * <p>The event destination object that you want to apply to the specified
     * configuration set.</p>
     */
    inline void SetEventDestination(EventDestination&& value) { m_eventDestinationHasBeenSet = true; m_eventDestination = std::move(value); }

    /**
     * <p>The event destination object that you want to apply to the specified
     * configuration set.</p>
     */
    inline UpdateConfigurationSetEventDestinationRequest& WithEventDestination(const EventDestination& value) { SetEventDestination(value); return *this;}

    /**
     * <p>The event destination object that you want to apply to the specified
     * configuration set.</p>
     */
    inline UpdateConfigurationSetEventDestinationRequest& WithEventDestination(EventDestination&& value) { SetEventDestination(std::move(value)); return *this;}

  private:

    Aws::String m_configurationSetName;
    bool m_configurationSetNameHasBeenSet = false;

    EventDestination m_eventDestination;
    bool m_eventDestinationHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
