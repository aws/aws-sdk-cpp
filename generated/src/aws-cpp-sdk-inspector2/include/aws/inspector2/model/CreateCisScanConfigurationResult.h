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
  class CreateCisScanConfigurationResult
  {
  public:
    AWS_INSPECTOR2_API CreateCisScanConfigurationResult();
    AWS_INSPECTOR2_API CreateCisScanConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API CreateCisScanConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The scan configuration ARN for the CIS scan configuration.</p>
     */
    inline const Aws::String& GetScanConfigurationArn() const{ return m_scanConfigurationArn; }

    /**
     * <p>The scan configuration ARN for the CIS scan configuration.</p>
     */
    inline void SetScanConfigurationArn(const Aws::String& value) { m_scanConfigurationArn = value; }

    /**
     * <p>The scan configuration ARN for the CIS scan configuration.</p>
     */
    inline void SetScanConfigurationArn(Aws::String&& value) { m_scanConfigurationArn = std::move(value); }

    /**
     * <p>The scan configuration ARN for the CIS scan configuration.</p>
     */
    inline void SetScanConfigurationArn(const char* value) { m_scanConfigurationArn.assign(value); }

    /**
     * <p>The scan configuration ARN for the CIS scan configuration.</p>
     */
    inline CreateCisScanConfigurationResult& WithScanConfigurationArn(const Aws::String& value) { SetScanConfigurationArn(value); return *this;}

    /**
     * <p>The scan configuration ARN for the CIS scan configuration.</p>
     */
    inline CreateCisScanConfigurationResult& WithScanConfigurationArn(Aws::String&& value) { SetScanConfigurationArn(std::move(value)); return *this;}

    /**
     * <p>The scan configuration ARN for the CIS scan configuration.</p>
     */
    inline CreateCisScanConfigurationResult& WithScanConfigurationArn(const char* value) { SetScanConfigurationArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateCisScanConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateCisScanConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateCisScanConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_scanConfigurationArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
