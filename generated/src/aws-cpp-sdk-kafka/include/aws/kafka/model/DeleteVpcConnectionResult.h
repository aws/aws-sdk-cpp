/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/model/VpcConnectionState.h>
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
namespace Kafka
{
namespace Model
{
  class DeleteVpcConnectionResult
  {
  public:
    AWS_KAFKA_API DeleteVpcConnectionResult();
    AWS_KAFKA_API DeleteVpcConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKA_API DeleteVpcConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * 
            <p>The Amazon Resource Name (ARN) that uniquely identifies an MSK
     * VPC connection.</p>
         
     */
    inline const Aws::String& GetVpcConnectionArn() const{ return m_vpcConnectionArn; }
    inline void SetVpcConnectionArn(const Aws::String& value) { m_vpcConnectionArn = value; }
    inline void SetVpcConnectionArn(Aws::String&& value) { m_vpcConnectionArn = std::move(value); }
    inline void SetVpcConnectionArn(const char* value) { m_vpcConnectionArn.assign(value); }
    inline DeleteVpcConnectionResult& WithVpcConnectionArn(const Aws::String& value) { SetVpcConnectionArn(value); return *this;}
    inline DeleteVpcConnectionResult& WithVpcConnectionArn(Aws::String&& value) { SetVpcConnectionArn(std::move(value)); return *this;}
    inline DeleteVpcConnectionResult& WithVpcConnectionArn(const char* value) { SetVpcConnectionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The state of the VPC connection.</p>
         
     */
    inline const VpcConnectionState& GetState() const{ return m_state; }
    inline void SetState(const VpcConnectionState& value) { m_state = value; }
    inline void SetState(VpcConnectionState&& value) { m_state = std::move(value); }
    inline DeleteVpcConnectionResult& WithState(const VpcConnectionState& value) { SetState(value); return *this;}
    inline DeleteVpcConnectionResult& WithState(VpcConnectionState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteVpcConnectionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteVpcConnectionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteVpcConnectionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_vpcConnectionArn;

    VpcConnectionState m_state;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
