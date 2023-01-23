/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotfleetwise/model/ManifestStatus.h>
#include <aws/core/utils/DateTime.h>
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
  class GetDecoderManifestResult
  {
  public:
    AWS_IOTFLEETWISE_API GetDecoderManifestResult();
    AWS_IOTFLEETWISE_API GetDecoderManifestResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTFLEETWISE_API GetDecoderManifestResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The name of the decoder manifest. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of the decoder manifest. </p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p> The name of the decoder manifest. </p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p> The name of the decoder manifest. </p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p> The name of the decoder manifest. </p>
     */
    inline GetDecoderManifestResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of the decoder manifest. </p>
     */
    inline GetDecoderManifestResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of the decoder manifest. </p>
     */
    inline GetDecoderManifestResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) of the decoder manifest. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the decoder manifest. </p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the decoder manifest. </p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the decoder manifest. </p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the decoder manifest. </p>
     */
    inline GetDecoderManifestResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the decoder manifest. </p>
     */
    inline GetDecoderManifestResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the decoder manifest. </p>
     */
    inline GetDecoderManifestResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p> A brief description of the decoder manifest.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> A brief description of the decoder manifest.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p> A brief description of the decoder manifest.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p> A brief description of the decoder manifest.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p> A brief description of the decoder manifest.</p>
     */
    inline GetDecoderManifestResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> A brief description of the decoder manifest.</p>
     */
    inline GetDecoderManifestResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> A brief description of the decoder manifest.</p>
     */
    inline GetDecoderManifestResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> The ARN of a vehicle model (model manifest) associated with the decoder
     * manifest.</p>
     */
    inline const Aws::String& GetModelManifestArn() const{ return m_modelManifestArn; }

    /**
     * <p> The ARN of a vehicle model (model manifest) associated with the decoder
     * manifest.</p>
     */
    inline void SetModelManifestArn(const Aws::String& value) { m_modelManifestArn = value; }

    /**
     * <p> The ARN of a vehicle model (model manifest) associated with the decoder
     * manifest.</p>
     */
    inline void SetModelManifestArn(Aws::String&& value) { m_modelManifestArn = std::move(value); }

    /**
     * <p> The ARN of a vehicle model (model manifest) associated with the decoder
     * manifest.</p>
     */
    inline void SetModelManifestArn(const char* value) { m_modelManifestArn.assign(value); }

    /**
     * <p> The ARN of a vehicle model (model manifest) associated with the decoder
     * manifest.</p>
     */
    inline GetDecoderManifestResult& WithModelManifestArn(const Aws::String& value) { SetModelManifestArn(value); return *this;}

    /**
     * <p> The ARN of a vehicle model (model manifest) associated with the decoder
     * manifest.</p>
     */
    inline GetDecoderManifestResult& WithModelManifestArn(Aws::String&& value) { SetModelManifestArn(std::move(value)); return *this;}

    /**
     * <p> The ARN of a vehicle model (model manifest) associated with the decoder
     * manifest.</p>
     */
    inline GetDecoderManifestResult& WithModelManifestArn(const char* value) { SetModelManifestArn(value); return *this;}


    /**
     * <p> The state of the decoder manifest. If the status is <code>ACTIVE</code>, the
     * decoder manifest can't be edited. If the status is marked <code>DRAFT</code>,
     * you can edit the decoder manifest.</p>
     */
    inline const ManifestStatus& GetStatus() const{ return m_status; }

    /**
     * <p> The state of the decoder manifest. If the status is <code>ACTIVE</code>, the
     * decoder manifest can't be edited. If the status is marked <code>DRAFT</code>,
     * you can edit the decoder manifest.</p>
     */
    inline void SetStatus(const ManifestStatus& value) { m_status = value; }

    /**
     * <p> The state of the decoder manifest. If the status is <code>ACTIVE</code>, the
     * decoder manifest can't be edited. If the status is marked <code>DRAFT</code>,
     * you can edit the decoder manifest.</p>
     */
    inline void SetStatus(ManifestStatus&& value) { m_status = std::move(value); }

    /**
     * <p> The state of the decoder manifest. If the status is <code>ACTIVE</code>, the
     * decoder manifest can't be edited. If the status is marked <code>DRAFT</code>,
     * you can edit the decoder manifest.</p>
     */
    inline GetDecoderManifestResult& WithStatus(const ManifestStatus& value) { SetStatus(value); return *this;}

    /**
     * <p> The state of the decoder manifest. If the status is <code>ACTIVE</code>, the
     * decoder manifest can't be edited. If the status is marked <code>DRAFT</code>,
     * you can edit the decoder manifest.</p>
     */
    inline GetDecoderManifestResult& WithStatus(ManifestStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p> The time the decoder manifest was created in seconds since epoch (January 1,
     * 1970 at midnight UTC time). </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p> The time the decoder manifest was created in seconds since epoch (January 1,
     * 1970 at midnight UTC time). </p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p> The time the decoder manifest was created in seconds since epoch (January 1,
     * 1970 at midnight UTC time). </p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p> The time the decoder manifest was created in seconds since epoch (January 1,
     * 1970 at midnight UTC time). </p>
     */
    inline GetDecoderManifestResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p> The time the decoder manifest was created in seconds since epoch (January 1,
     * 1970 at midnight UTC time). </p>
     */
    inline GetDecoderManifestResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p> The time the decoder manifest was last updated in seconds since epoch
     * (January 1, 1970 at midnight UTC time). </p>
     */
    inline const Aws::Utils::DateTime& GetLastModificationTime() const{ return m_lastModificationTime; }

    /**
     * <p> The time the decoder manifest was last updated in seconds since epoch
     * (January 1, 1970 at midnight UTC time). </p>
     */
    inline void SetLastModificationTime(const Aws::Utils::DateTime& value) { m_lastModificationTime = value; }

    /**
     * <p> The time the decoder manifest was last updated in seconds since epoch
     * (January 1, 1970 at midnight UTC time). </p>
     */
    inline void SetLastModificationTime(Aws::Utils::DateTime&& value) { m_lastModificationTime = std::move(value); }

    /**
     * <p> The time the decoder manifest was last updated in seconds since epoch
     * (January 1, 1970 at midnight UTC time). </p>
     */
    inline GetDecoderManifestResult& WithLastModificationTime(const Aws::Utils::DateTime& value) { SetLastModificationTime(value); return *this;}

    /**
     * <p> The time the decoder manifest was last updated in seconds since epoch
     * (January 1, 1970 at midnight UTC time). </p>
     */
    inline GetDecoderManifestResult& WithLastModificationTime(Aws::Utils::DateTime&& value) { SetLastModificationTime(std::move(value)); return *this;}

  private:

    Aws::String m_name;

    Aws::String m_arn;

    Aws::String m_description;

    Aws::String m_modelManifestArn;

    ManifestStatus m_status;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastModificationTime;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
