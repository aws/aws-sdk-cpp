/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/FailureType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodePipeline
  {
    namespace Model
    {
      namespace FailureTypeMapper
      {

        static constexpr uint32_t JobFailed_HASH = ConstExprHashingUtils::HashString("JobFailed");
        static constexpr uint32_t ConfigurationError_HASH = ConstExprHashingUtils::HashString("ConfigurationError");
        static constexpr uint32_t PermissionError_HASH = ConstExprHashingUtils::HashString("PermissionError");
        static constexpr uint32_t RevisionOutOfSync_HASH = ConstExprHashingUtils::HashString("RevisionOutOfSync");
        static constexpr uint32_t RevisionUnavailable_HASH = ConstExprHashingUtils::HashString("RevisionUnavailable");
        static constexpr uint32_t SystemUnavailable_HASH = ConstExprHashingUtils::HashString("SystemUnavailable");


        FailureType GetFailureTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == JobFailed_HASH)
          {
            return FailureType::JobFailed;
          }
          else if (hashCode == ConfigurationError_HASH)
          {
            return FailureType::ConfigurationError;
          }
          else if (hashCode == PermissionError_HASH)
          {
            return FailureType::PermissionError;
          }
          else if (hashCode == RevisionOutOfSync_HASH)
          {
            return FailureType::RevisionOutOfSync;
          }
          else if (hashCode == RevisionUnavailable_HASH)
          {
            return FailureType::RevisionUnavailable;
          }
          else if (hashCode == SystemUnavailable_HASH)
          {
            return FailureType::SystemUnavailable;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FailureType>(hashCode);
          }

          return FailureType::NOT_SET;
        }

        Aws::String GetNameForFailureType(FailureType enumValue)
        {
          switch(enumValue)
          {
          case FailureType::NOT_SET:
            return {};
          case FailureType::JobFailed:
            return "JobFailed";
          case FailureType::ConfigurationError:
            return "ConfigurationError";
          case FailureType::PermissionError:
            return "PermissionError";
          case FailureType::RevisionOutOfSync:
            return "RevisionOutOfSync";
          case FailureType::RevisionUnavailable:
            return "RevisionUnavailable";
          case FailureType::SystemUnavailable:
            return "SystemUnavailable";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FailureTypeMapper
    } // namespace Model
  } // namespace CodePipeline
} // namespace Aws
