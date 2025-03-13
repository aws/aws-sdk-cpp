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
    AWS_DRS_API ExportSourceNetworkCfnTemplateResult() = default;
    AWS_DRS_API ExportSourceNetworkCfnTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DRS_API ExportSourceNetworkCfnTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>S3 bucket URL where the Source Network CloudFormation template was exported
     * to.</p>
     */
    inline const Aws::String& GetS3DestinationUrl() const { return m_s3DestinationUrl; }
    template<typename S3DestinationUrlT = Aws::String>
    void SetS3DestinationUrl(S3DestinationUrlT&& value) { m_s3DestinationUrlHasBeenSet = true; m_s3DestinationUrl = std::forward<S3DestinationUrlT>(value); }
    template<typename S3DestinationUrlT = Aws::String>
    ExportSourceNetworkCfnTemplateResult& WithS3DestinationUrl(S3DestinationUrlT&& value) { SetS3DestinationUrl(std::forward<S3DestinationUrlT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ExportSourceNetworkCfnTemplateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_s3DestinationUrl;
    bool m_s3DestinationUrlHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
