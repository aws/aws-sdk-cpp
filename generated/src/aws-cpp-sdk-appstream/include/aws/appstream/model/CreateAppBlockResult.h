/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/model/AppBlock.h>
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
  class CreateAppBlockResult
  {
  public:
    AWS_APPSTREAM_API CreateAppBlockResult() = default;
    AWS_APPSTREAM_API CreateAppBlockResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSTREAM_API CreateAppBlockResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The app block.</p>
     */
    inline const AppBlock& GetAppBlock() const { return m_appBlock; }
    template<typename AppBlockT = AppBlock>
    void SetAppBlock(AppBlockT&& value) { m_appBlockHasBeenSet = true; m_appBlock = std::forward<AppBlockT>(value); }
    template<typename AppBlockT = AppBlock>
    CreateAppBlockResult& WithAppBlock(AppBlockT&& value) { SetAppBlock(std::forward<AppBlockT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateAppBlockResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AppBlock m_appBlock;
    bool m_appBlockHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
