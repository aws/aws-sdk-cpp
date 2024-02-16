/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/firehose/model/TagrisStatus.h>
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
namespace Firehose
{
namespace Model
{
  class VerifyResourcesExistForTagrisResult
  {
  public:
    AWS_FIREHOSE_API VerifyResourcesExistForTagrisResult();
    AWS_FIREHOSE_API VerifyResourcesExistForTagrisResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FIREHOSE_API VerifyResourcesExistForTagrisResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::Map<Aws::String, TagrisStatus>& GetTagrisSweepListResult() const{ return m_tagrisSweepListResult; }

    
    inline void SetTagrisSweepListResult(const Aws::Map<Aws::String, TagrisStatus>& value) { m_tagrisSweepListResult = value; }

    
    inline void SetTagrisSweepListResult(Aws::Map<Aws::String, TagrisStatus>&& value) { m_tagrisSweepListResult = std::move(value); }

    
    inline VerifyResourcesExistForTagrisResult& WithTagrisSweepListResult(const Aws::Map<Aws::String, TagrisStatus>& value) { SetTagrisSweepListResult(value); return *this;}

    
    inline VerifyResourcesExistForTagrisResult& WithTagrisSweepListResult(Aws::Map<Aws::String, TagrisStatus>&& value) { SetTagrisSweepListResult(std::move(value)); return *this;}

    
    inline VerifyResourcesExistForTagrisResult& AddTagrisSweepListResult(const Aws::String& key, const TagrisStatus& value) { m_tagrisSweepListResult.emplace(key, value); return *this; }

    
    inline VerifyResourcesExistForTagrisResult& AddTagrisSweepListResult(Aws::String&& key, const TagrisStatus& value) { m_tagrisSweepListResult.emplace(std::move(key), value); return *this; }

    
    inline VerifyResourcesExistForTagrisResult& AddTagrisSweepListResult(const Aws::String& key, TagrisStatus&& value) { m_tagrisSweepListResult.emplace(key, std::move(value)); return *this; }

    
    inline VerifyResourcesExistForTagrisResult& AddTagrisSweepListResult(Aws::String&& key, TagrisStatus&& value) { m_tagrisSweepListResult.emplace(std::move(key), std::move(value)); return *this; }

    
    inline VerifyResourcesExistForTagrisResult& AddTagrisSweepListResult(const char* key, TagrisStatus&& value) { m_tagrisSweepListResult.emplace(key, std::move(value)); return *this; }

    
    inline VerifyResourcesExistForTagrisResult& AddTagrisSweepListResult(const char* key, const TagrisStatus& value) { m_tagrisSweepListResult.emplace(key, value); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline VerifyResourcesExistForTagrisResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline VerifyResourcesExistForTagrisResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline VerifyResourcesExistForTagrisResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Map<Aws::String, TagrisStatus> m_tagrisSweepListResult;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
