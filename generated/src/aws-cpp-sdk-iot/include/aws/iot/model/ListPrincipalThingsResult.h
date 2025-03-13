/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{
  /**
   * <p>The output from the ListPrincipalThings operation.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListPrincipalThingsResponse">AWS
   * API Reference</a></p>
   */
  class ListPrincipalThingsResult
  {
  public:
    AWS_IOT_API ListPrincipalThingsResult() = default;
    AWS_IOT_API ListPrincipalThingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListPrincipalThingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The things.</p>
     */
    inline const Aws::Vector<Aws::String>& GetThings() const { return m_things; }
    template<typename ThingsT = Aws::Vector<Aws::String>>
    void SetThings(ThingsT&& value) { m_thingsHasBeenSet = true; m_things = std::forward<ThingsT>(value); }
    template<typename ThingsT = Aws::Vector<Aws::String>>
    ListPrincipalThingsResult& WithThings(ThingsT&& value) { SetThings(std::forward<ThingsT>(value)); return *this;}
    template<typename ThingsT = Aws::String>
    ListPrincipalThingsResult& AddThings(ThingsT&& value) { m_thingsHasBeenSet = true; m_things.emplace_back(std::forward<ThingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListPrincipalThingsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPrincipalThingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_things;
    bool m_thingsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
