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
  class DeleteDistributionConfigurationResult
  {
  public:
    AWS_IMAGEBUILDER_API DeleteDistributionConfigurationResult();
    AWS_IMAGEBUILDER_API DeleteDistributionConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API DeleteDistributionConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteDistributionConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteDistributionConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteDistributionConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the distribution configuration that was
     * deleted.</p>
     */
    inline const Aws::String& GetDistributionConfigurationArn() const{ return m_distributionConfigurationArn; }
    inline void SetDistributionConfigurationArn(const Aws::String& value) { m_distributionConfigurationArn = value; }
    inline void SetDistributionConfigurationArn(Aws::String&& value) { m_distributionConfigurationArn = std::move(value); }
    inline void SetDistributionConfigurationArn(const char* value) { m_distributionConfigurationArn.assign(value); }
    inline DeleteDistributionConfigurationResult& WithDistributionConfigurationArn(const Aws::String& value) { SetDistributionConfigurationArn(value); return *this;}
    inline DeleteDistributionConfigurationResult& WithDistributionConfigurationArn(Aws::String&& value) { SetDistributionConfigurationArn(std::move(value)); return *this;}
    inline DeleteDistributionConfigurationResult& WithDistributionConfigurationArn(const char* value) { SetDistributionConfigurationArn(value); return *this;}
    ///@}
  private:

    Aws::String m_requestId;

    Aws::String m_distributionConfigurationArn;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
