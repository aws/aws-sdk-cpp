/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The status of an updated pointer (PTR) record for an Elastic IP
   * address.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/PtrUpdateStatus">AWS
   * API Reference</a></p>
   */
  class PtrUpdateStatus
  {
  public:
    AWS_EC2_API PtrUpdateStatus();
    AWS_EC2_API PtrUpdateStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API PtrUpdateStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The value for the PTR record update.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value for the PTR record update.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value for the PTR record update.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value for the PTR record update.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value for the PTR record update.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value for the PTR record update.</p>
     */
    inline PtrUpdateStatus& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value for the PTR record update.</p>
     */
    inline PtrUpdateStatus& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value for the PTR record update.</p>
     */
    inline PtrUpdateStatus& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>The status of the PTR record update.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the PTR record update.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the PTR record update.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the PTR record update.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the PTR record update.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the PTR record update.</p>
     */
    inline PtrUpdateStatus& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the PTR record update.</p>
     */
    inline PtrUpdateStatus& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the PTR record update.</p>
     */
    inline PtrUpdateStatus& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The reason for the PTR record update.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p>The reason for the PTR record update.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>The reason for the PTR record update.</p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>The reason for the PTR record update.</p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>The reason for the PTR record update.</p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p>The reason for the PTR record update.</p>
     */
    inline PtrUpdateStatus& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p>The reason for the PTR record update.</p>
     */
    inline PtrUpdateStatus& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}

    /**
     * <p>The reason for the PTR record update.</p>
     */
    inline PtrUpdateStatus& WithReason(const char* value) { SetReason(value); return *this;}

  private:

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
