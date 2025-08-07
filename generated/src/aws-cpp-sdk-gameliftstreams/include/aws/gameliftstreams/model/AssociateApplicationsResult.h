/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_GAMELIFTSTREAMS_API AssociateApplicationsResult() = default;
    AWS_GAMELIFTSTREAMS_API AssociateApplicationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFTSTREAMS_API AssociateApplicationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A stream group that is associated to the applications.</p> <p>This value is
     * an <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference-arns.html">Amazon
     * Resource Name (ARN)</a> that uniquely identifies the stream group resource.
     * Example ARN:
     * <code>arn:aws:gameliftstreams:us-west-2:111122223333:streamgroup/sg-1AB2C3De4</code>.
     * </p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    AssociateApplicationsResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of applications that are associated to the stream group.</p> <p>This
     * value is a set of <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference-arns.html">Amazon
     * Resource Names (ARNs)</a> that uniquely identify application resources. Example
     * ARN:
     * <code>arn:aws:gameliftstreams:us-west-2:111122223333:application/a-9ZY8X7Wv6</code>.
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetApplicationArns() const { return m_applicationArns; }
    template<typename ApplicationArnsT = Aws::Vector<Aws::String>>
    void SetApplicationArns(ApplicationArnsT&& value) { m_applicationArnsHasBeenSet = true; m_applicationArns = std::forward<ApplicationArnsT>(value); }
    template<typename ApplicationArnsT = Aws::Vector<Aws::String>>
    AssociateApplicationsResult& WithApplicationArns(ApplicationArnsT&& value) { SetApplicationArns(std::forward<ApplicationArnsT>(value)); return *this;}
    template<typename ApplicationArnsT = Aws::String>
    AssociateApplicationsResult& AddApplicationArns(ApplicationArnsT&& value) { m_applicationArnsHasBeenSet = true; m_applicationArns.emplace_back(std::forward<ApplicationArnsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    AssociateApplicationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Vector<Aws::String> m_applicationArns;
    bool m_applicationArnsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLiftStreams
} // namespace Aws
