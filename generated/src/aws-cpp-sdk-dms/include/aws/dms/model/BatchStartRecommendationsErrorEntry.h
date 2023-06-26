/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>Provides information about the errors that occurred during the analysis of
   * the source database.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/BatchStartRecommendationsErrorEntry">AWS
   * API Reference</a></p>
   */
  class BatchStartRecommendationsErrorEntry
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API BatchStartRecommendationsErrorEntry();
    AWS_DATABASEMIGRATIONSERVICE_API BatchStartRecommendationsErrorEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API BatchStartRecommendationsErrorEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the source database.</p>
     */
    inline const Aws::String& GetDatabaseId() const{ return m_databaseId; }

    /**
     * <p>The identifier of the source database.</p>
     */
    inline bool DatabaseIdHasBeenSet() const { return m_databaseIdHasBeenSet; }

    /**
     * <p>The identifier of the source database.</p>
     */
    inline void SetDatabaseId(const Aws::String& value) { m_databaseIdHasBeenSet = true; m_databaseId = value; }

    /**
     * <p>The identifier of the source database.</p>
     */
    inline void SetDatabaseId(Aws::String&& value) { m_databaseIdHasBeenSet = true; m_databaseId = std::move(value); }

    /**
     * <p>The identifier of the source database.</p>
     */
    inline void SetDatabaseId(const char* value) { m_databaseIdHasBeenSet = true; m_databaseId.assign(value); }

    /**
     * <p>The identifier of the source database.</p>
     */
    inline BatchStartRecommendationsErrorEntry& WithDatabaseId(const Aws::String& value) { SetDatabaseId(value); return *this;}

    /**
     * <p>The identifier of the source database.</p>
     */
    inline BatchStartRecommendationsErrorEntry& WithDatabaseId(Aws::String&& value) { SetDatabaseId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the source database.</p>
     */
    inline BatchStartRecommendationsErrorEntry& WithDatabaseId(const char* value) { SetDatabaseId(value); return *this;}


    /**
     * <p>The information about the error.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The information about the error.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The information about the error.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The information about the error.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The information about the error.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The information about the error.</p>
     */
    inline BatchStartRecommendationsErrorEntry& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The information about the error.</p>
     */
    inline BatchStartRecommendationsErrorEntry& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The information about the error.</p>
     */
    inline BatchStartRecommendationsErrorEntry& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The code of an error that occurred during the analysis of the source
     * database.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }

    /**
     * <p>The code of an error that occurred during the analysis of the source
     * database.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>The code of an error that occurred during the analysis of the source
     * database.</p>
     */
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The code of an error that occurred during the analysis of the source
     * database.</p>
     */
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The code of an error that occurred during the analysis of the source
     * database.</p>
     */
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    /**
     * <p>The code of an error that occurred during the analysis of the source
     * database.</p>
     */
    inline BatchStartRecommendationsErrorEntry& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    /**
     * <p>The code of an error that occurred during the analysis of the source
     * database.</p>
     */
    inline BatchStartRecommendationsErrorEntry& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    /**
     * <p>The code of an error that occurred during the analysis of the source
     * database.</p>
     */
    inline BatchStartRecommendationsErrorEntry& WithCode(const char* value) { SetCode(value); return *this;}

  private:

    Aws::String m_databaseId;
    bool m_databaseIdHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_code;
    bool m_codeHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
