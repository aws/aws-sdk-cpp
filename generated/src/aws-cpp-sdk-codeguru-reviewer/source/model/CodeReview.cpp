/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-reviewer/model/CodeReview.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeGuruReviewer
{
namespace Model
{

CodeReview::CodeReview() : 
    m_nameHasBeenSet(false),
    m_codeReviewArnHasBeenSet(false),
    m_repositoryNameHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_providerType(ProviderType::NOT_SET),
    m_providerTypeHasBeenSet(false),
    m_state(JobState::NOT_SET),
    m_stateHasBeenSet(false),
    m_stateReasonHasBeenSet(false),
    m_createdTimeStampHasBeenSet(false),
    m_lastUpdatedTimeStampHasBeenSet(false),
    m_type(Type::NOT_SET),
    m_typeHasBeenSet(false),
    m_pullRequestIdHasBeenSet(false),
    m_sourceCodeTypeHasBeenSet(false),
    m_associationArnHasBeenSet(false),
    m_metricsHasBeenSet(false),
    m_analysisTypesHasBeenSet(false),
    m_configFileState(ConfigFileState::NOT_SET),
    m_configFileStateHasBeenSet(false)
{
}

CodeReview::CodeReview(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_codeReviewArnHasBeenSet(false),
    m_repositoryNameHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_providerType(ProviderType::NOT_SET),
    m_providerTypeHasBeenSet(false),
    m_state(JobState::NOT_SET),
    m_stateHasBeenSet(false),
    m_stateReasonHasBeenSet(false),
    m_createdTimeStampHasBeenSet(false),
    m_lastUpdatedTimeStampHasBeenSet(false),
    m_type(Type::NOT_SET),
    m_typeHasBeenSet(false),
    m_pullRequestIdHasBeenSet(false),
    m_sourceCodeTypeHasBeenSet(false),
    m_associationArnHasBeenSet(false),
    m_metricsHasBeenSet(false),
    m_analysisTypesHasBeenSet(false),
    m_configFileState(ConfigFileState::NOT_SET),
    m_configFileStateHasBeenSet(false)
{
  *this = jsonValue;
}

CodeReview& CodeReview::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CodeReviewArn"))
  {
    m_codeReviewArn = jsonValue.GetString("CodeReviewArn");

    m_codeReviewArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RepositoryName"))
  {
    m_repositoryName = jsonValue.GetString("RepositoryName");

    m_repositoryNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Owner"))
  {
    m_owner = jsonValue.GetString("Owner");

    m_ownerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProviderType"))
  {
    m_providerType = ProviderTypeMapper::GetProviderTypeForName(jsonValue.GetString("ProviderType"));

    m_providerTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = JobStateMapper::GetJobStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StateReason"))
  {
    m_stateReason = jsonValue.GetString("StateReason");

    m_stateReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTimeStamp"))
  {
    m_createdTimeStamp = jsonValue.GetDouble("CreatedTimeStamp");

    m_createdTimeStampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedTimeStamp"))
  {
    m_lastUpdatedTimeStamp = jsonValue.GetDouble("LastUpdatedTimeStamp");

    m_lastUpdatedTimeStampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = TypeMapper::GetTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PullRequestId"))
  {
    m_pullRequestId = jsonValue.GetString("PullRequestId");

    m_pullRequestIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceCodeType"))
  {
    m_sourceCodeType = jsonValue.GetObject("SourceCodeType");

    m_sourceCodeTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AssociationArn"))
  {
    m_associationArn = jsonValue.GetString("AssociationArn");

    m_associationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Metrics"))
  {
    m_metrics = jsonValue.GetObject("Metrics");

    m_metricsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AnalysisTypes"))
  {
    Aws::Utils::Array<JsonView> analysisTypesJsonList = jsonValue.GetArray("AnalysisTypes");
    for(unsigned analysisTypesIndex = 0; analysisTypesIndex < analysisTypesJsonList.GetLength(); ++analysisTypesIndex)
    {
      m_analysisTypes.push_back(AnalysisTypeMapper::GetAnalysisTypeForName(analysisTypesJsonList[analysisTypesIndex].AsString()));
    }
    m_analysisTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConfigFileState"))
  {
    m_configFileState = ConfigFileStateMapper::GetConfigFileStateForName(jsonValue.GetString("ConfigFileState"));

    m_configFileStateHasBeenSet = true;
  }

  return *this;
}

JsonValue CodeReview::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_codeReviewArnHasBeenSet)
  {
   payload.WithString("CodeReviewArn", m_codeReviewArn);

  }

  if(m_repositoryNameHasBeenSet)
  {
   payload.WithString("RepositoryName", m_repositoryName);

  }

  if(m_ownerHasBeenSet)
  {
   payload.WithString("Owner", m_owner);

  }

  if(m_providerTypeHasBeenSet)
  {
   payload.WithString("ProviderType", ProviderTypeMapper::GetNameForProviderType(m_providerType));
  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", JobStateMapper::GetNameForJobState(m_state));
  }

  if(m_stateReasonHasBeenSet)
  {
   payload.WithString("StateReason", m_stateReason);

  }

  if(m_createdTimeStampHasBeenSet)
  {
   payload.WithDouble("CreatedTimeStamp", m_createdTimeStamp.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedTimeStampHasBeenSet)
  {
   payload.WithDouble("LastUpdatedTimeStamp", m_lastUpdatedTimeStamp.SecondsWithMSPrecision());
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", TypeMapper::GetNameForType(m_type));
  }

  if(m_pullRequestIdHasBeenSet)
  {
   payload.WithString("PullRequestId", m_pullRequestId);

  }

  if(m_sourceCodeTypeHasBeenSet)
  {
   payload.WithObject("SourceCodeType", m_sourceCodeType.Jsonize());

  }

  if(m_associationArnHasBeenSet)
  {
   payload.WithString("AssociationArn", m_associationArn);

  }

  if(m_metricsHasBeenSet)
  {
   payload.WithObject("Metrics", m_metrics.Jsonize());

  }

  if(m_analysisTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> analysisTypesJsonList(m_analysisTypes.size());
   for(unsigned analysisTypesIndex = 0; analysisTypesIndex < analysisTypesJsonList.GetLength(); ++analysisTypesIndex)
   {
     analysisTypesJsonList[analysisTypesIndex].AsString(AnalysisTypeMapper::GetNameForAnalysisType(m_analysisTypes[analysisTypesIndex]));
   }
   payload.WithArray("AnalysisTypes", std::move(analysisTypesJsonList));

  }

  if(m_configFileStateHasBeenSet)
  {
   payload.WithString("ConfigFileState", ConfigFileStateMapper::GetNameForConfigFileState(m_configFileState));
  }

  return payload;
}

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
