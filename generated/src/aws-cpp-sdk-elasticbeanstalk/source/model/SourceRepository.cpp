/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/SourceRepository.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElasticBeanstalk
  {
    namespace Model
    {
      namespace SourceRepositoryMapper
      {

        static constexpr uint32_t CodeCommit_HASH = ConstExprHashingUtils::HashString("CodeCommit");
        static constexpr uint32_t S3_HASH = ConstExprHashingUtils::HashString("S3");


        SourceRepository GetSourceRepositoryForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CodeCommit_HASH)
          {
            return SourceRepository::CodeCommit;
          }
          else if (hashCode == S3_HASH)
          {
            return SourceRepository::S3;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SourceRepository>(hashCode);
          }

          return SourceRepository::NOT_SET;
        }

        Aws::String GetNameForSourceRepository(SourceRepository enumValue)
        {
          switch(enumValue)
          {
          case SourceRepository::NOT_SET:
            return {};
          case SourceRepository::CodeCommit:
            return "CodeCommit";
          case SourceRepository::S3:
            return "S3";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SourceRepositoryMapper
    } // namespace Model
  } // namespace ElasticBeanstalk
} // namespace Aws
