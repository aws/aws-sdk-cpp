/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define SearchAsync(...)  SubmitAsync(&CloudSearchDomainClient::Search, __VA_ARGS__)
#define SearchCallable(REQUEST)  SubmitCallable(&CloudSearchDomainClient::Search, REQUEST)

#define SuggestAsync(...)  SubmitAsync(&CloudSearchDomainClient::Suggest, __VA_ARGS__)
#define SuggestCallable(REQUEST)  SubmitCallable(&CloudSearchDomainClient::Suggest, REQUEST)

#define UploadDocumentsAsync(...)  SubmitAsync(&CloudSearchDomainClient::UploadDocuments, __VA_ARGS__)
#define UploadDocumentsCallable(REQUEST)  SubmitCallable(&CloudSearchDomainClient::UploadDocuments, REQUEST)

