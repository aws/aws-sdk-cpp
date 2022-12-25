/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Neptune
{
namespace Model
{

  /**
   * <p>The configuration setting for the log types to be enabled for export to
   * CloudWatch Logs for a specific DB instance or DB cluster.</p> <p>The
   * <code>EnableLogTypes</code> and <code>DisableLogTypes</code> arrays determine
   * which logs will be exported (or not exported) to CloudWatch Logs.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/CloudwatchLogsExportConfiguration">AWS
   * API Reference</a></p>
   */
  class CloudwatchLogsExportConfiguration
  {
  public:
    AWS_NEPTUNE_API CloudwatchLogsExportConfiguration();
    AWS_NEPTUNE_API CloudwatchLogsExportConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_NEPTUNE_API CloudwatchLogsExportConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_NEPTUNE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_NEPTUNE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The list of log types to enable.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEnableLogTypes() const{ return m_enableLogTypes; }

    /**
     * <p>The list of log types to enable.</p>
     */
    inline bool EnableLogTypesHasBeenSet() const { return m_enableLogTypesHasBeenSet; }

    /**
     * <p>The list of log types to enable.</p>
     */
    inline void SetEnableLogTypes(const Aws::Vector<Aws::String>& value) { m_enableLogTypesHasBeenSet = true; m_enableLogTypes = value; }

    /**
     * <p>The list of log types to enable.</p>
     */
    inline void SetEnableLogTypes(Aws::Vector<Aws::String>&& value) { m_enableLogTypesHasBeenSet = true; m_enableLogTypes = std::move(value); }

    /**
     * <p>The list of log types to enable.</p>
     */
    inline CloudwatchLogsExportConfiguration& WithEnableLogTypes(const Aws::Vector<Aws::String>& value) { SetEnableLogTypes(value); return *this;}

    /**
     * <p>The list of log types to enable.</p>
     */
    inline CloudwatchLogsExportConfiguration& WithEnableLogTypes(Aws::Vector<Aws::String>&& value) { SetEnableLogTypes(std::move(value)); return *this;}

    /**
     * <p>The list of log types to enable.</p>
     */
    inline CloudwatchLogsExportConfiguration& AddEnableLogTypes(const Aws::String& value) { m_enableLogTypesHasBeenSet = true; m_enableLogTypes.push_back(value); return *this; }

    /**
     * <p>The list of log types to enable.</p>
     */
    inline CloudwatchLogsExportConfiguration& AddEnableLogTypes(Aws::String&& value) { m_enableLogTypesHasBeenSet = true; m_enableLogTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of log types to enable.</p>
     */
    inline CloudwatchLogsExportConfiguration& AddEnableLogTypes(const char* value) { m_enableLogTypesHasBeenSet = true; m_enableLogTypes.push_back(value); return *this; }


    /**
     * <p>The list of log types to disable.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDisableLogTypes() const{ return m_disableLogTypes; }

    /**
     * <p>The list of log types to disable.</p>
     */
    inline bool DisableLogTypesHasBeenSet() const { return m_disableLogTypesHasBeenSet; }

    /**
     * <p>The list of log types to disable.</p>
     */
    inline void SetDisableLogTypes(const Aws::Vector<Aws::String>& value) { m_disableLogTypesHasBeenSet = true; m_disableLogTypes = value; }

    /**
     * <p>The list of log types to disable.</p>
     */
    inline void SetDisableLogTypes(Aws::Vector<Aws::String>&& value) { m_disableLogTypesHasBeenSet = true; m_disableLogTypes = std::move(value); }

    /**
     * <p>The list of log types to disable.</p>
     */
    inline CloudwatchLogsExportConfiguration& WithDisableLogTypes(const Aws::Vector<Aws::String>& value) { SetDisableLogTypes(value); return *this;}

    /**
     * <p>The list of log types to disable.</p>
     */
    inline CloudwatchLogsExportConfiguration& WithDisableLogTypes(Aws::Vector<Aws::String>&& value) { SetDisableLogTypes(std::move(value)); return *this;}

    /**
     * <p>The list of log types to disable.</p>
     */
    inline CloudwatchLogsExportConfiguration& AddDisableLogTypes(const Aws::String& value) { m_disableLogTypesHasBeenSet = true; m_disableLogTypes.push_back(value); return *this; }

    /**
     * <p>The list of log types to disable.</p>
     */
    inline CloudwatchLogsExportConfiguration& AddDisableLogTypes(Aws::String&& value) { m_disableLogTypesHasBeenSet = true; m_disableLogTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of log types to disable.</p>
     */
    inline CloudwatchLogsExportConfiguration& AddDisableLogTypes(const char* value) { m_disableLogTypesHasBeenSet = true; m_disableLogTypes.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_enableLogTypes;
    bool m_enableLogTypesHasBeenSet = false;

    Aws::Vector<Aws::String> m_disableLogTypes;
    bool m_disableLogTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
