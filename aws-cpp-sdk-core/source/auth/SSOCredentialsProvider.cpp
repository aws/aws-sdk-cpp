/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */


#include <aws/core/auth/SSOCredentialsProvider.h>

AWSCredentials SSOCredentialsProvider::GetAWSCredentials()
{
    // Returning empty credentials, not yet implemented
    return Aws::Auth::AWSCredentials();
}