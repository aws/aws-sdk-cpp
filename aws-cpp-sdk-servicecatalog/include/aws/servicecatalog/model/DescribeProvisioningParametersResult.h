/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/servicecatalog/model/ProvisioningArtifactPreferences.h>
#include <aws/servicecatalog/model/ProvisioningArtifactParameter.h>
#include <aws/servicecatalog/model/ConstraintSummary.h>
#include <aws/servicecatalog/model/UsageInstruction.h>
#include <aws/servicecatalog/model/TagOptionSummary.h>
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
namespace ServiceCatalog
{
namespace Model
{
  class AWS_SERVICECATALOG_API DescribeProvisioningParametersResult
  {
  public:
    DescribeProvisioningParametersResult();
    DescribeProvisioningParametersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeProvisioningParametersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the parameters used to provision the product.</p>
     */
    inline const Aws::Vector<ProvisioningArtifactParameter>& GetProvisioningArtifactParameters() const{ return m_provisioningArtifactParameters; }

    /**
     * <p>Information about the parameters used to provision the product.</p>
     */
    inline void SetProvisioningArtifactParameters(const Aws::Vector<ProvisioningArtifactParameter>& value) { m_provisioningArtifactParameters = value; }

    /**
     * <p>Information about the parameters used to provision the product.</p>
     */
    inline void SetProvisioningArtifactParameters(Aws::Vector<ProvisioningArtifactParameter>&& value) { m_provisioningArtifactParameters = std::move(value); }

    /**
     * <p>Information about the parameters used to provision the product.</p>
     */
    inline DescribeProvisioningParametersResult& WithProvisioningArtifactParameters(const Aws::Vector<ProvisioningArtifactParameter>& value) { SetProvisioningArtifactParameters(value); return *this;}

    /**
     * <p>Information about the parameters used to provision the product.</p>
     */
    inline DescribeProvisioningParametersResult& WithProvisioningArtifactParameters(Aws::Vector<ProvisioningArtifactParameter>&& value) { SetProvisioningArtifactParameters(std::move(value)); return *this;}

    /**
     * <p>Information about the parameters used to provision the product.</p>
     */
    inline DescribeProvisioningParametersResult& AddProvisioningArtifactParameters(const ProvisioningArtifactParameter& value) { m_provisioningArtifactParameters.push_back(value); return *this; }

    /**
     * <p>Information about the parameters used to provision the product.</p>
     */
    inline DescribeProvisioningParametersResult& AddProvisioningArtifactParameters(ProvisioningArtifactParameter&& value) { m_provisioningArtifactParameters.push_back(std::move(value)); return *this; }


    /**
     * <p>Information about the constraints used to provision the product.</p>
     */
    inline const Aws::Vector<ConstraintSummary>& GetConstraintSummaries() const{ return m_constraintSummaries; }

    /**
     * <p>Information about the constraints used to provision the product.</p>
     */
    inline void SetConstraintSummaries(const Aws::Vector<ConstraintSummary>& value) { m_constraintSummaries = value; }

    /**
     * <p>Information about the constraints used to provision the product.</p>
     */
    inline void SetConstraintSummaries(Aws::Vector<ConstraintSummary>&& value) { m_constraintSummaries = std::move(value); }

    /**
     * <p>Information about the constraints used to provision the product.</p>
     */
    inline DescribeProvisioningParametersResult& WithConstraintSummaries(const Aws::Vector<ConstraintSummary>& value) { SetConstraintSummaries(value); return *this;}

    /**
     * <p>Information about the constraints used to provision the product.</p>
     */
    inline DescribeProvisioningParametersResult& WithConstraintSummaries(Aws::Vector<ConstraintSummary>&& value) { SetConstraintSummaries(std::move(value)); return *this;}

    /**
     * <p>Information about the constraints used to provision the product.</p>
     */
    inline DescribeProvisioningParametersResult& AddConstraintSummaries(const ConstraintSummary& value) { m_constraintSummaries.push_back(value); return *this; }

