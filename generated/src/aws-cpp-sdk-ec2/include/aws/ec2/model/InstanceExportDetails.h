/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ExportEnvironment.h>
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
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes an instance to export.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InstanceExportDetails">AWS
   * API Reference</a></p>
   */
  class InstanceExportDetails
  {
  public:
    AWS_EC2_API InstanceExportDetails() = default;
    AWS_EC2_API InstanceExportDetails(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InstanceExportDetails& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the resource being exported.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    InstanceExportDetails& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target virtualization environment.</p>
     */
    inline ExportEnvironment GetTargetEnvironment() const { return m_targetEnvironment; }
    inline bool TargetEnvironmentHasBeenSet() const { return m_targetEnvironmentHasBeenSet; }
    inline void SetTargetEnvironment(ExportEnvironment value) { m_targetEnvironmentHasBeenSet = true; m_targetEnvironment = value; }
    inline InstanceExportDetails& WithTargetEnvironment(ExportEnvironment value) { SetTargetEnvironment(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    ExportEnvironment m_targetEnvironment{ExportEnvironment::NOT_SET};
    bool m_targetEnvironmentHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
