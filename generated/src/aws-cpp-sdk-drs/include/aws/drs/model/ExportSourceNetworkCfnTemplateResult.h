/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
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
namespace drs
{
namespace Model
{
  class ExportSourceNetworkCfnTemplateResult
  {
  public:
    AWS_DRS_API ExportSourceNetworkCfnTemplateResult();
    AWS_DRS_API ExportSourceNetworkCfnTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DRS_API ExportSourceNetworkCfnTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>S3 bucket URL where the Source Network CloudFormation template was exported
     * to.</p>
     */
    inline const Aws::String& GetS3DestinationUrl() const{ return m_s3DestinationUrl; }

    /**
     * <p>S3 bucket URL where the Source Network CloudFormation template was exported
     * to.</p>
     */
    inline void SetS3DestinationUrl(const Aws::String& value) { m_s3DestinationUrl = value; }

    /**
     * <p>S3 bucket URL where the Source Network CloudFormation template was exported
     * to.</p>
     */
    inline void SetS3DestinationUrl(Aws::String&& value) { m_s3DestinationUrl = std::move(value); }

    /**
     * <p>S3 bucket URL where the Source Network CloudFormation template was exported
     * to.</p>
     */
    inline void SetS3DestinationUrl(const char* value) { m_s3DestinationUrl.assign(value); }

    /**
     * <p>S3 bucket URL where the Source Network CloudFormation template was exported
     * to.</p>
     */
    inline ExportSourceNetworkCfnTemplateResult& WithS3DestinationUrl(const Aws::String& value) { SetS3DestinationUrl(value); return *this;}

    /**
     * <p>S3 bucket URL where the Source Network CloudFormation template was exported
     * to.</p>
     */
    inline ExportSourceNetworkCfnTemplateResult& WithS3DestinationUrl(Aws::String&& value) { SetS3DestinationUrl(std::move(value)); return *this;}

    /**
     * <p>S3 bucket URL where the Source Network CloudFormation template was exported
     * to.</p>
     */
    inline ExportSourceNetworkCfnTemplateResult& WithS3DestinationUrl(const char* value) { SetS3DestinationUrl(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ExportSourceNetworkCfnTemplateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ExportSourceNetworkCfnTemplateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ExportSourceNetworkCfnTemplateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_s3DestinationUrl;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
