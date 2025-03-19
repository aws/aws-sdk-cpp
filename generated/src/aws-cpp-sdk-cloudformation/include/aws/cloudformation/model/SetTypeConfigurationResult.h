/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace CloudFormation
{
namespace Model
{
  class SetTypeConfigurationResult
  {
  public:
    AWS_CLOUDFORMATION_API SetTypeConfigurationResult() = default;
    AWS_CLOUDFORMATION_API SetTypeConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API SetTypeConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the configuration data, in this account
     * and Region.</p> <p>Conditional: You must specify <code>ConfigurationArn</code>,
     * or <code>Type</code> and <code>TypeName</code>.</p>
     */
    inline const Aws::String& GetConfigurationArn() const { return m_configurationArn; }
    template<typename ConfigurationArnT = Aws::String>
    void SetConfigurationArn(ConfigurationArnT&& value) { m_configurationArnHasBeenSet = true; m_configurationArn = std::forward<ConfigurationArnT>(value); }
    template<typename ConfigurationArnT = Aws::String>
    SetTypeConfigurationResult& WithConfigurationArn(ConfigurationArnT&& value) { SetConfigurationArn(std::forward<ConfigurationArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    SetTypeConfigurationResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_configurationArn;
    bool m_configurationArnHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
