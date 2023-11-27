/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/PodIdentityAssociation.h>
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
namespace EKS
{
namespace Model
{
  class UpdatePodIdentityAssociationResult
  {
  public:
    AWS_EKS_API UpdatePodIdentityAssociationResult();
    AWS_EKS_API UpdatePodIdentityAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EKS_API UpdatePodIdentityAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The full description of the EKS Pod Identity association that was
     * updated.</p>
     */
    inline const PodIdentityAssociation& GetAssociation() const{ return m_association; }

    /**
     * <p>The full description of the EKS Pod Identity association that was
     * updated.</p>
     */
    inline void SetAssociation(const PodIdentityAssociation& value) { m_association = value; }

    /**
     * <p>The full description of the EKS Pod Identity association that was
     * updated.</p>
     */
    inline void SetAssociation(PodIdentityAssociation&& value) { m_association = std::move(value); }

    /**
     * <p>The full description of the EKS Pod Identity association that was
     * updated.</p>
     */
    inline UpdatePodIdentityAssociationResult& WithAssociation(const PodIdentityAssociation& value) { SetAssociation(value); return *this;}

    /**
     * <p>The full description of the EKS Pod Identity association that was
     * updated.</p>
     */
    inline UpdatePodIdentityAssociationResult& WithAssociation(PodIdentityAssociation&& value) { SetAssociation(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdatePodIdentityAssociationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdatePodIdentityAssociationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdatePodIdentityAssociationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    PodIdentityAssociation m_association;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
