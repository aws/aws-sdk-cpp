/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/ClassificationExportConfiguration.h>
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
  class GetClassificationExportConfigurationResult
  {
  public:
    AWS_MACIE2_API GetClassificationExportConfigurationResult();
    AWS_MACIE2_API GetClassificationExportConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API GetClassificationExportConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The location where data classification results are stored, and the encryption
     * settings that are used when storing results in that location.</p>
     */
    inline const ClassificationExportConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>The location where data classification results are stored, and the encryption
     * settings that are used when storing results in that location.</p>
     */
    inline void SetConfiguration(const ClassificationExportConfiguration& value) { m_configuration = value; }

    /**
     * <p>The location where data classification results are stored, and the encryption
     * settings that are used when storing results in that location.</p>
     */
    inline void SetConfiguration(ClassificationExportConfiguration&& value) { m_configuration = std::move(value); }

    /**
     * <p>The location where data classification results are stored, and the encryption
     * settings that are used when storing results in that location.</p>
     */
    inline GetClassificationExportConfigurationResult& WithConfiguration(const ClassificationExportConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>The location where data classification results are stored, and the encryption
     * settings that are used when storing results in that location.</p>
     */
    inline GetClassificationExportConfigurationResult& WithConfiguration(ClassificationExportConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}

  private:

    ClassificationExportConfiguration m_configuration;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
