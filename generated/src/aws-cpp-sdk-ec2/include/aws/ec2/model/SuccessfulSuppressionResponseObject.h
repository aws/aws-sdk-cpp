/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/EC2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace EC2 {
namespace Model {

/**
 * <p>Describes a successful application status check suppression.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/SuccessfulSuppressionResponseObject">AWS
 * API Reference</a></p>
 */
class SuccessfulSuppressionResponseObject {
 public:
  AWS_EC2_API SuccessfulSuppressionResponseObject() = default;
  AWS_EC2_API SuccessfulSuppressionResponseObject(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_EC2_API SuccessfulSuppressionResponseObject& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The ID of the instance.</p>
   */
  inline const Aws::String& GetInstanceId() const { return m_instanceId; }
  inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
  template <typename InstanceIdT = Aws::String>
  void SetInstanceId(InstanceIdT&& value) {
    m_instanceIdHasBeenSet = true;
    m_instanceId = std::forward<InstanceIdT>(value);
  }
  template <typename InstanceIdT = Aws::String>
  SuccessfulSuppressionResponseObject& WithInstanceId(InstanceIdT&& value) {
    SetInstanceId(std::forward<InstanceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when suppression started.</p>
   */
  inline const Aws::Utils::DateTime& GetSuppressAt() const { return m_suppressAt; }
  inline bool SuppressAtHasBeenSet() const { return m_suppressAtHasBeenSet; }
  template <typename SuppressAtT = Aws::Utils::DateTime>
  void SetSuppressAt(SuppressAtT&& value) {
    m_suppressAtHasBeenSet = true;
    m_suppressAt = std::forward<SuppressAtT>(value);
  }
  template <typename SuppressAtT = Aws::Utils::DateTime>
  SuccessfulSuppressionResponseObject& WithSuppressAt(SuppressAtT&& value) {
    SetSuppressAt(std::forward<SuppressAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when suppression ends and health checks resume.</p>
   */
  inline const Aws::Utils::DateTime& GetResumeAt() const { return m_resumeAt; }
  inline bool ResumeAtHasBeenSet() const { return m_resumeAtHasBeenSet; }
  template <typename ResumeAtT = Aws::Utils::DateTime>
  void SetResumeAt(ResumeAtT&& value) {
    m_resumeAtHasBeenSet = true;
    m_resumeAt = std::forward<ResumeAtT>(value);
  }
  template <typename ResumeAtT = Aws::Utils::DateTime>
  SuccessfulSuppressionResponseObject& WithResumeAt(ResumeAtT&& value) {
    SetResumeAt(std::forward<ResumeAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceId;

  Aws::Utils::DateTime m_suppressAt{};

  Aws::Utils::DateTime m_resumeAt{};
  bool m_instanceIdHasBeenSet = false;
  bool m_suppressAtHasBeenSet = false;
  bool m_resumeAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
