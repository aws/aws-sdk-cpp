/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/TestSetGenerationStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/TestSetStorageLocation.h>
#include <aws/lexv2-models/model/TestSetGenerationDataSource.h>
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
  class DescribeTestSetGenerationResult
  {
  public:
    AWS_LEXMODELSV2_API DescribeTestSetGenerationResult();
    AWS_LEXMODELSV2_API DescribeTestSetGenerationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API DescribeTestSetGenerationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the test set generation.</p>
     */
    inline const Aws::String& GetTestSetGenerationId() const{ return m_testSetGenerationId; }
    inline void SetTestSetGenerationId(const Aws::String& value) { m_testSetGenerationId = value; }
    inline void SetTestSetGenerationId(Aws::String&& value) { m_testSetGenerationId = std::move(value); }
    inline void SetTestSetGenerationId(const char* value) { m_testSetGenerationId.assign(value); }
    inline DescribeTestSetGenerationResult& WithTestSetGenerationId(const Aws::String& value) { SetTestSetGenerationId(value); return *this;}
    inline DescribeTestSetGenerationResult& WithTestSetGenerationId(Aws::String&& value) { SetTestSetGenerationId(std::move(value)); return *this;}
    inline DescribeTestSetGenerationResult& WithTestSetGenerationId(const char* value) { SetTestSetGenerationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status for the test set generation.</p>
     */
    inline const TestSetGenerationStatus& GetTestSetGenerationStatus() const{ return m_testSetGenerationStatus; }
    inline void SetTestSetGenerationStatus(const TestSetGenerationStatus& value) { m_testSetGenerationStatus = value; }
    inline void SetTestSetGenerationStatus(TestSetGenerationStatus&& value) { m_testSetGenerationStatus = std::move(value); }
    inline DescribeTestSetGenerationResult& WithTestSetGenerationStatus(const TestSetGenerationStatus& value) { SetTestSetGenerationStatus(value); return *this;}
    inline DescribeTestSetGenerationResult& WithTestSetGenerationStatus(TestSetGenerationStatus&& value) { SetTestSetGenerationStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reasons the test set generation failed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFailureReasons() const{ return m_failureReasons; }
    inline void SetFailureReasons(const Aws::Vector<Aws::String>& value) { m_failureReasons = value; }
    inline void SetFailureReasons(Aws::Vector<Aws::String>&& value) { m_failureReasons = std::move(value); }
    inline DescribeTestSetGenerationResult& WithFailureReasons(const Aws::Vector<Aws::String>& value) { SetFailureReasons(value); return *this;}
    inline DescribeTestSetGenerationResult& WithFailureReasons(Aws::Vector<Aws::String>&& value) { SetFailureReasons(std::move(value)); return *this;}
    inline DescribeTestSetGenerationResult& AddFailureReasons(const Aws::String& value) { m_failureReasons.push_back(value); return *this; }
    inline DescribeTestSetGenerationResult& AddFailureReasons(Aws::String&& value) { m_failureReasons.push_back(std::move(value)); return *this; }
    inline DescribeTestSetGenerationResult& AddFailureReasons(const char* value) { m_failureReasons.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the test set created for the generated test
     * set.</p>
     */
    inline const Aws::String& GetTestSetId() const{ return m_testSetId; }
    inline void SetTestSetId(const Aws::String& value) { m_testSetId = value; }
    inline void SetTestSetId(Aws::String&& value) { m_testSetId = std::move(value); }
    inline void SetTestSetId(const char* value) { m_testSetId.assign(value); }
    inline DescribeTestSetGenerationResult& WithTestSetId(const Aws::String& value) { SetTestSetId(value); return *this;}
    inline DescribeTestSetGenerationResult& WithTestSetId(Aws::String&& value) { SetTestSetId(std::move(value)); return *this;}
    inline DescribeTestSetGenerationResult& WithTestSetId(const char* value) { SetTestSetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test set name for the generated test set.</p>
     */
    inline const Aws::String& GetTestSetName() const{ return m_testSetName; }
    inline void SetTestSetName(const Aws::String& value) { m_testSetName = value; }
    inline void SetTestSetName(Aws::String&& value) { m_testSetName = std::move(value); }
    inline void SetTestSetName(const char* value) { m_testSetName.assign(value); }
    inline DescribeTestSetGenerationResult& WithTestSetName(const Aws::String& value) { SetTestSetName(value); return *this;}
    inline DescribeTestSetGenerationResult& WithTestSetName(Aws::String&& value) { SetTestSetName(std::move(value)); return *this;}
    inline DescribeTestSetGenerationResult& WithTestSetName(const char* value) { SetTestSetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test set description for the test set generation.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline DescribeTestSetGenerationResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline DescribeTestSetGenerationResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline DescribeTestSetGenerationResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 storage location for the test set generation.</p>
     */
    inline const TestSetStorageLocation& GetStorageLocation() const{ return m_storageLocation; }
    inline void SetStorageLocation(const TestSetStorageLocation& value) { m_storageLocation = value; }
    inline void SetStorageLocation(TestSetStorageLocation&& value) { m_storageLocation = std::move(value); }
    inline DescribeTestSetGenerationResult& WithStorageLocation(const TestSetStorageLocation& value) { SetStorageLocation(value); return *this;}
    inline DescribeTestSetGenerationResult& WithStorageLocation(TestSetStorageLocation&& value) { SetStorageLocation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data source of the test set used for the test set generation.</p>
     */
    inline const TestSetGenerationDataSource& GetGenerationDataSource() const{ return m_generationDataSource; }
    inline void SetGenerationDataSource(const TestSetGenerationDataSource& value) { m_generationDataSource = value; }
    inline void SetGenerationDataSource(TestSetGenerationDataSource&& value) { m_generationDataSource = std::move(value); }
    inline DescribeTestSetGenerationResult& WithGenerationDataSource(const TestSetGenerationDataSource& value) { SetGenerationDataSource(value); return *this;}
    inline DescribeTestSetGenerationResult& WithGenerationDataSource(TestSetGenerationDataSource&& value) { SetGenerationDataSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The roleARN of the test set used for the test set generation.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }
    inline DescribeTestSetGenerationResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline DescribeTestSetGenerationResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline DescribeTestSetGenerationResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation date and time for the test set generation.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTime = value; }
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTime = std::move(value); }
    inline DescribeTestSetGenerationResult& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}
    inline DescribeTestSetGenerationResult& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time of the last update for the test set generation.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTime = value; }
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTime = std::move(value); }
    inline DescribeTestSetGenerationResult& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}
    inline DescribeTestSetGenerationResult& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeTestSetGenerationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeTestSetGenerationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeTestSetGenerationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_testSetGenerationId;

    TestSetGenerationStatus m_testSetGenerationStatus;

    Aws::Vector<Aws::String> m_failureReasons;

    Aws::String m_testSetId;

    Aws::String m_testSetName;

    Aws::String m_description;

    TestSetStorageLocation m_storageLocation;

    TestSetGenerationDataSource m_generationDataSource;

    Aws::String m_roleArn;

    Aws::Utils::DateTime m_creationDateTime;

    Aws::Utils::DateTime m_lastUpdatedDateTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
