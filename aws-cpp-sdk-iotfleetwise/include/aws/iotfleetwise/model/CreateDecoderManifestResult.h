/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
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
namespace IoTFleetWise
{
namespace Model
{
  class CreateDecoderManifestResult
  {
  public:
    AWS_IOTFLEETWISE_API CreateDecoderManifestResult();
    AWS_IOTFLEETWISE_API CreateDecoderManifestResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTFLEETWISE_API CreateDecoderManifestResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The name of the created decoder manifest. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of the created decoder manifest. </p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p> The name of the created decoder manifest. </p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p> The name of the created decoder manifest. </p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p> The name of the created decoder manifest. </p>
     */
    inline CreateDecoderManifestResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of the created decoder manifest. </p>
     */
    inline CreateDecoderManifestResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of the created decoder manifest. </p>
     */
    inline CreateDecoderManifestResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The ARN of the created decoder manifest. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p> The ARN of the created decoder manifest. </p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p> The ARN of the created decoder manifest. </p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p> The ARN of the created decoder manifest. </p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p> The ARN of the created decoder manifest. </p>
     */
    inline CreateDecoderManifestResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p> The ARN of the created decoder manifest. </p>
     */
    inline CreateDecoderManifestResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p> The ARN of the created decoder manifest. </p>
     */
    inline CreateDecoderManifestResult& WithArn(const char* value) { SetArn(value); return *this;}

  private:

    Aws::String m_name;

    Aws::String m_arn;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
