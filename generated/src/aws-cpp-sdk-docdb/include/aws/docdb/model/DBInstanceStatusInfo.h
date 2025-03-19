/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb/DocDB_EXPORTS.h>
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
namespace DocDB
{
namespace Model
{

  /**
   * <p>Provides a list of status information for an instance.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/DBInstanceStatusInfo">AWS
   * API Reference</a></p>
   */
  class DBInstanceStatusInfo
  {
  public:
    AWS_DOCDB_API DBInstanceStatusInfo() = default;
    AWS_DOCDB_API DBInstanceStatusInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_DOCDB_API DBInstanceStatusInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_DOCDB_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_DOCDB_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>This value is currently "<code>read replication</code>."</p>
     */
    inline const Aws::String& GetStatusType() const { return m_statusType; }
    inline bool StatusTypeHasBeenSet() const { return m_statusTypeHasBeenSet; }
    template<typename StatusTypeT = Aws::String>
    void SetStatusType(StatusTypeT&& value) { m_statusTypeHasBeenSet = true; m_statusType = std::forward<StatusTypeT>(value); }
    template<typename StatusTypeT = Aws::String>
    DBInstanceStatusInfo& WithStatusType(StatusTypeT&& value) { SetStatusType(std::forward<StatusTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value that is <code>true</code> if the instance is operating
     * normally, or <code>false</code> if the instance is in an error state.</p>
     */
    inline bool GetNormal() const { return m_normal; }
    inline bool NormalHasBeenSet() const { return m_normalHasBeenSet; }
    inline void SetNormal(bool value) { m_normalHasBeenSet = true; m_normal = value; }
    inline DBInstanceStatusInfo& WithNormal(bool value) { SetNormal(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the instance. For a <code>StatusType</code> of read replica, the
     * values can be <code>replicating</code>, error, <code>stopped</code>, or
     * <code>terminated</code>.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    DBInstanceStatusInfo& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details of the error if there is an error for the instance. If the instance
     * is not in an error state, this value is blank.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    DBInstanceStatusInfo& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_statusType;
    bool m_statusTypeHasBeenSet = false;

    bool m_normal{false};
    bool m_normalHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
