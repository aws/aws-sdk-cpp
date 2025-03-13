/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
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
namespace imagebuilder
{
namespace Model
{
  class ImportComponentResult
  {
  public:
    AWS_IMAGEBUILDER_API ImportComponentResult() = default;
    AWS_IMAGEBUILDER_API ImportComponentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API ImportComponentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ImportComponentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The client token that uniquely identifies the request.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    ImportComponentResult& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the imported component.</p>
     */
    inline const Aws::String& GetComponentBuildVersionArn() const { return m_componentBuildVersionArn; }
    template<typename ComponentBuildVersionArnT = Aws::String>
    void SetComponentBuildVersionArn(ComponentBuildVersionArnT&& value) { m_componentBuildVersionArnHasBeenSet = true; m_componentBuildVersionArn = std::forward<ComponentBuildVersionArnT>(value); }
    template<typename ComponentBuildVersionArnT = Aws::String>
    ImportComponentResult& WithComponentBuildVersionArn(ComponentBuildVersionArnT&& value) { SetComponentBuildVersionArn(std::forward<ComponentBuildVersionArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_componentBuildVersionArn;
    bool m_componentBuildVersionArnHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
