/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamesparks/GameSparks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/gamesparks/model/GeneratedCodeJobState.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace GameSparks
{
namespace Model
{

  /**
   * <p>Details about a generated code job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/GeneratedCodeJobDetails">AWS
   * API Reference</a></p>
   */
  class GeneratedCodeJobDetails
  {
  public:
    AWS_GAMESPARKS_API GeneratedCodeJobDetails();
    AWS_GAMESPARKS_API GeneratedCodeJobDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMESPARKS_API GeneratedCodeJobDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMESPARKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The description of the generated code job.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the generated code job.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the generated code job.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the generated code job.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the generated code job.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the generated code job.</p>
     */
    inline GeneratedCodeJobDetails& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the generated code job.</p>
     */
    inline GeneratedCodeJobDetails& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the generated code job.</p>
     */
    inline GeneratedCodeJobDetails& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The expiration date and time for the download URL.</p> <p> The download URL
     * us guaranteed to be available until at least this time. </p>
     */
    inline const Aws::Utils::DateTime& GetExpirationTime() const{ return m_expirationTime; }

    /**
     * <p>The expiration date and time for the download URL.</p> <p> The download URL
     * us guaranteed to be available until at least this time. </p>
     */
    inline bool ExpirationTimeHasBeenSet() const { return m_expirationTimeHasBeenSet; }

    /**
     * <p>The expiration date and time for the download URL.</p> <p> The download URL
     * us guaranteed to be available until at least this time. </p>
     */
    inline void SetExpirationTime(const Aws::Utils::DateTime& value) { m_expirationTimeHasBeenSet = true; m_expirationTime = value; }

    /**
     * <p>The expiration date and time for the download URL.</p> <p> The download URL
     * us guaranteed to be available until at least this time. </p>
     */
    inline void SetExpirationTime(Aws::Utils::DateTime&& value) { m_expirationTimeHasBeenSet = true; m_expirationTime = std::move(value); }

    /**
     * <p>The expiration date and time for the download URL.</p> <p> The download URL
     * us guaranteed to be available until at least this time. </p>
     */
    inline GeneratedCodeJobDetails& WithExpirationTime(const Aws::Utils::DateTime& value) { SetExpirationTime(value); return *this;}

    /**
     * <p>The expiration date and time for the download URL.</p> <p> The download URL
     * us guaranteed to be available until at least this time. </p>
     */
    inline GeneratedCodeJobDetails& WithExpirationTime(Aws::Utils::DateTime&& value) { SetExpirationTime(std::move(value)); return *this;}


    /**
     * <p>The identifier for the generated code job.</p>
     */
    inline const Aws::String& GetGeneratedCodeJobId() const{ return m_generatedCodeJobId; }

    /**
     * <p>The identifier for the generated code job.</p>
     */
    inline bool GeneratedCodeJobIdHasBeenSet() const { return m_generatedCodeJobIdHasBeenSet; }

    /**
     * <p>The identifier for the generated code job.</p>
     */
    inline void SetGeneratedCodeJobId(const Aws::String& value) { m_generatedCodeJobIdHasBeenSet = true; m_generatedCodeJobId = value; }

    /**
     * <p>The identifier for the generated code job.</p>
     */
    inline void SetGeneratedCodeJobId(Aws::String&& value) { m_generatedCodeJobIdHasBeenSet = true; m_generatedCodeJobId = std::move(value); }

    /**
     * <p>The identifier for the generated code job.</p>
     */
    inline void SetGeneratedCodeJobId(const char* value) { m_generatedCodeJobIdHasBeenSet = true; m_generatedCodeJobId.assign(value); }

    /**
     * <p>The identifier for the generated code job.</p>
     */
    inline GeneratedCodeJobDetails& WithGeneratedCodeJobId(const Aws::String& value) { SetGeneratedCodeJobId(value); return *this;}

    /**
     * <p>The identifier for the generated code job.</p>
     */
    inline GeneratedCodeJobDetails& WithGeneratedCodeJobId(Aws::String&& value) { SetGeneratedCodeJobId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the generated code job.</p>
     */
    inline GeneratedCodeJobDetails& WithGeneratedCodeJobId(const char* value) { SetGeneratedCodeJobId(value); return *this;}


    /**
     * <p>A presigned URL that can be used to download the generated code.</p>
     */
    inline const Aws::String& GetS3Url() const{ return m_s3Url; }

    /**
     * <p>A presigned URL that can be used to download the generated code.</p>
     */
    inline bool S3UrlHasBeenSet() const { return m_s3UrlHasBeenSet; }

    /**
     * <p>A presigned URL that can be used to download the generated code.</p>
     */
    inline void SetS3Url(const Aws::String& value) { m_s3UrlHasBeenSet = true; m_s3Url = value; }

    /**
     * <p>A presigned URL that can be used to download the generated code.</p>
     */
    inline void SetS3Url(Aws::String&& value) { m_s3UrlHasBeenSet = true; m_s3Url = std::move(value); }

    /**
     * <p>A presigned URL that can be used to download the generated code.</p>
     */
    inline void SetS3Url(const char* value) { m_s3UrlHasBeenSet = true; m_s3Url.assign(value); }

    /**
     * <p>A presigned URL that can be used to download the generated code.</p>
     */
    inline GeneratedCodeJobDetails& WithS3Url(const Aws::String& value) { SetS3Url(value); return *this;}

    /**
     * <p>A presigned URL that can be used to download the generated code.</p>
     */
    inline GeneratedCodeJobDetails& WithS3Url(Aws::String&& value) { SetS3Url(std::move(value)); return *this;}

    /**
     * <p>A presigned URL that can be used to download the generated code.</p>
     */
    inline GeneratedCodeJobDetails& WithS3Url(const char* value) { SetS3Url(value); return *this;}


    /**
     * <p>The status of the generated code job</p>
     */
    inline const GeneratedCodeJobState& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the generated code job</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the generated code job</p>
     */
    inline void SetStatus(const GeneratedCodeJobState& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the generated code job</p>
     */
    inline void SetStatus(GeneratedCodeJobState&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the generated code job</p>
     */
    inline GeneratedCodeJobDetails& WithStatus(const GeneratedCodeJobState& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the generated code job</p>
     */
    inline GeneratedCodeJobDetails& WithStatus(GeneratedCodeJobState&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_expirationTime;
    bool m_expirationTimeHasBeenSet = false;

    Aws::String m_generatedCodeJobId;
    bool m_generatedCodeJobIdHasBeenSet = false;

    Aws::String m_s3Url;
    bool m_s3UrlHasBeenSet = false;

    GeneratedCodeJobState m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace GameSparks
} // namespace Aws
