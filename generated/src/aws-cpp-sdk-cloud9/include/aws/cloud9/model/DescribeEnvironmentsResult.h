/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloud9/Cloud9_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloud9/model/Environment.h>
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
namespace Cloud9
{
namespace Model
{
  class DescribeEnvironmentsResult
  {
  public:
    AWS_CLOUD9_API DescribeEnvironmentsResult() = default;
    AWS_CLOUD9_API DescribeEnvironmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUD9_API DescribeEnvironmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the environments that are returned.</p>
     */
    inline const Aws::Vector<Environment>& GetEnvironments() const { return m_environments; }
    template<typename EnvironmentsT = Aws::Vector<Environment>>
    void SetEnvironments(EnvironmentsT&& value) { m_environmentsHasBeenSet = true; m_environments = std::forward<EnvironmentsT>(value); }
    template<typename EnvironmentsT = Aws::Vector<Environment>>
    DescribeEnvironmentsResult& WithEnvironments(EnvironmentsT&& value) { SetEnvironments(std::forward<EnvironmentsT>(value)); return *this;}
    template<typename EnvironmentsT = Environment>
    DescribeEnvironmentsResult& AddEnvironments(EnvironmentsT&& value) { m_environmentsHasBeenSet = true; m_environments.emplace_back(std::forward<EnvironmentsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeEnvironmentsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Environment> m_environments;
    bool m_environmentsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Cloud9
} // namespace Aws
