/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/DistributionConfiguration.h>
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
  class GetDistributionConfigurationResult
  {
  public:
    AWS_IMAGEBUILDER_API GetDistributionConfigurationResult();
    AWS_IMAGEBUILDER_API GetDistributionConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API GetDistributionConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetDistributionConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetDistributionConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetDistributionConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The distribution configuration object.</p>
     */
    inline const DistributionConfiguration& GetDistributionConfiguration() const{ return m_distributionConfiguration; }
    inline void SetDistributionConfiguration(const DistributionConfiguration& value) { m_distributionConfiguration = value; }
    inline void SetDistributionConfiguration(DistributionConfiguration&& value) { m_distributionConfiguration = std::move(value); }
    inline GetDistributionConfigurationResult& WithDistributionConfiguration(const DistributionConfiguration& value) { SetDistributionConfiguration(value); return *this;}
    inline GetDistributionConfigurationResult& WithDistributionConfiguration(DistributionConfiguration&& value) { SetDistributionConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_requestId;

    DistributionConfiguration m_distributionConfiguration;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
