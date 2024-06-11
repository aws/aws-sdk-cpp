﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/codeartifact/model/PackageVersionDescription.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DescribePackageVersionResult
  {
  public:
    AWS_CODEARTIFACT_API DescribePackageVersionResult();
    AWS_CODEARTIFACT_API DescribePackageVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEARTIFACT_API DescribePackageVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageVersionDescription.html">PackageVersionDescription</a>
     * object that contains information about the requested package version. </p>
     */
    inline const PackageVersionDescription& GetPackageVersion() const{ return m_packageVersion; }
    inline void SetPackageVersion(const PackageVersionDescription& value) { m_packageVersion = value; }
    inline void SetPackageVersion(PackageVersionDescription&& value) { m_packageVersion = std::move(value); }
    inline DescribePackageVersionResult& WithPackageVersion(const PackageVersionDescription& value) { SetPackageVersion(value); return *this;}
    inline DescribePackageVersionResult& WithPackageVersion(PackageVersionDescription&& value) { SetPackageVersion(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribePackageVersionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribePackageVersionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribePackageVersionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    PackageVersionDescription m_packageVersion;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
