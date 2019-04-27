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
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/LayerVersionContentOutput.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lambda/model/Runtime.h>
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
namespace Lambda
{
namespace Model
{
  class AWS_LAMBDA_API GetLayerVersionByArnResult
  {
  public:
    GetLayerVersionByArnResult();
    GetLayerVersionByArnResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetLayerVersionByArnResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Details about the layer version.</p>
     */
    inline const LayerVersionContentOutput& GetContent() const{ return m_content; }

    /**
     * <p>Details about the layer version.</p>
     */
    inline void SetContent(const LayerVersionContentOutput& value) { m_content = value; }

    /**
     * <p>Details about the layer version.</p>
     */
    inline void SetContent(LayerVersionContentOutput&& value) { m_content = std::move(value); }

    /**
     * <p>Details about the layer version.</p>
     */
    inline GetLayerVersionByArnResult& WithContent(const LayerVersionContentOutput& value) { SetContent(value); return *this;}

    /**
     * <p>Details about the layer version.</p>
     */
    inline GetLayerVersionByArnResult& WithContent(LayerVersionContentOutput&& value) { SetContent(std::move(value)); return *this;}


    /**
     * <p>The ARN of the layer.</p>
     */
    inline const Aws::String& GetLayerArn() const{ return m_layerArn; }

    /**
     * <p>The ARN of the layer.</p>
     */
    inline void SetLayerArn(const Aws::String& value) { m_layerArn = value; }

    /**
     * <p>The ARN of the layer.</p>
     */
    inline void SetLayerArn(Aws::String&& value) { m_layerArn = std::move(value); }

    /**
     * <p>The ARN of the layer.</p>
     */
    inline void SetLayerArn(const char* value) { m_layerArn.assign(value); }

    /**
     * <p>The ARN of the layer.</p>
     */
    inline GetLayerVersionByArnResult& WithLayerArn(const Aws::String& value) { SetLayerArn(value); return *this;}

