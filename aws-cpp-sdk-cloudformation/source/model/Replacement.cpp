/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cloudformation/model/Replacement.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFormation
  {
    namespace Model
    {
      namespace ReplacementMapper
      {

        static const int True_HASH = HashingUtils::HashString("True");
        static const int False_HASH = HashingUtils::HashString("False");
        static const int Conditional_HASH = HashingUtils::HashString("Conditional");


        Replacement GetReplacementForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == True_HASH)
          {
            return Replacement::True;
          }
          else if (hashCode == False_HASH)
          {
            return Replacement::False;
          }
          else if (hashCode == Conditional_HASH)
          {
            return Replacement::Conditional;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Replacement>(hashCode);
          }

          return Replacement::NOT_SET;
        }

        Aws::String GetNameForReplacement(Replacement enumValue)
        {
          switch(enumValue)
          {
          case Replacement::True:
            return "True";
          case Replacement::False:
            return "False";
          case Replacement::Conditional:
            return "Conditional";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ReplacementMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
