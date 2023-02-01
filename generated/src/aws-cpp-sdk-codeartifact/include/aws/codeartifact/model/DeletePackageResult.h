/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/codeartifact/model/PackageSummary.h>
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
  class DeletePackageResult
  {
  public:
    AWS_CODEARTIFACT_API DeletePackageResult();
    AWS_CODEARTIFACT_API DeletePackageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEARTIFACT_API DeletePackageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const PackageSummary& GetDeletedPackage() const{ return m_deletedPackage; }

    
    inline void SetDeletedPackage(const PackageSummary& value) { m_deletedPackage = value; }

    
    inline void SetDeletedPackage(PackageSummary&& value) { m_deletedPackage = std::move(value); }

    
    inline DeletePackageResult& WithDeletedPackage(const PackageSummary& value) { SetDeletedPackage(value); return *this;}

    
    inline DeletePackageResult& WithDeletedPackage(PackageSummary&& value) { SetDeletedPackage(std::move(value)); return *this;}

  private:

    PackageSummary m_deletedPackage;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
