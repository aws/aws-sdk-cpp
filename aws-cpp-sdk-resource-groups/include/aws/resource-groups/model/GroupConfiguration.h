/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resource-groups/model/GroupConfigurationStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resource-groups/model/GroupConfigurationItem.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ResourceGroups
{
namespace Model
{

  /**
   * <p>A service configuration associated with a resource group. The configuration
   * options are determined by the AWS service that defines the <code>Type</code>,
   * and specifies which resources can be included in the group. You can add a
   * service configuration when you create the group by using <a>CreateGroup</a>, or
   * later by using the <a>PutGroupConfiguration</a> operation. For details about
   * group service configuration syntax, see <a
   * href="https://docs.aws.amazon.com/ARG/latest/APIReference/about-slg.html">Service
   * configurations for resource groups</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/GroupConfiguration">AWS
   * API Reference</a></p>
   */
  class GroupConfiguration
  {
  public:
    AWS_RESOURCEGROUPS_API GroupConfiguration();
    AWS_RESOURCEGROUPS_API GroupConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEGROUPS_API GroupConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEGROUPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The configuration currently associated with the group and in effect.</p>
     */
    inline const Aws::Vector<GroupConfigurationItem>& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>The configuration currently associated with the group and in effect.</p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>The configuration currently associated with the group and in effect.</p>
     */
    inline void SetConfiguration(const Aws::Vector<GroupConfigurationItem>& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>The configuration currently associated with the group and in effect.</p>
     */
    inline void SetConfiguration(Aws::Vector<GroupConfigurationItem>&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>The configuration currently associated with the group and in effect.</p>
     */
    inline GroupConfiguration& WithConfiguration(const Aws::Vector<GroupConfigurationItem>& value) { SetConfiguration(value); return *this;}

    /**
     * <p>The configuration currently associated with the group and in effect.</p>
     */
    inline GroupConfiguration& WithConfiguration(Aws::Vector<GroupConfigurationItem>&& value) { SetConfiguration(std::move(value)); return *this;}

    /**
     * <p>The configuration currently associated with the group and in effect.</p>
     */
    inline GroupConfiguration& AddConfiguration(const GroupConfigurationItem& value) { m_configurationHasBeenSet = true; m_configuration.push_back(value); return *this; }

    /**
     * <p>The configuration currently associated with the group and in effect.</p>
     */
    inline GroupConfiguration& AddConfiguration(GroupConfigurationItem&& value) { m_configurationHasBeenSet = true; m_configuration.push_back(std::move(value)); return *this; }


    /**
     * <p>If present, the new configuration that is in the process of being applied to
     * the group.</p>
     */
    inline const Aws::Vector<GroupConfigurationItem>& GetProposedConfiguration() const{ return m_proposedConfiguration; }

    /**
     * <p>If present, the new configuration that is in the process of being applied to
     * the group.</p>
     */
    inline bool ProposedConfigurationHasBeenSet() const { return m_proposedConfigurationHasBeenSet; }

    /**
     * <p>If present, the new configuration that is in the process of being applied to
     * the group.</p>
     */
    inline void SetProposedConfiguration(const Aws::Vector<GroupConfigurationItem>& value) { m_proposedConfigurationHasBeenSet = true; m_proposedConfiguration = value; }

    /**
     * <p>If present, the new configuration that is in the process of being applied to
     * the group.</p>
     */
    inline void SetProposedConfiguration(Aws::Vector<GroupConfigurationItem>&& value) { m_proposedConfigurationHasBeenSet = true; m_proposedConfiguration = std::move(value); }

    /**
     * <p>If present, the new configuration that is in the process of being applied to
     * the group.</p>
     */
    inline GroupConfiguration& WithProposedConfiguration(const Aws::Vector<GroupConfigurationItem>& value) { SetProposedConfiguration(value); return *this;}

    /**
     * <p>If present, the new configuration that is in the process of being applied to
     * the group.</p>
     */
    inline GroupConfiguration& WithProposedConfiguration(Aws::Vector<GroupConfigurationItem>&& value) { SetProposedConfiguration(std::move(value)); return *this;}

    /**
     * <p>If present, the new configuration that is in the process of being applied to
     * the group.</p>
     */
    inline GroupConfiguration& AddProposedConfiguration(const GroupConfigurationItem& value) { m_proposedConfigurationHasBeenSet = true; m_proposedConfiguration.push_back(value); return *this; }

    /**
     * <p>If present, the new configuration that is in the process of being applied to
     * the group.</p>
     */
    inline GroupConfiguration& AddProposedConfiguration(GroupConfigurationItem&& value) { m_proposedConfigurationHasBeenSet = true; m_proposedConfiguration.push_back(std::move(value)); return *this; }


    /**
     * <p>The current status of an attempt to update the group configuration.</p>
     */
    inline const GroupConfigurationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of an attempt to update the group configuration.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of an attempt to update the group configuration.</p>
     */
    inline void SetStatus(const GroupConfigurationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of an attempt to update the group configuration.</p>
     */
    inline void SetStatus(GroupConfigurationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of an attempt to update the group configuration.</p>
     */
    inline GroupConfiguration& WithStatus(const GroupConfigurationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of an attempt to update the group configuration.</p>
     */
    inline GroupConfiguration& WithStatus(GroupConfigurationStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>If present, the reason why a request to update the group configuration
     * failed.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>If present, the reason why a request to update the group configuration
     * failed.</p>
     */
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    /**
     * <p>If present, the reason why a request to update the group configuration
     * failed.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>If present, the reason why a request to update the group configuration
     * failed.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p>If present, the reason why a request to update the group configuration
     * failed.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }

    /**
     * <p>If present, the reason why a request to update the group configuration
     * failed.</p>
     */
    inline GroupConfiguration& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>If present, the reason why a request to update the group configuration
     * failed.</p>
     */
    inline GroupConfiguration& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>If present, the reason why a request to update the group configuration
     * failed.</p>
     */
    inline GroupConfiguration& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}

  private:

    Aws::Vector<GroupConfigurationItem> m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::Vector<GroupConfigurationItem> m_proposedConfiguration;
    bool m_proposedConfigurationHasBeenSet = false;

    GroupConfigurationStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
