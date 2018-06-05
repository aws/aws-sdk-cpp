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
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Shield
{
namespace Model
{
  class AWS_SHIELD_API DescribeDRTAccessResult
  {
  public:
    DescribeDRTAccessResult();
    DescribeDRTAccessResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeDRTAccessResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the role the DRT used to access your AWS
     * account.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role the DRT used to access your AWS
     * account.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the role the DRT used to access your AWS
     * account.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the role the DRT used to access your AWS
     * account.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the role the DRT used to access your AWS
     * account.</p>
     */
    inline DescribeDRTAccessResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the role the DRT used to access your AWS
     * account.</p>
     */
    inline DescribeDRTAccessResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the role the DRT used to access your AWS
     * account.</p>
     */
    inline DescribeDRTAccessResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The list of Amazon S3 buckets accessed by the DRT.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLogBucketList() const{ return m_logBucketList; }

    /**
     * <p>The list of Amazon S3 buckets accessed by the DRT.</p>
     */
    inline void SetLogBucketList(const Aws::Vector<Aws::String>& value) { m_logBucketList = value; }

    /**
     * <p>The list of Amazon S3 buckets accessed by the DRT.</p>
     */
    inline void SetLogBucketList(Aws::Vector<Aws::String>&& value) { m_logBucketList = std::move(value); }

    /**
     * <p>The list of Amazon S3 buckets accessed by the DRT.</p>
     */
    inline DescribeDRTAccessResult& WithLogBucketList(const Aws::Vector<Aws::String>& value) { SetLogBucketList(value); return *this;}

    /**
     * <p>The list of Amazon S3 buckets accessed by the DRT.</p>
     */
    inline DescribeDRTAccessResult& WithLogBucketList(Aws::Vector<Aws::String>&& value) { SetLogBucketList(std::move(value)); return *this;}

    /**
     * <p>The list of Amazon S3 buckets accessed by the DRT.</p>
     */
    inline DescribeDRTAccessResult& AddLogBucketList(const Aws::String& value) { m_logBucketList.push_back(value); return *this; }

    /**
     * <p>The list of Amazon S3 buckets accessed by the DRT.</p>
     */
    inline DescribeDRTAccessResult& AddLogBucketList(Aws::String&& value) { m_logBucketList.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of Amazon S3 buckets accessed by the DRT.</p>
     */
    inline DescribeDRTAccessResult& AddLogBucketList(const char* value) { m_logBucketList.push_back(value); return *this; }

  private:

    Aws::String m_roleArn;

    Aws::Vector<Aws::String> m_logBucketList;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
