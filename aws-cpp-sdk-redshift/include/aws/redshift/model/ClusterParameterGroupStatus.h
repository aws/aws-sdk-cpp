/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/ClusterParameterStatus.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ClusterParameterGroupStatus">AWS
   * API Reference</a></p>
   */
  class ClusterParameterGroupStatus
  {
  public:
    AWS_REDSHIFT_API ClusterParameterGroupStatus();
    AWS_REDSHIFT_API ClusterParameterGroupStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API ClusterParameterGroupStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the cluster parameter group.</p>
     */
    inline const Aws::String& GetParameterGroupName() const{ return m_parameterGroupName; }

    /**
     * <p>The name of the cluster parameter group.</p>
     */
    inline bool ParameterGroupNameHasBeenSet() const { return m_parameterGroupNameHasBeenSet; }

    /**
     * <p>The name of the cluster parameter group.</p>
     */
    inline void SetParameterGroupName(const Aws::String& value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName = value; }

    /**
     * <p>The name of the cluster parameter group.</p>
     */
    inline void SetParameterGroupName(Aws::String&& value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName = std::move(value); }

    /**
     * <p>The name of the cluster parameter group.</p>
     */
    inline void SetParameterGroupName(const char* value) { m_parameterGroupNameHasBeenSet = true; m_parameterGroupName.assign(value); }

    /**
     * <p>The name of the cluster parameter group.</p>
     */
    inline ClusterParameterGroupStatus& WithParameterGroupName(const Aws::String& value) { SetParameterGroupName(value); return *this;}

    /**
     * <p>The name of the cluster parameter group.</p>
     */
    inline ClusterParameterGroupStatus& WithParameterGroupName(Aws::String&& value) { SetParameterGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the cluster parameter group.</p>
     */
    inline ClusterParameterGroupStatus& WithParameterGroupName(const char* value) { SetParameterGroupName(value); return *this;}


    /**
     * <p>The status of parameter updates.</p>
     */
    inline const Aws::String& GetParameterApplyStatus() const{ return m_parameterApplyStatus; }

    /**
     * <p>The status of parameter updates.</p>
     */
    inline bool ParameterApplyStatusHasBeenSet() const { return m_parameterApplyStatusHasBeenSet; }

    /**
     * <p>The status of parameter updates.</p>
     */
    inline void SetParameterApplyStatus(const Aws::String& value) { m_parameterApplyStatusHasBeenSet = true; m_parameterApplyStatus = value; }

    /**
     * <p>The status of parameter updates.</p>
     */
    inline void SetParameterApplyStatus(Aws::String&& value) { m_parameterApplyStatusHasBeenSet = true; m_parameterApplyStatus = std::move(value); }

    /**
     * <p>The status of parameter updates.</p>
     */
    inline void SetParameterApplyStatus(const char* value) { m_parameterApplyStatusHasBeenSet = true; m_parameterApplyStatus.assign(value); }

    /**
     * <p>The status of parameter updates.</p>
     */
    inline ClusterParameterGroupStatus& WithParameterApplyStatus(const Aws::String& value) { SetParameterApplyStatus(value); return *this;}

    /**
     * <p>The status of parameter updates.</p>
     */
    inline ClusterParameterGroupStatus& WithParameterApplyStatus(Aws::String&& value) { SetParameterApplyStatus(std::move(value)); return *this;}

    /**
     * <p>The status of parameter updates.</p>
     */
    inline ClusterParameterGroupStatus& WithParameterApplyStatus(const char* value) { SetParameterApplyStatus(value); return *this;}


    /**
     * <p>The list of parameter statuses.</p> <p> For more information about parameters
     * and parameter groups, go to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon
     * Redshift Parameter Groups</a> in the <i>Amazon Redshift Cluster Management
     * Guide</i>.</p>
     */
    inline const Aws::Vector<ClusterParameterStatus>& GetClusterParameterStatusList() const{ return m_clusterParameterStatusList; }

    /**
     * <p>The list of parameter statuses.</p> <p> For more information about parameters
     * and parameter groups, go to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon
     * Redshift Parameter Groups</a> in the <i>Amazon Redshift Cluster Management
     * Guide</i>.</p>
     */
    inline bool ClusterParameterStatusListHasBeenSet() const { return m_clusterParameterStatusListHasBeenSet; }

    /**
     * <p>The list of parameter statuses.</p> <p> For more information about parameters
     * and parameter groups, go to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon
     * Redshift Parameter Groups</a> in the <i>Amazon Redshift Cluster Management
     * Guide</i>.</p>
     */
    inline void SetClusterParameterStatusList(const Aws::Vector<ClusterParameterStatus>& value) { m_clusterParameterStatusListHasBeenSet = true; m_clusterParameterStatusList = value; }

    /**
     * <p>The list of parameter statuses.</p> <p> For more information about parameters
     * and parameter groups, go to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon
     * Redshift Parameter Groups</a> in the <i>Amazon Redshift Cluster Management
     * Guide</i>.</p>
     */
    inline void SetClusterParameterStatusList(Aws::Vector<ClusterParameterStatus>&& value) { m_clusterParameterStatusListHasBeenSet = true; m_clusterParameterStatusList = std::move(value); }

    /**
     * <p>The list of parameter statuses.</p> <p> For more information about parameters
     * and parameter groups, go to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon
     * Redshift Parameter Groups</a> in the <i>Amazon Redshift Cluster Management
     * Guide</i>.</p>
     */
    inline ClusterParameterGroupStatus& WithClusterParameterStatusList(const Aws::Vector<ClusterParameterStatus>& value) { SetClusterParameterStatusList(value); return *this;}

    /**
     * <p>The list of parameter statuses.</p> <p> For more information about parameters
     * and parameter groups, go to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon
     * Redshift Parameter Groups</a> in the <i>Amazon Redshift Cluster Management
     * Guide</i>.</p>
     */
    inline ClusterParameterGroupStatus& WithClusterParameterStatusList(Aws::Vector<ClusterParameterStatus>&& value) { SetClusterParameterStatusList(std::move(value)); return *this;}

    /**
     * <p>The list of parameter statuses.</p> <p> For more information about parameters
     * and parameter groups, go to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon
     * Redshift Parameter Groups</a> in the <i>Amazon Redshift Cluster Management
     * Guide</i>.</p>
     */
    inline ClusterParameterGroupStatus& AddClusterParameterStatusList(const ClusterParameterStatus& value) { m_clusterParameterStatusListHasBeenSet = true; m_clusterParameterStatusList.push_back(value); return *this; }

    /**
     * <p>The list of parameter statuses.</p> <p> For more information about parameters
     * and parameter groups, go to <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/working-with-parameter-groups.html">Amazon
     * Redshift Parameter Groups</a> in the <i>Amazon Redshift Cluster Management
     * Guide</i>.</p>
     */
    inline ClusterParameterGroupStatus& AddClusterParameterStatusList(ClusterParameterStatus&& value) { m_clusterParameterStatusListHasBeenSet = true; m_clusterParameterStatusList.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_parameterGroupName;
    bool m_parameterGroupNameHasBeenSet = false;

    Aws::String m_parameterApplyStatus;
    bool m_parameterApplyStatusHasBeenSet = false;

    Aws::Vector<ClusterParameterStatus> m_clusterParameterStatusList;
    bool m_clusterParameterStatusListHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
