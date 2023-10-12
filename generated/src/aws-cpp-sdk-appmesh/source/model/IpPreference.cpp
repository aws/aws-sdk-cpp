/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/IpPreference.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppMesh
  {
    namespace Model
    {
      namespace IpPreferenceMapper
      {

        static constexpr uint32_t IPv6_PREFERRED_HASH = ConstExprHashingUtils::HashString("IPv6_PREFERRED");
        static constexpr uint32_t IPv4_PREFERRED_HASH = ConstExprHashingUtils::HashString("IPv4_PREFERRED");
        static constexpr uint32_t IPv4_ONLY_HASH = ConstExprHashingUtils::HashString("IPv4_ONLY");
        static constexpr uint32_t IPv6_ONLY_HASH = ConstExprHashingUtils::HashString("IPv6_ONLY");


        IpPreference GetIpPreferenceForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IPv6_PREFERRED_HASH)
          {
            return IpPreference::IPv6_PREFERRED;
          }
          else if (hashCode == IPv4_PREFERRED_HASH)
          {
            return IpPreference::IPv4_PREFERRED;
          }
          else if (hashCode == IPv4_ONLY_HASH)
          {
            return IpPreference::IPv4_ONLY;
          }
          else if (hashCode == IPv6_ONLY_HASH)
          {
            return IpPreference::IPv6_ONLY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IpPreference>(hashCode);
          }

          return IpPreference::NOT_SET;
        }

        Aws::String GetNameForIpPreference(IpPreference enumValue)
        {
          switch(enumValue)
          {
          case IpPreference::NOT_SET:
            return {};
          case IpPreference::IPv6_PREFERRED:
            return "IPv6_PREFERRED";
          case IpPreference::IPv4_PREFERRED:
            return "IPv4_PREFERRED";
          case IpPreference::IPv4_ONLY:
            return "IPv4_ONLY";
          case IpPreference::IPv6_ONLY:
            return "IPv6_ONLY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IpPreferenceMapper
    } // namespace Model
  } // namespace AppMesh
} // namespace Aws
