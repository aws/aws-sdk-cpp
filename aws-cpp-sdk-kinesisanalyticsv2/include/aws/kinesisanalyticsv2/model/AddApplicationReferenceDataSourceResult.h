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
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kinesisanalyticsv2/model/ReferenceDataSourceDescription.h>
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
namespace KinesisAnalyticsV2
{
namespace Model
{
  class AWS_KINESISANALYTICSV2_API AddApplicationReferenceDataSourceResult
  {
  public:
    AddApplicationReferenceDataSourceResult();
    AddApplicationReferenceDataSourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AddApplicationReferenceDataSourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetApplicationARN() const{ return m_applicationARN; }

    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline void SetApplicationARN(const Aws::String& value) { m_applicationARN = value; }

    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline void SetApplicationARN(Aws::String&& value) { m_applicationARN = std::move(value); }

    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline void SetApplicationARN(const char* value) { m_applicationARN.assign(value); }

    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline AddApplicationReferenceDataSourceResult& WithApplicationARN(const Aws::String& value) { SetApplicationARN(value); return *this;}

    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline AddApplicationReferenceDataSourceResult& WithApplicationARN(Aws::String&& value) { SetApplicationARN(std::move(value)); return *this;}

    /**
     * <p>The application Amazon Resource Name (ARN).</p>
     */
    inline AddApplicationReferenceDataSourceResult& WithApplicationARN(const char* value) { SetApplicationARN(value); return *this;}


    /**
     * <p>The updated application version ID. Amazon Kinesis Data Analytics increments
     * this ID when the application is updated.</p>
     */
    inline long long GetApplicationVersionId() const{ return m_applicationVersionId; }

    /**
     * <p>The updated application version ID. Amazon Kinesis Data Analytics increments
     * this ID when the application is updated.</p>
     */
    inline void SetApplicationVersionId(long long value) { m_applicationVersionId = value; }

    /**
     * <p>The updated application version ID. Amazon Kinesis Data Analytics increments
     * this ID when the application is updated.</p>
     */
    inline AddApplicationReferenceDataSourceResult& WithApplicationVersionId(long long value) { SetApplicationVersionId(value); return *this;}


    /**
     * <p>Describes reference data sources configured for the application. </p>
     */
    inline const Aws::Vector<ReferenceDataSourceDescription>& GetReferenceDataSourceDescriptions() const{ return m_referenceDataSourceDescriptions; }

    /**
     * <p>Describes reference data sources configured for the application. </p>
     */
    inline void SetReferenceDataSourceDescriptions(const Aws::Vector<ReferenceDataSourceDescription>& value) { m_referenceDataSourceDescriptions = value; }

    /**
     * <p>Describes reference data sources configured for the application. </p>
     */
    inline void SetReferenceDataSourceDescriptions(Aws::Vector<ReferenceDataSourceDescription>&& value) { m_referenceDataSourceDescriptions = std::move(value); }

    /**
     * <p>Describes reference data sources configured for the application. </p>
     */
    inline AddApplicationReferenceDataSourceResult& WithReferenceDataSourceDescriptions(const Aws::Vector<ReferenceDataSourceDescription>& value) { SetReferenceDataSourceDescriptions(value); return *this;}

    /**
     * <p>Describes reference data sources configured for the application. </p>
     */
    inline AddApplicationReferenceDataSourceResult& WithReferenceDataSourceDescriptions(Aws::Vector<ReferenceDataSourceDescription>&& value) { SetReferenceDataSourceDescriptions(std::move(value)); return *this;}

    /**
     * <p>Describes reference data sources configured for the application. </p>
     */
    inline AddApplicationReferenceDataSourceResult& AddReferenceDataSourceDescriptions(const ReferenceDataSourceDescription& value) { m_referenceDataSourceDescriptions.push_back(value); return *this; }

    /**
     * <p>Describes reference data sources configured for the application. </p>
     */
    inline AddApplicationReferenceDataSourceResult& AddReferenceDataSourceDescriptions(ReferenceDataSourceDescription&& value) { m_referenceDataSourceDescriptions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_applicationARN;

    long long m_applicationVersionId;

    Aws::Vector<ReferenceDataSourceDescription> m_referenceDataSourceDescriptions;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
