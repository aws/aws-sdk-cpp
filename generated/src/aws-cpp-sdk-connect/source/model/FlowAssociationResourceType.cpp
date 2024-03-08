/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/FlowAssociationResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace FlowAssociationResourceTypeMapper
      {

        static const int SMS_PHONE_NUMBER_HASH = HashingUtils::HashString("SMS_PHONE_NUMBER");


        FlowAssociationResourceType GetFlowAssociationResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SMS_PHONE_NUMBER_HASH)
          {
            return FlowAssociationResourceType::SMS_PHONE_NUMBER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FlowAssociationResourceType>(hashCode);
          }

          return FlowAssociationResourceType::NOT_SET;
        }

        Aws::String GetNameForFlowAssociationResourceType(FlowAssociationResourceType enumValue)
        {
          switch(enumValue)
          {
          case FlowAssociationResourceType::NOT_SET:
            return {};
          case FlowAssociationResourceType::SMS_PHONE_NUMBER:
            return "SMS_PHONE_NUMBER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FlowAssociationResourceTypeMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
