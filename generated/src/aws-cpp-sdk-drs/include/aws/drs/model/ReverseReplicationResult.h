/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
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
namespace drs
{
namespace Model
{
  class ReverseReplicationResult
  {
  public:
    AWS_DRS_API ReverseReplicationResult();
    AWS_DRS_API ReverseReplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DRS_API ReverseReplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>ARN of created SourceServer.</p>
     */
    inline const Aws::String& GetReversedDirectionSourceServerArn() const{ return m_reversedDirectionSourceServerArn; }

    /**
     * <p>ARN of created SourceServer.</p>
     */
    inline void SetReversedDirectionSourceServerArn(const Aws::String& value) { m_reversedDirectionSourceServerArn = value; }

    /**
     * <p>ARN of created SourceServer.</p>
     */
    inline void SetReversedDirectionSourceServerArn(Aws::String&& value) { m_reversedDirectionSourceServerArn = std::move(value); }

    /**
     * <p>ARN of created SourceServer.</p>
     */
    inline void SetReversedDirectionSourceServerArn(const char* value) { m_reversedDirectionSourceServerArn.assign(value); }

    /**
     * <p>ARN of created SourceServer.</p>
     */
    inline ReverseReplicationResult& WithReversedDirectionSourceServerArn(const Aws::String& value) { SetReversedDirectionSourceServerArn(value); return *this;}

    /**
     * <p>ARN of created SourceServer.</p>
     */
    inline ReverseReplicationResult& WithReversedDirectionSourceServerArn(Aws::String&& value) { SetReversedDirectionSourceServerArn(std::move(value)); return *this;}

    /**
     * <p>ARN of created SourceServer.</p>
     */
    inline ReverseReplicationResult& WithReversedDirectionSourceServerArn(const char* value) { SetReversedDirectionSourceServerArn(value); return *this;}

  private:

    Aws::String m_reversedDirectionSourceServerArn;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
