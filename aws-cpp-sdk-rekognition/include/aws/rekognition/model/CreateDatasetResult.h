/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
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
namespace Rekognition
{
namespace Model
{
  class CreateDatasetResult
  {
  public:
    AWS_REKOGNITION_API CreateDatasetResult();
    AWS_REKOGNITION_API CreateDatasetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API CreateDatasetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The ARN of the created Amazon Rekognition Custom Labels dataset. </p>
     */
    inline const Aws::String& GetDatasetArn() const{ return m_datasetArn; }

    /**
     * <p> The ARN of the created Amazon Rekognition Custom Labels dataset. </p>
     */
    inline void SetDatasetArn(const Aws::String& value) { m_datasetArn = value; }

    /**
     * <p> The ARN of the created Amazon Rekognition Custom Labels dataset. </p>
     */
    inline void SetDatasetArn(Aws::String&& value) { m_datasetArn = std::move(value); }

    /**
     * <p> The ARN of the created Amazon Rekognition Custom Labels dataset. </p>
     */
    inline void SetDatasetArn(const char* value) { m_datasetArn.assign(value); }

    /**
     * <p> The ARN of the created Amazon Rekognition Custom Labels dataset. </p>
     */
    inline CreateDatasetResult& WithDatasetArn(const Aws::String& value) { SetDatasetArn(value); return *this;}

    /**
     * <p> The ARN of the created Amazon Rekognition Custom Labels dataset. </p>
     */
    inline CreateDatasetResult& WithDatasetArn(Aws::String&& value) { SetDatasetArn(std::move(value)); return *this;}

    /**
     * <p> The ARN of the created Amazon Rekognition Custom Labels dataset. </p>
     */
    inline CreateDatasetResult& WithDatasetArn(const char* value) { SetDatasetArn(value); return *this;}

  private:

    Aws::String m_datasetArn;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
