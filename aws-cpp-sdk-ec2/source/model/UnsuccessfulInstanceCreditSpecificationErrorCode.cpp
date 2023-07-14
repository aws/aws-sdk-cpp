/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/UnsuccessfulInstanceCreditSpecificationErrorCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace UnsuccessfulInstanceCreditSpecificationErrorCodeMapper
      {

        static const int InvalidInstanceID_Malformed_HASH = HashingUtils::HashString("InvalidInstanceID.Malformed");
        static const int InvalidInstanceID_NotFound_HASH = HashingUtils::HashString("InvalidInstanceID.NotFound");
        static const int IncorrectInstanceState_HASH = HashingUtils::HashString("IncorrectInstanceState");
        static const int InstanceCreditSpecification_NotSupported_HASH = HashingUtils::HashString("InstanceCreditSpecification.NotSupported");


        UnsuccessfulInstanceCreditSpecificationErrorCode GetUnsuccessfulInstanceCreditSpecificationErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InvalidInstanceID_Malformed_HASH)
          {
            return UnsuccessfulInstanceCreditSpecificationErrorCode::InvalidInstanceID_Malformed;
          }
          else if (hashCode == InvalidInstanceID_NotFound_HASH)
          {
            return UnsuccessfulInstanceCreditSpecificationErrorCode::InvalidInstanceID_NotFound;
          }
          else if (hashCode == IncorrectInstanceState_HASH)
          {
            return UnsuccessfulInstanceCreditSpecificationErrorCode::IncorrectInstanceState;
          }
          else if (hashCode == InstanceCreditSpecification_NotSupported_HASH)
          {
            return UnsuccessfulInstanceCreditSpecificationErrorCode::InstanceCreditSpecification_NotSupported;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UnsuccessfulInstanceCreditSpecificationErrorCode>(hashCode);
          }

          return UnsuccessfulInstanceCreditSpecificationErrorCode::NOT_SET;
        }

        Aws::String GetNameForUnsuccessfulInstanceCreditSpecificationErrorCode(UnsuccessfulInstanceCreditSpecificationErrorCode enumValue)
        {
          switch(enumValue)
          {
          case UnsuccessfulInstanceCreditSpecificationErrorCode::InvalidInstanceID_Malformed:
            return "InvalidInstanceID.Malformed";
          case UnsuccessfulInstanceCreditSpecificationErrorCode::InvalidInstanceID_NotFound:
            return "InvalidInstanceID.NotFound";
          case UnsuccessfulInstanceCreditSpecificationErrorCode::IncorrectInstanceState:
            return "IncorrectInstanceState";
          case UnsuccessfulInstanceCreditSpecificationErrorCode::InstanceCreditSpecification_NotSupported:
            return "InstanceCreditSpecification.NotSupported";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UnsuccessfulInstanceCreditSpecificationErrorCodeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
