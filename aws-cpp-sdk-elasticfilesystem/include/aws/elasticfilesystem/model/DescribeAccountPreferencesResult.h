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
  class AWS_EFS_API DescribeAccountPreferencesResult
  {
  public:
    DescribeAccountPreferencesResult();
    DescribeAccountPreferencesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeAccountPreferencesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const ResourceIdPreference& GetResourceIdPreference() const{ return m_resourceIdPreference; }

    
    inline void SetResourceIdPreference(const ResourceIdPreference& value) { m_resourceIdPreference = value; }

    
    inline void SetResourceIdPreference(ResourceIdPreference&& value) { m_resourceIdPreference = std::move(value); }

    
    inline DescribeAccountPreferencesResult& WithResourceIdPreference(const ResourceIdPreference& value) { SetResourceIdPreference(value); return *this;}

    
    inline DescribeAccountPreferencesResult& WithResourceIdPreference(ResourceIdPreference&& value) { SetResourceIdPreference(std::move(value)); return *this;}


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline DescribeAccountPreferencesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline DescribeAccountPreferencesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline DescribeAccountPreferencesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    ResourceIdPreference m_resourceIdPreference;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