    /**
     * <p>Information about the constraints used to provision the product.</p>
     */
    inline DescribeProvisioningParametersResult& AddConstraintSummaries(ConstraintSummary&& value) { m_constraintSummaries.push_back(std::move(value)); return *this; }


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
    inline void SetUsageInstructions(Aws::Vector<UsageInstruction>&& value) { m_usageInstructions = std::move(value); }

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
    inline DescribeProvisioningParametersResult& WithUsageInstructions(Aws::Vector<UsageInstruction>&& value) { SetUsageInstructions(std::move(value)); return *this;}

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
    inline DescribeProvisioningParametersResult& AddUsageInstructions(UsageInstruction&& value) { m_usageInstructions.push_back(std::move(value)); return *this; }


    /**
     * <p>Information about the TagOptions associated with the resource.</p>
     */
    inline const Aws::Vector<TagOptionSummary>& GetTagOptions() const{ return m_tagOptions; }

    /**
     * <p>Information about the TagOptions associated with the resource.</p>
     */
    inline void SetTagOptions(const Aws::Vector<TagOptionSummary>& value) { m_tagOptions = value; }

    /**
     * <p>Information about the TagOptions associated with the resource.</p>
     */
    inline void SetTagOptions(Aws::Vector<TagOptionSummary>&& value) { m_tagOptions = std::move(value); }

    /**
     * <p>Information about the TagOptions associated with the resource.</p>
     */
    inline DescribeProvisioningParametersResult& WithTagOptions(const Aws::Vector<TagOptionSummary>& value) { SetTagOptions(value); return *this;}

    /**
     * <p>Information about the TagOptions associated with the resource.</p>
     */
    inline DescribeProvisioningParametersResult& WithTagOptions(Aws::Vector<TagOptionSummary>&& value) { SetTagOptions(std::move(value)); return *this;}

    /**
     * <p>Information about the TagOptions associated with the resource.</p>
     */
    inline DescribeProvisioningParametersResult& AddTagOptions(const TagOptionSummary& value) { m_tagOptions.push_back(value); return *this; }

    /**
     * <p>Information about the TagOptions associated with the resource.</p>
     */
    inline DescribeProvisioningParametersResult& AddTagOptions(TagOptionSummary&& value) { m_tagOptions.push_back(std::move(value)); return *this; }


    /**
     * <p>An object that contains information about preferences, such as regions and
     * accounts, for the provisioning artifact.</p>
     */
    inline const ProvisioningArtifactPreferences& GetProvisioningArtifactPreferences() const{ return m_provisioningArtifactPreferences; }

    /**
     * <p>An object that contains information about preferences, such as regions and
     * accounts, for the provisioning artifact.</p>
     */
    inline void SetProvisioningArtifactPreferences(const ProvisioningArtifactPreferences& value) { m_provisioningArtifactPreferences = value; }

    /**
     * <p>An object that contains information about preferences, such as regions and
     * accounts, for the provisioning artifact.</p>
     */
    inline void SetProvisioningArtifactPreferences(ProvisioningArtifactPreferences&& value) { m_provisioningArtifactPreferences = std::move(value); }

    /**
     * <p>An object that contains information about preferences, such as regions and
     * accounts, for the provisioning artifact.</p>
     */
    inline DescribeProvisioningParametersResult& WithProvisioningArtifactPreferences(const ProvisioningArtifactPreferences& value) { SetProvisioningArtifactPreferences(value); return *this;}

    /**
     * <p>An object that contains information about preferences, such as regions and
     * accounts, for the provisioning artifact.</p>
     */
    inline DescribeProvisioningParametersResult& WithProvisioningArtifactPreferences(ProvisioningArtifactPreferences&& value) { SetProvisioningArtifactPreferences(std::move(value)); return *this;}

  private:

    Aws::Vector<ProvisioningArtifactParameter> m_provisioningArtifactParameters;

    Aws::Vector<ConstraintSummary> m_constraintSummaries;

    Aws::Vector<UsageInstruction> m_usageInstructions;

    Aws::Vector<TagOptionSummary> m_tagOptions;

    ProvisioningArtifactPreferences m_provisioningArtifactPreferences;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
