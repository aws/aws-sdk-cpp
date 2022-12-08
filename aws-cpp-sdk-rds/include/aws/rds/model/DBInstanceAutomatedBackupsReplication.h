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
   * <p>Automated backups of a DB instance replicated to another Amazon Web Services
   * Region. They consist of system backups, transaction logs, and database instance
   * properties.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBInstanceAutomatedBackupsReplication">AWS
   * API Reference</a></p>
   */
  class DBInstanceAutomatedBackupsReplication
  {
  public:
    AWS_RDS_API DBInstanceAutomatedBackupsReplication();
    AWS_RDS_API DBInstanceAutomatedBackupsReplication(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API DBInstanceAutomatedBackupsReplication& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The Amazon Resource Name (ARN) of the replicated automated backups.</p>
     */
    inline const Aws::String& GetDBInstanceAutomatedBackupsArn() const{ return m_dBInstanceAutomatedBackupsArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replicated automated backups.</p>
     */
    inline bool DBInstanceAutomatedBackupsArnHasBeenSet() const { return m_dBInstanceAutomatedBackupsArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replicated automated backups.</p>
     */
    inline void SetDBInstanceAutomatedBackupsArn(const Aws::String& value) { m_dBInstanceAutomatedBackupsArnHasBeenSet = true; m_dBInstanceAutomatedBackupsArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replicated automated backups.</p>
     */
    inline void SetDBInstanceAutomatedBackupsArn(Aws::String&& value) { m_dBInstanceAutomatedBackupsArnHasBeenSet = true; m_dBInstanceAutomatedBackupsArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the replicated automated backups.</p>
     */
    inline void SetDBInstanceAutomatedBackupsArn(const char* value) { m_dBInstanceAutomatedBackupsArnHasBeenSet = true; m_dBInstanceAutomatedBackupsArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the replicated automated backups.</p>
     */
    inline DBInstanceAutomatedBackupsReplication& WithDBInstanceAutomatedBackupsArn(const Aws::String& value) { SetDBInstanceAutomatedBackupsArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the replicated automated backups.</p>
     */
    inline DBInstanceAutomatedBackupsReplication& WithDBInstanceAutomatedBackupsArn(Aws::String&& value) { SetDBInstanceAutomatedBackupsArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the replicated automated backups.</p>
     */
    inline DBInstanceAutomatedBackupsReplication& WithDBInstanceAutomatedBackupsArn(const char* value) { SetDBInstanceAutomatedBackupsArn(value); return *this;}

  private:

    Aws::String m_dBInstanceAutomatedBackupsArn;
    bool m_dBInstanceAutomatedBackupsArnHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
