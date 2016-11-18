/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/servicecatalog/model/ProvisioningArtifactParameter.h>
#include <aws/servicecatalog/model/ConstraintSummary.h>
#include <aws/servicecatalog/model/UsageInstruction.h>

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
namespace ServiceCatalog
{
namespace Model
{
  class AWS_SERVICECATALOG_API DescribeProvisioningParametersResult
  {
  public:
    DescribeProvisioningParametersResult();
    DescribeProvisioningParametersResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeProvisioningParametersResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The list of parameters used to successfully provision the product. Each
     * parameter includes a list of allowable values and additional metadata about each
     * parameter.</p>
     */
    inline const Aws::Vector<ProvisioningArtifactParameter>& GetProvisioningArtifactParameters() const{ return m_provisioningArtifactParameters; }

    /**
     * <p>The list of parameters used to successfully provision the product. Each
     * parameter includes a list of allowable values and additional metadata about each
     * parameter.</p>
     */
    inline void SetProvisioningArtifactParameters(const Aws::Vector<ProvisioningArtifactParameter>& value) { m_provisioningArtifactParameters = value; }

    /**
     * <p>The list of parameters used to successfully provision the product. Each
     * parameter includes a list of allowable values and additional metadata about each
     * parameter.</p>
     */
    inline void SetProvisioningArtifactParameters(Aws::Vector<ProvisioningArtifactParameter>&& value) { m_provisioningArtifactParameters = value; }

    /**
     * <p>The list of parameters used to successfully provision the product. Each
     * parameter includes a list of allowable values and additional metadata about each
     * parameter.</p>
     */
    inline DescribeProvisioningParametersResult& WithProvisioningArtifactParameters(const Aws::Vector<ProvisioningArtifactParameter>& value) { SetProvisioningArtifactParameters(value); return *this;}

    /**
     * <p>The list of parameters used to successfully provision the product. Each
     * parameter includes a list of allowable values and additional metadata about each
     * parameter.</p>
     */
    inline DescribeProvisioningParametersResult& WithProvisioningArtifactParameters(Aws::Vector<ProvisioningArtifactParameter>&& value) { SetProvisioningArtifactParameters(value); return *this;}

    /**
     * <p>The list of parameters used to successfully provision the product. Each
     * parameter includes a list of allowable values and additional metadata about each
     * parameter.</p>
     */
    inline DescribeProvisioningParametersResult& AddProvisioningArtifactParameters(const ProvisioningArtifactParameter& value) { m_provisioningArtifactParameters.push_back(value); return *this; }

    /**
     * <p>The list of parameters used to successfully provision the product. Each
     * parameter includes a list of allowable values and additional metadata about each
     * parameter.</p>
     */
    inline DescribeProvisioningParametersResult& AddProvisioningArtifactParameters(ProvisioningArtifactParameter&& value) { m_provisioningArtifactParameters.push_back(value); return *this; }

    /**
     * <p>The list of constraint summaries that apply to provisioning this product.</p>
     */
    inline const Aws::Vector<ConstraintSummary>& GetConstraintSummaries() const{ return m_constraintSummaries; }

    /**
     * <p>The list of constraint summaries that apply to provisioning this product.</p>
     */
    inline void SetConstraintSummaries(const Aws::Vector<ConstraintSummary>& value) { m_constraintSummaries = value; }

    /**
     * <p>The list of constraint summaries that apply to provisioning this product.</p>
     */
    inline void SetConstraintSummaries(Aws::Vector<ConstraintSummary>&& value) { m_constraintSummaries = value; }

    /**
     * <p>The list of constraint summaries that apply to provisioning this product.</p>
     */
    inline DescribeProvisioningParametersResult& WithConstraintSummaries(const Aws::Vector<ConstraintSummary>& value) { SetConstraintSummaries(value); return *this;}

    /**
     * <p>The list of constraint summaries that apply to provisioning this product.</p>
     */
    inline DescribeProvisioningParametersResult& WithConstraintSummaries(Aws::Vector<ConstraintSummary>&& value) { SetConstraintSummaries(value); return *this;}

    /**
     * <p>The list of constraint summaries that apply to provisioning this product.</p>
     */
    inline DescribeProvisioningParametersResult& AddConstraintSummaries(const ConstraintSummary& value) { m_constraintSummaries.push_back(value); return *this; }

    /**
     * <p>The list of constraint summaries that apply to provisioning this product.</p>
     */
    inline DescribeProvisioningParametersResult& AddConstraintSummaries(ConstraintSummary&& value) { m_constraintSummaries.push_back(value); return *this; }

    /**
     * <p>Any additional metadata specifically related to the provisioning of the
     * product. For example, see the <code>Version</code> field of the CloudFormation
     * template.</p>
     */
    inline const Aws::Vector<UsageInstruction>& GetUsageInstructions() const{ return m_usageInstructions; }

    /**
     * <p>Any additional metadata specifically related to the provisioning of the
     * product. For example, see the <code>Version</code> field of the CloudFormation
     * template.</p>
     */
    inline void SetUsageInstructions(const Aws::Vector<UsageInstruction>& value) { m_usageInstructions = value; }

    /**
     * <p>Any additional metadata specifically related to the provisioning of the
     * product. For example, see the <code>Version</code> field of the CloudFormation
     * template.</p>
     */
    inline void SetUsageInstructions(Aws::Vector<UsageInstruction>&& value) { m_usageInstructions = value; }

    /**
     * <p>Any additional metadata specifically related to the provisioning of the
     * product. For example, see the <code>Version</code> field of the CloudFormation
     * template.</p>
     */
    inline DescribeProvisioningParametersResult& WithUsageInstructions(const Aws::Vector<UsageInstruction>& value) { SetUsageInstructions(value); return *this;}

    /**
     * <p>Any additional metadata specifically related to the provisioning of the
     * product. For example, see the <code>Version</code> field of the CloudFormation
     * template.</p>
     */
    inline DescribeProvisioningParametersResult& WithUsageInstructions(Aws::Vector<UsageInstruction>&& value) { SetUsageInstructions(value); return *this;}

    /**
     * <p>Any additional metadata specifically related to the provisioning of the
     * product. For example, see the <code>Version</code> field of the CloudFormation
     * template.</p>
     */
    inline DescribeProvisioningParametersResult& AddUsageInstructions(const UsageInstruction& value) { m_usageInstructions.push_back(value); return *this; }

    /**
     * <p>Any additional metadata specifically related to the provisioning of the
     * product. For example, see the <code>Version</code> field of the CloudFormation
     * template.</p>
     */
    inline DescribeProvisioningParametersResult& AddUsageInstructions(UsageInstruction&& value) { m_usageInstructions.push_back(value); return *this; }

  private:
    Aws::Vector<ProvisioningArtifactParameter> m_provisioningArtifactParameters;
    Aws::Vector<ConstraintSummary> m_constraintSummaries;
    Aws::Vector<UsageInstruction> m_usageInstructions;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
