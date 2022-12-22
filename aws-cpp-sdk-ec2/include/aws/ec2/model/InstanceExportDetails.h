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
    AWS_EC2_API InstanceExportDetails();
    AWS_EC2_API InstanceExportDetails(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InstanceExportDetails& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the resource being exported.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the resource being exported.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The ID of the resource being exported.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the resource being exported.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The ID of the resource being exported.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The ID of the resource being exported.</p>
     */
    inline InstanceExportDetails& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the resource being exported.</p>
     */
    inline InstanceExportDetails& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the resource being exported.</p>
     */
    inline InstanceExportDetails& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The target virtualization environment.</p>
     */
    inline const ExportEnvironment& GetTargetEnvironment() const{ return m_targetEnvironment; }

    /**
     * <p>The target virtualization environment.</p>
     */
    inline bool TargetEnvironmentHasBeenSet() const { return m_targetEnvironmentHasBeenSet; }

    /**
     * <p>The target virtualization environment.</p>
     */
    inline void SetTargetEnvironment(const ExportEnvironment& value) { m_targetEnvironmentHasBeenSet = true; m_targetEnvironment = value; }

    /**
     * <p>The target virtualization environment.</p>
     */
    inline void SetTargetEnvironment(ExportEnvironment&& value) { m_targetEnvironmentHasBeenSet = true; m_targetEnvironment = std::move(value); }

    /**
     * <p>The target virtualization environment.</p>
     */
    inline InstanceExportDetails& WithTargetEnvironment(const ExportEnvironment& value) { SetTargetEnvironment(value); return *this;}

    /**
     * <p>The target virtualization environment.</p>
     */
    inline InstanceExportDetails& WithTargetEnvironment(ExportEnvironment&& value) { SetTargetEnvironment(std::move(value)); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    ExportEnvironment m_targetEnvironment;
    bool m_targetEnvironmentHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
