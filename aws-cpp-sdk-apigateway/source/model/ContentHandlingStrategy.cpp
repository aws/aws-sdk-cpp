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

#include <aws/apigateway/model/ContentHandlingStrategy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace APIGateway
  {
    namespace Model
    {
      namespace ContentHandlingStrategyMapper
      {

        static const int CONVERT_TO_BINARY_HASH = HashingUtils::HashString("CONVERT_TO_BINARY");
        static const int CONVERT_TO_TEXT_HASH = HashingUtils::HashString("CONVERT_TO_TEXT");


        ContentHandlingStrategy GetContentHandlingStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CONVERT_TO_BINARY_HASH)
          {
            return ContentHandlingStrategy::CONVERT_TO_BINARY;
          }
          else if (hashCode == CONVERT_TO_TEXT_HASH)
          {
            return ContentHandlingStrategy::CONVERT_TO_TEXT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContentHandlingStrategy>(hashCode);
          }

          return ContentHandlingStrategy::NOT_SET;
        }

        Aws::String GetNameForContentHandlingStrategy(ContentHandlingStrategy enumValue)
        {
          switch(enumValue)
          {
          case ContentHandlingStrategy::CONVERT_TO_BINARY:
            return "CONVERT_TO_BINARY";
          case ContentHandlingStrategy::CONVERT_TO_TEXT:
            return "CONVERT_TO_TEXT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ContentHandlingStrategyMapper
    } // namespace Model
  } // namespace APIGateway
} // namespace Aws
