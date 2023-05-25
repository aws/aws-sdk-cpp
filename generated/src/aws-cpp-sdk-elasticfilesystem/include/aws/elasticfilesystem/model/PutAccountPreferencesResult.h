/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/elasticfilesystem/model/ResourceIdPreference.h>
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
namespace EFS
{
namespace Model
{
  class PutAccountPreferencesResult
  {
  public:
    AWS_EFS_API PutAccountPreferencesResult();
    AWS_EFS_API PutAccountPreferencesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EFS_API PutAccountPreferencesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const ResourceIdPreference& GetResourceIdPreference() const{ return m_resourceIdPreference; }

    
    inline void SetResourceIdPreference(const ResourceIdPreference& value) { m_resourceIdPreference = value; }

    
    inline void SetResourceIdPreference(ResourceIdPreference&& value) { m_resourceIdPreference = std::move(value); }

    
    inline PutAccountPreferencesResult& WithResourceIdPreference(const ResourceIdPreference& value) { SetResourceIdPreference(value); return *this;}

    
    inline PutAccountPreferencesResult& WithResourceIdPreference(ResourceIdPreference&& value) { SetResourceIdPreference(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline PutAccountPreferencesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline PutAccountPreferencesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline PutAccountPreferencesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ResourceIdPreference m_resourceIdPreference;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
