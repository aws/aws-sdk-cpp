/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace CloudFormation {
namespace Model {

/**
 * <p>Event filter allows you to focus on specific events in an
 * operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/EventFilter">AWS
 * API Reference</a></p>
 */
class EventFilter {
 public:
  AWS_CLOUDFORMATION_API EventFilter() = default;
  AWS_CLOUDFORMATION_API EventFilter(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_CLOUDFORMATION_API EventFilter& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>When set to true, only returns failed events within the operation. This helps
   * quickly identify root causes for a failed operation.</p>
   */
  inline bool GetFailedEvents() const { return m_failedEvents; }
  inline bool FailedEventsHasBeenSet() const { return m_failedEventsHasBeenSet; }
  inline void SetFailedEvents(bool value) {
    m_failedEventsHasBeenSet = true;
    m_failedEvents = value;
  }
  inline EventFilter& WithFailedEvents(bool value) {
    SetFailedEvents(value);
    return *this;
  }
  ///@}
 private:
  bool m_failedEvents{false};
  bool m_failedEventsHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudFormation
}  // namespace Aws
