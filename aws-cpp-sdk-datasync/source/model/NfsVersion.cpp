/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/datasync/model/NfsVersion.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataSync
  {
    namespace Model
    {
      namespace NfsVersionMapper
      {

        static const int AUTOMATIC_HASH = HashingUtils::HashString("AUTOMATIC");
        static const int NFS3_HASH = HashingUtils::HashString("NFS3");
        static const int NFS4_0_HASH = HashingUtils::HashString("NFS4_0");
        static const int NFS4_1_HASH = HashingUtils::HashString("NFS4_1");


        NfsVersion GetNfsVersionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTOMATIC_HASH)
          {
            return NfsVersion::AUTOMATIC;
          }
          else if (hashCode == NFS3_HASH)
          {
            return NfsVersion::NFS3;
          }
          else if (hashCode == NFS4_0_HASH)
          {
            return NfsVersion::NFS4_0;
          }
          else if (hashCode == NFS4_1_HASH)
          {
            return NfsVersion::NFS4_1;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NfsVersion>(hashCode);
          }

          return NfsVersion::NOT_SET;
        }

        Aws::String GetNameForNfsVersion(NfsVersion enumValue)
        {
          switch(enumValue)
          {
          case NfsVersion::AUTOMATIC:
            return "AUTOMATIC";
          case NfsVersion::NFS3:
            return "NFS3";
          case NfsVersion::NFS4_0:
            return "NFS4_0";
          case NfsVersion::NFS4_1:
            return "NFS4_1";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NfsVersionMapper
    } // namespace Model
  } // namespace DataSync
} // namespace Aws
