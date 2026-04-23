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

#include <aws/medialive/model/InputLossActionForUdpOut.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace InputLossActionForUdpOutMapper
      {

        static const int DROP_PROGRAM_HASH = HashingUtils::HashString("DROP_PROGRAM");
        static const int DROP_TS_HASH = HashingUtils::HashString("DROP_TS");
        static const int EMIT_PROGRAM_HASH = HashingUtils::HashString("EMIT_PROGRAM");


        InputLossActionForUdpOut GetInputLossActionForUdpOutForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DROP_PROGRAM_HASH)
          {
            return InputLossActionForUdpOut::DROP_PROGRAM;
          }
          else if (hashCode == DROP_TS_HASH)
          {
            return InputLossActionForUdpOut::DROP_TS;
          }
          else if (hashCode == EMIT_PROGRAM_HASH)
          {
            return InputLossActionForUdpOut::EMIT_PROGRAM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InputLossActionForUdpOut>(hashCode);
          }

          return InputLossActionForUdpOut::NOT_SET;
        }

        Aws::String GetNameForInputLossActionForUdpOut(InputLossActionForUdpOut enumValue)
        {
          switch(enumValue)
          {
          case InputLossActionForUdpOut::DROP_PROGRAM:
            return "DROP_PROGRAM";
          case InputLossActionForUdpOut::DROP_TS:
            return "DROP_TS";
          case InputLossActionForUdpOut::EMIT_PROGRAM:
            return "EMIT_PROGRAM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InputLossActionForUdpOutMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
