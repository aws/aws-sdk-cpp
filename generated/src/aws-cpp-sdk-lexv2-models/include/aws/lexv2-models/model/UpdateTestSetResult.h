/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/TestSetModality.h>
#include <aws/lexv2-models/model/TestSetStatus.h>
#include <aws/lexv2-models/model/TestSetStorageLocation.h>
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
namespace LexModelsV2
{
namespace Model
{
  class UpdateTestSetResult
  {
  public:
    AWS_LEXMODELSV2_API UpdateTestSetResult();
    AWS_LEXMODELSV2_API UpdateTestSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API UpdateTestSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The test set Id for which update test operation to be performed.</p>
     */
    inline const Aws::String& GetTestSetId() const{ return m_testSetId; }

    /**
     * <p>The test set Id for which update test operation to be performed.</p>
     */
    inline void SetTestSetId(const Aws::String& value) { m_testSetId = value; }

    /**
     * <p>The test set Id for which update test operation to be performed.</p>
     */
    inline void SetTestSetId(Aws::String&& value) { m_testSetId = std::move(value); }

    /**
     * <p>The test set Id for which update test operation to be performed.</p>
     */
    inline void SetTestSetId(const char* value) { m_testSetId.assign(value); }

    /**
     * <p>The test set Id for which update test operation to be performed.</p>
     */
    inline UpdateTestSetResult& WithTestSetId(const Aws::String& value) { SetTestSetId(value); return *this;}

    /**
     * <p>The test set Id for which update test operation to be performed.</p>
     */
    inline UpdateTestSetResult& WithTestSetId(Aws::String&& value) { SetTestSetId(std::move(value)); return *this;}

    /**
     * <p>The test set Id for which update test operation to be performed.</p>
     */
    inline UpdateTestSetResult& WithTestSetId(const char* value) { SetTestSetId(value); return *this;}


    /**
     * <p>The test set name for the updated test set.</p>
     */
    inline const Aws::String& GetTestSetName() const{ return m_testSetName; }

    /**
     * <p>The test set name for the updated test set.</p>
     */
    inline void SetTestSetName(const Aws::String& value) { m_testSetName = value; }

    /**
     * <p>The test set name for the updated test set.</p>
     */
    inline void SetTestSetName(Aws::String&& value) { m_testSetName = std::move(value); }

    /**
     * <p>The test set name for the updated test set.</p>
     */
    inline void SetTestSetName(const char* value) { m_testSetName.assign(value); }

    /**
     * <p>The test set name for the updated test set.</p>
     */
    inline UpdateTestSetResult& WithTestSetName(const Aws::String& value) { SetTestSetName(value); return *this;}

    /**
     * <p>The test set name for the updated test set.</p>
     */
    inline UpdateTestSetResult& WithTestSetName(Aws::String&& value) { SetTestSetName(std::move(value)); return *this;}

    /**
     * <p>The test set name for the updated test set.</p>
     */
    inline UpdateTestSetResult& WithTestSetName(const char* value) { SetTestSetName(value); return *this;}


    /**
     * <p>The test set description for the updated test set.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The test set description for the updated test set.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The test set description for the updated test set.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The test set description for the updated test set.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The test set description for the updated test set.</p>
     */
    inline UpdateTestSetResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The test set description for the updated test set.</p>
     */
    inline UpdateTestSetResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The test set description for the updated test set.</p>
     */
    inline UpdateTestSetResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Indicates whether audio or text is used for the updated test set.</p>
     */
    inline const TestSetModality& GetModality() const{ return m_modality; }

    /**
     * <p>Indicates whether audio or text is used for the updated test set.</p>
     */
    inline void SetModality(const TestSetModality& value) { m_modality = value; }

    /**
     * <p>Indicates whether audio or text is used for the updated test set.</p>
     */
    inline void SetModality(TestSetModality&& value) { m_modality = std::move(value); }

    /**
     * <p>Indicates whether audio or text is used for the updated test set.</p>
     */
    inline UpdateTestSetResult& WithModality(const TestSetModality& value) { SetModality(value); return *this;}

    /**
     * <p>Indicates whether audio or text is used for the updated test set.</p>
     */
    inline UpdateTestSetResult& WithModality(TestSetModality&& value) { SetModality(std::move(value)); return *this;}


