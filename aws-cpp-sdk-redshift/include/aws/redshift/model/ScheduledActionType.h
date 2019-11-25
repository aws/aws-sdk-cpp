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
#include <aws/redshift/model/ResizeClusterMessage.h>
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
   * <p>The action type that specifies an Amazon Redshift API operation that is
   * supported by the Amazon Redshift scheduler. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ScheduledActionType">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API ScheduledActionType
  {
  public:
    ScheduledActionType();
    ScheduledActionType(const Aws::Utils::Xml::XmlNode& xmlNode);
    ScheduledActionType& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>An action that runs a <code>ResizeCluster</code> API operation. </p>
     */
    inline const ResizeClusterMessage& GetResizeCluster() const{ return m_resizeCluster; }

    /**
     * <p>An action that runs a <code>ResizeCluster</code> API operation. </p>
     */
    inline bool ResizeClusterHasBeenSet() const { return m_resizeClusterHasBeenSet; }

    /**
     * <p>An action that runs a <code>ResizeCluster</code> API operation. </p>
     */
    inline void SetResizeCluster(const ResizeClusterMessage& value) { m_resizeClusterHasBeenSet = true; m_resizeCluster = value; }

    /**
     * <p>An action that runs a <code>ResizeCluster</code> API operation. </p>
     */
    inline void SetResizeCluster(ResizeClusterMessage&& value) { m_resizeClusterHasBeenSet = true; m_resizeCluster = std::move(value); }

    /**
     * <p>An action that runs a <code>ResizeCluster</code> API operation. </p>
     */
    inline ScheduledActionType& WithResizeCluster(const ResizeClusterMessage& value) { SetResizeCluster(value); return *this;}

    /**
     * <p>An action that runs a <code>ResizeCluster</code> API operation. </p>
     */
    inline ScheduledActionType& WithResizeCluster(ResizeClusterMessage&& value) { SetResizeCluster(std::move(value)); return *this;}

  private:

    ResizeClusterMessage m_resizeCluster;
    bool m_resizeClusterHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
