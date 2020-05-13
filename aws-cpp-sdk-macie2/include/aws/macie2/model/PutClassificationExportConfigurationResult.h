/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_MACIE2_API PutClassificationExportConfigurationResult
  {
  public:
    PutClassificationExportConfigurationResult();
    PutClassificationExportConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    PutClassificationExportConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The location that data classification results are exported to, and the
     * encryption settings that are used when storing results in that location.</p>
     */
    inline const ClassificationExportConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>The location that data classification results are exported to, and the
     * encryption settings that are used when storing results in that location.</p>
     */
    inline void SetConfiguration(const ClassificationExportConfiguration& value) { m_configuration = value; }

    /**
     * <p>The location that data classification results are exported to, and the
     * encryption settings that are used when storing results in that location.</p>
     */
    inline void SetConfiguration(ClassificationExportConfiguration&& value) { m_configuration = std::move(value); }

    /**
     * <p>The location that data classification results are exported to, and the
     * encryption settings that are used when storing results in that location.</p>
     */
    inline PutClassificationExportConfigurationResult& WithConfiguration(const ClassificationExportConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>The location that data classification results are exported to, and the
     * encryption settings that are used when storing results in that location.</p>
     */
    inline PutClassificationExportConfigurationResult& WithConfiguration(ClassificationExportConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}

  private:

    ClassificationExportConfiguration m_configuration;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
