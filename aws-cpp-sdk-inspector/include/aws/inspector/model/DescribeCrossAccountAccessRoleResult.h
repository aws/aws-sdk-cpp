/*
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
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
namespace Inspector
{
namespace Model
{
  class AWS_INSPECTOR_API DescribeCrossAccountAccessRoleResult
  {
  public:
    DescribeCrossAccountAccessRoleResult();
    DescribeCrossAccountAccessRoleResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeCrossAccountAccessRoleResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The ARN specifying the IAM role that Inspector uses to access your AWS
     * account.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN specifying the IAM role that Inspector uses to access your AWS
     * account.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p>The ARN specifying the IAM role that Inspector uses to access your AWS
     * account.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = value; }

    /**
     * <p>The ARN specifying the IAM role that Inspector uses to access your AWS
     * account.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p>The ARN specifying the IAM role that Inspector uses to access your AWS
     * account.</p>
     */
    inline DescribeCrossAccountAccessRoleResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN specifying the IAM role that Inspector uses to access your AWS
     * account.</p>
     */
    inline DescribeCrossAccountAccessRoleResult& WithRoleArn(Aws::String&& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN specifying the IAM role that Inspector uses to access your AWS
     * account.</p>
     */
    inline DescribeCrossAccountAccessRoleResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

    /**
     * <p>A Boolean value that specifies whether the IAM role has the necessary
     * policies attached to enable Inspector to access your AWS account.</p>
     */
    inline bool GetValid() const{ return m_valid; }

    /**
     * <p>A Boolean value that specifies whether the IAM role has the necessary
     * policies attached to enable Inspector to access your AWS account.</p>
     */
    inline void SetValid(bool value) { m_valid = value; }

    /**
     * <p>A Boolean value that specifies whether the IAM role has the necessary
     * policies attached to enable Inspector to access your AWS account.</p>
     */
    inline DescribeCrossAccountAccessRoleResult& WithValid(bool value) { SetValid(value); return *this;}

  private:
    Aws::String m_roleArn;
    bool m_valid;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
