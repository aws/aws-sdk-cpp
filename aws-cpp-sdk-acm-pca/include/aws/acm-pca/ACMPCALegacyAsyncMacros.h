/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateCertificateAuthorityAsync(...)  SubmitAsync(&ACMPCAClient::CreateCertificateAuthority, __VA_ARGS__)
#define CreateCertificateAuthorityCallable(REQUEST)  SubmitCallable(&ACMPCAClient::CreateCertificateAuthority, REQUEST)

#define CreateCertificateAuthorityAuditReportAsync(...)  SubmitAsync(&ACMPCAClient::CreateCertificateAuthorityAuditReport, __VA_ARGS__)
#define CreateCertificateAuthorityAuditReportCallable(REQUEST)  SubmitCallable(&ACMPCAClient::CreateCertificateAuthorityAuditReport, REQUEST)

#define CreatePermissionAsync(...)  SubmitAsync(&ACMPCAClient::CreatePermission, __VA_ARGS__)
#define CreatePermissionCallable(REQUEST)  SubmitCallable(&ACMPCAClient::CreatePermission, REQUEST)

#define DeleteCertificateAuthorityAsync(...)  SubmitAsync(&ACMPCAClient::DeleteCertificateAuthority, __VA_ARGS__)
#define DeleteCertificateAuthorityCallable(REQUEST)  SubmitCallable(&ACMPCAClient::DeleteCertificateAuthority, REQUEST)

#define DeletePermissionAsync(...)  SubmitAsync(&ACMPCAClient::DeletePermission, __VA_ARGS__)
#define DeletePermissionCallable(REQUEST)  SubmitCallable(&ACMPCAClient::DeletePermission, REQUEST)

#define DeletePolicyAsync(...)  SubmitAsync(&ACMPCAClient::DeletePolicy, __VA_ARGS__)
#define DeletePolicyCallable(REQUEST)  SubmitCallable(&ACMPCAClient::DeletePolicy, REQUEST)

#define DescribeCertificateAuthorityAsync(...)  SubmitAsync(&ACMPCAClient::DescribeCertificateAuthority, __VA_ARGS__)
#define DescribeCertificateAuthorityCallable(REQUEST)  SubmitCallable(&ACMPCAClient::DescribeCertificateAuthority, REQUEST)

#define DescribeCertificateAuthorityAuditReportAsync(...)  SubmitAsync(&ACMPCAClient::DescribeCertificateAuthorityAuditReport, __VA_ARGS__)
#define DescribeCertificateAuthorityAuditReportCallable(REQUEST)  SubmitCallable(&ACMPCAClient::DescribeCertificateAuthorityAuditReport, REQUEST)

#define GetCertificateAsync(...)  SubmitAsync(&ACMPCAClient::GetCertificate, __VA_ARGS__)
#define GetCertificateCallable(REQUEST)  SubmitCallable(&ACMPCAClient::GetCertificate, REQUEST)

#define GetCertificateAuthorityCertificateAsync(...)  SubmitAsync(&ACMPCAClient::GetCertificateAuthorityCertificate, __VA_ARGS__)
#define GetCertificateAuthorityCertificateCallable(REQUEST)  SubmitCallable(&ACMPCAClient::GetCertificateAuthorityCertificate, REQUEST)

#define GetCertificateAuthorityCsrAsync(...)  SubmitAsync(&ACMPCAClient::GetCertificateAuthorityCsr, __VA_ARGS__)
#define GetCertificateAuthorityCsrCallable(REQUEST)  SubmitCallable(&ACMPCAClient::GetCertificateAuthorityCsr, REQUEST)

#define GetPolicyAsync(...)  SubmitAsync(&ACMPCAClient::GetPolicy, __VA_ARGS__)
#define GetPolicyCallable(REQUEST)  SubmitCallable(&ACMPCAClient::GetPolicy, REQUEST)

#define ImportCertificateAuthorityCertificateAsync(...)  SubmitAsync(&ACMPCAClient::ImportCertificateAuthorityCertificate, __VA_ARGS__)
#define ImportCertificateAuthorityCertificateCallable(REQUEST)  SubmitCallable(&ACMPCAClient::ImportCertificateAuthorityCertificate, REQUEST)

#define IssueCertificateAsync(...)  SubmitAsync(&ACMPCAClient::IssueCertificate, __VA_ARGS__)
#define IssueCertificateCallable(REQUEST)  SubmitCallable(&ACMPCAClient::IssueCertificate, REQUEST)

#define ListCertificateAuthoritiesAsync(...)  SubmitAsync(&ACMPCAClient::ListCertificateAuthorities, __VA_ARGS__)
#define ListCertificateAuthoritiesCallable(REQUEST)  SubmitCallable(&ACMPCAClient::ListCertificateAuthorities, REQUEST)

#define ListPermissionsAsync(...)  SubmitAsync(&ACMPCAClient::ListPermissions, __VA_ARGS__)
#define ListPermissionsCallable(REQUEST)  SubmitCallable(&ACMPCAClient::ListPermissions, REQUEST)

#define ListTagsAsync(...)  SubmitAsync(&ACMPCAClient::ListTags, __VA_ARGS__)
#define ListTagsCallable(REQUEST)  SubmitCallable(&ACMPCAClient::ListTags, REQUEST)

#define PutPolicyAsync(...)  SubmitAsync(&ACMPCAClient::PutPolicy, __VA_ARGS__)
#define PutPolicyCallable(REQUEST)  SubmitCallable(&ACMPCAClient::PutPolicy, REQUEST)

#define RestoreCertificateAuthorityAsync(...)  SubmitAsync(&ACMPCAClient::RestoreCertificateAuthority, __VA_ARGS__)
#define RestoreCertificateAuthorityCallable(REQUEST)  SubmitCallable(&ACMPCAClient::RestoreCertificateAuthority, REQUEST)

#define RevokeCertificateAsync(...)  SubmitAsync(&ACMPCAClient::RevokeCertificate, __VA_ARGS__)
#define RevokeCertificateCallable(REQUEST)  SubmitCallable(&ACMPCAClient::RevokeCertificate, REQUEST)

#define TagCertificateAuthorityAsync(...)  SubmitAsync(&ACMPCAClient::TagCertificateAuthority, __VA_ARGS__)
#define TagCertificateAuthorityCallable(REQUEST)  SubmitCallable(&ACMPCAClient::TagCertificateAuthority, REQUEST)

#define UntagCertificateAuthorityAsync(...)  SubmitAsync(&ACMPCAClient::UntagCertificateAuthority, __VA_ARGS__)
#define UntagCertificateAuthorityCallable(REQUEST)  SubmitCallable(&ACMPCAClient::UntagCertificateAuthority, REQUEST)

#define UpdateCertificateAuthorityAsync(...)  SubmitAsync(&ACMPCAClient::UpdateCertificateAuthority, __VA_ARGS__)
#define UpdateCertificateAuthorityCallable(REQUEST)  SubmitCallable(&ACMPCAClient::UpdateCertificateAuthority, REQUEST)

