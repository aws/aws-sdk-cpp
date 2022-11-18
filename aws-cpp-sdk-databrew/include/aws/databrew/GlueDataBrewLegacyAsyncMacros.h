/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define BatchDeleteRecipeVersionAsync(...)  SubmitAsync(&GlueDataBrewClient::BatchDeleteRecipeVersion, __VA_ARGS__)
#define BatchDeleteRecipeVersionCallable(REQUEST)  SubmitCallable(&GlueDataBrewClient::BatchDeleteRecipeVersion, REQUEST)

#define CreateDatasetAsync(...)  SubmitAsync(&GlueDataBrewClient::CreateDataset, __VA_ARGS__)
#define CreateDatasetCallable(REQUEST)  SubmitCallable(&GlueDataBrewClient::CreateDataset, REQUEST)

#define CreateProfileJobAsync(...)  SubmitAsync(&GlueDataBrewClient::CreateProfileJob, __VA_ARGS__)
#define CreateProfileJobCallable(REQUEST)  SubmitCallable(&GlueDataBrewClient::CreateProfileJob, REQUEST)

#define CreateProjectAsync(...)  SubmitAsync(&GlueDataBrewClient::CreateProject, __VA_ARGS__)
#define CreateProjectCallable(REQUEST)  SubmitCallable(&GlueDataBrewClient::CreateProject, REQUEST)

#define CreateRecipeAsync(...)  SubmitAsync(&GlueDataBrewClient::CreateRecipe, __VA_ARGS__)
#define CreateRecipeCallable(REQUEST)  SubmitCallable(&GlueDataBrewClient::CreateRecipe, REQUEST)

#define CreateRecipeJobAsync(...)  SubmitAsync(&GlueDataBrewClient::CreateRecipeJob, __VA_ARGS__)
#define CreateRecipeJobCallable(REQUEST)  SubmitCallable(&GlueDataBrewClient::CreateRecipeJob, REQUEST)

#define CreateRulesetAsync(...)  SubmitAsync(&GlueDataBrewClient::CreateRuleset, __VA_ARGS__)
#define CreateRulesetCallable(REQUEST)  SubmitCallable(&GlueDataBrewClient::CreateRuleset, REQUEST)

#define CreateScheduleAsync(...)  SubmitAsync(&GlueDataBrewClient::CreateSchedule, __VA_ARGS__)
#define CreateScheduleCallable(REQUEST)  SubmitCallable(&GlueDataBrewClient::CreateSchedule, REQUEST)

#define DeleteDatasetAsync(...)  SubmitAsync(&GlueDataBrewClient::DeleteDataset, __VA_ARGS__)
#define DeleteDatasetCallable(REQUEST)  SubmitCallable(&GlueDataBrewClient::DeleteDataset, REQUEST)

#define DeleteJobAsync(...)  SubmitAsync(&GlueDataBrewClient::DeleteJob, __VA_ARGS__)
#define DeleteJobCallable(REQUEST)  SubmitCallable(&GlueDataBrewClient::DeleteJob, REQUEST)

#define DeleteProjectAsync(...)  SubmitAsync(&GlueDataBrewClient::DeleteProject, __VA_ARGS__)
#define DeleteProjectCallable(REQUEST)  SubmitCallable(&GlueDataBrewClient::DeleteProject, REQUEST)

#define DeleteRecipeVersionAsync(...)  SubmitAsync(&GlueDataBrewClient::DeleteRecipeVersion, __VA_ARGS__)
#define DeleteRecipeVersionCallable(REQUEST)  SubmitCallable(&GlueDataBrewClient::DeleteRecipeVersion, REQUEST)

#define DeleteRulesetAsync(...)  SubmitAsync(&GlueDataBrewClient::DeleteRuleset, __VA_ARGS__)
#define DeleteRulesetCallable(REQUEST)  SubmitCallable(&GlueDataBrewClient::DeleteRuleset, REQUEST)

