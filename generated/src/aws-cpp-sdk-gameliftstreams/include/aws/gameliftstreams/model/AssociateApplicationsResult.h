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
  class AssociateApplicationsResult
  {
  public:
    AWS_GAMELIFTSTREAMS_API AssociateApplicationsResult();
    AWS_GAMELIFTSTREAMS_API AssociateApplicationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFTSTREAMS_API AssociateApplicationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A set of applications that are associated to the stream group.</p> <p>This
     * value is a set of either <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference-arns.html">Amazon
     * Resource Names (ARN)</a> or IDs that uniquely identify application resources.
     * Format example:
     * ARN-<code>arn:aws:gameliftstreams:us-west-2:123456789012:application/9ZY8X7Wv6</code>
     * or ID-<code>9ZY8X7Wv6</code>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetApplicationArns() const{ return m_applicationArns; }
    inline void SetApplicationArns(const Aws::Vector<Aws::String>& value) { m_applicationArns = value; }
    inline void SetApplicationArns(Aws::Vector<Aws::String>&& value) { m_applicationArns = std::move(value); }
    inline AssociateApplicationsResult& WithApplicationArns(const Aws::Vector<Aws::String>& value) { SetApplicationArns(value); return *this;}
    inline AssociateApplicationsResult& WithApplicationArns(Aws::Vector<Aws::String>&& value) { SetApplicationArns(std::move(value)); return *this;}
    inline AssociateApplicationsResult& AddApplicationArns(const Aws::String& value) { m_applicationArns.push_back(value); return *this; }
    inline AssociateApplicationsResult& AddApplicationArns(Aws::String&& value) { m_applicationArns.push_back(std::move(value)); return *this; }
    inline AssociateApplicationsResult& AddApplicationArns(const char* value) { m_applicationArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A stream group that is associated to the applications.</p> <p>This value is a
     * <a
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
    inline AssociateApplicationsResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline AssociateApplicationsResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline AssociateApplicationsResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline AssociateApplicationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline AssociateApplicationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline AssociateApplicationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_applicationArns;

    Aws::String m_arn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameLiftStreams
} // namespace Aws
