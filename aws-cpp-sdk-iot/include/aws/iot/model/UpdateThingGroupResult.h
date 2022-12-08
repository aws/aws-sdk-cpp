/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>

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
namespace IoT
{
namespace Model
{
  class UpdateThingGroupResult
  {
  public:
    AWS_IOT_API UpdateThingGroupResult();
    AWS_IOT_API UpdateThingGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API UpdateThingGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The version of the updated thing group.</p>
     */
    inline long long GetVersion() const{ return m_version; }

    /**
     * <p>The version of the updated thing group.</p>
     */
    inline void SetVersion(long long value) { m_version = value; }

    /**
     * <p>The version of the updated thing group.</p>
     */
    inline UpdateThingGroupResult& WithVersion(long long value) { SetVersion(value); return *this;}

  private:

    long long m_version;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
