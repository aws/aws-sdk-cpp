/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/Update.h>
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
  class AssociateEncryptionConfigResult
  {
  public:
    AWS_EKS_API AssociateEncryptionConfigResult();
    AWS_EKS_API AssociateEncryptionConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EKS_API AssociateEncryptionConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Update& GetUpdate() const{ return m_update; }

    
    inline void SetUpdate(const Update& value) { m_update = value; }

    
    inline void SetUpdate(Update&& value) { m_update = std::move(value); }

    
    inline AssociateEncryptionConfigResult& WithUpdate(const Update& value) { SetUpdate(value); return *this;}

    
    inline AssociateEncryptionConfigResult& WithUpdate(Update&& value) { SetUpdate(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline AssociateEncryptionConfigResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline AssociateEncryptionConfigResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline AssociateEncryptionConfigResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Update m_update;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
