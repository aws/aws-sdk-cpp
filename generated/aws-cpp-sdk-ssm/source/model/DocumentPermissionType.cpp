/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/DocumentPermissionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace DocumentPermissionTypeMapper
      {

        static const int Share_HASH = HashingUtils::HashString("Share");


        DocumentPermissionType GetDocumentPermissionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Share_HASH)
          {
            return DocumentPermissionType::Share;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DocumentPermissionType>(hashCode);
          }

          return DocumentPermissionType::NOT_SET;
        }

        Aws::String GetNameForDocumentPermissionType(DocumentPermissionType enumValue)
        {
          switch(enumValue)
          {
          case DocumentPermissionType::Share:
            return "Share";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DocumentPermissionTypeMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
