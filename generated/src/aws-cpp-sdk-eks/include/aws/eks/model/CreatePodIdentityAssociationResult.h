﻿/**
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
  class CreatePodIdentityAssociationResult
  {
  public:
    AWS_EKS_API CreatePodIdentityAssociationResult();
    AWS_EKS_API CreatePodIdentityAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EKS_API CreatePodIdentityAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The full description of your new association.</p> <p>The description includes
     * an ID for the association. Use the ID of the association in further actions to
     * manage the association.</p>
     */
    inline const PodIdentityAssociation& GetAssociation() const{ return m_association; }
    inline void SetAssociation(const PodIdentityAssociation& value) { m_association = value; }
    inline void SetAssociation(PodIdentityAssociation&& value) { m_association = std::move(value); }
    inline CreatePodIdentityAssociationResult& WithAssociation(const PodIdentityAssociation& value) { SetAssociation(value); return *this;}
    inline CreatePodIdentityAssociationResult& WithAssociation(PodIdentityAssociation&& value) { SetAssociation(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreatePodIdentityAssociationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreatePodIdentityAssociationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreatePodIdentityAssociationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    PodIdentityAssociation m_association;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
