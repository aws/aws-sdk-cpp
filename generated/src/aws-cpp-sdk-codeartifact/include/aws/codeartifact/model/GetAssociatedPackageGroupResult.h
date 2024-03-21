/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/codeartifact/model/PackageGroupDescription.h>
#include <aws/codeartifact/model/PackageGroupAssociationType.h>
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
  class GetAssociatedPackageGroupResult
  {
  public:
    AWS_CODEARTIFACT_API GetAssociatedPackageGroupResult();
    AWS_CODEARTIFACT_API GetAssociatedPackageGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEARTIFACT_API GetAssociatedPackageGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The package group that is associated with the requested package.</p>
     */
    inline const PackageGroupDescription& GetPackageGroup() const{ return m_packageGroup; }

    /**
     * <p>The package group that is associated with the requested package.</p>
     */
    inline void SetPackageGroup(const PackageGroupDescription& value) { m_packageGroup = value; }

    /**
     * <p>The package group that is associated with the requested package.</p>
     */
    inline void SetPackageGroup(PackageGroupDescription&& value) { m_packageGroup = std::move(value); }

    /**
     * <p>The package group that is associated with the requested package.</p>
     */
    inline GetAssociatedPackageGroupResult& WithPackageGroup(const PackageGroupDescription& value) { SetPackageGroup(value); return *this;}

    /**
     * <p>The package group that is associated with the requested package.</p>
     */
    inline GetAssociatedPackageGroupResult& WithPackageGroup(PackageGroupDescription&& value) { SetPackageGroup(std::move(value)); return *this;}


    /**
     * <p>Describes the strength of the association between the package and package
     * group. A strong match is also known as an exact match, and a weak match is known
     * as a relative match.</p>
     */
    inline const PackageGroupAssociationType& GetAssociationType() const{ return m_associationType; }

    /**
     * <p>Describes the strength of the association between the package and package
     * group. A strong match is also known as an exact match, and a weak match is known
     * as a relative match.</p>
     */
    inline void SetAssociationType(const PackageGroupAssociationType& value) { m_associationType = value; }

    /**
     * <p>Describes the strength of the association between the package and package
     * group. A strong match is also known as an exact match, and a weak match is known
     * as a relative match.</p>
     */
    inline void SetAssociationType(PackageGroupAssociationType&& value) { m_associationType = std::move(value); }

    /**
     * <p>Describes the strength of the association between the package and package
     * group. A strong match is also known as an exact match, and a weak match is known
     * as a relative match.</p>
     */
    inline GetAssociatedPackageGroupResult& WithAssociationType(const PackageGroupAssociationType& value) { SetAssociationType(value); return *this;}

    /**
     * <p>Describes the strength of the association between the package and package
     * group. A strong match is also known as an exact match, and a weak match is known
     * as a relative match.</p>
     */
    inline GetAssociatedPackageGroupResult& WithAssociationType(PackageGroupAssociationType&& value) { SetAssociationType(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetAssociatedPackageGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetAssociatedPackageGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetAssociatedPackageGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    PackageGroupDescription m_packageGroup;

    PackageGroupAssociationType m_associationType;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
