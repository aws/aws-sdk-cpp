/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/LayerVersionContentOutput.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lambda/model/Runtime.h>
#include <aws/lambda/model/Architecture.h>
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
namespace Lambda
{
namespace Model
{
  class PublishLayerVersionResult
  {
  public:
    AWS_LAMBDA_API PublishLayerVersionResult() = default;
    AWS_LAMBDA_API PublishLayerVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAMBDA_API PublishLayerVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Details about the layer version.</p>
     */
    inline const LayerVersionContentOutput& GetContent() const { return m_content; }
    template<typename ContentT = LayerVersionContentOutput>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = LayerVersionContentOutput>
    PublishLayerVersionResult& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the layer.</p>
     */
    inline const Aws::String& GetLayerArn() const { return m_layerArn; }
    template<typename LayerArnT = Aws::String>
    void SetLayerArn(LayerArnT&& value) { m_layerArnHasBeenSet = true; m_layerArn = std::forward<LayerArnT>(value); }
    template<typename LayerArnT = Aws::String>
    PublishLayerVersionResult& WithLayerArn(LayerArnT&& value) { SetLayerArn(std::forward<LayerArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the layer version.</p>
     */
    inline const Aws::String& GetLayerVersionArn() const { return m_layerVersionArn; }
    template<typename LayerVersionArnT = Aws::String>
    void SetLayerVersionArn(LayerVersionArnT&& value) { m_layerVersionArnHasBeenSet = true; m_layerVersionArn = std::forward<LayerVersionArnT>(value); }
    template<typename LayerVersionArnT = Aws::String>
    PublishLayerVersionResult& WithLayerVersionArn(LayerVersionArnT&& value) { SetLayerVersionArn(std::forward<LayerVersionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the version.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    PublishLayerVersionResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date that the layer version was created, in <a
     * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
     * (YYYY-MM-DDThh:mm:ss.sTZD).</p>
     */
    inline const Aws::String& GetCreatedDate() const { return m_createdDate; }
    template<typename CreatedDateT = Aws::String>
    void SetCreatedDate(CreatedDateT&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::forward<CreatedDateT>(value); }
    template<typename CreatedDateT = Aws::String>
    PublishLayerVersionResult& WithCreatedDate(CreatedDateT&& value) { SetCreatedDate(std::forward<CreatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number.</p>
     */
    inline long long GetVersion() const { return m_version; }
    inline void SetVersion(long long value) { m_versionHasBeenSet = true; m_version = value; }
    inline PublishLayerVersionResult& WithVersion(long long value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The layer's compatible runtimes.</p> <p>The following list includes
     * deprecated runtimes. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-runtimes.html#runtime-deprecation-levels">Runtime
     * use after deprecation</a>.</p> <p>For a list of all currently supported
     * runtimes, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/lambda-runtimes.html#runtimes-supported">Supported
     * runtimes</a>.</p>
     */
    inline const Aws::Vector<Runtime>& GetCompatibleRuntimes() const { return m_compatibleRuntimes; }
    template<typename CompatibleRuntimesT = Aws::Vector<Runtime>>
    void SetCompatibleRuntimes(CompatibleRuntimesT&& value) { m_compatibleRuntimesHasBeenSet = true; m_compatibleRuntimes = std::forward<CompatibleRuntimesT>(value); }
    template<typename CompatibleRuntimesT = Aws::Vector<Runtime>>
    PublishLayerVersionResult& WithCompatibleRuntimes(CompatibleRuntimesT&& value) { SetCompatibleRuntimes(std::forward<CompatibleRuntimesT>(value)); return *this;}
    inline PublishLayerVersionResult& AddCompatibleRuntimes(Runtime value) { m_compatibleRuntimesHasBeenSet = true; m_compatibleRuntimes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The layer's software license.</p>
     */
    inline const Aws::String& GetLicenseInfo() const { return m_licenseInfo; }
    template<typename LicenseInfoT = Aws::String>
    void SetLicenseInfo(LicenseInfoT&& value) { m_licenseInfoHasBeenSet = true; m_licenseInfo = std::forward<LicenseInfoT>(value); }
    template<typename LicenseInfoT = Aws::String>
    PublishLayerVersionResult& WithLicenseInfo(LicenseInfoT&& value) { SetLicenseInfo(std::forward<LicenseInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of compatible <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/foundation-arch.html">instruction
     * set architectures</a>.</p>
     */
    inline const Aws::Vector<Architecture>& GetCompatibleArchitectures() const { return m_compatibleArchitectures; }
    template<typename CompatibleArchitecturesT = Aws::Vector<Architecture>>
    void SetCompatibleArchitectures(CompatibleArchitecturesT&& value) { m_compatibleArchitecturesHasBeenSet = true; m_compatibleArchitectures = std::forward<CompatibleArchitecturesT>(value); }
    template<typename CompatibleArchitecturesT = Aws::Vector<Architecture>>
    PublishLayerVersionResult& WithCompatibleArchitectures(CompatibleArchitecturesT&& value) { SetCompatibleArchitectures(std::forward<CompatibleArchitecturesT>(value)); return *this;}
    inline PublishLayerVersionResult& AddCompatibleArchitectures(Architecture value) { m_compatibleArchitecturesHasBeenSet = true; m_compatibleArchitectures.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PublishLayerVersionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    LayerVersionContentOutput m_content;
    bool m_contentHasBeenSet = false;

    Aws::String m_layerArn;
    bool m_layerArnHasBeenSet = false;

    Aws::String m_layerVersionArn;
    bool m_layerVersionArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_createdDate;
    bool m_createdDateHasBeenSet = false;

    long long m_version{0};
    bool m_versionHasBeenSet = false;

    Aws::Vector<Runtime> m_compatibleRuntimes;
    bool m_compatibleRuntimesHasBeenSet = false;

    Aws::String m_licenseInfo;
    bool m_licenseInfoHasBeenSet = false;

    Aws::Vector<Architecture> m_compatibleArchitectures;
    bool m_compatibleArchitecturesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
