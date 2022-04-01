/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/RemediationTargetType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConfigService
  {
    namespace Model
    {
      namespace RemediationTargetTypeMapper
      {

        static const int SSM_DOCUMENT_HASH = HashingUtils::HashString("SSM_DOCUMENT");


        RemediationTargetType GetRemediationTargetTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SSM_DOCUMENT_HASH)
          {
            return RemediationTargetType::SSM_DOCUMENT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RemediationTargetType>(hashCode);
          }

          return RemediationTargetType::NOT_SET;
        }

        Aws::String GetNameForRemediationTargetType(RemediationTargetType enumValue)
        {
          switch(enumValue)
          {
          case RemediationTargetType::SSM_DOCUMENT:
            return "SSM_DOCUMENT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RemediationTargetTypeMapper
    } // namespace Model
  } // namespace ConfigService
} // namespace Aws
