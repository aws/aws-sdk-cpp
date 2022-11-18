/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateProjectAsync(...)  SubmitAsync(&MobileClient::CreateProject, __VA_ARGS__)
#define CreateProjectCallable(REQUEST)  SubmitCallable(&MobileClient::CreateProject, REQUEST)

#define DeleteProjectAsync(...)  SubmitAsync(&MobileClient::DeleteProject, __VA_ARGS__)
#define DeleteProjectCallable(REQUEST)  SubmitCallable(&MobileClient::DeleteProject, REQUEST)

#define DescribeBundleAsync(...)  SubmitAsync(&MobileClient::DescribeBundle, __VA_ARGS__)
#define DescribeBundleCallable(REQUEST)  SubmitCallable(&MobileClient::DescribeBundle, REQUEST)

#define DescribeProjectAsync(...)  SubmitAsync(&MobileClient::DescribeProject, __VA_ARGS__)
#define DescribeProjectCallable(REQUEST)  SubmitCallable(&MobileClient::DescribeProject, REQUEST)

#define ExportBundleAsync(...)  SubmitAsync(&MobileClient::ExportBundle, __VA_ARGS__)
#define ExportBundleCallable(REQUEST)  SubmitCallable(&MobileClient::ExportBundle, REQUEST)

#define ExportProjectAsync(...)  SubmitAsync(&MobileClient::ExportProject, __VA_ARGS__)
#define ExportProjectCallable(REQUEST)  SubmitCallable(&MobileClient::ExportProject, REQUEST)

#define ListBundlesAsync(...)  SubmitAsync(&MobileClient::ListBundles, __VA_ARGS__)
#define ListBundlesCallable(REQUEST)  SubmitCallable(&MobileClient::ListBundles, REQUEST)

#define ListProjectsAsync(...)  SubmitAsync(&MobileClient::ListProjects, __VA_ARGS__)
#define ListProjectsCallable(REQUEST)  SubmitCallable(&MobileClient::ListProjects, REQUEST)

#define UpdateProjectAsync(...)  SubmitAsync(&MobileClient::UpdateProject, __VA_ARGS__)
#define UpdateProjectCallable(REQUEST)  SubmitCallable(&MobileClient::UpdateProject, REQUEST)

