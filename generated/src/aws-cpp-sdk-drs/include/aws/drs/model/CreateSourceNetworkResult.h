/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
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
namespace drs
{
namespace Model
{
  class CreateSourceNetworkResult
  {
  public:
    AWS_DRS_API CreateSourceNetworkResult() = default;
    AWS_DRS_API CreateSourceNetworkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DRS_API CreateSourceNetworkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>ID of the created Source Network.</p>
     */
    inline const Aws::String& GetSourceNetworkID() const { return m_sourceNetworkID; }
    template<typename SourceNetworkIDT = Aws::String>
    void SetSourceNetworkID(SourceNetworkIDT&& value) { m_sourceNetworkIDHasBeenSet = true; m_sourceNetworkID = std::forward<SourceNetworkIDT>(value); }
    template<typename SourceNetworkIDT = Aws::String>
    CreateSourceNetworkResult& WithSourceNetworkID(SourceNetworkIDT&& value) { SetSourceNetworkID(std::forward<SourceNetworkIDT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateSourceNetworkResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sourceNetworkID;
    bool m_sourceNetworkIDHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
