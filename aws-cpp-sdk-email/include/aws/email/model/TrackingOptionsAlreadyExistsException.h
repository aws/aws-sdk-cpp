﻿/**
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
   * <p>Indicates that the configuration set you specified already contains a
   * TrackingOptions object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/TrackingOptionsAlreadyExistsException">AWS
   * API Reference</a></p>
   */
  class AWS_SES_API TrackingOptionsAlreadyExistsException
  {
  public:
    TrackingOptionsAlreadyExistsException();
    TrackingOptionsAlreadyExistsException(const Aws::Utils::Xml::XmlNode& xmlNode);
    TrackingOptionsAlreadyExistsException& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Indicates that a TrackingOptions object already exists in the specified
     * configuration set.</p>
     */
    inline const Aws::String& GetConfigurationSetName() const{ return m_configurationSetName; }

    /**
     * <p>Indicates that a TrackingOptions object already exists in the specified
     * configuration set.</p>
     */
    inline bool ConfigurationSetNameHasBeenSet() const { return m_configurationSetNameHasBeenSet; }

    /**
     * <p>Indicates that a TrackingOptions object already exists in the specified
     * configuration set.</p>
     */
    inline void SetConfigurationSetName(const Aws::String& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = value; }

    /**
     * <p>Indicates that a TrackingOptions object already exists in the specified
     * configuration set.</p>
     */
    inline void SetConfigurationSetName(Aws::String&& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = std::move(value); }

    /**
     * <p>Indicates that a TrackingOptions object already exists in the specified
     * configuration set.</p>
     */
    inline void SetConfigurationSetName(const char* value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName.assign(value); }

    /**
     * <p>Indicates that a TrackingOptions object already exists in the specified
     * configuration set.</p>
     */
    inline TrackingOptionsAlreadyExistsException& WithConfigurationSetName(const Aws::String& value) { SetConfigurationSetName(value); return *this;}

    /**
     * <p>Indicates that a TrackingOptions object already exists in the specified
     * configuration set.</p>
     */
    inline TrackingOptionsAlreadyExistsException& WithConfigurationSetName(Aws::String&& value) { SetConfigurationSetName(std::move(value)); return *this;}

    /**
     * <p>Indicates that a TrackingOptions object already exists in the specified
     * configuration set.</p>
     */
    inline TrackingOptionsAlreadyExistsException& WithConfigurationSetName(const char* value) { SetConfigurationSetName(value); return *this;}

  private:

    Aws::String m_configurationSetName;
    bool m_configurationSetNameHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
