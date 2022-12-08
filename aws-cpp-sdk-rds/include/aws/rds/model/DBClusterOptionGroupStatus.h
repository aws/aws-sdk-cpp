/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
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
namespace RDS
{
namespace Model
{

  /**
   * <p>Contains status information for a DB cluster option group.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBClusterOptionGroupStatus">AWS
   * API Reference</a></p>
   */
  class DBClusterOptionGroupStatus
  {
  public:
    AWS_RDS_API DBClusterOptionGroupStatus();
    AWS_RDS_API DBClusterOptionGroupStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API DBClusterOptionGroupStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Specifies the name of the DB cluster option group.</p>
     */
    inline const Aws::String& GetDBClusterOptionGroupName() const{ return m_dBClusterOptionGroupName; }

    /**
     * <p>Specifies the name of the DB cluster option group.</p>
     */
    inline bool DBClusterOptionGroupNameHasBeenSet() const { return m_dBClusterOptionGroupNameHasBeenSet; }

    /**
     * <p>Specifies the name of the DB cluster option group.</p>
     */
    inline void SetDBClusterOptionGroupName(const Aws::String& value) { m_dBClusterOptionGroupNameHasBeenSet = true; m_dBClusterOptionGroupName = value; }

    /**
     * <p>Specifies the name of the DB cluster option group.</p>
     */
    inline void SetDBClusterOptionGroupName(Aws::String&& value) { m_dBClusterOptionGroupNameHasBeenSet = true; m_dBClusterOptionGroupName = std::move(value); }

    /**
     * <p>Specifies the name of the DB cluster option group.</p>
     */
    inline void SetDBClusterOptionGroupName(const char* value) { m_dBClusterOptionGroupNameHasBeenSet = true; m_dBClusterOptionGroupName.assign(value); }

    /**
     * <p>Specifies the name of the DB cluster option group.</p>
     */
    inline DBClusterOptionGroupStatus& WithDBClusterOptionGroupName(const Aws::String& value) { SetDBClusterOptionGroupName(value); return *this;}

    /**
     * <p>Specifies the name of the DB cluster option group.</p>
     */
    inline DBClusterOptionGroupStatus& WithDBClusterOptionGroupName(Aws::String&& value) { SetDBClusterOptionGroupName(std::move(value)); return *this;}

    /**
     * <p>Specifies the name of the DB cluster option group.</p>
     */
    inline DBClusterOptionGroupStatus& WithDBClusterOptionGroupName(const char* value) { SetDBClusterOptionGroupName(value); return *this;}


    /**
     * <p>Specifies the status of the DB cluster option group.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>Specifies the status of the DB cluster option group.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Specifies the status of the DB cluster option group.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Specifies the status of the DB cluster option group.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Specifies the status of the DB cluster option group.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>Specifies the status of the DB cluster option group.</p>
     */
    inline DBClusterOptionGroupStatus& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>Specifies the status of the DB cluster option group.</p>
     */
    inline DBClusterOptionGroupStatus& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>Specifies the status of the DB cluster option group.</p>
     */
    inline DBClusterOptionGroupStatus& WithStatus(const char* value) { SetStatus(value); return *this;}

  private:

    Aws::String m_dBClusterOptionGroupName;
    bool m_dBClusterOptionGroupNameHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
