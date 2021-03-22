/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/redshift/model/AquaStatus.h>
#include <aws/redshift/model/AquaConfigurationStatus.h>
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
   * <p>The AQUA (Advanced Query Accelerator) configuration of the
   * cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/AquaConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API AquaConfiguration
  {
  public:
    AquaConfiguration();
    AquaConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AquaConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The value indicates the status of AQUA on the cluster. Possible values
     * include the following.</p> <ul> <li> <p>enabled - AQUA is enabled.</p> </li>
     * <li> <p>disabled - AQUA is not enabled. </p> </li> <li> <p>applying - AQUA
     * status is being applied. </p> </li> </ul>
     */
    inline const AquaStatus& GetAquaStatus() const{ return m_aquaStatus; }

    /**
     * <p>The value indicates the status of AQUA on the cluster. Possible values
     * include the following.</p> <ul> <li> <p>enabled - AQUA is enabled.</p> </li>
     * <li> <p>disabled - AQUA is not enabled. </p> </li> <li> <p>applying - AQUA
     * status is being applied. </p> </li> </ul>
     */
    inline bool AquaStatusHasBeenSet() const { return m_aquaStatusHasBeenSet; }

    /**
     * <p>The value indicates the status of AQUA on the cluster. Possible values
     * include the following.</p> <ul> <li> <p>enabled - AQUA is enabled.</p> </li>
     * <li> <p>disabled - AQUA is not enabled. </p> </li> <li> <p>applying - AQUA
     * status is being applied. </p> </li> </ul>
     */
    inline void SetAquaStatus(const AquaStatus& value) { m_aquaStatusHasBeenSet = true; m_aquaStatus = value; }

    /**
     * <p>The value indicates the status of AQUA on the cluster. Possible values
     * include the following.</p> <ul> <li> <p>enabled - AQUA is enabled.</p> </li>
     * <li> <p>disabled - AQUA is not enabled. </p> </li> <li> <p>applying - AQUA
     * status is being applied. </p> </li> </ul>
     */
    inline void SetAquaStatus(AquaStatus&& value) { m_aquaStatusHasBeenSet = true; m_aquaStatus = std::move(value); }

    /**
     * <p>The value indicates the status of AQUA on the cluster. Possible values
     * include the following.</p> <ul> <li> <p>enabled - AQUA is enabled.</p> </li>
     * <li> <p>disabled - AQUA is not enabled. </p> </li> <li> <p>applying - AQUA
     * status is being applied. </p> </li> </ul>
     */
    inline AquaConfiguration& WithAquaStatus(const AquaStatus& value) { SetAquaStatus(value); return *this;}

    /**
     * <p>The value indicates the status of AQUA on the cluster. Possible values
     * include the following.</p> <ul> <li> <p>enabled - AQUA is enabled.</p> </li>
     * <li> <p>disabled - AQUA is not enabled. </p> </li> <li> <p>applying - AQUA
     * status is being applied. </p> </li> </ul>
     */
    inline AquaConfiguration& WithAquaStatus(AquaStatus&& value) { SetAquaStatus(std::move(value)); return *this;}


    /**
     * <p>The value represents how the cluster is configured to use AQUA. Possible
     * values include the following.</p> <ul> <li> <p>enabled - Use AQUA if it is
     * available for the current AWS Region and Amazon Redshift node type.</p> </li>
     * <li> <p>disabled - Don't use AQUA. </p> </li> <li> <p>auto - Amazon Redshift
     * determines whether to use AQUA.</p> </li> </ul>
     */
    inline const AquaConfigurationStatus& GetAquaConfigurationStatus() const{ return m_aquaConfigurationStatus; }

    /**
     * <p>The value represents how the cluster is configured to use AQUA. Possible
     * values include the following.</p> <ul> <li> <p>enabled - Use AQUA if it is
     * available for the current AWS Region and Amazon Redshift node type.</p> </li>
     * <li> <p>disabled - Don't use AQUA. </p> </li> <li> <p>auto - Amazon Redshift
     * determines whether to use AQUA.</p> </li> </ul>
     */
    inline bool AquaConfigurationStatusHasBeenSet() const { return m_aquaConfigurationStatusHasBeenSet; }

    /**
     * <p>The value represents how the cluster is configured to use AQUA. Possible
     * values include the following.</p> <ul> <li> <p>enabled - Use AQUA if it is
     * available for the current AWS Region and Amazon Redshift node type.</p> </li>
     * <li> <p>disabled - Don't use AQUA. </p> </li> <li> <p>auto - Amazon Redshift
     * determines whether to use AQUA.</p> </li> </ul>
     */
    inline void SetAquaConfigurationStatus(const AquaConfigurationStatus& value) { m_aquaConfigurationStatusHasBeenSet = true; m_aquaConfigurationStatus = value; }

    /**
     * <p>The value represents how the cluster is configured to use AQUA. Possible
     * values include the following.</p> <ul> <li> <p>enabled - Use AQUA if it is
     * available for the current AWS Region and Amazon Redshift node type.</p> </li>
     * <li> <p>disabled - Don't use AQUA. </p> </li> <li> <p>auto - Amazon Redshift
     * determines whether to use AQUA.</p> </li> </ul>
     */
    inline void SetAquaConfigurationStatus(AquaConfigurationStatus&& value) { m_aquaConfigurationStatusHasBeenSet = true; m_aquaConfigurationStatus = std::move(value); }

    /**
     * <p>The value represents how the cluster is configured to use AQUA. Possible
     * values include the following.</p> <ul> <li> <p>enabled - Use AQUA if it is
     * available for the current AWS Region and Amazon Redshift node type.</p> </li>
     * <li> <p>disabled - Don't use AQUA. </p> </li> <li> <p>auto - Amazon Redshift
     * determines whether to use AQUA.</p> </li> </ul>
     */
    inline AquaConfiguration& WithAquaConfigurationStatus(const AquaConfigurationStatus& value) { SetAquaConfigurationStatus(value); return *this;}

    /**
     * <p>The value represents how the cluster is configured to use AQUA. Possible
     * values include the following.</p> <ul> <li> <p>enabled - Use AQUA if it is
     * available for the current AWS Region and Amazon Redshift node type.</p> </li>
     * <li> <p>disabled - Don't use AQUA. </p> </li> <li> <p>auto - Amazon Redshift
     * determines whether to use AQUA.</p> </li> </ul>
     */
    inline AquaConfiguration& WithAquaConfigurationStatus(AquaConfigurationStatus&& value) { SetAquaConfigurationStatus(std::move(value)); return *this;}

  private:

    AquaStatus m_aquaStatus;
    bool m_aquaStatusHasBeenSet;

    AquaConfigurationStatus m_aquaConfigurationStatus;
    bool m_aquaConfigurationStatusHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
