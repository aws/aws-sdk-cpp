/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dlm/model/DefaultPoliciesTypeValues.h>
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
      namespace DefaultPoliciesTypeValuesMapper
      {

        static const int VOLUME_HASH = HashingUtils::HashString("VOLUME");
        static const int INSTANCE_HASH = HashingUtils::HashString("INSTANCE");
        static const int ALL_HASH = HashingUtils::HashString("ALL");


        DefaultPoliciesTypeValues GetDefaultPoliciesTypeValuesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VOLUME_HASH)
          {
            return DefaultPoliciesTypeValues::VOLUME;
          }
          else if (hashCode == INSTANCE_HASH)
          {
            return DefaultPoliciesTypeValues::INSTANCE;
          }
          else if (hashCode == ALL_HASH)
          {
            return DefaultPoliciesTypeValues::ALL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DefaultPoliciesTypeValues>(hashCode);
          }

          return DefaultPoliciesTypeValues::NOT_SET;
        }

        Aws::String GetNameForDefaultPoliciesTypeValues(DefaultPoliciesTypeValues enumValue)
        {
          switch(enumValue)
          {
          case DefaultPoliciesTypeValues::NOT_SET:
            return {};
          case DefaultPoliciesTypeValues::VOLUME:
            return "VOLUME";
          case DefaultPoliciesTypeValues::INSTANCE:
            return "INSTANCE";
          case DefaultPoliciesTypeValues::ALL:
            return "ALL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DefaultPoliciesTypeValuesMapper
    } // namespace Model
  } // namespace DLM
} // namespace Aws
