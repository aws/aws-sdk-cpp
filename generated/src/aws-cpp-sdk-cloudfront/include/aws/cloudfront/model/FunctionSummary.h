/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudfront/model/FunctionConfig.h>
#include <aws/cloudfront/model/FunctionMetadata.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudFront
{
namespace Model
{

  /**
   * <p>Contains configuration information and metadata about a CloudFront
   * function.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/FunctionSummary">AWS
   * API Reference</a></p>
   */
  class FunctionSummary
  {
  public:
    AWS_CLOUDFRONT_API FunctionSummary() = default;
    AWS_CLOUDFRONT_API FunctionSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API FunctionSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The name of the CloudFront function.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    FunctionSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the CloudFront function.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    FunctionSummary& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains configuration information about a CloudFront function.</p>
     */
    inline const FunctionConfig& GetFunctionConfig() const { return m_functionConfig; }
    inline bool FunctionConfigHasBeenSet() const { return m_functionConfigHasBeenSet; }
    template<typename FunctionConfigT = FunctionConfig>
    void SetFunctionConfig(FunctionConfigT&& value) { m_functionConfigHasBeenSet = true; m_functionConfig = std::forward<FunctionConfigT>(value); }
    template<typename FunctionConfigT = FunctionConfig>
    FunctionSummary& WithFunctionConfig(FunctionConfigT&& value) { SetFunctionConfig(std::forward<FunctionConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains metadata about a CloudFront function.</p>
     */
    inline const FunctionMetadata& GetFunctionMetadata() const { return m_functionMetadata; }
    inline bool FunctionMetadataHasBeenSet() const { return m_functionMetadataHasBeenSet; }
    template<typename FunctionMetadataT = FunctionMetadata>
    void SetFunctionMetadata(FunctionMetadataT&& value) { m_functionMetadataHasBeenSet = true; m_functionMetadata = std::forward<FunctionMetadataT>(value); }
    template<typename FunctionMetadataT = FunctionMetadata>
    FunctionSummary& WithFunctionMetadata(FunctionMetadataT&& value) { SetFunctionMetadata(std::forward<FunctionMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    FunctionConfig m_functionConfig;
    bool m_functionConfigHasBeenSet = false;

    FunctionMetadata m_functionMetadata;
    bool m_functionMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
