/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
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
namespace Inspector2
{
namespace Model
{
  class CreateCodeSecurityScanConfigurationResult
  {
  public:
    AWS_INSPECTOR2_API CreateCodeSecurityScanConfigurationResult() = default;
    AWS_INSPECTOR2_API CreateCodeSecurityScanConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API CreateCodeSecurityScanConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the created scan configuration.</p>
     */
    inline const Aws::String& GetScanConfigurationArn() const { return m_scanConfigurationArn; }
    template<typename ScanConfigurationArnT = Aws::String>
    void SetScanConfigurationArn(ScanConfigurationArnT&& value) { m_scanConfigurationArnHasBeenSet = true; m_scanConfigurationArn = std::forward<ScanConfigurationArnT>(value); }
    template<typename ScanConfigurationArnT = Aws::String>
    CreateCodeSecurityScanConfigurationResult& WithScanConfigurationArn(ScanConfigurationArnT&& value) { SetScanConfigurationArn(std::forward<ScanConfigurationArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateCodeSecurityScanConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_scanConfigurationArn;
    bool m_scanConfigurationArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
