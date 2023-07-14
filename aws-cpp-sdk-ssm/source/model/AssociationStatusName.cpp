/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/AssociationStatusName.h>
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
      namespace AssociationStatusNameMapper
      {

        static const int Pending_HASH = HashingUtils::HashString("Pending");
        static const int Success_HASH = HashingUtils::HashString("Success");
        static const int Failed_HASH = HashingUtils::HashString("Failed");


        AssociationStatusName GetAssociationStatusNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Pending_HASH)
          {
            return AssociationStatusName::Pending;
          }
          else if (hashCode == Success_HASH)
          {
            return AssociationStatusName::Success;
          }
          else if (hashCode == Failed_HASH)
          {
            return AssociationStatusName::Failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssociationStatusName>(hashCode);
          }

          return AssociationStatusName::NOT_SET;
        }

        Aws::String GetNameForAssociationStatusName(AssociationStatusName enumValue)
        {
          switch(enumValue)
          {
          case AssociationStatusName::Pending:
            return "Pending";
          case AssociationStatusName::Success:
            return "Success";
          case AssociationStatusName::Failed:
            return "Failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AssociationStatusNameMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
