﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/UnsuccessfulInstanceCreditSpecificationItemError.h>
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
   * <p>Describes the burstable performance instance whose credit option for CPU
   * usage was not modified.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/UnsuccessfulInstanceCreditSpecificationItem">AWS
   * API Reference</a></p>
   */
  class UnsuccessfulInstanceCreditSpecificationItem
  {
  public:
    AWS_EC2_API UnsuccessfulInstanceCreditSpecificationItem() = default;
    AWS_EC2_API UnsuccessfulInstanceCreditSpecificationItem(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API UnsuccessfulInstanceCreditSpecificationItem& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    UnsuccessfulInstanceCreditSpecificationItem& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The applicable error for the burstable performance instance whose credit
     * option for CPU usage was not modified.</p>
     */
    inline const UnsuccessfulInstanceCreditSpecificationItemError& GetError() const { return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    template<typename ErrorT = UnsuccessfulInstanceCreditSpecificationItemError>
    void SetError(ErrorT&& value) { m_errorHasBeenSet = true; m_error = std::forward<ErrorT>(value); }
    template<typename ErrorT = UnsuccessfulInstanceCreditSpecificationItemError>
    UnsuccessfulInstanceCreditSpecificationItem& WithError(ErrorT&& value) { SetError(std::forward<ErrorT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    UnsuccessfulInstanceCreditSpecificationItemError m_error;
    bool m_errorHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
