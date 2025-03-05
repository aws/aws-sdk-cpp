/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace GameLiftStreams
{
namespace Model
{
  class DisassociateApplicationsResult
  {
  public:
    AWS_GAMELIFTSTREAMS_API DisassociateApplicationsResult();
    AWS_GAMELIFTSTREAMS_API DisassociateApplicationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFTSTREAMS_API DisassociateApplicationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A set of applications that are disassociated from this stream group.</p>
     * <p>This value is a set of either <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference-arns.html">Amazon
     * Resource Names (ARN)</a> or IDs that uniquely identify application resources.
     * Format example:
     * ARN-<code>arn:aws:gameliftstreams:us-west-2:123456789012:application/9ZY8X7Wv6</code>
     * or ID-<code>9ZY8X7Wv6</code>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetApplicationArns() const{ return m_applicationArns; }
    inline void SetApplicationArns(const Aws::Vector<Aws::String>& value) { m_applicationArns = value; }
    inline void SetApplicationArns(Aws::Vector<Aws::String>&& value) { m_applicationArns = std::move(value); }
    inline DisassociateApplicationsResult& WithApplicationArns(const Aws::Vector<Aws::String>& value) { SetApplicationArns(value); return *this;}
    inline DisassociateApplicationsResult& WithApplicationArns(Aws::Vector<Aws::String>&& value) { SetApplicationArns(std::move(value)); return *this;}
    inline DisassociateApplicationsResult& AddApplicationArns(const Aws::String& value) { m_applicationArns.push_back(value); return *this; }
    inline DisassociateApplicationsResult& AddApplicationArns(Aws::String&& value) { m_applicationArns.push_back(std::move(value)); return *this; }
    inline DisassociateApplicationsResult& AddApplicationArns(const char* value) { m_applicationArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference-arns.html">Amazon
     * Resource Name (ARN)</a> or ID that uniquely identifies the stream group
     * resource. Format example:
     * ARN-<code>arn:aws:gameliftstreams:us-west-2:123456789012:streamgroup/1AB2C3De4</code>
     * or ID-<code>1AB2C3De4</code>. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline DisassociateApplicationsResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline DisassociateApplicationsResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline DisassociateApplicationsResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DisassociateApplicationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DisassociateApplicationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DisassociateApplicationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_applicationArns;

    Aws::String m_arn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameLiftStreams
} // namespace Aws
