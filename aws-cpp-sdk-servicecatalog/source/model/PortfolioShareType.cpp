﻿/*
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

#include <aws/servicecatalog/model/PortfolioShareType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ServiceCatalog
  {
    namespace Model
    {
      namespace PortfolioShareTypeMapper
      {

        static const int IMPORTED_HASH = HashingUtils::HashString("IMPORTED");
        static const int AWS_SERVICECATALOG_HASH = HashingUtils::HashString("AWS_SERVICECATALOG");


        PortfolioShareType GetPortfolioShareTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IMPORTED_HASH)
          {
            return PortfolioShareType::IMPORTED;
          }
          else if (hashCode == AWS_SERVICECATALOG_HASH)
          {
            return PortfolioShareType::AWS_SERVICECATALOG;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PortfolioShareType>(hashCode);
          }

          return PortfolioShareType::NOT_SET;
        }

        Aws::String GetNameForPortfolioShareType(PortfolioShareType enumValue)
        {
          switch(enumValue)
          {
          case PortfolioShareType::IMPORTED:
            return "IMPORTED";
          case PortfolioShareType::AWS_SERVICECATALOG:
            return "AWS_SERVICECATALOG";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace PortfolioShareTypeMapper
    } // namespace Model
  } // namespace ServiceCatalog
} // namespace Aws
