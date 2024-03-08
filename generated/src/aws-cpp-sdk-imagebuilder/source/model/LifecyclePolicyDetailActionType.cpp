/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/LifecyclePolicyDetailActionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace imagebuilder
  {
    namespace Model
    {
      namespace LifecyclePolicyDetailActionTypeMapper
      {

        static const int DELETE__HASH = HashingUtils::HashString("DELETE");
        static const int DEPRECATE_HASH = HashingUtils::HashString("DEPRECATE");
        static const int DISABLE_HASH = HashingUtils::HashString("DISABLE");


        LifecyclePolicyDetailActionType GetLifecyclePolicyDetailActionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DELETE__HASH)
          {
            return LifecyclePolicyDetailActionType::DELETE_;
          }
          else if (hashCode == DEPRECATE_HASH)
          {
            return LifecyclePolicyDetailActionType::DEPRECATE;
          }
          else if (hashCode == DISABLE_HASH)
          {
            return LifecyclePolicyDetailActionType::DISABLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LifecyclePolicyDetailActionType>(hashCode);
          }

          return LifecyclePolicyDetailActionType::NOT_SET;
        }

        Aws::String GetNameForLifecyclePolicyDetailActionType(LifecyclePolicyDetailActionType enumValue)
        {
          switch(enumValue)
          {
          case LifecyclePolicyDetailActionType::NOT_SET:
            return {};
          case LifecyclePolicyDetailActionType::DELETE_:
            return "DELETE";
          case LifecyclePolicyDetailActionType::DEPRECATE:
            return "DEPRECATE";
          case LifecyclePolicyDetailActionType::DISABLE:
            return "DISABLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LifecyclePolicyDetailActionTypeMapper
    } // namespace Model
  } // namespace imagebuilder
} // namespace Aws
