/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace Redshift
{
namespace Model
{

  /**
   * <p>Describes a deferred maintenance window</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DeferredMaintenanceWindow">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API DeferredMaintenanceWindow
  {
  public:
    DeferredMaintenanceWindow();
    DeferredMaintenanceWindow(const Aws::Utils::Xml::XmlNode& xmlNode);
    DeferredMaintenanceWindow& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>A unique identifier for the maintenance window.</p>
     */
    inline const Aws::String& GetDeferMaintenanceIdentifier() const{ return m_deferMaintenanceIdentifier; }

    /**
     * <p>A unique identifier for the maintenance window.</p>
     */
    inline bool DeferMaintenanceIdentifierHasBeenSet() const { return m_deferMaintenanceIdentifierHasBeenSet; }

    /**
     * <p>A unique identifier for the maintenance window.</p>
     */
    inline void SetDeferMaintenanceIdentifier(const Aws::String& value) { m_deferMaintenanceIdentifierHasBeenSet = true; m_deferMaintenanceIdentifier = value; }

    /**
     * <p>A unique identifier for the maintenance window.</p>
     */
    inline void SetDeferMaintenanceIdentifier(Aws::String&& value) { m_deferMaintenanceIdentifierHasBeenSet = true; m_deferMaintenanceIdentifier = std::move(value); }

    /**
     * <p>A unique identifier for the maintenance window.</p>
     */
    inline void SetDeferMaintenanceIdentifier(const char* value) { m_deferMaintenanceIdentifierHasBeenSet = true; m_deferMaintenanceIdentifier.assign(value); }

    /**
     * <p>A unique identifier for the maintenance window.</p>
     */
    inline DeferredMaintenanceWindow& WithDeferMaintenanceIdentifier(const Aws::String& value) { SetDeferMaintenanceIdentifier(value); return *this;}

    /**
     * <p>A unique identifier for the maintenance window.</p>
     */
    inline DeferredMaintenanceWindow& WithDeferMaintenanceIdentifier(Aws::String&& value) { SetDeferMaintenanceIdentifier(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the maintenance window.</p>
     */
    inline DeferredMaintenanceWindow& WithDeferMaintenanceIdentifier(const char* value) { SetDeferMaintenanceIdentifier(value); return *this;}


    /**
     * <p> A timestamp for the beginning of the time period when we defer
     * maintenance.</p>
     */
    inline const Aws::Utils::DateTime& GetDeferMaintenanceStartTime() const{ return m_deferMaintenanceStartTime; }

    /**
     * <p> A timestamp for the beginning of the time period when we defer
     * maintenance.</p>
     */
    inline bool DeferMaintenanceStartTimeHasBeenSet() const { return m_deferMaintenanceStartTimeHasBeenSet; }

    /**
     * <p> A timestamp for the beginning of the time period when we defer
     * maintenance.</p>
     */
    inline void SetDeferMaintenanceStartTime(const Aws::Utils::DateTime& value) { m_deferMaintenanceStartTimeHasBeenSet = true; m_deferMaintenanceStartTime = value; }

    /**
     * <p> A timestamp for the beginning of the time period when we defer
     * maintenance.</p>
     */
    inline void SetDeferMaintenanceStartTime(Aws::Utils::DateTime&& value) { m_deferMaintenanceStartTimeHasBeenSet = true; m_deferMaintenanceStartTime = std::move(value); }

    /**
     * <p> A timestamp for the beginning of the time period when we defer
     * maintenance.</p>
     */
    inline DeferredMaintenanceWindow& WithDeferMaintenanceStartTime(const Aws::Utils::DateTime& value) { SetDeferMaintenanceStartTime(value); return *this;}

    /**
     * <p> A timestamp for the beginning of the time period when we defer
     * maintenance.</p>
     */
    inline DeferredMaintenanceWindow& WithDeferMaintenanceStartTime(Aws::Utils::DateTime&& value) { SetDeferMaintenanceStartTime(std::move(value)); return *this;}


    /**
     * <p> A timestamp for the end of the time period when we defer maintenance.</p>
     */
    inline const Aws::Utils::DateTime& GetDeferMaintenanceEndTime() const{ return m_deferMaintenanceEndTime; }

    /**
     * <p> A timestamp for the end of the time period when we defer maintenance.</p>
     */
    inline bool DeferMaintenanceEndTimeHasBeenSet() const { return m_deferMaintenanceEndTimeHasBeenSet; }

    /**
     * <p> A timestamp for the end of the time period when we defer maintenance.</p>
     */
    inline void SetDeferMaintenanceEndTime(const Aws::Utils::DateTime& value) { m_deferMaintenanceEndTimeHasBeenSet = true; m_deferMaintenanceEndTime = value; }

    /**
     * <p> A timestamp for the end of the time period when we defer maintenance.</p>
     */
    inline void SetDeferMaintenanceEndTime(Aws::Utils::DateTime&& value) { m_deferMaintenanceEndTimeHasBeenSet = true; m_deferMaintenanceEndTime = std::move(value); }

    /**
     * <p> A timestamp for the end of the time period when we defer maintenance.</p>
     */
    inline DeferredMaintenanceWindow& WithDeferMaintenanceEndTime(const Aws::Utils::DateTime& value) { SetDeferMaintenanceEndTime(value); return *this;}

    /**
     * <p> A timestamp for the end of the time period when we defer maintenance.</p>
     */
    inline DeferredMaintenanceWindow& WithDeferMaintenanceEndTime(Aws::Utils::DateTime&& value) { SetDeferMaintenanceEndTime(std::move(value)); return *this;}

  private:

    Aws::String m_deferMaintenanceIdentifier;
    bool m_deferMaintenanceIdentifierHasBeenSet;

    Aws::Utils::DateTime m_deferMaintenanceStartTime;
    bool m_deferMaintenanceStartTimeHasBeenSet;

    Aws::Utils::DateTime m_deferMaintenanceEndTime;
    bool m_deferMaintenanceEndTimeHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
