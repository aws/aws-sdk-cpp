/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudtrail/model/ImportFailureStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace CloudTrail
{
namespace Model
{

  /**
   * <p> Provides information about an import failure. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/ImportFailureListItem">AWS
   * API Reference</a></p>
   */
  class ImportFailureListItem
  {
  public:
    AWS_CLOUDTRAIL_API ImportFailureListItem();
    AWS_CLOUDTRAIL_API ImportFailureListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API ImportFailureListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDTRAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The location of the failure in the S3 bucket. </p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p> The location of the failure in the S3 bucket. </p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p> The location of the failure in the S3 bucket. </p>
     */
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p> The location of the failure in the S3 bucket. </p>
     */
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p> The location of the failure in the S3 bucket. </p>
     */
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }

    /**
     * <p> The location of the failure in the S3 bucket. </p>
     */
    inline ImportFailureListItem& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p> The location of the failure in the S3 bucket. </p>
     */
    inline ImportFailureListItem& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p> The location of the failure in the S3 bucket. </p>
     */
    inline ImportFailureListItem& WithLocation(const char* value) { SetLocation(value); return *this;}


    /**
     * <p> The status of the import. </p>
     */
    inline const ImportFailureStatus& GetStatus() const{ return m_status; }

    /**
     * <p> The status of the import. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> The status of the import. </p>
     */
    inline void SetStatus(const ImportFailureStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> The status of the import. </p>
     */
    inline void SetStatus(ImportFailureStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> The status of the import. </p>
     */
    inline ImportFailureListItem& WithStatus(const ImportFailureStatus& value) { SetStatus(value); return *this;}

    /**
     * <p> The status of the import. </p>
     */
    inline ImportFailureListItem& WithStatus(ImportFailureStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p> The type of import error. </p>
     */
    inline const Aws::String& GetErrorType() const{ return m_errorType; }

    /**
     * <p> The type of import error. </p>
     */
    inline bool ErrorTypeHasBeenSet() const { return m_errorTypeHasBeenSet; }

    /**
     * <p> The type of import error. </p>
     */
    inline void SetErrorType(const Aws::String& value) { m_errorTypeHasBeenSet = true; m_errorType = value; }

    /**
     * <p> The type of import error. </p>
     */
    inline void SetErrorType(Aws::String&& value) { m_errorTypeHasBeenSet = true; m_errorType = std::move(value); }

    /**
     * <p> The type of import error. </p>
     */
    inline void SetErrorType(const char* value) { m_errorTypeHasBeenSet = true; m_errorType.assign(value); }

    /**
     * <p> The type of import error. </p>
     */
    inline ImportFailureListItem& WithErrorType(const Aws::String& value) { SetErrorType(value); return *this;}

    /**
     * <p> The type of import error. </p>
     */
    inline ImportFailureListItem& WithErrorType(Aws::String&& value) { SetErrorType(std::move(value)); return *this;}

    /**
     * <p> The type of import error. </p>
     */
    inline ImportFailureListItem& WithErrorType(const char* value) { SetErrorType(value); return *this;}


    /**
     * <p> Provides the reason the import failed. </p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p> Provides the reason the import failed. </p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p> Provides the reason the import failed. </p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p> Provides the reason the import failed. </p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p> Provides the reason the import failed. </p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p> Provides the reason the import failed. </p>
     */
    inline ImportFailureListItem& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p> Provides the reason the import failed. </p>
     */
    inline ImportFailureListItem& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p> Provides the reason the import failed. </p>
     */
    inline ImportFailureListItem& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


    /**
     * <p> When the import was last updated. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p> When the import was last updated. </p>
     */
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }

    /**
     * <p> When the import was last updated. </p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p> When the import was last updated. </p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }

    /**
     * <p> When the import was last updated. </p>
     */
    inline ImportFailureListItem& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p> When the import was last updated. </p>
     */
    inline ImportFailureListItem& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}

  private:

    Aws::String m_location;
    bool m_locationHasBeenSet = false;

    ImportFailureStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_errorType;
    bool m_errorTypeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
