/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaigns/model/InstanceIdFilterOperator.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConnectCampaigns
  {
    namespace Model
    {
      namespace InstanceIdFilterOperatorMapper
      {

        static const int Eq_HASH = HashingUtils::HashString("Eq");


        InstanceIdFilterOperator GetInstanceIdFilterOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Eq_HASH)
          {
            return InstanceIdFilterOperator::Eq;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceIdFilterOperator>(hashCode);
          }

          return InstanceIdFilterOperator::NOT_SET;
        }

        Aws::String GetNameForInstanceIdFilterOperator(InstanceIdFilterOperator enumValue)
        {
          switch(enumValue)
          {
          case InstanceIdFilterOperator::NOT_SET:
            return {};
          case InstanceIdFilterOperator::Eq:
            return "Eq";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InstanceIdFilterOperatorMapper
    } // namespace Model
  } // namespace ConnectCampaigns
} // namespace Aws
