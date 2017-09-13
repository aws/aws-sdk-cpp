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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/AssociationDescription.h>
#include <aws/ssm/model/FailedCreateAssociation.h>
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
namespace SSM
{
namespace Model
{
  class AWS_SSM_API CreateAssociationBatchResult
  {
  public:
    CreateAssociationBatchResult();
    CreateAssociationBatchResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateAssociationBatchResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the associations that succeeded.</p>
     */
    inline const Aws::Vector<AssociationDescription>& GetSuccessful() const{ return m_successful; }

    /**
     * <p>Information about the associations that succeeded.</p>
     */
    inline void SetSuccessful(const Aws::Vector<AssociationDescription>& value) { m_successful = value; }

    /**
     * <p>Information about the associations that succeeded.</p>
     */
    inline void SetSuccessful(Aws::Vector<AssociationDescription>&& value) { m_successful = std::move(value); }

    /**
     * <p>Information about the associations that succeeded.</p>
     */
    inline CreateAssociationBatchResult& WithSuccessful(const Aws::Vector<AssociationDescription>& value) { SetSuccessful(value); return *this;}

    /**
     * <p>Information about the associations that succeeded.</p>
     */
    inline CreateAssociationBatchResult& WithSuccessful(Aws::Vector<AssociationDescription>&& value) { SetSuccessful(std::move(value)); return *this;}

    /**
     * <p>Information about the associations that succeeded.</p>
     */
    inline CreateAssociationBatchResult& AddSuccessful(const AssociationDescription& value) { m_successful.push_back(value); return *this; }

    /**
     * <p>Information about the associations that succeeded.</p>
     */
    inline CreateAssociationBatchResult& AddSuccessful(AssociationDescription&& value) { m_successful.push_back(std::move(value)); return *this; }


    /**
     * <p>Information about the associations that failed.</p>
     */
    inline const Aws::Vector<FailedCreateAssociation>& GetFailed() const{ return m_failed; }

    /**
     * <p>Information about the associations that failed.</p>
     */
    inline void SetFailed(const Aws::Vector<FailedCreateAssociation>& value) { m_failed = value; }

    /**
     * <p>Information about the associations that failed.</p>
     */
    inline void SetFailed(Aws::Vector<FailedCreateAssociation>&& value) { m_failed = std::move(value); }

    /**
     * <p>Information about the associations that failed.</p>
     */
    inline CreateAssociationBatchResult& WithFailed(const Aws::Vector<FailedCreateAssociation>& value) { SetFailed(value); return *this;}

    /**
     * <p>Information about the associations that failed.</p>
     */
    inline CreateAssociationBatchResult& WithFailed(Aws::Vector<FailedCreateAssociation>&& value) { SetFailed(std::move(value)); return *this;}

    /**
     * <p>Information about the associations that failed.</p>
     */
    inline CreateAssociationBatchResult& AddFailed(const FailedCreateAssociation& value) { m_failed.push_back(value); return *this; }

    /**
     * <p>Information about the associations that failed.</p>
     */
    inline CreateAssociationBatchResult& AddFailed(FailedCreateAssociation&& value) { m_failed.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<AssociationDescription> m_successful;

    Aws::Vector<FailedCreateAssociation> m_failed;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
