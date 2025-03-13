/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr-public/ECRPublic_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecr-public/model/Registry.h>
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
namespace ECRPublic
{
namespace Model
{
  class DescribeRegistriesResult
  {
  public:
    AWS_ECRPUBLIC_API DescribeRegistriesResult() = default;
    AWS_ECRPUBLIC_API DescribeRegistriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECRPUBLIC_API DescribeRegistriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object that contains the details for a public registry.</p>
     */
    inline const Aws::Vector<Registry>& GetRegistries() const { return m_registries; }
    template<typename RegistriesT = Aws::Vector<Registry>>
    void SetRegistries(RegistriesT&& value) { m_registriesHasBeenSet = true; m_registries = std::forward<RegistriesT>(value); }
    template<typename RegistriesT = Aws::Vector<Registry>>
    DescribeRegistriesResult& WithRegistries(RegistriesT&& value) { SetRegistries(std::forward<RegistriesT>(value)); return *this;}
    template<typename RegistriesT = Registry>
    DescribeRegistriesResult& AddRegistries(RegistriesT&& value) { m_registriesHasBeenSet = true; m_registries.emplace_back(std::forward<RegistriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeRepositories</code> request. If the results of a
     * <code>DescribeRepositories</code> request exceed <code>maxResults</code>, you
     * can use this value to retrieve the next page of results. If there are no more
     * results, this value is <code>null</code>.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeRegistriesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeRegistriesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Registry> m_registries;
    bool m_registriesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ECRPublic
} // namespace Aws
