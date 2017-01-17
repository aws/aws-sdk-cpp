﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/states/SFN_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>

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
namespace SFN
{
namespace Model
{
  class AWS_SFN_API DescribeActivityResult
  {
  public:
    DescribeActivityResult();
    DescribeActivityResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeActivityResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the activity.</p>
     */
    inline const Aws::String& GetActivityArn() const{ return m_activityArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the activity.</p>
     */
    inline void SetActivityArn(const Aws::String& value) { m_activityArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the activity.</p>
     */
    inline void SetActivityArn(Aws::String&& value) { m_activityArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the activity.</p>
     */
    inline void SetActivityArn(const char* value) { m_activityArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the activity.</p>
     */
    inline DescribeActivityResult& WithActivityArn(const Aws::String& value) { SetActivityArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the activity.</p>
     */
    inline DescribeActivityResult& WithActivityArn(Aws::String&& value) { SetActivityArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the activity.</p>
     */
    inline DescribeActivityResult& WithActivityArn(const char* value) { SetActivityArn(value); return *this;}

    /**
     * <p>The name of the activity.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the activity.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the activity.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = value; }

    /**
     * <p>The name of the activity.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the activity.</p>
     */
    inline DescribeActivityResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the activity.</p>
     */
    inline DescribeActivityResult& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the activity.</p>
     */
    inline DescribeActivityResult& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The date the activity was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date the activity was created.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDate = value; }

    /**
     * <p>The date the activity was created.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDate = value; }

    /**
     * <p>The date the activity was created.</p>
     */
    inline DescribeActivityResult& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date the activity was created.</p>
     */
    inline DescribeActivityResult& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(value); return *this;}

  private:
    Aws::String m_activityArn;
    Aws::String m_name;
    Aws::Utils::DateTime m_creationDate;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
