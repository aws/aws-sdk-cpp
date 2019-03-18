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
   * <p>Describes the status of a parameter group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ClusterParameterStatus">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API ClusterParameterStatus
  {
  public:
    ClusterParameterStatus();
    ClusterParameterStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    ClusterParameterStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the parameter.</p>
     */
    inline const Aws::String& GetParameterName() const{ return m_parameterName; }

    /**
     * <p>The name of the parameter.</p>
     */
    inline bool ParameterNameHasBeenSet() const { return m_parameterNameHasBeenSet; }

    /**
     * <p>The name of the parameter.</p>
     */
    inline void SetParameterName(const Aws::String& value) { m_parameterNameHasBeenSet = true; m_parameterName = value; }

    /**
     * <p>The name of the parameter.</p>
     */
    inline void SetParameterName(Aws::String&& value) { m_parameterNameHasBeenSet = true; m_parameterName = std::move(value); }

    /**
     * <p>The name of the parameter.</p>
     */
    inline void SetParameterName(const char* value) { m_parameterNameHasBeenSet = true; m_parameterName.assign(value); }

    /**
     * <p>The name of the parameter.</p>
     */
    inline ClusterParameterStatus& WithParameterName(const Aws::String& value) { SetParameterName(value); return *this;}

    /**
     * <p>The name of the parameter.</p>
     */
    inline ClusterParameterStatus& WithParameterName(Aws::String&& value) { SetParameterName(std::move(value)); return *this;}

    /**
     * <p>The name of the parameter.</p>
     */
    inline ClusterParameterStatus& WithParameterName(const char* value) { SetParameterName(value); return *this;}


    /**
     * <p>The status of the parameter that indicates whether the parameter is in sync
     * with the database, waiting for a cluster reboot, or encountered an error when
     * being applied.</p> <p>The following are possible statuses and descriptions.</p>
     * <ul> <li> <p> <code>in-sync</code>: The parameter value is in sync with the
     * database.</p> </li> <li> <p> <code>pending-reboot</code>: The parameter value
     * will be applied after the cluster reboots.</p> </li> <li> <p>
     * <code>applying</code>: The parameter value is being applied to the database.</p>
     * </li> <li> <p> <code>invalid-parameter</code>: Cannot apply the parameter value
     * because it has an invalid value or syntax.</p> </li> <li> <p>
     * <code>apply-deferred</code>: The parameter contains static property changes. The
     * changes are deferred until the cluster reboots.</p> </li> <li> <p>
     * <code>apply-error</code>: Cannot connect to the cluster. The parameter change
     * will be applied after the cluster reboots.</p> </li> <li> <p>
     * <code>unknown-error</code>: Cannot apply the parameter change right now. The
     * change will be applied after the cluster reboots.</p> </li> </ul>
     */
    inline const Aws::String& GetParameterApplyStatus() const{ return m_parameterApplyStatus; }

    /**
     * <p>The status of the parameter that indicates whether the parameter is in sync
     * with the database, waiting for a cluster reboot, or encountered an error when
     * being applied.</p> <p>The following are possible statuses and descriptions.</p>
     * <ul> <li> <p> <code>in-sync</code>: The parameter value is in sync with the
     * database.</p> </li> <li> <p> <code>pending-reboot</code>: The parameter value
     * will be applied after the cluster reboots.</p> </li> <li> <p>
     * <code>applying</code>: The parameter value is being applied to the database.</p>
     * </li> <li> <p> <code>invalid-parameter</code>: Cannot apply the parameter value
     * because it has an invalid value or syntax.</p> </li> <li> <p>
     * <code>apply-deferred</code>: The parameter contains static property changes. The
     * changes are deferred until the cluster reboots.</p> </li> <li> <p>
     * <code>apply-error</code>: Cannot connect to the cluster. The parameter change
     * will be applied after the cluster reboots.</p> </li> <li> <p>
     * <code>unknown-error</code>: Cannot apply the parameter change right now. The
     * change will be applied after the cluster reboots.</p> </li> </ul>
     */
    inline bool ParameterApplyStatusHasBeenSet() const { return m_parameterApplyStatusHasBeenSet; }

    /**
     * <p>The status of the parameter that indicates whether the parameter is in sync
     * with the database, waiting for a cluster reboot, or encountered an error when
     * being applied.</p> <p>The following are possible statuses and descriptions.</p>
     * <ul> <li> <p> <code>in-sync</code>: The parameter value is in sync with the
     * database.</p> </li> <li> <p> <code>pending-reboot</code>: The parameter value
     * will be applied after the cluster reboots.</p> </li> <li> <p>
     * <code>applying</code>: The parameter value is being applied to the database.</p>
     * </li> <li> <p> <code>invalid-parameter</code>: Cannot apply the parameter value
     * because it has an invalid value or syntax.</p> </li> <li> <p>
     * <code>apply-deferred</code>: The parameter contains static property changes. The
     * changes are deferred until the cluster reboots.</p> </li> <li> <p>
     * <code>apply-error</code>: Cannot connect to the cluster. The parameter change
     * will be applied after the cluster reboots.</p> </li> <li> <p>
     * <code>unknown-error</code>: Cannot apply the parameter change right now. The
     * change will be applied after the cluster reboots.</p> </li> </ul>
     */
    inline void SetParameterApplyStatus(const Aws::String& value) { m_parameterApplyStatusHasBeenSet = true; m_parameterApplyStatus = value; }

    /**
     * <p>The status of the parameter that indicates whether the parameter is in sync
     * with the database, waiting for a cluster reboot, or encountered an error when
     * being applied.</p> <p>The following are possible statuses and descriptions.</p>
     * <ul> <li> <p> <code>in-sync</code>: The parameter value is in sync with the
     * database.</p> </li> <li> <p> <code>pending-reboot</code>: The parameter value
     * will be applied after the cluster reboots.</p> </li> <li> <p>
     * <code>applying</code>: The parameter value is being applied to the database.</p>
     * </li> <li> <p> <code>invalid-parameter</code>: Cannot apply the parameter value
     * because it has an invalid value or syntax.</p> </li> <li> <p>
     * <code>apply-deferred</code>: The parameter contains static property changes. The
     * changes are deferred until the cluster reboots.</p> </li> <li> <p>
     * <code>apply-error</code>: Cannot connect to the cluster. The parameter change
     * will be applied after the cluster reboots.</p> </li> <li> <p>
     * <code>unknown-error</code>: Cannot apply the parameter change right now. The
     * change will be applied after the cluster reboots.</p> </li> </ul>
     */
    inline void SetParameterApplyStatus(Aws::String&& value) { m_parameterApplyStatusHasBeenSet = true; m_parameterApplyStatus = std::move(value); }

    /**
     * <p>The status of the parameter that indicates whether the parameter is in sync
     * with the database, waiting for a cluster reboot, or encountered an error when
     * being applied.</p> <p>The following are possible statuses and descriptions.</p>
     * <ul> <li> <p> <code>in-sync</code>: The parameter value is in sync with the
     * database.</p> </li> <li> <p> <code>pending-reboot</code>: The parameter value
     * will be applied after the cluster reboots.</p> </li> <li> <p>
     * <code>applying</code>: The parameter value is being applied to the database.</p>
     * </li> <li> <p> <code>invalid-parameter</code>: Cannot apply the parameter value
     * because it has an invalid value or syntax.</p> </li> <li> <p>
     * <code>apply-deferred</code>: The parameter contains static property changes. The
     * changes are deferred until the cluster reboots.</p> </li> <li> <p>
     * <code>apply-error</code>: Cannot connect to the cluster. The parameter change
     * will be applied after the cluster reboots.</p> </li> <li> <p>
     * <code>unknown-error</code>: Cannot apply the parameter change right now. The
     * change will be applied after the cluster reboots.</p> </li> </ul>
     */
    inline void SetParameterApplyStatus(const char* value) { m_parameterApplyStatusHasBeenSet = true; m_parameterApplyStatus.assign(value); }

    /**
     * <p>The status of the parameter that indicates whether the parameter is in sync
     * with the database, waiting for a cluster reboot, or encountered an error when
     * being applied.</p> <p>The following are possible statuses and descriptions.</p>
     * <ul> <li> <p> <code>in-sync</code>: The parameter value is in sync with the
     * database.</p> </li> <li> <p> <code>pending-reboot</code>: The parameter value
     * will be applied after the cluster reboots.</p> </li> <li> <p>
     * <code>applying</code>: The parameter value is being applied to the database.</p>
     * </li> <li> <p> <code>invalid-parameter</code>: Cannot apply the parameter value
     * because it has an invalid value or syntax.</p> </li> <li> <p>
     * <code>apply-deferred</code>: The parameter contains static property changes. The
     * changes are deferred until the cluster reboots.</p> </li> <li> <p>
     * <code>apply-error</code>: Cannot connect to the cluster. The parameter change
     * will be applied after the cluster reboots.</p> </li> <li> <p>
     * <code>unknown-error</code>: Cannot apply the parameter change right now. The
     * change will be applied after the cluster reboots.</p> </li> </ul>
     */
    inline ClusterParameterStatus& WithParameterApplyStatus(const Aws::String& value) { SetParameterApplyStatus(value); return *this;}

    /**
     * <p>The status of the parameter that indicates whether the parameter is in sync
     * with the database, waiting for a cluster reboot, or encountered an error when
     * being applied.</p> <p>The following are possible statuses and descriptions.</p>
     * <ul> <li> <p> <code>in-sync</code>: The parameter value is in sync with the
     * database.</p> </li> <li> <p> <code>pending-reboot</code>: The parameter value
     * will be applied after the cluster reboots.</p> </li> <li> <p>
     * <code>applying</code>: The parameter value is being applied to the database.</p>
     * </li> <li> <p> <code>invalid-parameter</code>: Cannot apply the parameter value
     * because it has an invalid value or syntax.</p> </li> <li> <p>
     * <code>apply-deferred</code>: The parameter contains static property changes. The
     * changes are deferred until the cluster reboots.</p> </li> <li> <p>
     * <code>apply-error</code>: Cannot connect to the cluster. The parameter change
     * will be applied after the cluster reboots.</p> </li> <li> <p>
     * <code>unknown-error</code>: Cannot apply the parameter change right now. The
     * change will be applied after the cluster reboots.</p> </li> </ul>
     */
    inline ClusterParameterStatus& WithParameterApplyStatus(Aws::String&& value) { SetParameterApplyStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the parameter that indicates whether the parameter is in sync
     * with the database, waiting for a cluster reboot, or encountered an error when
     * being applied.</p> <p>The following are possible statuses and descriptions.</p>
     * <ul> <li> <p> <code>in-sync</code>: The parameter value is in sync with the
     * database.</p> </li> <li> <p> <code>pending-reboot</code>: The parameter value
     * will be applied after the cluster reboots.</p> </li> <li> <p>
     * <code>applying</code>: The parameter value is being applied to the database.</p>
     * </li> <li> <p> <code>invalid-parameter</code>: Cannot apply the parameter value
     * because it has an invalid value or syntax.</p> </li> <li> <p>
     * <code>apply-deferred</code>: The parameter contains static property changes. The
     * changes are deferred until the cluster reboots.</p> </li> <li> <p>
     * <code>apply-error</code>: Cannot connect to the cluster. The parameter change
     * will be applied after the cluster reboots.</p> </li> <li> <p>
     * <code>unknown-error</code>: Cannot apply the parameter change right now. The
     * change will be applied after the cluster reboots.</p> </li> </ul>
     */
    inline ClusterParameterStatus& WithParameterApplyStatus(const char* value) { SetParameterApplyStatus(value); return *this;}


    /**
     * <p>The error that prevented the parameter from being applied to the
     * database.</p>
     */
    inline const Aws::String& GetParameterApplyErrorDescription() const{ return m_parameterApplyErrorDescription; }

    /**
     * <p>The error that prevented the parameter from being applied to the
     * database.</p>
     */
    inline bool ParameterApplyErrorDescriptionHasBeenSet() const { return m_parameterApplyErrorDescriptionHasBeenSet; }

    /**
     * <p>The error that prevented the parameter from being applied to the
     * database.</p>
     */
    inline void SetParameterApplyErrorDescription(const Aws::String& value) { m_parameterApplyErrorDescriptionHasBeenSet = true; m_parameterApplyErrorDescription = value; }

    /**
     * <p>The error that prevented the parameter from being applied to the
     * database.</p>
     */
    inline void SetParameterApplyErrorDescription(Aws::String&& value) { m_parameterApplyErrorDescriptionHasBeenSet = true; m_parameterApplyErrorDescription = std::move(value); }

    /**
     * <p>The error that prevented the parameter from being applied to the
     * database.</p>
     */
    inline void SetParameterApplyErrorDescription(const char* value) { m_parameterApplyErrorDescriptionHasBeenSet = true; m_parameterApplyErrorDescription.assign(value); }

    /**
     * <p>The error that prevented the parameter from being applied to the
     * database.</p>
     */
    inline ClusterParameterStatus& WithParameterApplyErrorDescription(const Aws::String& value) { SetParameterApplyErrorDescription(value); return *this;}

    /**
     * <p>The error that prevented the parameter from being applied to the
     * database.</p>
     */
    inline ClusterParameterStatus& WithParameterApplyErrorDescription(Aws::String&& value) { SetParameterApplyErrorDescription(std::move(value)); return *this;}

    /**
     * <p>The error that prevented the parameter from being applied to the
     * database.</p>
     */
    inline ClusterParameterStatus& WithParameterApplyErrorDescription(const char* value) { SetParameterApplyErrorDescription(value); return *this;}

  private:

    Aws::String m_parameterName;
    bool m_parameterNameHasBeenSet;

    Aws::String m_parameterApplyStatus;
    bool m_parameterApplyStatusHasBeenSet;

    Aws::String m_parameterApplyErrorDescription;
    bool m_parameterApplyErrorDescriptionHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
