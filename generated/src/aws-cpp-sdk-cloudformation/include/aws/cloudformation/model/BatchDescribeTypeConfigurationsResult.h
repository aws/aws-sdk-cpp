/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
#include <aws/cloudformation/model/BatchDescribeTypeConfigurationsError.h>
#include <aws/cloudformation/model/TypeConfigurationIdentifier.h>
#include <aws/cloudformation/model/TypeConfigurationDetails.h>
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
  class BatchDescribeTypeConfigurationsResult
  {
  public:
    AWS_CLOUDFORMATION_API BatchDescribeTypeConfigurationsResult() = default;
    AWS_CLOUDFORMATION_API BatchDescribeTypeConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API BatchDescribeTypeConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list of information concerning any errors generated during the setting of
     * the specified configurations.</p>
     */
    inline const Aws::Vector<BatchDescribeTypeConfigurationsError>& GetErrors() const { return m_errors; }
    template<typename ErrorsT = Aws::Vector<BatchDescribeTypeConfigurationsError>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<BatchDescribeTypeConfigurationsError>>
    BatchDescribeTypeConfigurationsResult& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = BatchDescribeTypeConfigurationsError>
    BatchDescribeTypeConfigurationsResult& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of any of the specified extension configurations that CloudFormation
     * could not process for any reason.</p>
     */
    inline const Aws::Vector<TypeConfigurationIdentifier>& GetUnprocessedTypeConfigurations() const { return m_unprocessedTypeConfigurations; }
    template<typename UnprocessedTypeConfigurationsT = Aws::Vector<TypeConfigurationIdentifier>>
    void SetUnprocessedTypeConfigurations(UnprocessedTypeConfigurationsT&& value) { m_unprocessedTypeConfigurationsHasBeenSet = true; m_unprocessedTypeConfigurations = std::forward<UnprocessedTypeConfigurationsT>(value); }
    template<typename UnprocessedTypeConfigurationsT = Aws::Vector<TypeConfigurationIdentifier>>
    BatchDescribeTypeConfigurationsResult& WithUnprocessedTypeConfigurations(UnprocessedTypeConfigurationsT&& value) { SetUnprocessedTypeConfigurations(std::forward<UnprocessedTypeConfigurationsT>(value)); return *this;}
    template<typename UnprocessedTypeConfigurationsT = TypeConfigurationIdentifier>
    BatchDescribeTypeConfigurationsResult& AddUnprocessedTypeConfigurations(UnprocessedTypeConfigurationsT&& value) { m_unprocessedTypeConfigurationsHasBeenSet = true; m_unprocessedTypeConfigurations.emplace_back(std::forward<UnprocessedTypeConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of any of the specified extension configurations from the
     * CloudFormation registry.</p>
     */
    inline const Aws::Vector<TypeConfigurationDetails>& GetTypeConfigurations() const { return m_typeConfigurations; }
    template<typename TypeConfigurationsT = Aws::Vector<TypeConfigurationDetails>>
    void SetTypeConfigurations(TypeConfigurationsT&& value) { m_typeConfigurationsHasBeenSet = true; m_typeConfigurations = std::forward<TypeConfigurationsT>(value); }
    template<typename TypeConfigurationsT = Aws::Vector<TypeConfigurationDetails>>
    BatchDescribeTypeConfigurationsResult& WithTypeConfigurations(TypeConfigurationsT&& value) { SetTypeConfigurations(std::forward<TypeConfigurationsT>(value)); return *this;}
    template<typename TypeConfigurationsT = TypeConfigurationDetails>
    BatchDescribeTypeConfigurationsResult& AddTypeConfigurations(TypeConfigurationsT&& value) { m_typeConfigurationsHasBeenSet = true; m_typeConfigurations.emplace_back(std::forward<TypeConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    BatchDescribeTypeConfigurationsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BatchDescribeTypeConfigurationsError> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::Vector<TypeConfigurationIdentifier> m_unprocessedTypeConfigurations;
    bool m_unprocessedTypeConfigurationsHasBeenSet = false;

    Aws::Vector<TypeConfigurationDetails> m_typeConfigurations;
    bool m_typeConfigurationsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
