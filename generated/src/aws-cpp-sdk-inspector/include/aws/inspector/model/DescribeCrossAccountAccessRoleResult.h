/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Inspector
{
namespace Model
{
  class DescribeCrossAccountAccessRoleResult
  {
  public:
    AWS_INSPECTOR_API DescribeCrossAccountAccessRoleResult();
    AWS_INSPECTOR_API DescribeCrossAccountAccessRoleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR_API DescribeCrossAccountAccessRoleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN that specifies the IAM role that Amazon Inspector uses to access your
     * AWS account.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN that specifies the IAM role that Amazon Inspector uses to access your
     * AWS account.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p>The ARN that specifies the IAM role that Amazon Inspector uses to access your
     * AWS account.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p>The ARN that specifies the IAM role that Amazon Inspector uses to access your
     * AWS account.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p>The ARN that specifies the IAM role that Amazon Inspector uses to access your
     * AWS account.</p>
     */
    inline DescribeCrossAccountAccessRoleResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN that specifies the IAM role that Amazon Inspector uses to access your
     * AWS account.</p>
     */
    inline DescribeCrossAccountAccessRoleResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN that specifies the IAM role that Amazon Inspector uses to access your
     * AWS account.</p>
     */
    inline DescribeCrossAccountAccessRoleResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>A Boolean value that specifies whether the IAM role has the necessary
     * policies attached to enable Amazon Inspector to access your AWS account.</p>
     */
    inline bool GetValid() const{ return m_valid; }

    /**
     * <p>A Boolean value that specifies whether the IAM role has the necessary
     * policies attached to enable Amazon Inspector to access your AWS account.</p>
     */
    inline void SetValid(bool value) { m_valid = value; }

    /**
     * <p>A Boolean value that specifies whether the IAM role has the necessary
     * policies attached to enable Amazon Inspector to access your AWS account.</p>
     */
    inline DescribeCrossAccountAccessRoleResult& WithValid(bool value) { SetValid(value); return *this;}


    /**
     * <p>The date when the cross-account access role was registered.</p>
     */
    inline const Aws::Utils::DateTime& GetRegisteredAt() const{ return m_registeredAt; }

    /**
     * <p>The date when the cross-account access role was registered.</p>
     */
    inline void SetRegisteredAt(const Aws::Utils::DateTime& value) { m_registeredAt = value; }

    /**
     * <p>The date when the cross-account access role was registered.</p>
     */
    inline void SetRegisteredAt(Aws::Utils::DateTime&& value) { m_registeredAt = std::move(value); }

    /**
     * <p>The date when the cross-account access role was registered.</p>
     */
    inline DescribeCrossAccountAccessRoleResult& WithRegisteredAt(const Aws::Utils::DateTime& value) { SetRegisteredAt(value); return *this;}

    /**
     * <p>The date when the cross-account access role was registered.</p>
     */
    inline DescribeCrossAccountAccessRoleResult& WithRegisteredAt(Aws::Utils::DateTime&& value) { SetRegisteredAt(std::move(value)); return *this;}

  private:

    Aws::String m_roleArn;

    bool m_valid;

    Aws::Utils::DateTime m_registeredAt;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
