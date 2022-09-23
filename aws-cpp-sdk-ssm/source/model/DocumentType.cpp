/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/DocumentType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace DocumentTypeMapper
      {

        static const int Command_HASH = HashingUtils::HashString("Command");
        static const int Policy_HASH = HashingUtils::HashString("Policy");
        static const int Automation_HASH = HashingUtils::HashString("Automation");
        static const int Session_HASH = HashingUtils::HashString("Session");
        static const int Package_HASH = HashingUtils::HashString("Package");
        static const int ApplicationConfiguration_HASH = HashingUtils::HashString("ApplicationConfiguration");
        static const int ApplicationConfigurationSchema_HASH = HashingUtils::HashString("ApplicationConfigurationSchema");
        static const int DeploymentStrategy_HASH = HashingUtils::HashString("DeploymentStrategy");
        static const int ChangeCalendar_HASH = HashingUtils::HashString("ChangeCalendar");
        static const int Automation_ChangeTemplate_HASH = HashingUtils::HashString("Automation.ChangeTemplate");
        static const int ProblemAnalysis_HASH = HashingUtils::HashString("ProblemAnalysis");
        static const int ProblemAnalysisTemplate_HASH = HashingUtils::HashString("ProblemAnalysisTemplate");
        static const int CloudFormation_HASH = HashingUtils::HashString("CloudFormation");
        static const int ConformancePackTemplate_HASH = HashingUtils::HashString("ConformancePackTemplate");


        DocumentType GetDocumentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Command_HASH)
          {
            return DocumentType::Command;
          }
          else if (hashCode == Policy_HASH)
          {
            return DocumentType::Policy;
          }
          else if (hashCode == Automation_HASH)
          {
            return DocumentType::Automation;
          }
          else if (hashCode == Session_HASH)
          {
            return DocumentType::Session;
          }
          else if (hashCode == Package_HASH)
          {
            return DocumentType::Package;
          }
          else if (hashCode == ApplicationConfiguration_HASH)
          {
            return DocumentType::ApplicationConfiguration;
          }
          else if (hashCode == ApplicationConfigurationSchema_HASH)
          {
            return DocumentType::ApplicationConfigurationSchema;
          }
          else if (hashCode == DeploymentStrategy_HASH)
          {
            return DocumentType::DeploymentStrategy;
          }
          else if (hashCode == ChangeCalendar_HASH)
          {
            return DocumentType::ChangeCalendar;
          }
          else if (hashCode == Automation_ChangeTemplate_HASH)
          {
            return DocumentType::Automation_ChangeTemplate;
          }
          else if (hashCode == ProblemAnalysis_HASH)
          {
            return DocumentType::ProblemAnalysis;
          }
          else if (hashCode == ProblemAnalysisTemplate_HASH)
          {
            return DocumentType::ProblemAnalysisTemplate;
          }
          else if (hashCode == CloudFormation_HASH)
          {
            return DocumentType::CloudFormation;
          }
          else if (hashCode == ConformancePackTemplate_HASH)
          {
            return DocumentType::ConformancePackTemplate;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DocumentType>(hashCode);
          }

          return DocumentType::NOT_SET;
        }

        Aws::String GetNameForDocumentType(DocumentType enumValue)
        {
          switch(enumValue)
          {
          case DocumentType::Command:
            return "Command";
          case DocumentType::Policy:
            return "Policy";
          case DocumentType::Automation:
            return "Automation";
          case DocumentType::Session:
            return "Session";
          case DocumentType::Package:
            return "Package";
          case DocumentType::ApplicationConfiguration:
            return "ApplicationConfiguration";
          case DocumentType::ApplicationConfigurationSchema:
            return "ApplicationConfigurationSchema";
          case DocumentType::DeploymentStrategy:
            return "DeploymentStrategy";
          case DocumentType::ChangeCalendar:
            return "ChangeCalendar";
          case DocumentType::Automation_ChangeTemplate:
            return "Automation.ChangeTemplate";
          case DocumentType::ProblemAnalysis:
            return "ProblemAnalysis";
          case DocumentType::ProblemAnalysisTemplate:
            return "ProblemAnalysisTemplate";
          case DocumentType::CloudFormation:
            return "CloudFormation";
          case DocumentType::ConformancePackTemplate:
            return "ConformancePackTemplate";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DocumentTypeMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
