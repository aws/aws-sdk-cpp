/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
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
namespace CleanRoomsML
{
namespace Model
{
  class CreateConfiguredModelAlgorithmResult
  {
  public:
    AWS_CLEANROOMSML_API CreateConfiguredModelAlgorithmResult() = default;
    AWS_CLEANROOMSML_API CreateConfiguredModelAlgorithmResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMSML_API CreateConfiguredModelAlgorithmResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the configured model algorithm.</p>
     */
    inline const Aws::String& GetConfiguredModelAlgorithmArn() const { return m_configuredModelAlgorithmArn; }
    template<typename ConfiguredModelAlgorithmArnT = Aws::String>
    void SetConfiguredModelAlgorithmArn(ConfiguredModelAlgorithmArnT&& value) { m_configuredModelAlgorithmArnHasBeenSet = true; m_configuredModelAlgorithmArn = std::forward<ConfiguredModelAlgorithmArnT>(value); }
    template<typename ConfiguredModelAlgorithmArnT = Aws::String>
    CreateConfiguredModelAlgorithmResult& WithConfiguredModelAlgorithmArn(ConfiguredModelAlgorithmArnT&& value) { SetConfiguredModelAlgorithmArn(std::forward<ConfiguredModelAlgorithmArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateConfiguredModelAlgorithmResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_configuredModelAlgorithmArn;
    bool m_configuredModelAlgorithmArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
