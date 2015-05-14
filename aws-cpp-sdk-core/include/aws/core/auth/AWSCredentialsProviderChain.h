/*
  * Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
  * 
  * Licensed under the Apache License, Version 2.0 (the "License").
  * You may not use this file except in compliance with the License.
  * A copy of the License is located at
  * 
  *  http://aws.amazon.com/apache2.0
  * 
  * or in the "license" file accompanying this file. This file is distributed
  * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
  * express or implied. See the License for the specific language governing
  * permissions and limitations under the License.
  */

#pragma once

#include <aws/core/Core_EXPORTS.h>

#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/auth/AWSCredentialsProvider.h>

#include <memory>

namespace Aws
{
namespace Auth
{
class AWS_CORE_API AWSCredentialsProviderChain : public AWSCredentialsProvider
{
public:
    virtual ~AWSCredentialsProviderChain()
    {
    }

    virtual AWSCredentials GetAWSCredentials();

protected:
    AWSCredentialsProviderChain() {}

    void AddProvider(const std::shared_ptr<AWSCredentialsProvider>& provider) { m_providerChain.push_back(provider); }

private:

    AWSCredentialsProviderChain(const AWSCredentialsProviderChain&) = delete;

    AWSCredentialsProviderChain& operator=(const AWSCredentialsProviderChain&) = delete;

    Aws::Vector<std::shared_ptr<AWSCredentialsProvider> > m_providerChain;
};

class AWS_CORE_API DefaultAWSCredentialsProviderChain : public AWSCredentialsProviderChain
{
public:
    DefaultAWSCredentialsProviderChain();
};

} // namespace Auth
} // namespace Aws
