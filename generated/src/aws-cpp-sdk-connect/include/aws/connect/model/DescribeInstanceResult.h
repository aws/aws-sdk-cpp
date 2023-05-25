/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/Instance.h>
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
namespace Connect
{
namespace Model
{
  class DescribeInstanceResult
  {
  public:
    AWS_CONNECT_API DescribeInstanceResult();
    AWS_CONNECT_API DescribeInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API DescribeInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the instance.</p>
     */
    inline const Instance& GetInstance() const{ return m_instance; }

    /**
     * <p>The name of the instance.</p>
     */
    inline void SetInstance(const Instance& value) { m_instance = value; }

    /**
     * <p>The name of the instance.</p>
     */
    inline void SetInstance(Instance&& value) { m_instance = std::move(value); }

    /**
     * <p>The name of the instance.</p>
     */
    inline DescribeInstanceResult& WithInstance(const Instance& value) { SetInstance(value); return *this;}

    /**
     * <p>The name of the instance.</p>
     */
    inline DescribeInstanceResult& WithInstance(Instance&& value) { SetInstance(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeInstanceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeInstanceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeInstanceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Instance m_instance;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
