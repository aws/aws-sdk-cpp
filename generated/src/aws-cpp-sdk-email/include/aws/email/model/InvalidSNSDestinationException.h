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
   * <p>Indicates that the Amazon Simple Notification Service (Amazon SNS)
   * destination is invalid. See the error message for details.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/InvalidSNSDestinationException">AWS
   * API Reference</a></p>
   */
  class InvalidSNSDestinationException
  {
  public:
    AWS_SES_API InvalidSNSDestinationException();
    AWS_SES_API InvalidSNSDestinationException(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SES_API InvalidSNSDestinationException& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SES_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SES_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Indicates that the configuration set does not exist.</p>
     */
    inline const Aws::String& GetConfigurationSetName() const{ return m_configurationSetName; }

    /**
     * <p>Indicates that the configuration set does not exist.</p>
     */
    inline bool ConfigurationSetNameHasBeenSet() const { return m_configurationSetNameHasBeenSet; }

    /**
     * <p>Indicates that the configuration set does not exist.</p>
     */
    inline void SetConfigurationSetName(const Aws::String& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = value; }

    /**
     * <p>Indicates that the configuration set does not exist.</p>
     */
    inline void SetConfigurationSetName(Aws::String&& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = std::move(value); }

    /**
     * <p>Indicates that the configuration set does not exist.</p>
     */
    inline void SetConfigurationSetName(const char* value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName.assign(value); }

    /**
     * <p>Indicates that the configuration set does not exist.</p>
     */
    inline InvalidSNSDestinationException& WithConfigurationSetName(const Aws::String& value) { SetConfigurationSetName(value); return *this;}

    /**
     * <p>Indicates that the configuration set does not exist.</p>
     */
    inline InvalidSNSDestinationException& WithConfigurationSetName(Aws::String&& value) { SetConfigurationSetName(std::move(value)); return *this;}

    /**
     * <p>Indicates that the configuration set does not exist.</p>
     */
    inline InvalidSNSDestinationException& WithConfigurationSetName(const char* value) { SetConfigurationSetName(value); return *this;}


    /**
     * <p>Indicates that the event destination does not exist.</p>
     */
    inline const Aws::String& GetEventDestinationName() const{ return m_eventDestinationName; }

    /**
     * <p>Indicates that the event destination does not exist.</p>
     */
    inline bool EventDestinationNameHasBeenSet() const { return m_eventDestinationNameHasBeenSet; }

    /**
     * <p>Indicates that the event destination does not exist.</p>
     */
    inline void SetEventDestinationName(const Aws::String& value) { m_eventDestinationNameHasBeenSet = true; m_eventDestinationName = value; }

    /**
     * <p>Indicates that the event destination does not exist.</p>
     */
    inline void SetEventDestinationName(Aws::String&& value) { m_eventDestinationNameHasBeenSet = true; m_eventDestinationName = std::move(value); }

    /**
     * <p>Indicates that the event destination does not exist.</p>
     */
    inline void SetEventDestinationName(const char* value) { m_eventDestinationNameHasBeenSet = true; m_eventDestinationName.assign(value); }

    /**
     * <p>Indicates that the event destination does not exist.</p>
     */
    inline InvalidSNSDestinationException& WithEventDestinationName(const Aws::String& value) { SetEventDestinationName(value); return *this;}

    /**
     * <p>Indicates that the event destination does not exist.</p>
     */
    inline InvalidSNSDestinationException& WithEventDestinationName(Aws::String&& value) { SetEventDestinationName(std::move(value)); return *this;}

    /**
     * <p>Indicates that the event destination does not exist.</p>
     */
    inline InvalidSNSDestinationException& WithEventDestinationName(const char* value) { SetEventDestinationName(value); return *this;}

  private:

    Aws::String m_configurationSetName;
    bool m_configurationSetNameHasBeenSet = false;

    Aws::String m_eventDestinationName;
    bool m_eventDestinationNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