#define DeleteScheduleAsync(...)  SubmitAsync(&GlueDataBrewClient::DeleteSchedule, __VA_ARGS__)
#define DeleteScheduleCallable(REQUEST)  SubmitCallable(&GlueDataBrewClient::DeleteSchedule, REQUEST)

#define DescribeDatasetAsync(...)  SubmitAsync(&GlueDataBrewClient::DescribeDataset, __VA_ARGS__)
#define DescribeDatasetCallable(REQUEST)  SubmitCallable(&GlueDataBrewClient::DescribeDataset, REQUEST)

#define DescribeJobAsync(...)  SubmitAsync(&GlueDataBrewClient::DescribeJob, __VA_ARGS__)
#define DescribeJobCallable(REQUEST)  SubmitCallable(&GlueDataBrewClient::DescribeJob, REQUEST)

#define DescribeJobRunAsync(...)  SubmitAsync(&GlueDataBrewClient::DescribeJobRun, __VA_ARGS__)
#define DescribeJobRunCallable(REQUEST)  SubmitCallable(&GlueDataBrewClient::DescribeJobRun, REQUEST)

#define DescribeProjectAsync(...)  SubmitAsync(&GlueDataBrewClient::DescribeProject, __VA_ARGS__)
#define DescribeProjectCallable(REQUEST)  SubmitCallable(&GlueDataBrewClient::DescribeProject, REQUEST)

#define DescribeRecipeAsync(...)  SubmitAsync(&GlueDataBrewClient::DescribeRecipe, __VA_ARGS__)
#define DescribeRecipeCallable(REQUEST)  SubmitCallable(&GlueDataBrewClient::DescribeRecipe, REQUEST)

#define DescribeRulesetAsync(...)  SubmitAsync(&GlueDataBrewClient::DescribeRuleset, __VA_ARGS__)
#define DescribeRulesetCallable(REQUEST)  SubmitCallable(&GlueDataBrewClient::DescribeRuleset, REQUEST)

#define DescribeScheduleAsync(...)  SubmitAsync(&GlueDataBrewClient::DescribeSchedule, __VA_ARGS__)
#define DescribeScheduleCallable(REQUEST)  SubmitCallable(&GlueDataBrewClient::DescribeSchedule, REQUEST)

#define ListDatasetsAsync(...)  SubmitAsync(&GlueDataBrewClient::ListDatasets, __VA_ARGS__)
#define ListDatasetsCallable(REQUEST)  SubmitCallable(&GlueDataBrewClient::ListDatasets, REQUEST)

#define ListJobRunsAsync(...)  SubmitAsync(&GlueDataBrewClient::ListJobRuns, __VA_ARGS__)
#define ListJobRunsCallable(REQUEST)  SubmitCallable(&GlueDataBrewClient::ListJobRuns, REQUEST)

#define ListJobsAsync(...)  SubmitAsync(&GlueDataBrewClient::ListJobs, __VA_ARGS__)
#define ListJobsCallable(REQUEST)  SubmitCallable(&GlueDataBrewClient::ListJobs, REQUEST)

#define ListProjectsAsync(...)  SubmitAsync(&GlueDataBrewClient::ListProjects, __VA_ARGS__)
#define ListProjectsCallable(REQUEST)  SubmitCallable(&GlueDataBrewClient::ListProjects, REQUEST)

#define ListRecipeVersionsAsync(...)  SubmitAsync(&GlueDataBrewClient::ListRecipeVersions, __VA_ARGS__)
#define ListRecipeVersionsCallable(REQUEST)  SubmitCallable(&GlueDataBrewClient::ListRecipeVersions, REQUEST)

#define ListRecipesAsync(...)  SubmitAsync(&GlueDataBrewClient::ListRecipes, __VA_ARGS__)
#define ListRecipesCallable(REQUEST)  SubmitCallable(&GlueDataBrewClient::ListRecipes, REQUEST)

#define ListRulesetsAsync(...)  SubmitAsync(&GlueDataBrewClient::ListRulesets, __VA_ARGS__)
#define ListRulesetsCallable(REQUEST)  SubmitCallable(&GlueDataBrewClient::ListRulesets, REQUEST)

