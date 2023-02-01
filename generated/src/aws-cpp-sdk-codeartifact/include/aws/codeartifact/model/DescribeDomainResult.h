/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/codeartifact/model/DomainDescription.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CodeArtifact
{
namespace Model
{
  class DescribeDomainResult
  {
  public:
    AWS_CODEARTIFACT_API DescribeDomainResult();
    AWS_CODEARTIFACT_API DescribeDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEARTIFACT_API DescribeDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const DomainDescription& GetDomain() const{ return m_domain; }

    
    inline void SetDomain(const DomainDescription& value) { m_domain = value; }

    
    inline void SetDomain(DomainDescription&& value) { m_domain = std::move(value); }

    
    inline DescribeDomainResult& WithDomain(const DomainDescription& value) { SetDomain(value); return *this;}

    
    inline DescribeDomainResult& WithDomain(DomainDescription&& value) { SetDomain(std::move(value)); return *this;}

  private:

    DomainDescription m_domain;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
