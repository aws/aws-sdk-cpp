/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/codeartifact/model/PackageOriginConfiguration.h>
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
  class PutPackageOriginConfigurationResult
  {
  public:
    AWS_CODEARTIFACT_API PutPackageOriginConfigurationResult() = default;
    AWS_CODEARTIFACT_API PutPackageOriginConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEARTIFACT_API PutPackageOriginConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageOriginConfiguration.html">PackageOriginConfiguration</a>
     * object that describes the origin configuration set for the package. It contains
     * a <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageOriginRestrictions.html">PackageOriginRestrictions</a>
     * object that describes how new versions of the package can be introduced to the
     * repository.</p>
     */
    inline const PackageOriginConfiguration& GetOriginConfiguration() const { return m_originConfiguration; }
    template<typename OriginConfigurationT = PackageOriginConfiguration>
    void SetOriginConfiguration(OriginConfigurationT&& value) { m_originConfigurationHasBeenSet = true; m_originConfiguration = std::forward<OriginConfigurationT>(value); }
    template<typename OriginConfigurationT = PackageOriginConfiguration>
    PutPackageOriginConfigurationResult& WithOriginConfiguration(OriginConfigurationT&& value) { SetOriginConfiguration(std::forward<OriginConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutPackageOriginConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    PackageOriginConfiguration m_originConfiguration;
    bool m_originConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
