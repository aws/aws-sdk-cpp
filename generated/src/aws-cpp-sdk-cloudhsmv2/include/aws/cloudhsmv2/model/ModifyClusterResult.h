/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudhsmv2/CloudHSMV2_EXPORTS.h>
#include <aws/cloudhsmv2/model/Cluster.h>
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
namespace CloudHSMV2
{
namespace Model
{
  class ModifyClusterResult
  {
  public:
    AWS_CLOUDHSMV2_API ModifyClusterResult();
    AWS_CLOUDHSMV2_API ModifyClusterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDHSMV2_API ModifyClusterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Cluster& GetCluster() const{ return m_cluster; }

    
    inline void SetCluster(const Cluster& value) { m_cluster = value; }

    
    inline void SetCluster(Cluster&& value) { m_cluster = std::move(value); }

    
    inline ModifyClusterResult& WithCluster(const Cluster& value) { SetCluster(value); return *this;}

    
    inline ModifyClusterResult& WithCluster(Cluster&& value) { SetCluster(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ModifyClusterResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ModifyClusterResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ModifyClusterResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Cluster m_cluster;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudHSMV2
} // namespace Aws
