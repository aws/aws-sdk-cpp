/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ec2-instance-connect/EC2InstanceConnect_EXPORTS.h>
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
namespace EC2InstanceConnect
{
namespace Model
{
  class AWS_EC2INSTANCECONNECT_API SendSSHPublicKeyResult
  {
  public:
    SendSSHPublicKeyResult();
    SendSSHPublicKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    SendSSHPublicKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The request ID as logged by EC2 Connect. Please provide this when contacting
     * AWS Support.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>The request ID as logged by EC2 Connect. Please provide this when contacting
     * AWS Support.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    /**
     * <p>The request ID as logged by EC2 Connect. Please provide this when contacting
     * AWS Support.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    /**
     * <p>The request ID as logged by EC2 Connect. Please provide this when contacting
     * AWS Support.</p>
     */
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    /**
     * <p>The request ID as logged by EC2 Connect. Please provide this when contacting
     * AWS Support.</p>
     */
    inline SendSSHPublicKeyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The request ID as logged by EC2 Connect. Please provide this when contacting
     * AWS Support.</p>
     */
    inline SendSSHPublicKeyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The request ID as logged by EC2 Connect. Please provide this when contacting
     * AWS Support.</p>
     */
    inline SendSSHPublicKeyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p>Indicates request success.</p>
     */
    inline bool GetSuccess() const{ return m_success; }

    /**
     * <p>Indicates request success.</p>
     */
    inline void SetSuccess(bool value) { m_success = value; }

    /**
     * <p>Indicates request success.</p>
     */
    inline SendSSHPublicKeyResult& WithSuccess(bool value) { SetSuccess(value); return *this;}

  private:

    Aws::String m_requestId;

    bool m_success;
  };

} // namespace Model
} // namespace EC2InstanceConnect
} // namespace Aws