    /**
     * <p>The status for the updated test set.</p>
     */
    inline const TestSetStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status for the updated test set.</p>
     */
    inline void SetStatus(const TestSetStatus& value) { m_status = value; }

    /**
     * <p>The status for the updated test set.</p>
     */
    inline void SetStatus(TestSetStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status for the updated test set.</p>
     */
    inline UpdateTestSetResult& WithStatus(const TestSetStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status for the updated test set.</p>
     */
    inline UpdateTestSetResult& WithStatus(TestSetStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The roleARN used for any operation in the test set to access resources in the
     * Amazon Web Services account.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The roleARN used for any operation in the test set to access resources in the
     * Amazon Web Services account.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p>The roleARN used for any operation in the test set to access resources in the
     * Amazon Web Services account.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p>The roleARN used for any operation in the test set to access resources in the
     * Amazon Web Services account.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p>The roleARN used for any operation in the test set to access resources in the
     * Amazon Web Services account.</p>
     */
    inline UpdateTestSetResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The roleARN used for any operation in the test set to access resources in the
     * Amazon Web Services account.</p>
     */
    inline UpdateTestSetResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The roleARN used for any operation in the test set to access resources in the
     * Amazon Web Services account.</p>
     */
    inline UpdateTestSetResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The number of conversation turns from the updated test set.</p>
     */
    inline int GetNumTurns() const{ return m_numTurns; }

    /**
     * <p>The number of conversation turns from the updated test set.</p>
     */
    inline void SetNumTurns(int value) { m_numTurns = value; }

    /**
     * <p>The number of conversation turns from the updated test set.</p>
     */
    inline UpdateTestSetResult& WithNumTurns(int value) { SetNumTurns(value); return *this;}


    /**
     * <p>The Amazon S3 storage location for the updated test set.</p>
     */
    inline const TestSetStorageLocation& GetStorageLocation() const{ return m_storageLocation; }

    /**
     * <p>The Amazon S3 storage location for the updated test set.</p>
     */
    inline void SetStorageLocation(const TestSetStorageLocation& value) { m_storageLocation = value; }

    /**
     * <p>The Amazon S3 storage location for the updated test set.</p>
     */
    inline void SetStorageLocation(TestSetStorageLocation&& value) { m_storageLocation = std::move(value); }

    /**
     * <p>The Amazon S3 storage location for the updated test set.</p>
     */
    inline UpdateTestSetResult& WithStorageLocation(const TestSetStorageLocation& value) { SetStorageLocation(value); return *this;}

    /**
     * <p>The Amazon S3 storage location for the updated test set.</p>
     */
    inline UpdateTestSetResult& WithStorageLocation(TestSetStorageLocation&& value) { SetStorageLocation(std::move(value)); return *this;}


    /**
     * <p>The creation date and time for the updated test set.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>The creation date and time for the updated test set.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTime = value; }

    /**
     * <p>The creation date and time for the updated test set.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTime = std::move(value); }

    /**
     * <p>The creation date and time for the updated test set.</p>
     */
    inline UpdateTestSetResult& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>The creation date and time for the updated test set.</p>
     */
    inline UpdateTestSetResult& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}


    /**
     * <p> The date and time of the last update for the updated test set.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }

    /**
     * <p> The date and time of the last update for the updated test set.</p>
     */
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTime = value; }

    /**
     * <p> The date and time of the last update for the updated test set.</p>
     */
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTime = std::move(value); }

    /**
     * <p> The date and time of the last update for the updated test set.</p>
     */
    inline UpdateTestSetResult& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}

    /**
     * <p> The date and time of the last update for the updated test set.</p>
     */
    inline UpdateTestSetResult& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateTestSetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateTestSetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateTestSetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_testSetId;

    Aws::String m_testSetName;

    Aws::String m_description;

    TestSetModality m_modality;

    TestSetStatus m_status;

    Aws::String m_roleArn;

    int m_numTurns;

    TestSetStorageLocation m_storageLocation;

    Aws::Utils::DateTime m_creationDateTime;

    Aws::Utils::DateTime m_lastUpdatedDateTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
