﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/EndpointStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GroundStation
  {
    namespace Model
    {
      namespace EndpointStatusMapper
      {

        static const int created_HASH = HashingUtils::HashString("created");
        static const int creating_HASH = HashingUtils::HashString("creating");
        static const int deleted_HASH = HashingUtils::HashString("deleted");
        static const int deleting_HASH = HashingUtils::HashString("deleting");
        static const int failed_HASH = HashingUtils::HashString("failed");


        EndpointStatus GetEndpointStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == created_HASH)
          {
            return EndpointStatus::created;
          }
          else if (hashCode == creating_HASH)
          {
            return EndpointStatus::creating;
          }
          else if (hashCode == deleted_HASH)
          {
            return EndpointStatus::deleted;
          }
          else if (hashCode == deleting_HASH)
          {
            return EndpointStatus::deleting;
          }
          else if (hashCode == failed_HASH)
          {
            return EndpointStatus::failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EndpointStatus>(hashCode);
          }

          return EndpointStatus::NOT_SET;
        }

        Aws::String GetNameForEndpointStatus(EndpointStatus enumValue)
        {
          switch(enumValue)
          {
          case EndpointStatus::created:
            return "created";
          case EndpointStatus::creating:
            return "creating";
          case EndpointStatus::deleted:
            return "deleted";
          case EndpointStatus::deleting:
            return "deleting";
          case EndpointStatus::failed:
            return "failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EndpointStatusMapper
    } // namespace Model
  } // namespace GroundStation
} // namespace Aws
