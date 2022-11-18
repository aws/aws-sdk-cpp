/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AddTagsToCertificateAsync(...)  SubmitAsync(&ACMClient::AddTagsToCertificate, __VA_ARGS__)
#define AddTagsToCertificateCallable(REQUEST)  SubmitCallable(&ACMClient::AddTagsToCertificate, REQUEST)

#define DeleteCertificateAsync(...)  SubmitAsync(&ACMClient::DeleteCertificate, __VA_ARGS__)
#define DeleteCertificateCallable(REQUEST)  SubmitCallable(&ACMClient::DeleteCertificate, REQUEST)

#define DescribeCertificateAsync(...)  SubmitAsync(&ACMClient::DescribeCertificate, __VA_ARGS__)
#define DescribeCertificateCallable(REQUEST)  SubmitCallable(&ACMClient::DescribeCertificate, REQUEST)

#define ExportCertificateAsync(...)  SubmitAsync(&ACMClient::ExportCertificate, __VA_ARGS__)
#define ExportCertificateCallable(REQUEST)  SubmitCallable(&ACMClient::ExportCertificate, REQUEST)


#define GetCertificateAsync(...)  SubmitAsync(&ACMClient::GetCertificate, __VA_ARGS__)
#define GetCertificateCallable(REQUEST)  SubmitCallable(&ACMClient::GetCertificate, REQUEST)

#define ImportCertificateAsync(...)  SubmitAsync(&ACMClient::ImportCertificate, __VA_ARGS__)
#define ImportCertificateCallable(REQUEST)  SubmitCallable(&ACMClient::ImportCertificate, REQUEST)

#define ListCertificatesAsync(...)  SubmitAsync(&ACMClient::ListCertificates, __VA_ARGS__)
#define ListCertificatesCallable(REQUEST)  SubmitCallable(&ACMClient::ListCertificates, REQUEST)

#define ListTagsForCertificateAsync(...)  SubmitAsync(&ACMClient::ListTagsForCertificate, __VA_ARGS__)
#define ListTagsForCertificateCallable(REQUEST)  SubmitCallable(&ACMClient::ListTagsForCertificate, REQUEST)

#define PutAccountConfigurationAsync(...)  SubmitAsync(&ACMClient::PutAccountConfiguration, __VA_ARGS__)
#define PutAccountConfigurationCallable(REQUEST)  SubmitCallable(&ACMClient::PutAccountConfiguration, REQUEST)

#define RemoveTagsFromCertificateAsync(...)  SubmitAsync(&ACMClient::RemoveTagsFromCertificate, __VA_ARGS__)
#define RemoveTagsFromCertificateCallable(REQUEST)  SubmitCallable(&ACMClient::RemoveTagsFromCertificate, REQUEST)

#define RenewCertificateAsync(...)  SubmitAsync(&ACMClient::RenewCertificate, __VA_ARGS__)
#define RenewCertificateCallable(REQUEST)  SubmitCallable(&ACMClient::RenewCertificate, REQUEST)

#define RequestCertificateAsync(...)  SubmitAsync(&ACMClient::RequestCertificate, __VA_ARGS__)
#define RequestCertificateCallable(REQUEST)  SubmitCallable(&ACMClient::RequestCertificate, REQUEST)

#define ResendValidationEmailAsync(...)  SubmitAsync(&ACMClient::ResendValidationEmail, __VA_ARGS__)
#define ResendValidationEmailCallable(REQUEST)  SubmitCallable(&ACMClient::ResendValidationEmail, REQUEST)

#define UpdateCertificateOptionsAsync(...)  SubmitAsync(&ACMClient::UpdateCertificateOptions, __VA_ARGS__)
#define UpdateCertificateOptionsCallable(REQUEST)  SubmitCallable(&ACMClient::UpdateCertificateOptions, REQUEST)

