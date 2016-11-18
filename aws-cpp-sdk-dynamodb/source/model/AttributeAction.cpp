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
#include <aws/dynamodb/model/AttributeAction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DynamoDB
  {
    namespace Model
    {
      namespace AttributeActionMapper
      {

        static const int ADD_HASH = HashingUtils::HashString("ADD");
        static const int PUT_HASH = HashingUtils::HashString("PUT");
        static const int DELETE__HASH = HashingUtils::HashString("DELETE");


        AttributeAction GetAttributeActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ADD_HASH)
          {
            return AttributeAction::ADD;
          }
          else if (hashCode == PUT_HASH)
          {
            return AttributeAction::PUT;
          }
          else if (hashCode == DELETE__HASH)
          {
            return AttributeAction::DELETE_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AttributeAction>(hashCode);
          }

          return AttributeAction::NOT_SET;
        }

        Aws::String GetNameForAttributeAction(AttributeAction enumValue)
        {
          switch(enumValue)
          {
          case AttributeAction::ADD:
            return "ADD";
          case AttributeAction::PUT:
            return "PUT";
          case AttributeAction::DELETE_:
            return "DELETE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace AttributeActionMapper
    } // namespace Model
  } // namespace DynamoDB
} // namespace Aws
