/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/codeartifact/model/PackageOriginConfiguration.h>
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
  class PutPackageOriginConfigurationResult
  {
  public:
    AWS_CODEARTIFACT_API PutPackageOriginConfigurationResult();
    AWS_CODEARTIFACT_API PutPackageOriginConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEARTIFACT_API PutPackageOriginConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageOriginConfiguration.html">PackageOriginConfiguration</a>
     * object that describes the origin configuration set for the package. It contains
     * a <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageOriginRestrictions.html">PackageOriginRestrictions</a>
     * object that describes how new versions of the package can be introduced to the
     * repository.</p>
     */
    inline const PackageOriginConfiguration& GetOriginConfiguration() const{ return m_originConfiguration; }

    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageOriginConfiguration.html">PackageOriginConfiguration</a>
     * object that describes the origin configuration set for the package. It contains
     * a <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageOriginRestrictions.html">PackageOriginRestrictions</a>
     * object that describes how new versions of the package can be introduced to the
     * repository.</p>
     */
    inline void SetOriginConfiguration(const PackageOriginConfiguration& value) { m_originConfiguration = value; }

    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageOriginConfiguration.html">PackageOriginConfiguration</a>
     * object that describes the origin configuration set for the package. It contains
     * a <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageOriginRestrictions.html">PackageOriginRestrictions</a>
     * object that describes how new versions of the package can be introduced to the
     * repository.</p>
     */
    inline void SetOriginConfiguration(PackageOriginConfiguration&& value) { m_originConfiguration = std::move(value); }

    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageOriginConfiguration.html">PackageOriginConfiguration</a>
     * object that describes the origin configuration set for the package. It contains
     * a <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageOriginRestrictions.html">PackageOriginRestrictions</a>
     * object that describes how new versions of the package can be introduced to the
     * repository.</p>
     */
    inline PutPackageOriginConfigurationResult& WithOriginConfiguration(const PackageOriginConfiguration& value) { SetOriginConfiguration(value); return *this;}

    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageOriginConfiguration.html">PackageOriginConfiguration</a>
     * object that describes the origin configuration set for the package. It contains
     * a <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageOriginRestrictions.html">PackageOriginRestrictions</a>
     * object that describes how new versions of the package can be introduced to the
     * repository.</p>
     */
    inline PutPackageOriginConfigurationResult& WithOriginConfiguration(PackageOriginConfiguration&& value) { SetOriginConfiguration(std::move(value)); return *this;}

  private:

    PackageOriginConfiguration m_originConfiguration;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
