/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/codeartifact/model/PackageGroupDescription.h>
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
  class CreatePackageGroupResult
  {
  public:
    AWS_CODEARTIFACT_API CreatePackageGroupResult();
    AWS_CODEARTIFACT_API CreatePackageGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEARTIFACT_API CreatePackageGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> Information about the created package group after processing the request.
     * </p>
     */
    inline const PackageGroupDescription& GetPackageGroup() const{ return m_packageGroup; }

    /**
     * <p> Information about the created package group after processing the request.
     * </p>
     */
    inline void SetPackageGroup(const PackageGroupDescription& value) { m_packageGroup = value; }

    /**
     * <p> Information about the created package group after processing the request.
     * </p>
     */
    inline void SetPackageGroup(PackageGroupDescription&& value) { m_packageGroup = std::move(value); }

    /**
     * <p> Information about the created package group after processing the request.
     * </p>
     */
    inline CreatePackageGroupResult& WithPackageGroup(const PackageGroupDescription& value) { SetPackageGroup(value); return *this;}

    /**
     * <p> Information about the created package group after processing the request.
     * </p>
     */
    inline CreatePackageGroupResult& WithPackageGroup(PackageGroupDescription&& value) { SetPackageGroup(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreatePackageGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreatePackageGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreatePackageGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    PackageGroupDescription m_packageGroup;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