#define ListSchedulesAsync(...)  SubmitAsync(&GlueDataBrewClient::ListSchedules, __VA_ARGS__)
#define ListSchedulesCallable(REQUEST)  SubmitCallable(&GlueDataBrewClient::ListSchedules, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&GlueDataBrewClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&GlueDataBrewClient::ListTagsForResource, REQUEST)

#define PublishRecipeAsync(...)  SubmitAsync(&GlueDataBrewClient::PublishRecipe, __VA_ARGS__)
#define PublishRecipeCallable(REQUEST)  SubmitCallable(&GlueDataBrewClient::PublishRecipe, REQUEST)

#define SendProjectSessionActionAsync(...)  SubmitAsync(&GlueDataBrewClient::SendProjectSessionAction, __VA_ARGS__)
#define SendProjectSessionActionCallable(REQUEST)  SubmitCallable(&GlueDataBrewClient::SendProjectSessionAction, REQUEST)

#define StartJobRunAsync(...)  SubmitAsync(&GlueDataBrewClient::StartJobRun, __VA_ARGS__)
#define StartJobRunCallable(REQUEST)  SubmitCallable(&GlueDataBrewClient::StartJobRun, REQUEST)

#define StartProjectSessionAsync(...)  SubmitAsync(&GlueDataBrewClient::StartProjectSession, __VA_ARGS__)
#define StartProjectSessionCallable(REQUEST)  SubmitCallable(&GlueDataBrewClient::StartProjectSession, REQUEST)

#define StopJobRunAsync(...)  SubmitAsync(&GlueDataBrewClient::StopJobRun, __VA_ARGS__)
#define StopJobRunCallable(REQUEST)  SubmitCallable(&GlueDataBrewClient::StopJobRun, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&GlueDataBrewClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&GlueDataBrewClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&GlueDataBrewClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&GlueDataBrewClient::UntagResource, REQUEST)

#define UpdateDatasetAsync(...)  SubmitAsync(&GlueDataBrewClient::UpdateDataset, __VA_ARGS__)
#define UpdateDatasetCallable(REQUEST)  SubmitCallable(&GlueDataBrewClient::UpdateDataset, REQUEST)

#define UpdateProfileJobAsync(...)  SubmitAsync(&GlueDataBrewClient::UpdateProfileJob, __VA_ARGS__)
#define UpdateProfileJobCallable(REQUEST)  SubmitCallable(&GlueDataBrewClient::UpdateProfileJob, REQUEST)

#define UpdateProjectAsync(...)  SubmitAsync(&GlueDataBrewClient::UpdateProject, __VA_ARGS__)
#define UpdateProjectCallable(REQUEST)  SubmitCallable(&GlueDataBrewClient::UpdateProject, REQUEST)

#define UpdateRecipeAsync(...)  SubmitAsync(&GlueDataBrewClient::UpdateRecipe, __VA_ARGS__)
#define UpdateRecipeCallable(REQUEST)  SubmitCallable(&GlueDataBrewClient::UpdateRecipe, REQUEST)

#define UpdateRecipeJobAsync(...)  SubmitAsync(&GlueDataBrewClient::UpdateRecipeJob, __VA_ARGS__)
#define UpdateRecipeJobCallable(REQUEST)  SubmitCallable(&GlueDataBrewClient::UpdateRecipeJob, REQUEST)

#define UpdateRulesetAsync(...)  SubmitAsync(&GlueDataBrewClient::UpdateRuleset, __VA_ARGS__)
#define UpdateRulesetCallable(REQUEST)  SubmitCallable(&GlueDataBrewClient::UpdateRuleset, REQUEST)

#define UpdateScheduleAsync(...)  SubmitAsync(&GlueDataBrewClient::UpdateSchedule, __VA_ARGS__)
#define UpdateScheduleCallable(REQUEST)  SubmitCallable(&GlueDataBrewClient::UpdateSchedule, REQUEST)

