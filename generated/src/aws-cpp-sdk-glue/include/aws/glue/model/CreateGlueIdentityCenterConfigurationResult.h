/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{
  /**
   * <p>Response from creating a new Glue Identity Center
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateGlueIdentityCenterConfigurationResponse">AWS
   * API Reference</a></p>
   */
  class CreateGlueIdentityCenterConfigurationResult
  {
  public:
    AWS_GLUE_API CreateGlueIdentityCenterConfigurationResult() = default;
    AWS_GLUE_API CreateGlueIdentityCenterConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API CreateGlueIdentityCenterConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Identity Center application that was
     * created for the Glue configuration.</p>
     */
    inline const Aws::String& GetApplicationArn() const { return m_applicationArn; }
    template<typename ApplicationArnT = Aws::String>
    void SetApplicationArn(ApplicationArnT&& value) { m_applicationArnHasBeenSet = true; m_applicationArn = std::forward<ApplicationArnT>(value); }
    template<typename ApplicationArnT = Aws::String>
    CreateGlueIdentityCenterConfigurationResult& WithApplicationArn(ApplicationArnT&& value) { SetApplicationArn(std::forward<ApplicationArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateGlueIdentityCenterConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationArn;
    bool m_applicationArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
