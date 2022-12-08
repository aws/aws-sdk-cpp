/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>

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
namespace RAM
{
namespace Model
{
  class PromoteResourceShareCreatedFromPolicyResult
  {
  public:
    AWS_RAM_API PromoteResourceShareCreatedFromPolicyResult();
    AWS_RAM_API PromoteResourceShareCreatedFromPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RAM_API PromoteResourceShareCreatedFromPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A return value of <code>true</code> indicates that the request succeeded. A
     * value of <code>false</code> indicates that the request failed.</p>
     */
    inline bool GetReturnValue() const{ return m_returnValue; }

    /**
     * <p>A return value of <code>true</code> indicates that the request succeeded. A
     * value of <code>false</code> indicates that the request failed.</p>
     */
    inline void SetReturnValue(bool value) { m_returnValue = value; }

    /**
     * <p>A return value of <code>true</code> indicates that the request succeeded. A
     * value of <code>false</code> indicates that the request failed.</p>
     */
    inline PromoteResourceShareCreatedFromPolicyResult& WithReturnValue(bool value) { SetReturnValue(value); return *this;}

  private:

    bool m_returnValue;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
