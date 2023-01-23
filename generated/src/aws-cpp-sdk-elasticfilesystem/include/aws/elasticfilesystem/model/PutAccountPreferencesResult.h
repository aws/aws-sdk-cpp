/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/elasticfilesystem/model/ResourceIdPreference.h>
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

  private:

    ResourceIdPreference m_resourceIdPreference;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
