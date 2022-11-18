/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CancelJobAsync(...)  SubmitAsync(&BatchClient::CancelJob, __VA_ARGS__)
#define CancelJobCallable(REQUEST)  SubmitCallable(&BatchClient::CancelJob, REQUEST)

#define CreateComputeEnvironmentAsync(...)  SubmitAsync(&BatchClient::CreateComputeEnvironment, __VA_ARGS__)
#define CreateComputeEnvironmentCallable(REQUEST)  SubmitCallable(&BatchClient::CreateComputeEnvironment, REQUEST)

#define CreateJobQueueAsync(...)  SubmitAsync(&BatchClient::CreateJobQueue, __VA_ARGS__)
#define CreateJobQueueCallable(REQUEST)  SubmitCallable(&BatchClient::CreateJobQueue, REQUEST)

#define CreateSchedulingPolicyAsync(...)  SubmitAsync(&BatchClient::CreateSchedulingPolicy, __VA_ARGS__)
#define CreateSchedulingPolicyCallable(REQUEST)  SubmitCallable(&BatchClient::CreateSchedulingPolicy, REQUEST)

#define DeleteComputeEnvironmentAsync(...)  SubmitAsync(&BatchClient::DeleteComputeEnvironment, __VA_ARGS__)
#define DeleteComputeEnvironmentCallable(REQUEST)  SubmitCallable(&BatchClient::DeleteComputeEnvironment, REQUEST)

#define DeleteJobQueueAsync(...)  SubmitAsync(&BatchClient::DeleteJobQueue, __VA_ARGS__)
#define DeleteJobQueueCallable(REQUEST)  SubmitCallable(&BatchClient::DeleteJobQueue, REQUEST)

#define DeleteSchedulingPolicyAsync(...)  SubmitAsync(&BatchClient::DeleteSchedulingPolicy, __VA_ARGS__)
#define DeleteSchedulingPolicyCallable(REQUEST)  SubmitCallable(&BatchClient::DeleteSchedulingPolicy, REQUEST)

#define DeregisterJobDefinitionAsync(...)  SubmitAsync(&BatchClient::DeregisterJobDefinition, __VA_ARGS__)
#define DeregisterJobDefinitionCallable(REQUEST)  SubmitCallable(&BatchClient::DeregisterJobDefinition, REQUEST)

#define DescribeComputeEnvironmentsAsync(...)  SubmitAsync(&BatchClient::DescribeComputeEnvironments, __VA_ARGS__)
#define DescribeComputeEnvironmentsCallable(REQUEST)  SubmitCallable(&BatchClient::DescribeComputeEnvironments, REQUEST)

#define DescribeJobDefinitionsAsync(...)  SubmitAsync(&BatchClient::DescribeJobDefinitions, __VA_ARGS__)
#define DescribeJobDefinitionsCallable(REQUEST)  SubmitCallable(&BatchClient::DescribeJobDefinitions, REQUEST)

#define DescribeJobQueuesAsync(...)  SubmitAsync(&BatchClient::DescribeJobQueues, __VA_ARGS__)
#define DescribeJobQueuesCallable(REQUEST)  SubmitCallable(&BatchClient::DescribeJobQueues, REQUEST)

#define DescribeJobsAsync(...)  SubmitAsync(&BatchClient::DescribeJobs, __VA_ARGS__)
#define DescribeJobsCallable(REQUEST)  SubmitCallable(&BatchClient::DescribeJobs, REQUEST)

#define DescribeSchedulingPoliciesAsync(...)  SubmitAsync(&BatchClient::DescribeSchedulingPolicies, __VA_ARGS__)
#define DescribeSchedulingPoliciesCallable(REQUEST)  SubmitCallable(&BatchClient::DescribeSchedulingPolicies, REQUEST)

#define ListJobsAsync(...)  SubmitAsync(&BatchClient::ListJobs, __VA_ARGS__)
#define ListJobsCallable(REQUEST)  SubmitCallable(&BatchClient::ListJobs, REQUEST)

#define ListSchedulingPoliciesAsync(...)  SubmitAsync(&BatchClient::ListSchedulingPolicies, __VA_ARGS__)
#define ListSchedulingPoliciesCallable(REQUEST)  SubmitCallable(&BatchClient::ListSchedulingPolicies, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&BatchClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&BatchClient::ListTagsForResource, REQUEST)

#define RegisterJobDefinitionAsync(...)  SubmitAsync(&BatchClient::RegisterJobDefinition, __VA_ARGS__)
#define RegisterJobDefinitionCallable(REQUEST)  SubmitCallable(&BatchClient::RegisterJobDefinition, REQUEST)

#define SubmitJobAsync(...)  SubmitAsync(&BatchClient::SubmitJob, __VA_ARGS__)
#define SubmitJobCallable(REQUEST)  SubmitCallable(&BatchClient::SubmitJob, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&BatchClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&BatchClient::TagResource, REQUEST)

#define TerminateJobAsync(...)  SubmitAsync(&BatchClient::TerminateJob, __VA_ARGS__)
#define TerminateJobCallable(REQUEST)  SubmitCallable(&BatchClient::TerminateJob, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&BatchClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&BatchClient::UntagResource, REQUEST)

#define UpdateComputeEnvironmentAsync(...)  SubmitAsync(&BatchClient::UpdateComputeEnvironment, __VA_ARGS__)
#define UpdateComputeEnvironmentCallable(REQUEST)  SubmitCallable(&BatchClient::UpdateComputeEnvironment, REQUEST)

#define UpdateJobQueueAsync(...)  SubmitAsync(&BatchClient::UpdateJobQueue, __VA_ARGS__)
#define UpdateJobQueueCallable(REQUEST)  SubmitCallable(&BatchClient::UpdateJobQueue, REQUEST)

#define UpdateSchedulingPolicyAsync(...)  SubmitAsync(&BatchClient::UpdateSchedulingPolicy, __VA_ARGS__)
#define UpdateSchedulingPolicyCallable(REQUEST)  SubmitCallable(&BatchClient::UpdateSchedulingPolicy, REQUEST)

