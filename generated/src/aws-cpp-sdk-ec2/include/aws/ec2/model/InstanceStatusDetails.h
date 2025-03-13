/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ec2/model/StatusName.h>
#include <aws/ec2/model/StatusType.h>
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
   * <p>Describes the instance status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InstanceStatusDetails">AWS
   * API Reference</a></p>
   */
  class InstanceStatusDetails
  {
  public:
    AWS_EC2_API InstanceStatusDetails() = default;
    AWS_EC2_API InstanceStatusDetails(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InstanceStatusDetails& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The time when a status check failed. For an instance that was launched and
     * impaired, this is the time when the instance was launched.</p>
     */
    inline const Aws::Utils::DateTime& GetImpairedSince() const { return m_impairedSince; }
    inline bool ImpairedSinceHasBeenSet() const { return m_impairedSinceHasBeenSet; }
    template<typename ImpairedSinceT = Aws::Utils::DateTime>
    void SetImpairedSince(ImpairedSinceT&& value) { m_impairedSinceHasBeenSet = true; m_impairedSince = std::forward<ImpairedSinceT>(value); }
    template<typename ImpairedSinceT = Aws::Utils::DateTime>
    InstanceStatusDetails& WithImpairedSince(ImpairedSinceT&& value) { SetImpairedSince(std::forward<ImpairedSinceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of instance status.</p>
     */
    inline StatusName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(StatusName value) { m_nameHasBeenSet = true; m_name = value; }
    inline InstanceStatusDetails& WithName(StatusName value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status.</p>
     */
    inline StatusType GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(StatusType value) { m_statusHasBeenSet = true; m_status = value; }
    inline InstanceStatusDetails& WithStatus(StatusType value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_impairedSince{};
    bool m_impairedSinceHasBeenSet = false;

    StatusName m_name{StatusName::NOT_SET};
    bool m_nameHasBeenSet = false;

    StatusType m_status{StatusType::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
