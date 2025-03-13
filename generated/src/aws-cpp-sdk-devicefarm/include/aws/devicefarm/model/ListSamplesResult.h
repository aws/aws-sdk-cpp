/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/model/Sample.h>
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
namespace DeviceFarm
{
namespace Model
{
  /**
   * <p>Represents the result of a list samples request.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListSamplesResult">AWS
   * API Reference</a></p>
   */
  class ListSamplesResult
  {
  public:
    AWS_DEVICEFARM_API ListSamplesResult() = default;
    AWS_DEVICEFARM_API ListSamplesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API ListSamplesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the samples.</p>
     */
    inline const Aws::Vector<Sample>& GetSamples() const { return m_samples; }
    template<typename SamplesT = Aws::Vector<Sample>>
    void SetSamples(SamplesT&& value) { m_samplesHasBeenSet = true; m_samples = std::forward<SamplesT>(value); }
    template<typename SamplesT = Aws::Vector<Sample>>
    ListSamplesResult& WithSamples(SamplesT&& value) { SetSamples(std::forward<SamplesT>(value)); return *this;}
    template<typename SamplesT = Sample>
    ListSamplesResult& AddSamples(SamplesT&& value) { m_samplesHasBeenSet = true; m_samples.emplace_back(std::forward<SamplesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the number of items that are returned is significantly large, this is an
     * identifier that is also returned. It can be used in a subsequent call to this
     * operation to return the next set of items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSamplesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSamplesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Sample> m_samples;
    bool m_samplesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
