/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CapacityReservationInstancePlatform.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace CapacityReservationInstancePlatformMapper
      {

        static const int Linux_UNIX_HASH = HashingUtils::HashString("Linux/UNIX");
        static const int Red_Hat_Enterprise_Linux_HASH = HashingUtils::HashString("Red Hat Enterprise Linux");
        static const int SUSE_Linux_HASH = HashingUtils::HashString("SUSE Linux");
        static const int Windows_HASH = HashingUtils::HashString("Windows");
        static const int Windows_with_SQL_Server_HASH = HashingUtils::HashString("Windows with SQL Server");
        static const int Windows_with_SQL_Server_Enterprise_HASH = HashingUtils::HashString("Windows with SQL Server Enterprise");
        static const int Windows_with_SQL_Server_Standard_HASH = HashingUtils::HashString("Windows with SQL Server Standard");
        static const int Windows_with_SQL_Server_Web_HASH = HashingUtils::HashString("Windows with SQL Server Web");
        static const int Linux_with_SQL_Server_Standard_HASH = HashingUtils::HashString("Linux with SQL Server Standard");
        static const int Linux_with_SQL_Server_Web_HASH = HashingUtils::HashString("Linux with SQL Server Web");
        static const int Linux_with_SQL_Server_Enterprise_HASH = HashingUtils::HashString("Linux with SQL Server Enterprise");
        static const int RHEL_with_SQL_Server_Standard_HASH = HashingUtils::HashString("RHEL with SQL Server Standard");
        static const int RHEL_with_SQL_Server_Enterprise_HASH = HashingUtils::HashString("RHEL with SQL Server Enterprise");
        static const int RHEL_with_SQL_Server_Web_HASH = HashingUtils::HashString("RHEL with SQL Server Web");
        static const int RHEL_with_HA_HASH = HashingUtils::HashString("RHEL with HA");
        static const int RHEL_with_HA_and_SQL_Server_Standard_HASH = HashingUtils::HashString("RHEL with HA and SQL Server Standard");
        static const int RHEL_with_HA_and_SQL_Server_Enterprise_HASH = HashingUtils::HashString("RHEL with HA and SQL Server Enterprise");
        static const int Ubuntu_Pro_HASH = HashingUtils::HashString("Ubuntu Pro");


        CapacityReservationInstancePlatform GetCapacityReservationInstancePlatformForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Linux_UNIX_HASH)
          {
            return CapacityReservationInstancePlatform::Linux_UNIX;
          }
          else if (hashCode == Red_Hat_Enterprise_Linux_HASH)
          {
            return CapacityReservationInstancePlatform::Red_Hat_Enterprise_Linux;
          }
          else if (hashCode == SUSE_Linux_HASH)
          {
            return CapacityReservationInstancePlatform::SUSE_Linux;
          }
          else if (hashCode == Windows_HASH)
          {
            return CapacityReservationInstancePlatform::Windows;
          }
          else if (hashCode == Windows_with_SQL_Server_HASH)
          {
            return CapacityReservationInstancePlatform::Windows_with_SQL_Server;
          }
          else if (hashCode == Windows_with_SQL_Server_Enterprise_HASH)
          {
            return CapacityReservationInstancePlatform::Windows_with_SQL_Server_Enterprise;
          }
          else if (hashCode == Windows_with_SQL_Server_Standard_HASH)
          {
            return CapacityReservationInstancePlatform::Windows_with_SQL_Server_Standard;
          }
          else if (hashCode == Windows_with_SQL_Server_Web_HASH)
          {
            return CapacityReservationInstancePlatform::Windows_with_SQL_Server_Web;
          }
          else if (hashCode == Linux_with_SQL_Server_Standard_HASH)
          {
            return CapacityReservationInstancePlatform::Linux_with_SQL_Server_Standard;
          }
          else if (hashCode == Linux_with_SQL_Server_Web_HASH)
          {
            return CapacityReservationInstancePlatform::Linux_with_SQL_Server_Web;
          }
          else if (hashCode == Linux_with_SQL_Server_Enterprise_HASH)
          {
            return CapacityReservationInstancePlatform::Linux_with_SQL_Server_Enterprise;
          }
          else if (hashCode == RHEL_with_SQL_Server_Standard_HASH)
          {
            return CapacityReservationInstancePlatform::RHEL_with_SQL_Server_Standard;
          }
          else if (hashCode == RHEL_with_SQL_Server_Enterprise_HASH)
          {
            return CapacityReservationInstancePlatform::RHEL_with_SQL_Server_Enterprise;
          }
          else if (hashCode == RHEL_with_SQL_Server_Web_HASH)
          {
            return CapacityReservationInstancePlatform::RHEL_with_SQL_Server_Web;
          }
          else if (hashCode == RHEL_with_HA_HASH)
          {
            return CapacityReservationInstancePlatform::RHEL_with_HA;
          }
          else if (hashCode == RHEL_with_HA_and_SQL_Server_Standard_HASH)
          {
            return CapacityReservationInstancePlatform::RHEL_with_HA_and_SQL_Server_Standard;
          }
          else if (hashCode == RHEL_with_HA_and_SQL_Server_Enterprise_HASH)
          {
            return CapacityReservationInstancePlatform::RHEL_with_HA_and_SQL_Server_Enterprise;
          }
          else if (hashCode == Ubuntu_Pro_HASH)
          {
            return CapacityReservationInstancePlatform::Ubuntu_Pro;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CapacityReservationInstancePlatform>(hashCode);
          }

          return CapacityReservationInstancePlatform::NOT_SET;
        }

        Aws::String GetNameForCapacityReservationInstancePlatform(CapacityReservationInstancePlatform enumValue)
        {
          switch(enumValue)
          {
          case CapacityReservationInstancePlatform::NOT_SET:
            return {};
          case CapacityReservationInstancePlatform::Linux_UNIX:
            return "Linux/UNIX";
          case CapacityReservationInstancePlatform::Red_Hat_Enterprise_Linux:
            return "Red Hat Enterprise Linux";
          case CapacityReservationInstancePlatform::SUSE_Linux:
            return "SUSE Linux";
          case CapacityReservationInstancePlatform::Windows:
            return "Windows";
          case CapacityReservationInstancePlatform::Windows_with_SQL_Server:
            return "Windows with SQL Server";
          case CapacityReservationInstancePlatform::Windows_with_SQL_Server_Enterprise:
            return "Windows with SQL Server Enterprise";
          case CapacityReservationInstancePlatform::Windows_with_SQL_Server_Standard:
            return "Windows with SQL Server Standard";
          case CapacityReservationInstancePlatform::Windows_with_SQL_Server_Web:
            return "Windows with SQL Server Web";
          case CapacityReservationInstancePlatform::Linux_with_SQL_Server_Standard:
            return "Linux with SQL Server Standard";
          case CapacityReservationInstancePlatform::Linux_with_SQL_Server_Web:
            return "Linux with SQL Server Web";
          case CapacityReservationInstancePlatform::Linux_with_SQL_Server_Enterprise:
            return "Linux with SQL Server Enterprise";
          case CapacityReservationInstancePlatform::RHEL_with_SQL_Server_Standard:
            return "RHEL with SQL Server Standard";
          case CapacityReservationInstancePlatform::RHEL_with_SQL_Server_Enterprise:
            return "RHEL with SQL Server Enterprise";
          case CapacityReservationInstancePlatform::RHEL_with_SQL_Server_Web:
            return "RHEL with SQL Server Web";
          case CapacityReservationInstancePlatform::RHEL_with_HA:
            return "RHEL with HA";
          case CapacityReservationInstancePlatform::RHEL_with_HA_and_SQL_Server_Standard:
            return "RHEL with HA and SQL Server Standard";
          case CapacityReservationInstancePlatform::RHEL_with_HA_and_SQL_Server_Enterprise:
            return "RHEL with HA and SQL Server Enterprise";
          case CapacityReservationInstancePlatform::Ubuntu_Pro:
            return "Ubuntu Pro";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CapacityReservationInstancePlatformMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
