/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dlm/model/DefaultPolicyTypeValues.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DLM
  {
    namespace Model
    {
      namespace DefaultPolicyTypeValuesMapper
      {

        static const int VOLUME_HASH = HashingUtils::HashString("VOLUME");
        static const int INSTANCE_HASH = HashingUtils::HashString("INSTANCE");


        DefaultPolicyTypeValues GetDefaultPolicyTypeValuesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VOLUME_HASH)
          {
            return DefaultPolicyTypeValues::VOLUME;
          }
          else if (hashCode == INSTANCE_HASH)
          {
            return DefaultPolicyTypeValues::INSTANCE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DefaultPolicyTypeValues>(hashCode);
          }

          return DefaultPolicyTypeValues::NOT_SET;
        }

        Aws::String GetNameForDefaultPolicyTypeValues(DefaultPolicyTypeValues enumValue)
        {
          switch(enumValue)
          {
          case DefaultPolicyTypeValues::NOT_SET:
            return {};
          case DefaultPolicyTypeValues::VOLUME:
            return "VOLUME";
          case DefaultPolicyTypeValues::INSTANCE:
            return "INSTANCE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DefaultPolicyTypeValuesMapper
    } // namespace Model
  } // namespace DLM
} // namespace Aws
