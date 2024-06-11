/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lexv2-models/model/TestSetGenerationStatus.h>
#include <aws/lexv2-models/model/TestSetStorageLocation.h>
#include <aws/lexv2-models/model/TestSetGenerationDataSource.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class StartTestSetGenerationResult
  {
  public:
    AWS_LEXMODELSV2_API StartTestSetGenerationResult();
    AWS_LEXMODELSV2_API StartTestSetGenerationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API StartTestSetGenerationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the test set generation to describe.</p>
     */
    inline const Aws::String& GetTestSetGenerationId() const{ return m_testSetGenerationId; }
    inline void SetTestSetGenerationId(const Aws::String& value) { m_testSetGenerationId = value; }
    inline void SetTestSetGenerationId(Aws::String&& value) { m_testSetGenerationId = std::move(value); }
    inline void SetTestSetGenerationId(const char* value) { m_testSetGenerationId.assign(value); }
    inline StartTestSetGenerationResult& WithTestSetGenerationId(const Aws::String& value) { SetTestSetGenerationId(value); return *this;}
    inline StartTestSetGenerationResult& WithTestSetGenerationId(Aws::String&& value) { SetTestSetGenerationId(std::move(value)); return *this;}
    inline StartTestSetGenerationResult& WithTestSetGenerationId(const char* value) { SetTestSetGenerationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The creation date and time for the test set generation.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTime = value; }
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTime = std::move(value); }
    inline StartTestSetGenerationResult& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}
    inline StartTestSetGenerationResult& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status for the test set generation.</p>
     */
    inline const TestSetGenerationStatus& GetTestSetGenerationStatus() const{ return m_testSetGenerationStatus; }
    inline void SetTestSetGenerationStatus(const TestSetGenerationStatus& value) { m_testSetGenerationStatus = value; }
    inline void SetTestSetGenerationStatus(TestSetGenerationStatus&& value) { m_testSetGenerationStatus = std::move(value); }
    inline StartTestSetGenerationResult& WithTestSetGenerationStatus(const TestSetGenerationStatus& value) { SetTestSetGenerationStatus(value); return *this;}
    inline StartTestSetGenerationResult& WithTestSetGenerationStatus(TestSetGenerationStatus&& value) { SetTestSetGenerationStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The test set name used for the test set generation.</p>
     */
    inline const Aws::String& GetTestSetName() const{ return m_testSetName; }
    inline void SetTestSetName(const Aws::String& value) { m_testSetName = value; }
    inline void SetTestSetName(Aws::String&& value) { m_testSetName = std::move(value); }
    inline void SetTestSetName(const char* value) { m_testSetName.assign(value); }
    inline StartTestSetGenerationResult& WithTestSetName(const Aws::String& value) { SetTestSetName(value); return *this;}
    inline StartTestSetGenerationResult& WithTestSetName(Aws::String&& value) { SetTestSetName(std::move(value)); return *this;}
    inline StartTestSetGenerationResult& WithTestSetName(const char* value) { SetTestSetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description used for the test set generation.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline StartTestSetGenerationResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline StartTestSetGenerationResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline StartTestSetGenerationResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 storage location for the test set generation.</p>
     */
    inline const TestSetStorageLocation& GetStorageLocation() const{ return m_storageLocation; }
    inline void SetStorageLocation(const TestSetStorageLocation& value) { m_storageLocation = value; }
    inline void SetStorageLocation(TestSetStorageLocation&& value) { m_storageLocation = std::move(value); }
    inline StartTestSetGenerationResult& WithStorageLocation(const TestSetStorageLocation& value) { SetStorageLocation(value); return *this;}
    inline StartTestSetGenerationResult& WithStorageLocation(TestSetStorageLocation&& value) { SetStorageLocation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The data source for the test set generation.</p>
     */
    inline const TestSetGenerationDataSource& GetGenerationDataSource() const{ return m_generationDataSource; }
    inline void SetGenerationDataSource(const TestSetGenerationDataSource& value) { m_generationDataSource = value; }
    inline void SetGenerationDataSource(TestSetGenerationDataSource&& value) { m_generationDataSource = std::move(value); }
    inline StartTestSetGenerationResult& WithGenerationDataSource(const TestSetGenerationDataSource& value) { SetGenerationDataSource(value); return *this;}
    inline StartTestSetGenerationResult& WithGenerationDataSource(TestSetGenerationDataSource&& value) { SetGenerationDataSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The roleARN used for any operation in the test set to access resources in the
     * Amazon Web Services account.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }
    inline StartTestSetGenerationResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline StartTestSetGenerationResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline StartTestSetGenerationResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags that was used for the test set that is being generated.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTestSetTags() const{ return m_testSetTags; }
    inline void SetTestSetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_testSetTags = value; }
    inline void SetTestSetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_testSetTags = std::move(value); }
    inline StartTestSetGenerationResult& WithTestSetTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTestSetTags(value); return *this;}
    inline StartTestSetGenerationResult& WithTestSetTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTestSetTags(std::move(value)); return *this;}
    inline StartTestSetGenerationResult& AddTestSetTags(const Aws::String& key, const Aws::String& value) { m_testSetTags.emplace(key, value); return *this; }
    inline StartTestSetGenerationResult& AddTestSetTags(Aws::String&& key, const Aws::String& value) { m_testSetTags.emplace(std::move(key), value); return *this; }
    inline StartTestSetGenerationResult& AddTestSetTags(const Aws::String& key, Aws::String&& value) { m_testSetTags.emplace(key, std::move(value)); return *this; }
    inline StartTestSetGenerationResult& AddTestSetTags(Aws::String&& key, Aws::String&& value) { m_testSetTags.emplace(std::move(key), std::move(value)); return *this; }
    inline StartTestSetGenerationResult& AddTestSetTags(const char* key, Aws::String&& value) { m_testSetTags.emplace(key, std::move(value)); return *this; }
    inline StartTestSetGenerationResult& AddTestSetTags(Aws::String&& key, const char* value) { m_testSetTags.emplace(std::move(key), value); return *this; }
    inline StartTestSetGenerationResult& AddTestSetTags(const char* key, const char* value) { m_testSetTags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartTestSetGenerationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartTestSetGenerationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartTestSetGenerationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_testSetGenerationId;

    Aws::Utils::DateTime m_creationDateTime;

    TestSetGenerationStatus m_testSetGenerationStatus;

    Aws::String m_testSetName;

    Aws::String m_description;

    TestSetStorageLocation m_storageLocation;

    TestSetGenerationDataSource m_generationDataSource;

    Aws::String m_roleArn;

    Aws::Map<Aws::String, Aws::String> m_testSetTags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
