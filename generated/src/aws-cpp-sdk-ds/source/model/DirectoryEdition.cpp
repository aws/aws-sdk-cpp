/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/DirectoryEdition.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DirectoryService
  {
    namespace Model
    {
      namespace DirectoryEditionMapper
      {

        static const int Enterprise_HASH = HashingUtils::HashString("Enterprise");
        static const int Standard_HASH = HashingUtils::HashString("Standard");


        DirectoryEdition GetDirectoryEditionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Enterprise_HASH)
          {
            return DirectoryEdition::Enterprise;
          }
          else if (hashCode == Standard_HASH)
          {
            return DirectoryEdition::Standard;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DirectoryEdition>(hashCode);
          }

          return DirectoryEdition::NOT_SET;
        }

        Aws::String GetNameForDirectoryEdition(DirectoryEdition enumValue)
        {
          switch(enumValue)
          {
          case DirectoryEdition::Enterprise:
            return "Enterprise";
          case DirectoryEdition::Standard:
            return "Standard";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DirectoryEditionMapper
    } // namespace Model
  } // namespace DirectoryService
} // namespace Aws
