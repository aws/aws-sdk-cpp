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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/SummaryStatus.h>
#include <aws/ec2/model/InstanceStatusDetails.h>
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
   * <p>Describes the status of an instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InstanceStatusSummary">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API InstanceStatusSummary
  {
  public:
    InstanceStatusSummary();
    InstanceStatusSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    InstanceStatusSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The system instance health or application instance health.</p>
     */
    inline const Aws::Vector<InstanceStatusDetails>& GetDetails() const{ return m_details; }

    /**
     * <p>The system instance health or application instance health.</p>
     */
    inline void SetDetails(const Aws::Vector<InstanceStatusDetails>& value) { m_detailsHasBeenSet = true; m_details = value; }

    /**
     * <p>The system instance health or application instance health.</p>
     */
    inline void SetDetails(Aws::Vector<InstanceStatusDetails>&& value) { m_detailsHasBeenSet = true; m_details = std::move(value); }

    /**
     * <p>The system instance health or application instance health.</p>
     */
    inline InstanceStatusSummary& WithDetails(const Aws::Vector<InstanceStatusDetails>& value) { SetDetails(value); return *this;}

    /**
     * <p>The system instance health or application instance health.</p>
     */
    inline InstanceStatusSummary& WithDetails(Aws::Vector<InstanceStatusDetails>&& value) { SetDetails(std::move(value)); return *this;}

    /**
     * <p>The system instance health or application instance health.</p>
     */
    inline InstanceStatusSummary& AddDetails(const InstanceStatusDetails& value) { m_detailsHasBeenSet = true; m_details.push_back(value); return *this; }

    /**
     * <p>The system instance health or application instance health.</p>
     */
    inline InstanceStatusSummary& AddDetails(InstanceStatusDetails&& value) { m_detailsHasBeenSet = true; m_details.push_back(std::move(value)); return *this; }


    /**
     * <p>The status.</p>
     */
    inline const SummaryStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status.</p>
     */
    inline void SetStatus(const SummaryStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status.</p>
     */
    inline void SetStatus(SummaryStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status.</p>
     */
    inline InstanceStatusSummary& WithStatus(const SummaryStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status.</p>
     */
    inline InstanceStatusSummary& WithStatus(SummaryStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::Vector<InstanceStatusDetails> m_details;
    bool m_detailsHasBeenSet;

    SummaryStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
