/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/ClassificationExportConfiguration.h>
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
namespace Macie2
{
namespace Model
{
  class PutClassificationExportConfigurationResult
  {
  public:
    AWS_MACIE2_API PutClassificationExportConfigurationResult();
    AWS_MACIE2_API PutClassificationExportConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API PutClassificationExportConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The location where the data classification results are stored, and the
     * encryption settings that are used when storing results in that location.</p>
     */
    inline const ClassificationExportConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>The location where the data classification results are stored, and the
     * encryption settings that are used when storing results in that location.</p>
     */
    inline void SetConfiguration(const ClassificationExportConfiguration& value) { m_configuration = value; }

    /**
     * <p>The location where the data classification results are stored, and the
     * encryption settings that are used when storing results in that location.</p>
     */
    inline void SetConfiguration(ClassificationExportConfiguration&& value) { m_configuration = std::move(value); }

    /**
     * <p>The location where the data classification results are stored, and the
     * encryption settings that are used when storing results in that location.</p>
     */
    inline PutClassificationExportConfigurationResult& WithConfiguration(const ClassificationExportConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>The location where the data classification results are stored, and the
     * encryption settings that are used when storing results in that location.</p>
     */
    inline PutClassificationExportConfigurationResult& WithConfiguration(ClassificationExportConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline PutClassificationExportConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline PutClassificationExportConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline PutClassificationExportConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ClassificationExportConfiguration m_configuration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
