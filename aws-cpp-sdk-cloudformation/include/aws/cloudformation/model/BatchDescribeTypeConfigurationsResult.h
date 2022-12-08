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
    AWS_CLOUDFORMATION_API BatchDescribeTypeConfigurationsResult();
    AWS_CLOUDFORMATION_API BatchDescribeTypeConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFORMATION_API BatchDescribeTypeConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A list of information concerning any errors generated during the setting of
     * the specified configurations.</p>
     */
    inline const Aws::Vector<BatchDescribeTypeConfigurationsError>& GetErrors() const{ return m_errors; }

    /**
     * <p>A list of information concerning any errors generated during the setting of
     * the specified configurations.</p>
     */
    inline void SetErrors(const Aws::Vector<BatchDescribeTypeConfigurationsError>& value) { m_errors = value; }

    /**
     * <p>A list of information concerning any errors generated during the setting of
     * the specified configurations.</p>
     */
    inline void SetErrors(Aws::Vector<BatchDescribeTypeConfigurationsError>&& value) { m_errors = std::move(value); }

    /**
     * <p>A list of information concerning any errors generated during the setting of
     * the specified configurations.</p>
     */
    inline BatchDescribeTypeConfigurationsResult& WithErrors(const Aws::Vector<BatchDescribeTypeConfigurationsError>& value) { SetErrors(value); return *this;}

    /**
     * <p>A list of information concerning any errors generated during the setting of
     * the specified configurations.</p>
     */
    inline BatchDescribeTypeConfigurationsResult& WithErrors(Aws::Vector<BatchDescribeTypeConfigurationsError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>A list of information concerning any errors generated during the setting of
     * the specified configurations.</p>
     */
    inline BatchDescribeTypeConfigurationsResult& AddErrors(const BatchDescribeTypeConfigurationsError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>A list of information concerning any errors generated during the setting of
     * the specified configurations.</p>
     */
    inline BatchDescribeTypeConfigurationsResult& AddErrors(BatchDescribeTypeConfigurationsError&& value) { m_errors.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of any of the specified extension configurations that CloudFormation
     * could not process for any reason.</p>
     */
    inline const Aws::Vector<TypeConfigurationIdentifier>& GetUnprocessedTypeConfigurations() const{ return m_unprocessedTypeConfigurations; }

    /**
     * <p>A list of any of the specified extension configurations that CloudFormation
     * could not process for any reason.</p>
     */
    inline void SetUnprocessedTypeConfigurations(const Aws::Vector<TypeConfigurationIdentifier>& value) { m_unprocessedTypeConfigurations = value; }

    /**
     * <p>A list of any of the specified extension configurations that CloudFormation
     * could not process for any reason.</p>
     */
    inline void SetUnprocessedTypeConfigurations(Aws::Vector<TypeConfigurationIdentifier>&& value) { m_unprocessedTypeConfigurations = std::move(value); }

    /**
     * <p>A list of any of the specified extension configurations that CloudFormation
     * could not process for any reason.</p>
     */
    inline BatchDescribeTypeConfigurationsResult& WithUnprocessedTypeConfigurations(const Aws::Vector<TypeConfigurationIdentifier>& value) { SetUnprocessedTypeConfigurations(value); return *this;}

    /**
     * <p>A list of any of the specified extension configurations that CloudFormation
     * could not process for any reason.</p>
     */
    inline BatchDescribeTypeConfigurationsResult& WithUnprocessedTypeConfigurations(Aws::Vector<TypeConfigurationIdentifier>&& value) { SetUnprocessedTypeConfigurations(std::move(value)); return *this;}

    /**
     * <p>A list of any of the specified extension configurations that CloudFormation
     * could not process for any reason.</p>
     */
    inline BatchDescribeTypeConfigurationsResult& AddUnprocessedTypeConfigurations(const TypeConfigurationIdentifier& value) { m_unprocessedTypeConfigurations.push_back(value); return *this; }

    /**
     * <p>A list of any of the specified extension configurations that CloudFormation
     * could not process for any reason.</p>
     */
    inline BatchDescribeTypeConfigurationsResult& AddUnprocessedTypeConfigurations(TypeConfigurationIdentifier&& value) { m_unprocessedTypeConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of any of the specified extension configurations from the
     * CloudFormation registry.</p>
     */
    inline const Aws::Vector<TypeConfigurationDetails>& GetTypeConfigurations() const{ return m_typeConfigurations; }

    /**
     * <p>A list of any of the specified extension configurations from the
     * CloudFormation registry.</p>
     */
    inline void SetTypeConfigurations(const Aws::Vector<TypeConfigurationDetails>& value) { m_typeConfigurations = value; }

    /**
     * <p>A list of any of the specified extension configurations from the
     * CloudFormation registry.</p>
     */
    inline void SetTypeConfigurations(Aws::Vector<TypeConfigurationDetails>&& value) { m_typeConfigurations = std::move(value); }

    /**
     * <p>A list of any of the specified extension configurations from the
     * CloudFormation registry.</p>
     */
    inline BatchDescribeTypeConfigurationsResult& WithTypeConfigurations(const Aws::Vector<TypeConfigurationDetails>& value) { SetTypeConfigurations(value); return *this;}

    /**
     * <p>A list of any of the specified extension configurations from the
     * CloudFormation registry.</p>
     */
    inline BatchDescribeTypeConfigurationsResult& WithTypeConfigurations(Aws::Vector<TypeConfigurationDetails>&& value) { SetTypeConfigurations(std::move(value)); return *this;}

    /**
     * <p>A list of any of the specified extension configurations from the
     * CloudFormation registry.</p>
     */
    inline BatchDescribeTypeConfigurationsResult& AddTypeConfigurations(const TypeConfigurationDetails& value) { m_typeConfigurations.push_back(value); return *this; }

    /**
     * <p>A list of any of the specified extension configurations from the
     * CloudFormation registry.</p>
     */
    inline BatchDescribeTypeConfigurationsResult& AddTypeConfigurations(TypeConfigurationDetails&& value) { m_typeConfigurations.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline BatchDescribeTypeConfigurationsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline BatchDescribeTypeConfigurationsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<BatchDescribeTypeConfigurationsError> m_errors;

    Aws::Vector<TypeConfigurationIdentifier> m_unprocessedTypeConfigurations;

    Aws::Vector<TypeConfigurationDetails> m_typeConfigurations;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
