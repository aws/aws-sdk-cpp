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
#include <aws/servicecatalog/model/FailedServiceActionAssociation.h>
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
  class AWS_SERVICECATALOG_API BatchDisassociateServiceActionFromProvisioningArtifactResult
  {
  public:
    BatchDisassociateServiceActionFromProvisioningArtifactResult();
    BatchDisassociateServiceActionFromProvisioningArtifactResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    BatchDisassociateServiceActionFromProvisioningArtifactResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object that contains a list of errors, along with information to help you
     * identify the self-service action.</p>
     */
    inline const Aws::Vector<FailedServiceActionAssociation>& GetFailedServiceActionAssociations() const{ return m_failedServiceActionAssociations; }

    /**
     * <p>An object that contains a list of errors, along with information to help you
     * identify the self-service action.</p>
     */
    inline void SetFailedServiceActionAssociations(const Aws::Vector<FailedServiceActionAssociation>& value) { m_failedServiceActionAssociations = value; }

    /**
     * <p>An object that contains a list of errors, along with information to help you
     * identify the self-service action.</p>
     */
    inline void SetFailedServiceActionAssociations(Aws::Vector<FailedServiceActionAssociation>&& value) { m_failedServiceActionAssociations = std::move(value); }

    /**
     * <p>An object that contains a list of errors, along with information to help you
     * identify the self-service action.</p>
     */
    inline BatchDisassociateServiceActionFromProvisioningArtifactResult& WithFailedServiceActionAssociations(const Aws::Vector<FailedServiceActionAssociation>& value) { SetFailedServiceActionAssociations(value); return *this;}

    /**
     * <p>An object that contains a list of errors, along with information to help you
     * identify the self-service action.</p>
     */
    inline BatchDisassociateServiceActionFromProvisioningArtifactResult& WithFailedServiceActionAssociations(Aws::Vector<FailedServiceActionAssociation>&& value) { SetFailedServiceActionAssociations(std::move(value)); return *this;}

    /**
     * <p>An object that contains a list of errors, along with information to help you
     * identify the self-service action.</p>
     */
    inline BatchDisassociateServiceActionFromProvisioningArtifactResult& AddFailedServiceActionAssociations(const FailedServiceActionAssociation& value) { m_failedServiceActionAssociations.push_back(value); return *this; }

    /**
     * <p>An object that contains a list of errors, along with information to help you
     * identify the self-service action.</p>
     */
    inline BatchDisassociateServiceActionFromProvisioningArtifactResult& AddFailedServiceActionAssociations(FailedServiceActionAssociation&& value) { m_failedServiceActionAssociations.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<FailedServiceActionAssociation> m_failedServiceActionAssociations;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
