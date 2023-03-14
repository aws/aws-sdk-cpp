/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/Addon.h>
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
  class CreateAddonResult
  {
  public:
    AWS_EKS_API CreateAddonResult();
    AWS_EKS_API CreateAddonResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EKS_API CreateAddonResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Addon& GetAddon() const{ return m_addon; }

    
    inline void SetAddon(const Addon& value) { m_addon = value; }

    
    inline void SetAddon(Addon&& value) { m_addon = std::move(value); }

    
    inline CreateAddonResult& WithAddon(const Addon& value) { SetAddon(value); return *this;}

    
    inline CreateAddonResult& WithAddon(Addon&& value) { SetAddon(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateAddonResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateAddonResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateAddonResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Addon m_addon;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