    /**
     * <p>The ARN of the layer.</p>
     */
    inline GetLayerVersionByArnResult& WithLayerArn(Aws::String&& value) { SetLayerArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the layer.</p>
     */
    inline GetLayerVersionByArnResult& WithLayerArn(const char* value) { SetLayerArn(value); return *this;}


    /**
     * <p>The ARN of the layer version.</p>
     */
    inline const Aws::String& GetLayerVersionArn() const{ return m_layerVersionArn; }

    /**
     * <p>The ARN of the layer version.</p>
     */
    inline void SetLayerVersionArn(const Aws::String& value) { m_layerVersionArn = value; }

    /**
     * <p>The ARN of the layer version.</p>
     */
    inline void SetLayerVersionArn(Aws::String&& value) { m_layerVersionArn = std::move(value); }

    /**
     * <p>The ARN of the layer version.</p>
     */
    inline void SetLayerVersionArn(const char* value) { m_layerVersionArn.assign(value); }

    /**
     * <p>The ARN of the layer version.</p>
     */
    inline GetLayerVersionByArnResult& WithLayerVersionArn(const Aws::String& value) { SetLayerVersionArn(value); return *this;}

    /**
     * <p>The ARN of the layer version.</p>
     */
    inline GetLayerVersionByArnResult& WithLayerVersionArn(Aws::String&& value) { SetLayerVersionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the layer version.</p>
     */
    inline GetLayerVersionByArnResult& WithLayerVersionArn(const char* value) { SetLayerVersionArn(value); return *this;}


    /**
     * <p>The description of the version.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the version.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the version.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the version.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the version.</p>
     */
    inline GetLayerVersionByArnResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the version.</p>
     */
    inline GetLayerVersionByArnResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the version.</p>
     */
    inline GetLayerVersionByArnResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The date that the layer version was created, in <a
     * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
     * (YYYY-MM-DDThh:mm:ss.sTZD).</p>
     */
    inline const Aws::String& GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The date that the layer version was created, in <a
     * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
     * (YYYY-MM-DDThh:mm:ss.sTZD).</p>
     */
    inline void SetCreatedDate(const Aws::String& value) { m_createdDate = value; }

    /**
     * <p>The date that the layer version was created, in <a
     * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
     * (YYYY-MM-DDThh:mm:ss.sTZD).</p>
     */
    inline void SetCreatedDate(Aws::String&& value) { m_createdDate = std::move(value); }

    /**
     * <p>The date that the layer version was created, in <a
     * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
     * (YYYY-MM-DDThh:mm:ss.sTZD).</p>
     */
    inline void SetCreatedDate(const char* value) { m_createdDate.assign(value); }

    /**
     * <p>The date that the layer version was created, in <a
     * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
     * (YYYY-MM-DDThh:mm:ss.sTZD).</p>
     */
    inline GetLayerVersionByArnResult& WithCreatedDate(const Aws::String& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The date that the layer version was created, in <a
     * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
     * (YYYY-MM-DDThh:mm:ss.sTZD).</p>
     */
    inline GetLayerVersionByArnResult& WithCreatedDate(Aws::String&& value) { SetCreatedDate(std::move(value)); return *this;}

    /**
     * <p>The date that the layer version was created, in <a
     * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
     * (YYYY-MM-DDThh:mm:ss.sTZD).</p>
     */
    inline GetLayerVersionByArnResult& WithCreatedDate(const char* value) { SetCreatedDate(value); return *this;}


    /**
     * <p>The version number.</p>
     */
    inline long long GetVersion() const{ return m_version; }

    /**
     * <p>The version number.</p>
     */
    inline void SetVersion(long long value) { m_version = value; }

    /**
     * <p>The version number.</p>
     */
    inline GetLayerVersionByArnResult& WithVersion(long long value) { SetVersion(value); return *this;}


    /**
     * <p>The layer's compatible runtimes.</p>
     */
    inline const Aws::Vector<Runtime>& GetCompatibleRuntimes() const{ return m_compatibleRuntimes; }

    /**
     * <p>The layer's compatible runtimes.</p>
     */
    inline void SetCompatibleRuntimes(const Aws::Vector<Runtime>& value) { m_compatibleRuntimes = value; }

    /**
     * <p>The layer's compatible runtimes.</p>
     */
    inline void SetCompatibleRuntimes(Aws::Vector<Runtime>&& value) { m_compatibleRuntimes = std::move(value); }

    /**
     * <p>The layer's compatible runtimes.</p>
     */
    inline GetLayerVersionByArnResult& WithCompatibleRuntimes(const Aws::Vector<Runtime>& value) { SetCompatibleRuntimes(value); return *this;}

    /**
     * <p>The layer's compatible runtimes.</p>
     */
    inline GetLayerVersionByArnResult& WithCompatibleRuntimes(Aws::Vector<Runtime>&& value) { SetCompatibleRuntimes(std::move(value)); return *this;}

    /**
     * <p>The layer's compatible runtimes.</p>
     */
    inline GetLayerVersionByArnResult& AddCompatibleRuntimes(const Runtime& value) { m_compatibleRuntimes.push_back(value); return *this; }

    /**
     * <p>The layer's compatible runtimes.</p>
     */
    inline GetLayerVersionByArnResult& AddCompatibleRuntimes(Runtime&& value) { m_compatibleRuntimes.push_back(std::move(value)); return *this; }


    /**
     * <p>The layer's software license.</p>
     */
    inline const Aws::String& GetLicenseInfo() const{ return m_licenseInfo; }

    /**
     * <p>The layer's software license.</p>
     */
    inline void SetLicenseInfo(const Aws::String& value) { m_licenseInfo = value; }

    /**
     * <p>The layer's software license.</p>
     */
    inline void SetLicenseInfo(Aws::String&& value) { m_licenseInfo = std::move(value); }

    /**
     * <p>The layer's software license.</p>
     */
    inline void SetLicenseInfo(const char* value) { m_licenseInfo.assign(value); }

    /**
     * <p>The layer's software license.</p>
     */
    inline GetLayerVersionByArnResult& WithLicenseInfo(const Aws::String& value) { SetLicenseInfo(value); return *this;}

    /**
     * <p>The layer's software license.</p>
     */
    inline GetLayerVersionByArnResult& WithLicenseInfo(Aws::String&& value) { SetLicenseInfo(std::move(value)); return *this;}

    /**
     * <p>The layer's software license.</p>
     */
    inline GetLayerVersionByArnResult& WithLicenseInfo(const char* value) { SetLicenseInfo(value); return *this;}

  private:

    LayerVersionContentOutput m_content;

    Aws::String m_layerArn;

    Aws::String m_layerVersionArn;

    Aws::String m_description;

    Aws::String m_createdDate;

    long long m_version;

    Aws::Vector<Runtime> m_compatibleRuntimes;

    Aws::String m_licenseInfo;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
