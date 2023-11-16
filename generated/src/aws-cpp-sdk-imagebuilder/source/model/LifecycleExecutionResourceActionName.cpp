/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/LifecycleExecutionResourceActionName.h>
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
      namespace LifecycleExecutionResourceActionNameMapper
      {

        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int DELETE__HASH = HashingUtils::HashString("DELETE");
        static const int DEPRECATE_HASH = HashingUtils::HashString("DEPRECATE");
        static const int DISABLE_HASH = HashingUtils::HashString("DISABLE");


        LifecycleExecutionResourceActionName GetLifecycleExecutionResourceActionNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AVAILABLE_HASH)
          {
            return LifecycleExecutionResourceActionName::AVAILABLE;
          }
          else if (hashCode == DELETE__HASH)
          {
            return LifecycleExecutionResourceActionName::DELETE_;
          }
          else if (hashCode == DEPRECATE_HASH)
          {
            return LifecycleExecutionResourceActionName::DEPRECATE;
          }
          else if (hashCode == DISABLE_HASH)
          {
            return LifecycleExecutionResourceActionName::DISABLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LifecycleExecutionResourceActionName>(hashCode);
          }

          return LifecycleExecutionResourceActionName::NOT_SET;
        }

        Aws::String GetNameForLifecycleExecutionResourceActionName(LifecycleExecutionResourceActionName enumValue)
        {
          switch(enumValue)
          {
          case LifecycleExecutionResourceActionName::NOT_SET:
            return {};
          case LifecycleExecutionResourceActionName::AVAILABLE:
            return "AVAILABLE";
          case LifecycleExecutionResourceActionName::DELETE_:
            return "DELETE";
          case LifecycleExecutionResourceActionName::DEPRECATE:
            return "DEPRECATE";
          case LifecycleExecutionResourceActionName::DISABLE:
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

      } // namespace LifecycleExecutionResourceActionNameMapper
    } // namespace Model
  } // namespace imagebuilder
} // namespace Aws
