/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackage/model/__AdTriggersElement.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaPackage
  {
    namespace Model
    {
      namespace __AdTriggersElementMapper
      {

        static const int SPLICE_INSERT_HASH = HashingUtils::HashString("SPLICE_INSERT");
        static const int BREAK_HASH = HashingUtils::HashString("BREAK");
        static const int PROVIDER_ADVERTISEMENT_HASH = HashingUtils::HashString("PROVIDER_ADVERTISEMENT");
        static const int DISTRIBUTOR_ADVERTISEMENT_HASH = HashingUtils::HashString("DISTRIBUTOR_ADVERTISEMENT");
        static const int PROVIDER_PLACEMENT_OPPORTUNITY_HASH = HashingUtils::HashString("PROVIDER_PLACEMENT_OPPORTUNITY");
        static const int DISTRIBUTOR_PLACEMENT_OPPORTUNITY_HASH = HashingUtils::HashString("DISTRIBUTOR_PLACEMENT_OPPORTUNITY");
        static const int PROVIDER_OVERLAY_PLACEMENT_OPPORTUNITY_HASH = HashingUtils::HashString("PROVIDER_OVERLAY_PLACEMENT_OPPORTUNITY");
        static const int DISTRIBUTOR_OVERLAY_PLACEMENT_OPPORTUNITY_HASH = HashingUtils::HashString("DISTRIBUTOR_OVERLAY_PLACEMENT_OPPORTUNITY");


        __AdTriggersElement Get__AdTriggersElementForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SPLICE_INSERT_HASH)
          {
            return __AdTriggersElement::SPLICE_INSERT;
          }
          else if (hashCode == BREAK_HASH)
          {
            return __AdTriggersElement::BREAK;
          }
          else if (hashCode == PROVIDER_ADVERTISEMENT_HASH)
          {
            return __AdTriggersElement::PROVIDER_ADVERTISEMENT;
          }
          else if (hashCode == DISTRIBUTOR_ADVERTISEMENT_HASH)
          {
            return __AdTriggersElement::DISTRIBUTOR_ADVERTISEMENT;
          }
          else if (hashCode == PROVIDER_PLACEMENT_OPPORTUNITY_HASH)
          {
            return __AdTriggersElement::PROVIDER_PLACEMENT_OPPORTUNITY;
          }
          else if (hashCode == DISTRIBUTOR_PLACEMENT_OPPORTUNITY_HASH)
          {
            return __AdTriggersElement::DISTRIBUTOR_PLACEMENT_OPPORTUNITY;
          }
          else if (hashCode == PROVIDER_OVERLAY_PLACEMENT_OPPORTUNITY_HASH)
          {
            return __AdTriggersElement::PROVIDER_OVERLAY_PLACEMENT_OPPORTUNITY;
          }
          else if (hashCode == DISTRIBUTOR_OVERLAY_PLACEMENT_OPPORTUNITY_HASH)
          {
            return __AdTriggersElement::DISTRIBUTOR_OVERLAY_PLACEMENT_OPPORTUNITY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<__AdTriggersElement>(hashCode);
          }

          return __AdTriggersElement::NOT_SET;
        }

        Aws::String GetNameFor__AdTriggersElement(__AdTriggersElement enumValue)
        {
          switch(enumValue)
          {
          case __AdTriggersElement::SPLICE_INSERT:
            return "SPLICE_INSERT";
          case __AdTriggersElement::BREAK:
            return "BREAK";
          case __AdTriggersElement::PROVIDER_ADVERTISEMENT:
            return "PROVIDER_ADVERTISEMENT";
          case __AdTriggersElement::DISTRIBUTOR_ADVERTISEMENT:
            return "DISTRIBUTOR_ADVERTISEMENT";
          case __AdTriggersElement::PROVIDER_PLACEMENT_OPPORTUNITY:
            return "PROVIDER_PLACEMENT_OPPORTUNITY";
          case __AdTriggersElement::DISTRIBUTOR_PLACEMENT_OPPORTUNITY:
            return "DISTRIBUTOR_PLACEMENT_OPPORTUNITY";
          case __AdTriggersElement::PROVIDER_OVERLAY_PLACEMENT_OPPORTUNITY:
            return "PROVIDER_OVERLAY_PLACEMENT_OPPORTUNITY";
          case __AdTriggersElement::DISTRIBUTOR_OVERLAY_PLACEMENT_OPPORTUNITY:
            return "DISTRIBUTOR_OVERLAY_PLACEMENT_OPPORTUNITY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace __AdTriggersElementMapper
    } // namespace Model
  } // namespace MediaPackage
} // namespace Aws
