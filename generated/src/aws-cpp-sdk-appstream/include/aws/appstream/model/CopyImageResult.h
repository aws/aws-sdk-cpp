/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
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
namespace AppStream
{
namespace Model
{
  class CopyImageResult
  {
  public:
    AWS_APPSTREAM_API CopyImageResult() = default;
    AWS_APPSTREAM_API CopyImageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSTREAM_API CopyImageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the destination image.</p>
     */
    inline const Aws::String& GetDestinationImageName() const { return m_destinationImageName; }
    template<typename DestinationImageNameT = Aws::String>
    void SetDestinationImageName(DestinationImageNameT&& value) { m_destinationImageNameHasBeenSet = true; m_destinationImageName = std::forward<DestinationImageNameT>(value); }
    template<typename DestinationImageNameT = Aws::String>
    CopyImageResult& WithDestinationImageName(DestinationImageNameT&& value) { SetDestinationImageName(std::forward<DestinationImageNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CopyImageResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_destinationImageName;
    bool m_destinationImageNameHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
