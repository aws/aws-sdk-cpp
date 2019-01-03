/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
