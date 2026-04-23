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
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/CloudFormationStackRecord.h>
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
namespace Lightsail
{
namespace Model
{
  class AWS_LIGHTSAIL_API GetCloudFormationStackRecordsResult
  {
  public:
    GetCloudFormationStackRecordsResult();
    GetCloudFormationStackRecordsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetCloudFormationStackRecordsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of objects describing the CloudFormation stack records.</p>
     */
    inline const Aws::Vector<CloudFormationStackRecord>& GetCloudFormationStackRecords() const{ return m_cloudFormationStackRecords; }

    /**
     * <p>A list of objects describing the CloudFormation stack records.</p>
     */
    inline void SetCloudFormationStackRecords(const Aws::Vector<CloudFormationStackRecord>& value) { m_cloudFormationStackRecords = value; }

    /**
     * <p>A list of objects describing the CloudFormation stack records.</p>
     */
    inline void SetCloudFormationStackRecords(Aws::Vector<CloudFormationStackRecord>&& value) { m_cloudFormationStackRecords = std::move(value); }

    /**
     * <p>A list of objects describing the CloudFormation stack records.</p>
     */
    inline GetCloudFormationStackRecordsResult& WithCloudFormationStackRecords(const Aws::Vector<CloudFormationStackRecord>& value) { SetCloudFormationStackRecords(value); return *this;}

    /**
     * <p>A list of objects describing the CloudFormation stack records.</p>
     */
    inline GetCloudFormationStackRecordsResult& WithCloudFormationStackRecords(Aws::Vector<CloudFormationStackRecord>&& value) { SetCloudFormationStackRecords(std::move(value)); return *this;}

    /**
     * <p>A list of objects describing the CloudFormation stack records.</p>
     */
    inline GetCloudFormationStackRecordsResult& AddCloudFormationStackRecords(const CloudFormationStackRecord& value) { m_cloudFormationStackRecords.push_back(value); return *this; }

    /**
     * <p>A list of objects describing the CloudFormation stack records.</p>
     */
    inline GetCloudFormationStackRecordsResult& AddCloudFormationStackRecords(CloudFormationStackRecord&& value) { m_cloudFormationStackRecords.push_back(std::move(value)); return *this; }


    /**
     * <p>A token used for advancing to the next page of results of your get relational
     * database bundles request.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>A token used for advancing to the next page of results of your get relational
     * database bundles request.</p>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }

    /**
     * <p>A token used for advancing to the next page of results of your get relational
     * database bundles request.</p>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }

    /**
     * <p>A token used for advancing to the next page of results of your get relational
     * database bundles request.</p>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }

    /**
     * <p>A token used for advancing to the next page of results of your get relational
     * database bundles request.</p>
     */
    inline GetCloudFormationStackRecordsResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>A token used for advancing to the next page of results of your get relational
     * database bundles request.</p>
     */
    inline GetCloudFormationStackRecordsResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>A token used for advancing to the next page of results of your get relational
     * database bundles request.</p>
     */
    inline GetCloudFormationStackRecordsResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}

  private:

    Aws::Vector<CloudFormationStackRecord> m_cloudFormationStackRecords;

    Aws::String m_nextPageToken;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
