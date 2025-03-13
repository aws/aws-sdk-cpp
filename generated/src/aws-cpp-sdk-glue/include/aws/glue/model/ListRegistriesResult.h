/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/RegistryListItem.h>
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
namespace Glue
{
namespace Model
{
  class ListRegistriesResult
  {
  public:
    AWS_GLUE_API ListRegistriesResult() = default;
    AWS_GLUE_API ListRegistriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API ListRegistriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>RegistryDetailedListItem</code> objects containing minimal
     * details of each registry.</p>
     */
    inline const Aws::Vector<RegistryListItem>& GetRegistries() const { return m_registries; }
    template<typename RegistriesT = Aws::Vector<RegistryListItem>>
    void SetRegistries(RegistriesT&& value) { m_registriesHasBeenSet = true; m_registries = std::forward<RegistriesT>(value); }
    template<typename RegistriesT = Aws::Vector<RegistryListItem>>
    ListRegistriesResult& WithRegistries(RegistriesT&& value) { SetRegistries(std::forward<RegistriesT>(value)); return *this;}
    template<typename RegistriesT = RegistryListItem>
    ListRegistriesResult& AddRegistries(RegistriesT&& value) { m_registriesHasBeenSet = true; m_registries.emplace_back(std::forward<RegistriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A continuation token for paginating the returned list of tokens, returned if
     * the current segment of the list is not the last.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRegistriesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListRegistriesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RegistryListItem> m_registries;
    bool m_registriesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
