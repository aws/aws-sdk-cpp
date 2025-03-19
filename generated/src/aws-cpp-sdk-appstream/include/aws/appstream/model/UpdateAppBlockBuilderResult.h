/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/model/AppBlockBuilder.h>
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
  class UpdateAppBlockBuilderResult
  {
  public:
    AWS_APPSTREAM_API UpdateAppBlockBuilderResult() = default;
    AWS_APPSTREAM_API UpdateAppBlockBuilderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSTREAM_API UpdateAppBlockBuilderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const AppBlockBuilder& GetAppBlockBuilder() const { return m_appBlockBuilder; }
    template<typename AppBlockBuilderT = AppBlockBuilder>
    void SetAppBlockBuilder(AppBlockBuilderT&& value) { m_appBlockBuilderHasBeenSet = true; m_appBlockBuilder = std::forward<AppBlockBuilderT>(value); }
    template<typename AppBlockBuilderT = AppBlockBuilder>
    UpdateAppBlockBuilderResult& WithAppBlockBuilder(AppBlockBuilderT&& value) { SetAppBlockBuilder(std::forward<AppBlockBuilderT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateAppBlockBuilderResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AppBlockBuilder m_appBlockBuilder;
    bool m_appBlockBuilderHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
