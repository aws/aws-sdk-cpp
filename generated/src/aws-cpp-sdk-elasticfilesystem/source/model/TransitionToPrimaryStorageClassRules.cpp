/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticfilesystem/model/TransitionToPrimaryStorageClassRules.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EFS
  {
    namespace Model
    {
      namespace TransitionToPrimaryStorageClassRulesMapper
      {

        static const int AFTER_1_ACCESS_HASH = HashingUtils::HashString("AFTER_1_ACCESS");


        TransitionToPrimaryStorageClassRules GetTransitionToPrimaryStorageClassRulesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AFTER_1_ACCESS_HASH)
          {
            return TransitionToPrimaryStorageClassRules::AFTER_1_ACCESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TransitionToPrimaryStorageClassRules>(hashCode);
          }

          return TransitionToPrimaryStorageClassRules::NOT_SET;
        }

        Aws::String GetNameForTransitionToPrimaryStorageClassRules(TransitionToPrimaryStorageClassRules enumValue)
        {
          switch(enumValue)
          {
          case TransitionToPrimaryStorageClassRules::NOT_SET:
            return {};
          case TransitionToPrimaryStorageClassRules::AFTER_1_ACCESS:
            return "AFTER_1_ACCESS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TransitionToPrimaryStorageClassRulesMapper
    } // namespace Model
  } // namespace EFS
} // namespace Aws
