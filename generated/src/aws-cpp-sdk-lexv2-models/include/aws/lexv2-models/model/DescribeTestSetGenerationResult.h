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
    AWS_LEXMODELSV2_API DescribeTestSetGenerationResult() = default;
    AWS_LEXMODELSV2_API DescribeTestSetGenerationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API DescribeTestSetGenerationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the test set generation.</p>
     */
    inline const Aws::String& GetTestSetGenerationId() const { return m_testSetGenerationId; }
    template<typename TestSetGenerationIdT = Aws::String>
    void SetTestSetGenerationId(TestSetGenerationIdT&& value) { m_testSetGenerationIdHasBeenSet = true; m_testSetGenerationId = std::forward<TestSetGenerationIdT>(value); }
    template<typename TestSetGenerationIdT = Aws::String>
    DescribeTestSetGenerationResult& WithTestSetGenerationId(TestSetGenerationIdT&& value) { SetTestSetGenerationId(std::forward<TestSetGenerationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status for the test set generation.</p>
     */
    inline TestSetGenerationStatus GetTestSetGenerationStatus() const { return m_testSetGenerationStatus; }
    inline void SetTestSetGenerationStatus(TestSetGenerationStatus value) { m_testSetGenerationStatusHasBeenSet = true; m_testSetGenerationStatus = value; }
    inline DescribeTestSetGenerationResult& WithTestSetGenerationStatus(TestSetGenerationStatus value) { SetTestSetGenerationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reasons the test set generation failed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFailureReasons() const { return m_failureReasons; }
    template<typename FailureReasonsT = Aws::Vector<Aws::String>>
    void SetFailureReasons(FailureReasonsT&& value) { m_failureReasonsHasBeenSet = true; m_failureReasons = std::forward<FailureReasonsT>(value); }
    template<typename FailureReasonsT = Aws::Vector<Aws::String>>
    DescribeTestSetGenerationResult& WithFailureReasons(FailureReasonsT&& value) { SetFailureReasons(std::forward<FailureReasonsT>(value)); return *this;}
    template<typename FailureReasonsT = Aws::String>
    DescribeTestSetGenerationResult& AddFailureReasons(FailureReasonsT&& value) { m_failureReasonsHasBeenSet = true; m_failureReasons.emplace_back(std::forward<FailureReasonsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the test set created for the generated test
     * set.</p>
     */
    inline const Aws::String& GetTestSetId() const { return m_testSetId; }
    template<typename TestSetIdT = Aws::String>
    void SetTestSetId(TestSetIdT&& value) { m_testSetIdHasBeenSet = true; m_testSetId = std::forward<TestSetIdT>(value); }
    template<typename TestSetIdT = Aws::String>
    DescribeTestSetGenerationResult& WithTestSetId(TestSetIdT&& value) { SetTestSetId(std::forward<TestSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test set name for the generated test set.</p>
     */
    inline const Aws::String& GetTestSetName() const { return m_testSetName; }
    template<typename TestSetNameT = Aws::String>
    void SetTestSetName(TestSetNameT&& value) { m_testSetNameHasBeenSet = true; m_testSetName = std::forward<TestSetNameT>(value); }
    template<typename TestSetNameT = Aws::String>
    DescribeTestSetGenerationResult& WithTestSetName(TestSetNameT&& value) { SetTestSetName(std::forward<TestSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test set description for the test set generation.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DescribeTestSetGenerationResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 storage location for the test set generation.</p>
     */
    inline const TestSetStorageLocation& GetStorageLocation() const { return m_storageLocation; }
    template<typename StorageLocationT = TestSetStorageLocation>
    void SetStorageLocation(StorageLocationT&& value) { m_storageLocationHasBeenSet = true; m_storageLocation = std::forward<StorageLocationT>(value); }
    template<typename StorageLocationT = TestSetStorageLocation>
    DescribeTestSetGenerationResult& WithStorageLocation(StorageLocationT&& value) { SetStorageLocation(std::forward<StorageLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data source of the test set used for the test set generation.</p>
     */
    inline const TestSetGenerationDataSource& GetGenerationDataSource() const { return m_generationDataSource; }
    template<typename GenerationDataSourceT = TestSetGenerationDataSource>
    void SetGenerationDataSource(GenerationDataSourceT&& value) { m_generationDataSourceHasBeenSet = true; m_generationDataSource = std::forward<GenerationDataSourceT>(value); }
    template<typename GenerationDataSourceT = TestSetGenerationDataSource>
    DescribeTestSetGenerationResult& WithGenerationDataSource(GenerationDataSourceT&& value) { SetGenerationDataSource(std::forward<GenerationDataSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The roleARN of the test set used for the test set generation.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    DescribeTestSetGenerationResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation date and time for the test set generation.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const { return m_creationDateTime; }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    void SetCreationDateTime(CreationDateTimeT&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::forward<CreationDateTimeT>(value); }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    DescribeTestSetGenerationResult& WithCreationDateTime(CreationDateTimeT&& value) { SetCreationDateTime(std::forward<CreationDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time of the last update for the test set generation.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const { return m_lastUpdatedDateTime; }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::forward<LastUpdatedDateTimeT>(value); }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    DescribeTestSetGenerationResult& WithLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { SetLastUpdatedDateTime(std::forward<LastUpdatedDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeTestSetGenerationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_testSetGenerationId;
    bool m_testSetGenerationIdHasBeenSet = false;

    TestSetGenerationStatus m_testSetGenerationStatus{TestSetGenerationStatus::NOT_SET};
    bool m_testSetGenerationStatusHasBeenSet = false;

    Aws::Vector<Aws::String> m_failureReasons;
    bool m_failureReasonsHasBeenSet = false;

    Aws::String m_testSetId;
    bool m_testSetIdHasBeenSet = false;

    Aws::String m_testSetName;
    bool m_testSetNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    TestSetStorageLocation m_storageLocation;
    bool m_storageLocationHasBeenSet = false;

    TestSetGenerationDataSource m_generationDataSource;
    bool m_generationDataSourceHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime{};
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime{};
    bool m_lastUpdatedDateTimeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
