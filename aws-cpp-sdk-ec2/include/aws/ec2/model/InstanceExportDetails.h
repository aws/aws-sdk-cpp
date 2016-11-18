﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ExportEnvironment.h>

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
   * <p>Describes an instance to export.</p>
   */
  class AWS_EC2_API InstanceExportDetails
  {
  public:
    InstanceExportDetails();
    InstanceExportDetails(const Aws::Utils::Xml::XmlNode& xmlNode);
    InstanceExportDetails& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The ID of the resource being exported.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the resource being exported.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the resource being exported.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

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
    inline InstanceExportDetails& WithInstanceId(Aws::String&& value) { SetInstanceId(value); return *this;}

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
    inline void SetTargetEnvironment(const ExportEnvironment& value) { m_targetEnvironmentHasBeenSet = true; m_targetEnvironment = value; }

    /**
     * <p>The target virtualization environment.</p>
     */
    inline void SetTargetEnvironment(ExportEnvironment&& value) { m_targetEnvironmentHasBeenSet = true; m_targetEnvironment = value; }

    /**
     * <p>The target virtualization environment.</p>
     */
    inline InstanceExportDetails& WithTargetEnvironment(const ExportEnvironment& value) { SetTargetEnvironment(value); return *this;}

    /**
     * <p>The target virtualization environment.</p>
     */
    inline InstanceExportDetails& WithTargetEnvironment(ExportEnvironment&& value) { SetTargetEnvironment(value); return *this;}

  private:
    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;
    ExportEnvironment m_targetEnvironment;
    bool m_targetEnvironmentHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
