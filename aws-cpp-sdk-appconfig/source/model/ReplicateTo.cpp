/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/ReplicateTo.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppConfig
  {
    namespace Model
    {
      namespace ReplicateToMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int SSM_DOCUMENT_HASH = HashingUtils::HashString("SSM_DOCUMENT");


        ReplicateTo GetReplicateToForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return ReplicateTo::NONE;
          }
          else if (hashCode == SSM_DOCUMENT_HASH)
          {
            return ReplicateTo::SSM_DOCUMENT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReplicateTo>(hashCode);
          }

          return ReplicateTo::NOT_SET;
        }

        Aws::String GetNameForReplicateTo(ReplicateTo enumValue)
        {
          switch(enumValue)
          {
          case ReplicateTo::NONE:
            return "NONE";
          case ReplicateTo::SSM_DOCUMENT:
            return "SSM_DOCUMENT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReplicateToMapper
    } // namespace Model
  } // namespace AppConfig
} // namespace Aws
