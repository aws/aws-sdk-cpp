/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/ImportResourceSpecification.h>
#include <aws/lexv2-models/model/MergeStrategy.h>
#include <aws/lexv2-models/model/ImportStatus.h>
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
  class StartImportResult
  {
  public:
    AWS_LEXMODELSV2_API StartImportResult();
    AWS_LEXMODELSV2_API StartImportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API StartImportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A unique identifier for the import.</p>
     */
    inline const Aws::String& GetImportId() const{ return m_importId; }
    inline void SetImportId(const Aws::String& value) { m_importId = value; }
    inline void SetImportId(Aws::String&& value) { m_importId = std::move(value); }
    inline void SetImportId(const char* value) { m_importId.assign(value); }
    inline StartImportResult& WithImportId(const Aws::String& value) { SetImportId(value); return *this;}
    inline StartImportResult& WithImportId(Aws::String&& value) { SetImportId(std::move(value)); return *this;}
    inline StartImportResult& WithImportId(const char* value) { SetImportId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters used when importing the resource.</p>
     */
    inline const ImportResourceSpecification& GetResourceSpecification() const{ return m_resourceSpecification; }
    inline void SetResourceSpecification(const ImportResourceSpecification& value) { m_resourceSpecification = value; }
    inline void SetResourceSpecification(ImportResourceSpecification&& value) { m_resourceSpecification = std::move(value); }
    inline StartImportResult& WithResourceSpecification(const ImportResourceSpecification& value) { SetResourceSpecification(value); return *this;}
    inline StartImportResult& WithResourceSpecification(ImportResourceSpecification&& value) { SetResourceSpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The strategy used when there was a name conflict between the imported
     * resource and an existing resource. When the merge strategy is
     * <code>FailOnConflict</code> existing resources are not overwritten and the
     * import fails.</p>
     */
    inline const MergeStrategy& GetMergeStrategy() const{ return m_mergeStrategy; }
    inline void SetMergeStrategy(const MergeStrategy& value) { m_mergeStrategy = value; }
    inline void SetMergeStrategy(MergeStrategy&& value) { m_mergeStrategy = std::move(value); }
    inline StartImportResult& WithMergeStrategy(const MergeStrategy& value) { SetMergeStrategy(value); return *this;}
    inline StartImportResult& WithMergeStrategy(MergeStrategy&& value) { SetMergeStrategy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the import. When the status is <code>Complete</code>
     * the bot, bot alias, or custom vocabulary is ready to use.</p>
     */
    inline const ImportStatus& GetImportStatus() const{ return m_importStatus; }
    inline void SetImportStatus(const ImportStatus& value) { m_importStatus = value; }
    inline void SetImportStatus(ImportStatus&& value) { m_importStatus = std::move(value); }
    inline StartImportResult& WithImportStatus(const ImportStatus& value) { SetImportStatus(value); return *this;}
    inline StartImportResult& WithImportStatus(ImportStatus&& value) { SetImportStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the import request was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTime = value; }
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTime = std::move(value); }
    inline StartImportResult& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}
    inline StartImportResult& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartImportResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartImportResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartImportResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_importId;

    ImportResourceSpecification m_resourceSpecification;

    MergeStrategy m_mergeStrategy;

    ImportStatus m_importStatus;

    Aws::Utils::DateTime m_creationDateTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
