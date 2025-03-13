/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace SES
{
namespace Model
{

  /**
   * <p>Indicates that the event destination could not be created because of a naming
   * conflict.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/EventDestinationAlreadyExistsException">AWS
   * API Reference</a></p>
   */
  class EventDestinationAlreadyExistsException
  {
  public:
    AWS_SES_API EventDestinationAlreadyExistsException() = default;
    AWS_SES_API EventDestinationAlreadyExistsException(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SES_API EventDestinationAlreadyExistsException& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SES_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SES_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Indicates that the configuration set does not exist.</p>
     */
    inline const Aws::String& GetConfigurationSetName() const { return m_configurationSetName; }
    inline bool ConfigurationSetNameHasBeenSet() const { return m_configurationSetNameHasBeenSet; }
    template<typename ConfigurationSetNameT = Aws::String>
    void SetConfigurationSetName(ConfigurationSetNameT&& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = std::forward<ConfigurationSetNameT>(value); }
    template<typename ConfigurationSetNameT = Aws::String>
    EventDestinationAlreadyExistsException& WithConfigurationSetName(ConfigurationSetNameT&& value) { SetConfigurationSetName(std::forward<ConfigurationSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates that the event destination does not exist.</p>
     */
    inline const Aws::String& GetEventDestinationName() const { return m_eventDestinationName; }
    inline bool EventDestinationNameHasBeenSet() const { return m_eventDestinationNameHasBeenSet; }
    template<typename EventDestinationNameT = Aws::String>
    void SetEventDestinationName(EventDestinationNameT&& value) { m_eventDestinationNameHasBeenSet = true; m_eventDestinationName = std::forward<EventDestinationNameT>(value); }
    template<typename EventDestinationNameT = Aws::String>
    EventDestinationAlreadyExistsException& WithEventDestinationName(EventDestinationNameT&& value) { SetEventDestinationName(std::forward<EventDestinationNameT>(value)); return *this;}
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
