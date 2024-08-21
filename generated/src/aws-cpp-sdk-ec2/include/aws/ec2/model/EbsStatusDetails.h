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
   * <p>Describes the attached EBS status check for an instance.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/EbsStatusDetails">AWS
   * API Reference</a></p>
   */
  class EbsStatusDetails
  {
  public:
    AWS_EC2_API EbsStatusDetails();
    AWS_EC2_API EbsStatusDetails(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API EbsStatusDetails& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The date and time when the attached EBS status check failed.</p>
     */
    inline const Aws::Utils::DateTime& GetImpairedSince() const{ return m_impairedSince; }
    inline bool ImpairedSinceHasBeenSet() const { return m_impairedSinceHasBeenSet; }
    inline void SetImpairedSince(const Aws::Utils::DateTime& value) { m_impairedSinceHasBeenSet = true; m_impairedSince = value; }
    inline void SetImpairedSince(Aws::Utils::DateTime&& value) { m_impairedSinceHasBeenSet = true; m_impairedSince = std::move(value); }
    inline EbsStatusDetails& WithImpairedSince(const Aws::Utils::DateTime& value) { SetImpairedSince(value); return *this;}
    inline EbsStatusDetails& WithImpairedSince(Aws::Utils::DateTime&& value) { SetImpairedSince(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the attached EBS status check.</p>
     */
    inline const StatusName& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const StatusName& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(StatusName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline EbsStatusDetails& WithName(const StatusName& value) { SetName(value); return *this;}
    inline EbsStatusDetails& WithName(StatusName&& value) { SetName(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The result of the attached EBS status check.</p>
     */
    inline const StatusType& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const StatusType& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(StatusType&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline EbsStatusDetails& WithStatus(const StatusType& value) { SetStatus(value); return *this;}
    inline EbsStatusDetails& WithStatus(StatusType&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_impairedSince;
    bool m_impairedSinceHasBeenSet = false;

    StatusName m_name;
    bool m_nameHasBeenSet = false;

    StatusType m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
